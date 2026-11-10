//! The two side channels the Windows tool uses to *ask the monitor* things: DDC/CI VCPs, and the
//! ISP mailbox register `0xCA` on the bridge slave.
//!
//! Everything here is the observed shape of `WinIspPlugIn.dll`'s info path (`re2/JOURNAL.md`
//! step 14). Two transports, one purpose — the tool never hard-codes where a model keeps its key,
//! flag, signature or version: it asks.
//!
//! * **DDC/CI** — slave `0x6E`, write register (VCP) `0x71`, read register `0x51`. The tool's
//!   `bCheckCHK` verifies the response's own checksum: an 8-bit XOR seeded with `0x50` (the DDC/CI
//!   transmit opcode) over the payload, compared against the byte that follows it.
//! * **The `0xCA` mailbox** — slave `0x6A`, register `0xCA`: write one sub-command byte, read five
//!   back. Byte 0 echoes `0xCA`; bytes 1..4 are a little-endian u32. The reply is an address, a
//!   bank, or a size code, depending on the sub-command.
//!
//! The addresses come back in *flash* terms, so a dump of the key needs both halves: ask where it
//! lives, then read it through the ISP bridge ([`crate::isp::Isp::dump_flash`]).

use crate::comm::{IComm, Result};

/// The ISP bridge slave as the plugin writes it — the **8-bit** form. Linux's i2c-dev takes 7-bit,
/// so the address on the wire is [`SLAVE_ISP`] >> 1. Measured on the X28: the bridge answers at
/// 7-bit `0x4A`, which is the plugin's built-in `ucSpecifiedSlave` = `0x94` shifted right one.
pub const SLAVE_ISP: u8 = 0x6A;
/// The DDC/CI control slave, 8-bit form: 7-bit `0x37`.
pub const SLAVE_DDCCI: u8 = 0x6E;
/// [`SLAVE_ISP`] in the 7-bit form i2c-dev wants.
pub const ISP: u8 = SLAVE_ISP >> 1;
/// [`SLAVE_DDCCI`] in the 7-bit form i2c-dev wants.
pub const DDCCI: u8 = SLAVE_DDCCI >> 1;
/// The VCP the tool writes commands into.
pub const VCP_WRITE: u8 = 0x71;
/// The VCP the tool reads replies from.
pub const VCP_READ: u8 = 0x51;
/// The mailbox register.
pub const REG_MAILBOX: u8 = 0xCA;
/// The version page's write VCP (`{0xF5, 0x9C, index}`).
pub const VCP_VERSION_ADDR: u8 = 0x84;
/// The version page's trigger VCP (`{0xF5}`).
pub const VCP_VERSION_GO: u8 = 0x82;
/// The DDC/CI checksum seed: the transmit opcode.
pub const CHK_SEED: u8 = 0x50;

/// Sub-commands of the `0xCA` mailbox (observed in `FUN_10019640` / `FUN_100226e0`).
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
#[repr(u8)]
pub enum Ask {
    /// Bytes 1..2 = the u16 start-bank address, byte 3 = the FW size code.
    StartBank = 1,
    /// Bytes 1..4 = the key address. Asked only in the signature modes that carry a key.
    KeyAddr = 3,
    /// Bytes 1..4 = the user-flag address.
    FlagAddr = 4,
    /// Bytes 1..4 = the signature address; the `'ZSTR'` record is read there next.
    SigAddr = 5,
    /// Bytes 1..4 = the flag/key start (the TypeC-USB arm asks with this one).
    FlagStart = 8,
}

/// The payload length a response header declares: `(buf[1] & 0x7F) + 2` (`FUN_10024390`).
pub fn payload_len(buf: &[u8]) -> Option<usize> {
    Some((buf.get(1)? & 0x7F) as usize + 2)
}

/// The checksum the response *should* carry: XOR from `0x50` over `buf[0..L]`, where `L` is the
/// declared payload length. Byte 0 is the echo of the slave address, which is why the seed is the
/// transmit opcode (`0x50` = 0x28 << 1).
pub fn chk(buf: &[u8]) -> Option<u8> {
    let len = payload_len(buf)?;
    if buf.len() <= len {
        return None; // the checksum byte at buf[L] is not in the buffer
    }
    Some(buf[..len].iter().fold(CHK_SEED, |acc, &b| acc ^ b))
}

/// True when the response carries its own checksum correctly: `buf[L]` equals the XOR of `buf[0..L]`.
pub fn chk_ok(buf: &[u8]) -> bool {
    chk(buf).is_some_and(|want| buf[payload_len(buf).unwrap()] == want)
}

/// The `0xCA` mailbox on the ISP bridge slave.
pub struct Mailbox<'a> {
    comm: &'a dyn IComm,
    slave: u8,
    /// ms to sit between the command and the read (`ulTimeAfterCommand`, default 200).
    settle: u64,
    /// tries per question (`ulCommandRetryCount`, default 10).
    retries: u32,
}

impl<'a> Mailbox<'a> {
    pub fn new(comm: &'a dyn IComm) -> Self {
        Mailbox {
            comm,
            slave: ISP,
            settle: 200,
            retries: 10,
        }
    }

    /// At the address the probe settled on — a DP link exposes one endpoint, not two.
    pub fn at(comm: &'a dyn IComm, slave: u8) -> Self {
        Mailbox {
            comm,
            slave,
            settle: 200,
            retries: 10,
        }
    }

    pub fn with_timing(mut self, settle_ms: u64, retries: u32) -> Self {
        self.settle = settle_ms;
        self.retries = retries.max(1);
        self
    }

    /// Write one sub-command, read five bytes, require the `0xCA` echo.
    fn ask(&self, sub: Ask) -> Result<[u8; 5]> {
        let mut last = crate::comm::CommError::ReadFailed;
        for _ in 0..self.retries {
            self.comm.write_byte(self.slave, REG_MAILBOX, sub as u8)?;
            std::thread::sleep(std::time::Duration::from_millis(self.settle));
            let mut reply = [0u8; 5];
            self.comm
                .read_segment(self.slave, REG_MAILBOX, &mut reply)?;
            // Byte 0 echoes the register; a reply that does not is a bus artifact, not an answer.
            if reply[0] == REG_MAILBOX {
                return Ok(reply);
            }
            last = crate::comm::CommError::ReadFailed;
        }
        Err(last)
    }

    /// The u32 answer (bytes 1..4, little-endian) to a sub-command that returns an address.
    pub fn ask_u32(&self, sub: Ask) -> Result<u32> {
        let b = self.ask(sub)?;
        Ok(u32::from_le_bytes([b[1], b[2], b[3], b[4]]))
    }

    /// Sub-command 1: the start-bank address (u16) and the FW size code the image must match.
    pub fn start_bank(&self) -> Result<(u16, u8)> {
        let b = self.ask(Ask::StartBank)?;
        Ok((u16::from_le_bytes([b[1], b[2]]), b[3]))
    }

    pub fn key_addr(&self) -> Result<u32> {
        self.ask_u32(Ask::KeyAddr)
    }

    pub fn flag_addr(&self) -> Result<u32> {
        self.ask_u32(Ask::FlagAddr)
    }

    pub fn sig_addr(&self) -> Result<u32> {
        self.ask_u32(Ask::SigAddr)
    }
}

/// The DDC/CI arm of the info path: everything here is a VCP write, a settle, and a VCP read.
pub struct Ddcci<'a> {
    comm: &'a dyn IComm,
    slave: u8,
    /// ms after a write (`ulDelayTimeAfterDdcciWrite`, default 0; the start-bank path uses 200).
    settle: u64,
}

impl<'a> Ddcci<'a> {
    pub fn new(comm: &'a dyn IComm) -> Self {
        Ddcci {
            comm,
            slave: DDCCI,
            settle: 200,
        }
    }

    /// At the address the ISP path is using. Measured on the MAG 341CQP X28: the scaler exposes
    /// ONE endpoint on the DP link (7-bit `0x49` = 8-bit `0x92`) that answers both the ISP
    /// register file and the VCP reads, so this arm should follow the probe, not a constant.
    pub fn at(comm: &'a dyn IComm, slave: u8) -> Self {
        Ddcci {
            comm,
            slave,
            settle: 200,
        }
    }

    /// The card's `ulDelayTimeAfterDdcciWrite`, in ms.
    pub fn with_settle(mut self, ms: u64) -> Self {
        self.settle = ms;
        self
    }

    fn xfer(&self, write: &[u8], vcp_read: u8, len: usize) -> Result<Vec<u8>> {
        self.comm.ddcci_write(self.slave, VCP_WRITE, write)?;
        std::thread::sleep(std::time::Duration::from_millis(self.settle));
        self.comm.ddcci_read(self.slave, vcp_read, len)
    }

    /// `FUN_10022c30` — GetFwInfoInDDCCIMode: `{0x77, 0xC9, 0x09}` out, 14 bytes back on `0x51`.
    ///
    /// `0x77` is the DDC/CI source byte and rides in the payload: the slot call is
    /// `DDCCIWrite(slave, 0x71, 3, {0x77, 0xC9, 0x09})`, so four bytes hit the wire.
    ///
    /// The reply's byte 2 must echo `0xC9`; byte 3 is a count and `count + 1` bytes of payload
    /// follow at byte 4. The payload is the packed version/identity block the UI prints.
    pub fn fw_info(&self) -> Result<Vec<u8>> {
        let r = self.xfer(&[0x77, 0xC9, 0x09], VCP_READ, 0xE)?;
        if r[2] != 0xC9 {
            return Err(crate::comm::CommError::BadLength);
        }
        let n = r[3] as usize + 1;
        Ok(r[4..4 + n.min(r.len() - 4)].to_vec())
    }

    /// `FUN_10018550` — Get Program Start Bank: `{0x77, 0x01}` out, 16 bytes back on `0x71`;
    /// byte 3 is the bank the programming starts at.
    pub fn program_start_bank(&self) -> Result<u8> {
        self.comm
            .ddcci_write(self.slave, VCP_WRITE, &[0x77, 0x01])?;
        std::thread::sleep(std::time::Duration::from_millis(self.settle));
        let r = self.comm.ddcci_read(self.slave, VCP_WRITE, 0x10)?;
        Ok(r[3])
    }

    /// `FUN_10037bf0` — the One-Bank Boot user-defined version, paged one string per index.
    ///
    /// Each page: address the slot with `{0xF5, 0x9C, index}` on VCP `0x84`, trigger with `{0xF5}`
    /// on VCP `0x82`, read 11 bytes on `0x51`. A valid page answers `'n'` (0x6E) and `0xF5`, and
    /// the text starts at byte 6 and ends at a NUL. The tool walks indexes 0..0xFF and concatenates
    /// until a page comes up empty, then writes the result to `ISPVersion.txt`.
    pub fn user_version(&self) -> Result<String> {
        let mut out = String::new();
        for index in 0..=0xFFu8 {
            self.comm
                .ddcci_write(self.slave, VCP_VERSION_ADDR, &[0xF5, 0x9C, index])?;
            self.comm.ddcci_write(self.slave, VCP_VERSION_GO, &[0xF5])?;
            std::thread::sleep(std::time::Duration::from_millis(self.settle));
            let r = self.comm.ddcci_read(self.slave, VCP_READ, 0xB)?;
            if r[0] != b'n' || r[1] != 0xF5 {
                if index == 0 {
                    return Err(crate::comm::CommError::ReadFailed);
                }
                break;
            }
            let page: Vec<u8> = r[6..].iter().copied().take_while(|&c| c != 0).collect();
            if page.is_empty() {
                break;
            }
            out.push_str(&String::from_utf8_lossy(&page));
        }
        Ok(out)
    }

    /// `FUN_100233d0` — the Project ID: 13 bytes out on `0x6A/0xCB`, and the device echoes the
    /// count back. `ProjectIDCountSetting` defaults to 12, so the block is a count byte + 12.
    pub fn project_id(&self, comm: &dyn IComm, n: u8) -> Result<Vec<u8>> {
        // The count byte leads a 13-byte block; the device answers with the count it holds.
        let mut req = vec![0u8; 13];
        req[0] = n;
        comm.write_segment(ISP, 0xCB, &req)?;
        let mut ack = vec![0u8; 3];
        comm.read_segment(ISP, 0x01, &mut ack)?;
        let mut body = vec![0u8; n as usize];
        comm.read_segment(ISP, 0xCB, &mut body)?;
        Ok(body)
    }
}

/// `FUN_10022ea0` — GetFwInfoInDebugMode: one byte `0x09` into the mailbox on `slave`
/// (`0x6A` in the plugin's own terms; on a DP link this is the address the probe settled on),
/// 11 bytes back on register `0x01`. Byte 0 must echo `0xCA`, byte 1 is a length under 11, and the payload starts
/// at byte 1. This is the arm used when the panel is in debug/ISP mode rather than running.
pub fn fw_info_debug(comm: &dyn IComm, slave: u8, settle_ms: u64) -> Result<Vec<u8>> {
    // `slave` is the 7-bit address the probe settled on.
    comm.write_byte(slave, REG_MAILBOX, 0x09)?;
    std::thread::sleep(std::time::Duration::from_millis(settle_ms));
    let r = comm.ddcci_read(slave, 0x01, 0xB)?;
    if r[0] != REG_MAILBOX || r[1] == 0xEE || r[1] >= 0xB {
        return Err(crate::comm::CommError::ReadFailed);
    }
    let n = r[1] as usize + 1;
    Ok(r[1..1 + n.min(r.len() - 1)].to_vec())
}

/// The flag address the tool derives when the panel reports a start bank rather than an address
/// (`FUN_10018550`): the flag block sits one sector below the end of the bank before the program
/// area. `base` is the card's bank offset (`DAT_1024a2d0`).
pub fn flag_start_addr(base: u32, start_bank: u32) -> u32 {
    (base + start_bank) * 0x1_0000 - 0x1000
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::comm::{CommError, IComm};
    use std::cell::RefCell;
    use std::collections::{BTreeMap, VecDeque};
    use std::io::ErrorKind;

    /// Records VCP traffic and answers from an armed table keyed by (slave, vcp).
    ///
    /// `queue` is for the paged reads: each read of `(slave, vcp)` takes the front page and pops
    /// it, which is how the version loop sees an end.
    #[derive(Default, Debug)]
    struct Wire {
        log: RefCell<Vec<String>>,
        replies: RefCell<BTreeMap<(u8, u8), Vec<u8>>>,
        queue: RefCell<VecDeque<Vec<u8>>>,
    }

    impl Wire {
        fn arm(&self, slave: u8, vcp: u8, data: &[u8]) {
            self.replies
                .borrow_mut()
                .insert((slave, vcp), data.to_vec());
        }
        fn arm_pages(&self, pages: &[&[u8]]) {
            for p in pages {
                self.queue.borrow_mut().push_back(p.to_vec());
            }
        }
        fn taken(&self) -> Vec<String> {
            self.log.borrow().clone()
        }
    }

    impl IComm for Wire {
        fn write_reg(&self, r: u8, v: u8) -> Result<()> {
            self.log.borrow_mut().push(format!("REG {r:02x}={v:02x}"));
            Ok(())
        }
        fn read_reg(&self, _r: u8) -> Result<u8> {
            Ok(0)
        }
        fn burst_write(&self, _r: u8, _d: &[u8]) -> Result<()> {
            Ok(())
        }
        fn write_segment(&self, s: u8, r: u8, d: &[u8]) -> Result<()> {
            self.log
                .borrow_mut()
                .push(format!("WS {s:02x}.{r:02x}={}", d.len()));
            Ok(())
        }
        fn read_segment(&self, s: u8, r: u8, b: &mut [u8]) -> Result<()> {
            let have = self
                .replies
                .borrow()
                .get(&(s, r))
                .cloned()
                .unwrap_or_default();
            for (i, x) in b.iter_mut().enumerate() {
                *x = have.get(i).copied().unwrap_or(0);
            }
            Ok(())
        }
        fn read_byte(&self, _s: u8, _r: u8) -> Result<u8> {
            Ok(0)
        }
        fn write_byte(&self, s: u8, r: u8, v: u8) -> Result<()> {
            self.log
                .borrow_mut()
                .push(format!("WB {s:02x}.{r:02x}={v:02x}"));
            Ok(())
        }
        fn ddcci_write(&self, s: u8, vcp: u8, d: &[u8]) -> Result<()> {
            self.log
                .borrow_mut()
                .push(format!("DW {s:02x}.{vcp:02x}={}", hex(d)));
            Ok(())
        }
        fn ddcci_read(&self, s: u8, vcp: u8, len: usize) -> Result<Vec<u8>> {
            let have = match self.queue.borrow_mut().pop_front() {
                Some(page) => page,
                None => self
                    .replies
                    .borrow()
                    .get(&(s, vcp))
                    .cloned()
                    .unwrap_or_default(),
            };
            let mut out = vec![0u8; len];
            for (i, x) in out.iter_mut().enumerate() {
                *x = have.get(i).copied().unwrap_or(0);
            }
            self.log
                .borrow_mut()
                .push(format!("DR {s:02x}.{vcp:02x}[{len}]"));
            Ok(out)
        }
        fn set_isp_slave(&self, _s: u8) -> Result<()> {
            Ok(())
        }
        fn set_continuous_isp_slave(&self, _s: u8) -> Result<()> {
            Ok(())
        }
        fn set_speed(&self, _k: u16) -> Result<()> {
            Ok(())
        }
        fn enter_isp_mode(&self, _retries: u32) -> Result<()> {
            Ok(())
        }
        fn transfer(&self, parts: &mut [(u8, bool, &mut [u8])]) -> Result<()> {
            for (_, read, buf) in parts.iter_mut() {
                if *read {
                    buf.fill(0);
                }
            }
            Ok(())
        }
        fn write_scaler_reg(&self, _reg: u16, _value: u8) -> Result<()> {
            Ok(())
        }
        fn read_scaler_reg(&self, _reg: u16) -> Result<u8> {
            Ok(0)
        }
        fn reset_firmware(&self) -> Result<()> {
            Ok(())
        }
        fn scaler_run(&self) -> Result<()> {
            Ok(())
        }
        fn scaler_stop(&self) -> Result<()> {
            Ok(())
        }
        fn smbus_vd_cmd_enable(&self) -> Result<()> {
            Ok(())
        }
        fn initialize(&self) -> Result<()> {
            Ok(())
        }
        fn uninitialize(&self) -> Result<()> {
            Ok(())
        }
        fn write_32bit_reg(&self, _a: u32, _v: u32) -> Result<()> {
            Ok(())
        }
        fn read_32bit_reg(&self, _a: u32) -> Result<u32> {
            Err(CommError::Io(ErrorKind::Unsupported))
        }
        fn write_32bit_reg_1byte(&self, _a: u32, _v: u8) -> Result<()> {
            Ok(())
        }
        fn read_mcu_reg(&self, _r: u32) -> Result<u8> {
            Ok(0)
        }
        fn write_mcu_reg_bit(&self, _r: u32, _b: u8, _v: u8) -> Result<()> {
            Ok(())
        }
    }

    fn hex(b: &[u8]) -> String {
        b.iter().map(|x| format!("{x:02x}")).collect()
    }

    #[test]
    fn the_ddcci_checksum_is_an_xor_seeded_with_the_transmit_opcode() {
        // buf[1] = 1 declares L = (1 & 0x7f) + 2 = 3, so the checksum rides at buf[3].
        assert_eq!(payload_len(&[0x6E, 0x01, 0xAA, 0x00]), Some(3));
        let mut buf = vec![0x6E, 0x01, 0xAA, 0x00];
        buf[3] = chk(&buf).expect("a length the buffer can carry");
        assert_eq!(buf[3], 0x50 ^ 0x6E ^ 0x01 ^ 0xAA);
        assert!(chk_ok(&buf), "the byte it carries is the one it computes");
        buf[3] ^= 0x01;
        assert!(!chk_ok(&buf), "one bit off fails");
        // The length field is 7 bits: the high bit is the DDC/CI "ready" flag, not part of L.
        assert_eq!(payload_len(&[0x6E, 0x81, 0, 0, 0]), Some(3));
    }

    #[test]
    fn a_short_response_has_no_checksum_to_check() {
        assert!(!chk_ok(&[0x6E]));
        assert!(!chk_ok(&[]));
    }

    #[test]
    fn fw_info_writes_c9_then_reads_the_counted_payload() {
        let wire = Wire::default();
        // resp[2] must echo 0xC9; count at [3]; payload from [4].
        let resp = vec![
            0x6E, 0x0C, 0xC9, 0x04, b'1', b'.', b'2', b'.', b'3', b'.', b'4', 0, 0, 0,
        ];
        wire.arm(DDCCI, VCP_READ, &resp);
        let d = Ddcci::new(&wire).with_settle(0);
        let got = d.fw_info().expect("fw info");
        assert_eq!(got, b"1.2.3", "count 4 means 4+1 bytes of payload");
        let log = wire.taken();
        assert_eq!(log[0], "DW 37.71=77c909", "source byte, then 0xC9 0x09");
        assert_eq!(log[1], "DR 37.51[14]", "14 bytes come back on 0x51");
    }

    #[test]
    fn fw_info_rejects_a_reply_that_does_not_echo() {
        let wire = Wire::default();
        wire.arm(DDCCI, VCP_READ, &[0, 0, 0xC8, 0, 0, 0]);
        let d = Ddcci::new(&wire).with_settle(0);
        assert!(d.fw_info().is_err());
    }

    #[test]
    fn the_program_start_bank_is_byte_three_of_the_reply() {
        let wire = Wire::default();
        wire.arm(DDCCI, VCP_WRITE, &[0x6E, 0x0E, 0x00, 0x13, 0, 0]);
        let d = Ddcci::new(&wire).with_settle(0);
        assert_eq!(d.program_start_bank().unwrap(), 0x13);
        assert_eq!(
            wire.taken()[0],
            "DW 37.71=7701",
            "the source byte rides in the payload"
        );
    }

    #[test]
    fn version_pages_concatenate_until_an_empty_one() {
        let wire = Wire::default();
        // Two pages of text, then an empty one to end the walk. The string starts at byte 6.
        wire.arm_pages(&[
            &[b'n', 0xF5, 0, 0, 0, 0, b'F', b'W', b'.', 0, 0],
            &[b'n', 0xF5, 0, 0, 0, 0, b'0', b'1', b'2', 0, 0],
            &[b'n', 0xF5, 0, 0, 0, 0, 0, 0, 0, 0, 0],
        ]);
        let d = Ddcci::new(&wire).with_settle(0);
        assert_eq!(d.user_version().unwrap(), "FW.012");
        let log = wire.taken();
        assert_eq!(
            log[0], "DW 37.84=f59c00",
            "the page index rides in the address"
        );
        assert_eq!(log[1], "DW 37.82=f5", "then the trigger");
        assert!(
            log.contains(&"DW 37.84=f59c01".to_string()),
            "page 1 is asked for"
        );
    }

    #[test]
    fn the_mailbox_asks_with_one_byte_and_reads_the_echo() {
        let wire = Wire::default();
        wire.arm(ISP, REG_MAILBOX, &[0xCA, 0xFE, 0x8F, 0x04, 0x00]);
        let m = Mailbox::new(&wire).with_timing(0, 1);
        assert_eq!(m.flag_addr().unwrap(), 0x0004_8FFE);
        assert_eq!(
            wire.taken()[0],
            "WB 35.ca=04",
            "sub-command 4 asks for the flag address"
        );
    }

    #[test]
    fn start_bank_splits_the_bank_and_the_size_code() {
        let wire = Wire::default();
        wire.arm(ISP, REG_MAILBOX, &[0xCA, 0x13, 0x00, 0x1E, 0x00]);
        let m = Mailbox::new(&wire).with_timing(0, 1);
        let (bank, size) = m.start_bank().unwrap();
        assert_eq!(bank, 0x13, "bytes 1..2 are a little-endian u16");
        assert_eq!(
            size, 0x1E,
            "byte 3 is the FW size code the image must match"
        );
    }

    #[test]
    fn a_missing_echo_is_retried_then_fails() {
        let wire = Wire::default();
        wire.arm(ISP, REG_MAILBOX, &[0xCB, 1, 2, 3, 4]);
        let m = Mailbox::new(&wire).with_timing(0, 3);
        assert!(m.sig_addr().is_err());
        assert_eq!(
            wire.taken().iter().filter(|l| l.starts_with("WB ")).count(),
            3,
            "three tries"
        );
    }

    #[test]
    fn the_flag_block_sits_one_sector_below_the_bank_above_the_program_area() {
        // (base + startBank) * 0x10000 - 0x1000, observed in FUN_10018550.
        assert_eq!(flag_start_addr(0, 0x14), 0x13_F000);
        assert_eq!(flag_start_addr(1, 0), 0x0F_000);
    }
}
