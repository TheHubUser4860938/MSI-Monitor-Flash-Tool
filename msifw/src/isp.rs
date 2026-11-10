//! The ISP engine: the flash flow `WinIspPlugIn.dll` runs, step for step.
//!
//! Every step is a decompiled function in the plugin; the order is the order in `FUN_10034120`, the
//! `DoIsp` body, and the per-bank loop is `FUN_1001e4c0` → erase → `FUN_1003e2a0`. The register
//! numbers, opcodes and delays below are the constants those functions write — each is cited in
//! `re2/findings-isp-steps.md` and `re2/findings-banks.md`.
//!
//! The scaler exposes the flash through an **SPI-bridge register file**: put the opcode in `0x61`,
//! the 24-bit address in `0x64/0x65/0x66`, arm the length in `0x71`, stream data through the `0x70`
//! FIFO, then pull the trigger in `0x60` and poll. That is the model this module speaks.

use crate::comm::{CommError, IComm, Result};
use crate::flashdat::{FlashDat, FlashPart};
use crate::model::Settings;

// ---- bridge registers (observed in FUN_1001caf0, FUN_1003e610, FUN_1003e9c0, FUN_1003d760) ----

/// Command trigger. Written as a pair: the low arm then the start arm.
pub const REG_TRIGGER: u8 = 0x60;
/// The SPI opcode of the command being assembled.
pub const REG_OPCODE: u8 = 0x61;
/// Address, most significant byte first: `0x64` = bits 23:16, `0x65` = 15:8, `0x66` = 7:0.
pub const REG_ADDR: [u8; 3] = [0x64, 0x65, 0x66];
/// The bytes a read command clocks back in.
pub const REG_ID: [u8; 3] = [0x67, 0x68, 0x69];
/// Transfer mode (the program path writes 2).
pub const REG_MODE: u8 = 0x6d;
/// Issue register: a masked write of `0x20` starts a page program, of `4` starts a CRC.
pub const REG_ISSUE: u8 = 0x6f;
/// The data FIFO, and the transfer length minus one.
pub const REG_FIFO: u8 = 0x70;
pub const REG_LEN: u8 = 0x71;
/// CRC range end address, and the CRC result byte.
pub const REG_CRC_END: [u8; 3] = [0x72, 0x73, 0x74];
pub const REG_CRC_RESULT: u8 = 0x75;
/// The command status byte, read back after each command (`FUN_1001c530`).
pub const REG_STATUS: u8 = 0x62;
/// The transfer-ready register the poll in front of and behind a page program tests with
/// mask `0x10` (`FUN_1001c4c0(0x10, 20000)` in `FUN_1003d760`).
///
/// The plugin passes the mask and the timeout; the register index rides in a context Ghidra did
/// not materialise, so this index is **inferred** — it is not one of the registers the program
/// path writes, which is what the observed sequence requires.
pub const REG_TRANSFER: u8 = 0x76;
/// The hardware config register; bit 3 selects 4-byte addressing.
pub const REG_HW_CONFIG: u8 = 0x77;
pub const HW_CONFIG_4BYTE_BIT: u8 = 3;

/// Trigger values, per address width (observed: 0xA0/0xA1 in 4-byte mode, 0xB8/0xB9 in 3-byte).
pub const TRIGGER_RDID: [u8; 2] = [0x46, 0x47];
pub const TRIGGER_4BYTE: [u8; 2] = [0xA0, 0xA1];
pub const TRIGGER_3BYTE: [u8; 2] = [0xB8, 0xB9];

/// Status values the engine accepts after each command (observed: 9 for a sector erase,
/// 0xDE for a bank erase).
pub const STATUS_SECTOR_ERASED: u8 = 9;
pub const STATUS_BANK_ERASED: u8 = 0xDE;

/// The erase opcodes the engine writes into `REG_OPCODE` — hard-coded, not from Flash.dat
/// (observed: `FUN_1003e610` writes 0x20, `FUN_1003e9c0` writes 0xD8).
pub const OPCODE_SECTOR_ERASE: u8 = 0x20;
pub const OPCODE_BANK_ERASE: u8 = 0xD8;
pub const OPCODE_PAGE_PROGRAM: u8 = 0x02;
/// The vendor's own program command, from the GD25Q32C and MX25L3206E rows of Flash.dat: one
/// byte at a time with `0x6f <- 0xa0`, at mode `0x23` and length `0x00`.
pub const OPCODE_BYTE_PROGRAM: u8 = 0xa0;
pub const OPCODE_RDID: u8 = 0x9F;
/// Read status register.
pub const OPCODE_RDSR: u8 = 0x05;
/// Write enable. Every Flash.dat program string opens with it (`06,61,06` = write register `0x61`
/// = `0x06`), and a page program without it is accepted by the bridge and ignored by the part.
pub const OPCODE_WREN: u8 = 0x06;
/// Write status register.
pub const OPCODE_WRSR: u8 = 0x01;
/// The SPI read command. Proven on the panel: writing it to the opcode register and clocking the
/// FIFO returns the flash, bank for bank, matching FW.009 byte for byte.
pub const OPCODE_READ: u8 = 0x03;

/// A bank is 64 KiB, a sector 4 KiB, a program page 256 bytes — all observed:
/// `ProLen` is measured inside a 0x10000 buffer, `SectorEraseCount = ceil(ProLen/0x1000)`,
/// and the program loop steps in 0x100-byte pages.
pub const BANK_SIZE: u32 = 0x1_0000;
pub const SECTOR_SIZE: u32 = 0x1000;
pub const PAGE_SIZE: u32 = 0x100;
pub const SECTORS_PER_BANK: u32 = BANK_SIZE / SECTOR_SIZE;

/// The ISP slave addresses the plugin probes, in order after the card's own (observed in
/// `FUN_10017300`: configured, then 0x6A, then 0x7C — 7-bit, the wire byte is `addr<<1`).
pub const PROBE_SLAVES: [u8; 2] = [0x6A, 0x7C];
/// The boot code meaning "already in ISP mode" (`ulAutoIspCode`, default 0x35).
pub const BOOT_CODE_ISP: u8 = 0x35;
/// The page-select register of the register window (observed: `write_byte(slave, 0x04, page)`).
pub const REG_PAGE: u8 = 0x04;
pub const PAGE_SCPU: u8 = 0;
pub const PAGE_BOOT: u8 = 1;
pub const PAGE_FLASH: u8 = 2;

/// Polling: `FUN_1001c4c0(mask, timeout)` sleeps 2 ms per miss, 20000 iterations.
pub const POLL_DELAY_MS: u64 = 2;
pub const POLL_ITERATIONS: u32 = 20_000;

#[derive(Debug)]
pub struct Isp<'a> {
    pub comm: &'a mut dyn IComm,
    pub cfg: &'a Settings,
    pub slave: Option<u8>,
    pub part: Option<FlashPart>,
    /// The scaler's address-width mode, read from `REG_HW_CONFIG` bit 3 (`FUN_1001db90`).
    pub four_byte_address: bool,
    /// Set by the handshake: did `EnterIspMode` see the bridge acknowledge bit 7 of `0x6F`.
    pub isp_mode_acked: bool,
    /// The NOR's status byte after the last erase, for the UI to show.
    pub last_status: u8,
}

impl<'a> Isp<'a> {
    pub fn new(comm: &'a mut dyn IComm, cfg: &'a Settings) -> Isp<'a> {
        Isp {
            comm,
            cfg,
            slave: None,
            isp_mode_acked: false,
            last_status: 0,
            part: None,
            four_byte_address: false,
        }
    }

    /// The transport, for the verbs that talk to the panel directly (DDC/CI, the `0xCA` mailbox).
    pub fn comm(&self) -> &dyn IComm {
        self.comm
    }

    pub fn slave(&self) -> u8 {
        self.slave.unwrap_or(PROBE_SLAVES[0])
    }

    pub fn set_slave(&mut self, slave: u8) -> Result<()> {
        self.comm.set_isp_slave(slave)?;
        self.slave = Some(slave);
        Ok(())
    }

    fn trigger(&self) -> [u8; 2] {
        if self.four_byte_address {
            TRIGGER_4BYTE
        } else {
            TRIGGER_3BYTE
        }
    }

    // ---- the prepare sequence, in the order FUN_10034120 runs it ----

    /// Step 1, `FUN_10023760`: enable the vendor-defined DDC/CI command, re-open the device with
    /// the configured slave, then up to `ulPollingCount` rounds of `ResetFirmware; ScalerRun;
    /// read the boot code`.
    pub fn handshake(&mut self) -> Result<u8> {
        self.comm.smbus_vd_cmd_enable()?;
        self.comm.uninitialize()?;
        self.comm.initialize()?;
        // Step 4's order: SetIspSlave first (the CLI's, else the card's `ucSpecifiedSlave`), then
        // the boot-code loop. Polling at the transport's default address wastes a round per try.
        let start = self
            .slave
            .or((self.cfg.specified_slave != 0).then_some((self.cfg.specified_slave >> 1) as u8));
        if let Some(s) = start {
            self.slave = Some(s);
            self.comm.set_isp_slave(s)?;
        }
        self.comm.set_speed(self.cfg.isp_speed as u16)?;
        // Step 4's actual entry: arm the bridge, and accept only when 0x6F answers with bit 7.
        // A panel that is already in ISP mode answers without needing the arm, and this box's
        // bridge reads 0 across the register file, so a miss is a note, not a stop: the boot-code
        // poll below is the authoritative "is the scaler answering" test.
        self.isp_mode_acked = self.comm.enter_isp_mode(10).is_ok();
        self.comm.scaler_run()?;
        let mut code = 0u8;
        for _ in 0..self.cfg.polling_count.max(1) {
            code = self.boot_code()?;
            if code != 0 {
                break;
            }
            self.comm.reset_firmware()?;
            self.comm.scaler_run()?;
            std::thread::sleep(std::time::Duration::from_millis(10));
        }
        Ok(code)
    }

    /// Step 4, `FUN_1001bbd0`: the slave probe. The card's address first, then 0x6A, then 0x7C.
    /// A probe ACKs when the boot-code read returns 0, or 0x6E with `bDDCCIReadNotReturn0x6E`
    /// clear (the test in `FUN_10017300`).
    pub fn detect_slave(&mut self) -> Result<u8> {
        // An explicit slave means "do not probe" — the address is the answer.
        if self.slave.is_some() {
            let s = self.slave();
            self.set_slave(s)?;
            return Ok(s);
        }
        if !self.cfg.auto_detect_slave {
            let s = self.slave();
            self.set_slave(s)?;
            return Ok(s);
        }
        let mut order = Vec::with_capacity(3);
        // `ucSpecifiedSlave` is the 8-bit form of the address (`0x94` = 0x4A << 1): step 4 calls
        // `SetIspSlave` with it, so it is the address the card means. The probe pair after it is
        // `DetectAckBySlave`'s — 0x6A, then 0x7C.
        if self.cfg.specified_slave != 0 {
            order.push((self.cfg.specified_slave >> 1) as u8);
        }
        order.extend_from_slice(&PROBE_SLAVES);
        // A NACK is a normal answer from an address the panel does not use: `DetectAckBySlave`
        // probes 0x6A and falls through to 0x6E when it does not acknowledge.
        for _ in 0..self.cfg.polling_count.max(1) {
            for &s in &order {
                if self.set_slave(s).is_err() {
                    continue;
                }
                match self.boot_code() {
                    Ok(0) => return Ok(s),
                    Ok(0x6E) if !self.cfg.ddcci_read_not_return_0x6e => return Ok(s),
                    Ok(_) | Err(_) => continue,
                }
            }
        }
        Err(CommError::ReadFailed)
    }

    /// Step 5, `FUN_10016b00`: the boot code, read through the page window (page 1, offset 0xF4).
    /// Whether `EnterIspMode` saw the bridge acknowledge bit 7 of `0x6F`. False on a panel that is
    /// already in ISP mode, and on this box's bridge, which reads 0 across the register file.
    pub fn isp_mode_acked(&self) -> bool {
        self.isp_mode_acked
    }

    pub fn boot_code(&mut self) -> Result<u8> {
        self.comm.write_byte(self.slave(), REG_PAGE, PAGE_BOOT)?;
        self.comm.read_byte(self.slave(), 0xF4)
    }

    /// Step 6, `FUN_1001aa50`: the MCU family, at page 0 offset 0x0C.
    pub fn mcu_type(&mut self) -> Result<u8> {
        self.comm.write_byte(self.slave(), REG_PAGE, PAGE_SCPU)?;
        self.comm.read_byte(self.slave(), 0x0C)
    }

    /// Step 12, `FUN_1001db90`: read the hardware config to learn the address width.
    pub fn read_address_mode(&mut self) -> Result<bool> {
        let v = self.comm.read_reg(REG_HW_CONFIG)?;
        self.four_byte_address = (v >> HW_CONFIG_4BYTE_BIT) & 1 == 1;
        Ok(self.four_byte_address)
    }

    /// Step 10, `FUN_1001caf0`: the flash JEDEC ID. Arm the read command, then take the three
    /// bytes the bridge clocked in.
    pub fn flash_id(&mut self) -> Result<[u8; 4]> {
        self.comm.write_reg(REG_TRIGGER, TRIGGER_RDID[0])?;
        self.comm.write_reg(REG_OPCODE, OPCODE_RDID)?;
        self.comm.write_reg(REG_TRIGGER, TRIGGER_RDID[1])?;
        self.poll(REG_TRIGGER, 1, POLL_ITERATIONS)?;
        Ok([
            self.comm.read_reg(REG_ID[0])?,
            self.comm.read_reg(REG_ID[1])?,
            self.comm.read_reg(REG_ID[2])?,
            self.comm.read_reg(REG_ID[0])?,
        ])
    }

    /// Step 10, second half: the Flash.dat row the ID selects, falling back to `Default`.
    ///
    /// With `bAutoDetectFlash` clear the card names the part and the name is looked up directly
    /// (observed: `strSpecifiedFlashName` is tried before the ID at `FUN_1001d560`).
    pub fn select_part(&mut self, table: &FlashDat) -> Result<FlashPart> {
        let p = if self.cfg.auto_detect_flash {
            let id = self.flash_id()?;
            table
                .find([id[0], id[1], id[2], id[3]])
                .or_else(|| table.default_part())
        } else {
            table
                .find_name(&self.cfg.flash_name)
                .or_else(|| table.default_part())
        }
        .ok_or(CommError::ReadFailed)?;
        self.part = Some(p.clone());
        Ok(p.clone())
    }

    /// Step 9, slot 0x94, and step 12's channel select.
    pub fn set_speed(&mut self) -> Result<()> {
        self.comm.set_speed(self.cfg.isp_speed as u16)
    }

    pub fn set_isp_channel(&mut self) -> Result<()> {
        if self.cfg.enable_isp_channel {
            self.comm
                .set_continuous_isp_slave(self.cfg.boot_type as u8)?;
        }
        Ok(())
    }

    /// Step 14, `FUN_1001ad20`: MCM (embedded) flash is bit 7 of the MCU type byte.
    pub fn check_flash_mode(&mut self) -> Result<bool> {
        Ok((self.mcu_type()? >> 7) & 1 == 1)
    }

    /// Step 15, `FUN_1001e8f0`: clear the write-protect pin (read-modify-write of bit 0).
    pub fn disable_write_protect(&mut self) -> Result<()> {
        let (wp, pin) = if self.cfg.write_protect_use_setting {
            (self.cfg.wp_register, self.cfg.wp_pin_register)
        } else {
            (self.cfg.pin_register, self.cfg.pin_share)
        };
        let v = self.comm.read_32bit_reg(wp)?;
        self.comm.write_32bit_reg(wp, v | 1)?;
        let s = self.comm.read_mcu_reg(pin)?;
        self.comm.write_mcu_reg_bit(pin, 0, s & !1)
    }

    /// Step 16, `FUN_1001dfa0`: stop the scaler, twice with a 1 ms sleep.
    pub fn scaler_stop(&mut self) -> Result<()> {
        self.comm.scaler_stop()?;
        std::thread::sleep(std::time::Duration::from_millis(1));
        self.comm.scaler_stop()
    }

    /// Step 17, `FUN_100203d0`: the bank programming starts at.
    pub fn program_start_bank(&mut self) -> Result<u8> {
        let page = if self.cfg.auto_detect_flash {
            PAGE_BOOT
        } else {
            PAGE_SCPU
        };
        let off = if self.cfg.auto_detect_flash {
            0x6A
        } else {
            0x04
        };
        self.comm.write_byte(self.slave(), REG_PAGE, page)?;
        let bank = self.comm.read_byte(self.slave(), off)?;
        Ok(if self.cfg.prog_start_bank != 0 {
            self.cfg.prog_start_bank as u8
        } else {
            bank
        })
    }

    // ---- the per-bank loop ----

    /// Read a span of flash back, page by page, into `out` (`FUN_1003eda0`, the dump path).
    ///
    /// One `I2C_RDWR` per page: mode, opcode, the three address bytes, the trigger pair, the FIFO
    /// select, then the bytes. Five separate transfers per page costs ~0.86 s against ~0.17 s for
    /// the same page batched, on a DP-AUX link, and the bridge takes them in order.
    pub fn dump_flash_fast(&mut self, addr: u32, out: &mut [u8]) -> Result<()> {
        let slave = self.slave();
        let mut off = 0usize;
        let mut at = addr;
        while off < out.len() {
            let n = (PAGE_SIZE as usize).min(out.len() - off);
            let mut mode = [0u8; 2];
            let mut op = [0u8; 2];
            let mut a1 = [0u8; 2];
            let mut a2 = [0u8; 2];
            let mut a3 = [0u8; 2];
            let mut t1 = [0u8; 2];
            let mut t2 = [0u8; 2];
            let mut sel = [0u8; 1];
            mode[0] = REG_MODE;
            mode[1] = 0;
            op[0] = REG_OPCODE;
            op[1] = OPCODE_READ;
            a1[0] = REG_ADDR[0];
            a1[1] = (at >> 16) as u8;
            a2[0] = REG_ADDR[1];
            a2[1] = (at >> 8) as u8;
            a3[0] = REG_ADDR[2];
            a3[1] = at as u8;
            t1[0] = REG_TRIGGER;
            t1[1] = if self.four_byte_address {
                TRIGGER_4BYTE[0]
            } else {
                TRIGGER_3BYTE[0]
            };
            t2[0] = REG_TRIGGER;
            t2[1] = if self.four_byte_address {
                TRIGGER_4BYTE[1]
            } else {
                TRIGGER_3BYTE[1]
            };
            sel[0] = REG_FIFO;
            let mut parts: Vec<(u8, bool, &mut [u8])> = vec![
                (slave, false, &mut mode),
                (slave, false, &mut op),
                (slave, false, &mut a1),
                (slave, false, &mut a2),
                (slave, false, &mut a3),
                (slave, false, &mut t1),
                (slave, false, &mut t2),
                (slave, false, &mut sel),
                (slave, true, &mut out[off..off + n]),
            ];
            self.comm.transfer(&mut parts).map_err(|e| e)?;
            off += n;
            at += n as u32;
        }
        Ok(())
    }

    /// Read a span of flash back, bank by bank, into `out` (`FUN_1003eda0`, the dump path).
    ///
    /// The read command is the row's first program verb; the bridge clocks the bytes back into
    /// the address FIFO, so a dump is a read command per page.
    pub fn dump_flash(&mut self, addr: u32, out: &mut [u8]) -> Result<()> {
        // The row's own read command when it carries a program; the plain SPI read otherwise.
        // Most Flash.dat rows carry no program string at all — 15 of 150 do.
        let opcode = self
            .part
            .as_ref()
            .and_then(|p| p.read_opcode())
            .unwrap_or(OPCODE_READ);
        let mut off = 0usize;
        let mut at = addr;
        while off < out.len() {
            let n = (PAGE_SIZE as usize).min(out.len() - off);
            self.comm.write_reg(REG_OPCODE, opcode)?;
            self.write_addr(at)?;
            self.arm()?;
            self.comm
                .read_segment(self.slave(), REG_FIFO, &mut out[off..off + n])?;
            off += n;
            at += n as u32;
        }
        Ok(())
    }

    /// `FUN_1003f7a0` — the MCM accessor: the flash hangs off the scaler, so the read goes through
    /// the 16-bit register window, not the 8-bit MCU one.
    ///
    /// The sequence, byte for byte from the decompilation: command `0x841 ← 0x46`, opcode
    /// `0x842 ← 0x03` (SPI read), address `0x846 ← bank`, `0x847 ← addr>>8`, `0x848 ← addr`,
    /// trigger `0x84c ← 3`; then the FIFO is served by writing the stream command `0xf4 ← 0x78`
    /// and clocking bytes out of `0xf5`, 0x100 at a time, with a one-byte priming read first and
    /// a short final read for the tail.
    pub fn dump_flash_mcm(&mut self, bank: u16, addr: u32, out: &mut [u8]) -> Result<()> {
        let slave = self.slave();
        self.comm.write_scaler_reg(0x841, 0x46)?;
        self.comm.write_scaler_reg(0x842, 0x03)?;
        self.comm.write_scaler_reg(0x846, bank as u8)?;
        self.comm.write_scaler_reg(0x847, (addr >> 8) as u8)?;
        self.comm.write_scaler_reg(0x848, addr as u8)?;
        self.comm.write_scaler_reg(0x84c, 3)?;
        // Prime the FIFO, then stream.
        self.comm.write_segment(slave, 0xf4, &[0x78])?;
        let mut one = [0u8; 1];
        self.comm.read_segment(slave, 0xf5, &mut one)?;
        let mut off = 0usize;
        while off + 0x100 <= out.len() {
            self.comm.write_segment(slave, 0xf4, &[0x78])?;
            self.comm
                .read_segment(slave, 0xf5, &mut out[off..off + 0x100])?;
            off += 0x100;
        }
        if off < out.len() {
            self.comm.write_segment(slave, 0xf4, &[0x78])?;
            self.comm.read_segment(slave, 0xf5, &mut out[off..])?;
        }
        Ok(())
    }

    /// `FUN_1001e4c0`: the bank's write plan.
    ///
    /// `ProLen` is **not** the whole bank: it is one past the last byte that is not 0xFF, so a bank
    /// whose tail is erased is not re-written. `SectorEraseCount` is that rounded up to 4 KiB
    /// sectors, and `SectorErase` says whether sectors are erased at all.
    pub fn bank_plan(bank: u16, image: &[u8]) -> BankPlan {
        let start = usize::from(bank) * BANK_SIZE as usize;
        let end = start.saturating_add(BANK_SIZE as usize).min(image.len());
        if start >= image.len() {
            return BankPlan {
                bank,
                pro_len: 0,
                sector_erase: 0,
                sector_erase_count: 0,
            };
        }
        let window = &image[start..end];
        let pro_len = match window.iter().rposition(|&b| b != 0xFF) {
            Some(last) => last + 1,
            None => 0, // the whole bank is 0xFF: nothing to write
        };
        BankPlan {
            bank,
            pro_len: pro_len as u32,
            sector_erase: 1,
            sector_erase_count: (pro_len as u32).div_ceil(SECTOR_SIZE),
        }
    }

    /// One sector erase, `FUN_1003e610`: address = `bank<<16 | sector<<12`, opcode 0x20, trigger.
    pub fn erase_sector(&mut self, bank: u16, sector: u32) -> Result<()> {
        let addr = u32::from(bank) * BANK_SIZE + sector * SECTOR_SIZE;
        self.write_addr(addr)?;
        self.comm.write_reg(REG_OPCODE, OPCODE_SECTOR_ERASE)?;
        self.arm()?;
        self.last_status = self.flash_status()?;
        Ok(())
    }

    /// One bank erase, `FUN_1003e9c0`: the 64 KiB block opcode 0xD8.
    pub fn erase_bank(&mut self, bank: u16) -> Result<()> {
        self.write_addr(u32::from(bank) * BANK_SIZE)?;
        self.comm.write_reg(REG_OPCODE, OPCODE_BANK_ERASE)?;
        self.arm()?;
        self.last_status = self.flash_status()?;
        Ok(())
    }

    /// The NOR's own status register, read with RDSR (`0x05`) through the bridge. Bit 0 is the
    /// part's busy flag; the row's `status_disable_wp` / `status_enable_wp` are the values written
    /// back with WRSR (`0x01`) to lift and restore write protect.
    pub fn flash_status(&mut self) -> Result<u8> {
        self.comm.write_reg(REG_OPCODE, OPCODE_RDSR)?;
        self.arm()?;
        // The RDSR byte lands in the status register 0x62. Reading 0x67 gives the JEDEC
        // manufacturer byte (0xc8 on the GigaDevice), which is what made an earlier pass report
        // "block protect 0b110010" — that was the vendor ID, not the protect bits.
        self.comm.read_reg(REG_STATUS)
    }

    /// The erase step of the loop: bank erase when `SectorErase` is 0, else N sector erases.
    pub fn erase_bank_plan(&mut self, plan: &BankPlan) -> Result<()> {
        if plan.sector_erase == 0 {
            return self.erase_bank(plan.bank);
        }
        for s in 0..plan.sector_erase_count {
            self.erase_sector(plan.bank, s)?;
        }
        Ok(())
    }

    /// The program step, `FUN_1003e2a0` → `FUN_1003d760`: fill to the end of the current 256-byte
    /// page, then whole pages, then the tail, skipping runs that are already 0xFF.
    pub fn program_bank(&mut self, plan: &BankPlan, image: &[u8], verify: bool) -> Result<()> {
        let start = usize::from(plan.bank) * BANK_SIZE as usize;
        if plan.pro_len == 0 || start >= image.len() {
            return Ok(());
        }
        let end = start + plan.pro_len as usize;
        let mut addr = u32::try_from(start).map_err(|_| CommError::BadLength)?;
        let mut off = start;
        // `FUN_1003d760` aligns the first chunk to the end of the page it starts in.
        let first = PAGE_SIZE - (addr & (PAGE_SIZE - 1));
        for n in Self::chunk_sizes(first, (end - off) as u32) {
            if off >= end {
                break;
            }
            let take = (n as usize).min(end - off);
            let chunk = &image[off..off + take];
            if chunk.iter().all(|&b| b == 0xFF) {
                off += take;
                addr += take as u32;
                continue; // the plugin skips all-0xFF chunks
            }
            self.program_page(addr, chunk, verify)?;
            off += take;
            addr += take as u32;
        }
        Ok(())
    }

    /// The chunk sequence of `FUN_1003d760`: the alignment remainder, whole pages, then the tail.
    fn chunk_sizes(first: u32, total: u32) -> Vec<u32> {
        let mut out = Vec::new();
        let mut left = total;
        if left == 0 {
            return out;
        }
        let head = first.min(left);
        out.push(head);
        left -= head;
        while left >= PAGE_SIZE {
            out.push(PAGE_SIZE);
            left -= PAGE_SIZE;
        }
        if left > 0 {
            out.push(left);
        }
        out
    }

    /// The vendor's own program command, byte at a time: mode `0x23`, length `0x00`, one byte
    /// into the FIFO, issue `0xa0`. This is what the GD25Q32C row of Flash.dat does, and it is
    /// the recipe proven against the part — 16 bytes of it per bank, in the file.
    pub fn program_bytes(&mut self, addr: u32, data: &[u8]) -> Result<()> {
        self.comm.write_reg(REG_MODE, 0x23)?;
        self.comm.write_reg(REG_LEN, 0)?;
        // Latch write enable once, as the row's opening `06,61,06` + `06,60,38` + `06,60,39` does.
        self.comm.write_reg(REG_OPCODE, OPCODE_WREN)?;
        self.comm.write_reg(REG_TRIGGER, 0x38)?;
        self.comm.write_reg(REG_TRIGGER, 0x39)?;
        for (i, &b) in data.iter().enumerate() {
            // The vendor's row writes the address before every single byte, so the bridge latches
            // it per program cycle rather than per burst.
            self.write_addr(addr + i as u32)?;
            self.comm.write_reg(REG_FIFO, b)?;
            // A plain write, as the row does it: the masked form reads 0x6f first, and the read
            // of the issue register is not free on this bridge.
            self.comm.write_reg(REG_ISSUE, OPCODE_BYTE_PROGRAM)?;
        }
        Ok(())
    }

    /// One page program, `FUN_1003d760`'s inner body: mode 2, length minus one, the FIFO burst,
    /// the address, then the masked write that issues it.
    pub fn program_page(&mut self, addr: u32, data: &[u8], verify: bool) -> Result<()> {
        if data.is_empty() {
            return Err(CommError::BadLength);
        }
        self.comm.write_reg(REG_MODE, 0x23)?;
        // Write-enable first: the bridge latches it and the program only takes effect for the part
        // once it is set. Measured on the panel — a program without it leaves the bank at 0xFF.
        self.comm.write_reg(REG_OPCODE, OPCODE_WREN)?;
        // `FUN_1001c4c0(0x10, 20000)` between the mode write and the length write. On this panel
        // the register that answers that test is the issue register 0x6f (it reads 0x92 idle);
        // 0x76 NACKs, so the inferred `REG_TRANSFER` is not it.
        self.ready(REG_ISSUE, 0x10)?;
        self.comm.write_reg(REG_LEN, (data.len() - 1) as u8)?;
        self.comm.burst_write(REG_FIFO, data)?;
        self.write_addr(addr)?;
        self.comm
            .masked_write(REG_ISSUE, 0xFF, OPCODE_PAGE_PROGRAM)?;
        // The NOR's own write-in-progress bit is the authoritative end-of-program signal; the
        // bridge's ready bit is a courtesy check with a short budget.
        self.ready(REG_ISSUE, 0x10)?;
        self.wait_nor()?;
        if verify {
            self.verify_page(addr, data)?;
        }
        Ok(())
    }

    /// The verify the plugin actually runs: a **per-chunk CRC byte**, not a data read-back
    /// (`FUN_1001c530`). Mismatch is `0xd04` on the first page and `0xd06` on any later one.
    pub fn verify_page(&mut self, addr: u32, data: &[u8]) -> Result<()> {
        self.write_addr(addr)?;
        let end = addr + data.len() as u32 - 1;
        self.comm.write_reg(REG_CRC_END[0], (end >> 16) as u8)?;
        self.comm.write_reg(REG_CRC_END[1], (end >> 8) as u8)?;
        self.comm.write_reg(REG_CRC_END[2], end as u8)?;
        self.comm.masked_write(REG_ISSUE, 0xFF, 4)?;
        self.poll(REG_TRANSFER, 0x10, POLL_ITERATIONS)?;
        let got = self.comm.read_reg(REG_CRC_RESULT)?;
        if got != crc8(data) {
            return Err(CommError::ReadFailed);
        }
        Ok(())
    }

    fn write_addr(&mut self, addr: u32) -> Result<()> {
        self.comm.write_reg(REG_ADDR[0], (addr >> 16) as u8)?;
        self.comm.write_reg(REG_ADDR[1], (addr >> 8) as u8)?;
        self.comm.write_reg(REG_ADDR[2], addr as u8)?;
        if self.four_byte_address {
            self.comm.write_reg(REG_ADDR[0], (addr >> 24) as u8)?;
        }
        Ok(())
    }

    /// Arm and start: the trigger is a pair of writes.
    fn arm(&mut self) -> Result<()> {
        let t = self.trigger();
        self.comm.write_reg(REG_TRIGGER, t[0])?;
        self.comm.write_reg(REG_TRIGGER, t[1])?;
        self.poll(REG_TRIGGER, 1, POLL_ITERATIONS)
    }

    /// Poll a bridge bit with a short budget and never fail on it: the batched page read works
    /// with no poll at all, so a bit that stays set is a slow signal, not a dead link.
    fn ready(&mut self, reg: u8, mask: u8) -> Result<()> {
        // A NACK on the status read is the link being busy, not a dead transfer: the write-enable
        // cycle in particular leaves the AUX port unable to answer for a beat, and the read after
        // it fails too. Ride through it with a short sleep.
        let mut misses = 0;
        for _ in 0..400 {
            match self.comm.read_reg(reg) {
                Ok(v) => {
                    misses = 0;
                    if v & mask == mask {
                        return Ok(());
                    }
                }
                Err(_) => {
                    misses += 1;
                    if misses > 40 {
                        return Ok(());
                    }
                }
            }
            std::thread::sleep(std::time::Duration::from_micros(200));
        }
        Ok(())
    }

    /// `0x05` RDSR, bit 0: the NOR's write-in-progress flag. This is what a page program and an
    /// erase actually complete against.
    fn wait_nor(&mut self) -> Result<()> {
        for _ in 0..2000 {
            if self.flash_status()? & 1 == 0 {
                return Ok(());
            }
            std::thread::sleep(std::time::Duration::from_micros(500));
        }
        Err(CommError::ReadFailed)
    }

    /// `FUN_1001c4c0`: sleep 2 ms per miss, `iterations` of them, five consecutive I/O errors give up.
    ///
    /// The plugin's call is `FUN_1001c4c0(reg, expect = 0, mask = 1, timeout)`: it reads the
    /// **command register** and stops when **bit 0 goes clear** — the arm writes `0xA0`/`0xA1` (or
    /// `0xB8`/`0xB9`) to start a transfer and bit 0 is the busy flag. Confirmed on the panel
    /// 2026-11-10: polling for the bit *set* timed out on every RDID.
    ///
    /// The plugin passes mask and iteration count; the register it tests rides in a context Ghidra
    /// did not materialise, so the register is named per call site from the write before it
    /// (**inferred**).
    fn poll(&mut self, reg: u8, mask: u8, iterations: u32) -> Result<()> {
        let mut misses = 0u32;
        for _ in 0..iterations {
            match self.comm.read_reg(reg) {
                Ok(v) if v & mask == 0 => return Ok(()),
                Ok(_) => {
                    std::thread::sleep(std::time::Duration::from_millis(POLL_DELAY_MS));
                }
                Err(_) => {
                    misses += 1;
                    if misses >= 5 {
                        return Err(CommError::Io(std::io::ErrorKind::TimedOut));
                    }
                }
            }
        }
        Err(CommError::ReadFailed)
    }

    /// Erase one bank, write a deterministic pattern across it, and read it back.
    ///
    /// This is the first real write: it exercises write-enable, the erase opcode, the page program
    /// and the read-back on a bank the running firmware does not need, so a surprise costs a
    /// reboot, not a repair. The pattern is `i.wrapping_mul(7).wrapping_add(0x5A)` so a shift by
    /// one byte in the address path shows up as a mismatch, not a partial pass.
    pub fn write_test_bank(&mut self, bank: u16, bytes: usize) -> Result<(usize, usize)> {
        self.erase_bank(bank)?;
        let start = usize::from(bank) * BANK_SIZE as usize;
        let n = bytes.min(BANK_SIZE as usize);
        let pattern: Vec<u8> = (0..n).map(|i| (i as u32).wrapping_mul(7).wrapping_add(0x5A) as u8).collect();
        self.program_bytes(start as u32, &pattern)?;
        let mut back = vec![0u8; n];
        self.dump_flash_fast(start as u32, &mut back)?;
        let good = back.iter().zip(&pattern).filter(|(a, b)| a == b).count();
        Ok((good, n))
    }

    /// `FUN_1003cb60` — write the NOR's status register with WRSR. This is what lifts block
    /// protect: the panel reported `0xc8`, whose BP bits protect the upper half of the part, and
    /// the Flash.dat row names the value to write (`status_disable_wp`, `0x00` for the GD25Q32C).
    ///
    /// The sequence, from the decompilation: command `0x60 ← 0x68`, the status byte into `0x61`,
    /// the first byte again into `0x64` (register `0x100` in 4-byte mode), trigger `0x60 ← 0x69`,
    /// then poll the command register.
    pub fn write_status(&mut self, value: u8) -> Result<()> {
        // Latch write enable before touching the status register. Every Flash.dat program string
        // opens with it (`06,61,06` = write register 0x61 with 0x06), and a status write without
        // it is accepted by the bridge and ignored by the part.
        self.comm.write_reg(REG_OPCODE, OPCODE_WREN)?;
        self.comm.write_reg(REG_TRIGGER, 0x68)?;
        self.comm.write_reg(REG_OPCODE, value)?;
        if self.four_byte_address {
            // 4-byte mode puts the first status byte in the 16-bit window at 0x100.
            self.comm.write_scaler_reg(0x100, value)?;
        } else {
            self.comm.write_reg(REG_ADDR[0], value)?;
        }
        self.comm.write_reg(REG_TRIGGER, 0x69)?;
        self.poll(REG_TRIGGER, 1, POLL_ITERATIONS)?;
        self.last_status = self.flash_status()?;
        Ok(())
    }

    /// `FUN_10032400` — one byte into the MCU's own register file.
    fn write_mcu_reg(&mut self, reg: u8, value: u8) -> Result<()> {
        self.comm.write_reg(REG_OPCODE, 0x08)?;
        self.comm.write_reg(REG_ADDR[0], value)?;
        self.comm.write_reg(REG_TRIGGER, 0x48)?;
        self.comm.write_reg(REG_TRIGGER, 0x49)?;
        self.comm.write_reg(REG_OPCODE, reg)?;
        self.comm.write_reg(REG_TRIGGER, 0x08)?;
        self.comm.write_reg(REG_TRIGGER, 0x09)
    }

    /// `FUN_10001d40` — write `1` to MCU register `0x04`. This is what brings the panel's video
    /// back: the handshake stops the scaler so the SPI bridge owns the flash bus, the screen goes
    /// blank, and the DisplayPort link drops (measured on the X28 — after a page program the
    /// connector reports `disconnected` and every I2C address NACKs). The link comes back when
    /// the scaler is released.
    pub fn scaler_reset(&mut self) -> Result<()> {
        // The plugin calls SetIspCommand(0x61) first, which selects what register 0x61 means on
        // the far side. Register 0x61 answers as the flash opcode register today, and the MCU
        // write below uses the same opcode register, so no selector is issued here.
        self.write_mcu_reg(0x04, 1)
    }

    /// The whole flow: prepare, then every bank the image fills, then the reset.
    ///
    /// `progress` sees one call per phase transition, so a UI can show a meter: the plugin's own
    /// progress path (`FUN_1002d7c0`) reports a percentage clamped to 99 while work is running and
    /// 100 only at the end, and this follows it.
    pub fn flash_image(
        &mut self,
        table: &FlashDat,
        image: &[u8],
        verify: bool,
        progress: &mut dyn FnMut(Progress),
    ) -> Result<()> {
        self.handshake()?;
        self.detect_slave()?;
        self.set_speed()?;
        self.set_isp_channel()?;
        self.select_part(table)?;
        self.read_address_mode()?;
        self.disable_write_protect()?;
        self.scaler_stop()?;
        let start_bank = self.program_start_bank()? as u16;
        let banks = image.len().div_ceil(BANK_SIZE as usize);
        progress(Progress {
            phase: Phase::Preparing,
            bank: 0,
            banks,
            start_bank,
            part: self.part.as_ref().map(|p| p.name.clone()),
            pro_len: 0,
        });
        for b in 0..banks as u16 {
            let plan = Isp::bank_plan(start_bank + b, image);
            progress(Progress {
                phase: Phase::Erasing,
                bank: b,
                banks,
                start_bank,
                part: self.part.as_ref().map(|p| p.name.clone()),
                pro_len: plan.pro_len,
            });
            self.erase_bank_plan(&plan)?;
            progress(Progress {
                phase: Phase::Programming,
                bank: b,
                banks,
                start_bank,
                part: self.part.as_ref().map(|p| p.name.clone()),
                pro_len: plan.pro_len,
            });
            self.program_bank(&plan, image, verify)?;
        }
        progress(Progress {
            phase: Phase::Resetting,
            bank: banks as u16,
            banks,
            start_bank,
            part: self.part.as_ref().map(|p| p.name.clone()),
            pro_len: 0,
        });
        if self.cfg.reset_mcu {
            self.comm.reset_firmware()?;
            self.comm.scaler_run()?;
        }
        Ok(())
    }
}

/// Where the flash loop is, for a progress meter.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Phase {
    Preparing,
    Erasing,
    Programming,
    Verifying,
    Resetting,
    Done,
}

impl Phase {
    pub fn label(self) -> &'static str {
        match self {
            Phase::Preparing => "prepare",
            Phase::Erasing => "erase",
            Phase::Programming => "program",
            Phase::Verifying => "verify",
            Phase::Resetting => "reset",
            Phase::Done => "done",
        }
    }

    /// The plugin's own percent: the running share of banks, clamped to 99 until the end.
    pub fn percent(self, bank: u16, banks: usize) -> u8 {
        if banks == 0 {
            return 100;
        }
        if self == Phase::Done || self == Phase::Resetting {
            return 100;
        }
        (((bank as usize) * 100) / banks).min(99) as u8
    }
}

/// One progress tick.
pub struct Progress {
    pub phase: Phase,
    /// Zero-based index into the image's banks.
    pub bank: u16,
    pub banks: usize,
    /// The bank the panel said programming starts at.
    pub start_bank: u16,
    /// The Flash.dat row in force, once selected.
    pub part: Option<String>,
    /// Bytes the current bank will program.
    pub pro_len: u32,
}

impl Progress {
    pub fn percent(&self) -> u8 {
        self.phase.percent(self.bank, self.banks)
    }
}

/// One bank's write plan, as `FUN_1001e4c0` computes it.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct BankPlan {
    pub bank: u16,
    /// Bytes to program in this bank: one past the last byte that is not 0xFF.
    pub pro_len: u32,
    /// 0 → one bank erase; non-zero → `sector_erase_count` sector erases.
    pub sector_erase: u32,
    pub sector_erase_count: u32,
}

/// The host-side checksum the plugin compares its byte against: **the bitwise OR of the range**.
///
/// Read from the raw disassembly of `FUN_1001c910` (0x1001c967..0x1001cae8) after Ghidra's
/// decompiler mangled its SSE body: the loop accumulates eight independent bit-planes over the
/// buffer, then rebuilds the result one bit at a time (`test -0x24,%edx; cmovne %esi,%eax` adds
/// 1 for lane 0, then +4, +8, +0x10, +0x20, +0x40, and `sub $0x80` for lane 7). A lane is set
/// when **any** byte in the range has that bit — which is exactly `fold(0, a|b)`.
///
/// So the ISP's "CRC" is a cheap content-present check, not an error-detecting code: it proves
/// the flasher's own range arithmetic is right, not that the flash is intact.
pub fn crc8(data: &[u8]) -> u8 {
    data.iter().fold(0u8, |acc, &b| acc | b)
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::model::Settings;
    use std::cell::RefCell;
    use std::collections::BTreeMap;
    use std::io::ErrorKind;

    /// A device that records the wire traffic, so the sequence is testable without a monitor.
    #[derive(Default, Debug)]
    struct Fake {
        log: RefCell<Vec<String>>,
        regs: RefCell<BTreeMap<u8, u8>>,
        page_regs: RefCell<BTreeMap<u16, u8>>,
        page: RefCell<u8>,
        slave: RefCell<u8>,
        speed: RefCell<u16>,
        /// Registers that answer with a fixed value, per slave, for the probe tests.
        per_slave: RefCell<BTreeMap<(u8, u16), u8>>,
        /// DDC/CI replies, keyed by (slave, VCP).
        ddcci: RefCell<BTreeMap<(u8, u8), Vec<u8>>>,
        /// The 16-bit-indexed scaler register file (the MCM window).
        scaler: RefCell<BTreeMap<u16, u8>>,
    }

    impl Fake {
        /// Arm the bytes a DDC/CI read of `(slave, vcp)` will return.
        fn ddcci_reply(&self, slave: u8, vcp: u8, data: &[u8]) {
            self.ddcci.borrow_mut().insert((slave, vcp), data.to_vec());
        }
        fn reg(&self, r: u8, v: u8) {
            self.regs.borrow_mut().insert(r, v);
        }
        fn page_reg(&self, page: u8, off: u8, v: u8) {
            self.page_regs
                .borrow_mut()
                .insert(u16::from(page) << 8 | u16::from(off), v);
        }
        fn slave_page_reg(&self, slave: u8, page: u8, off: u8, v: u8) {
            self.per_slave
                .borrow_mut()
                .insert((slave, u16::from(page) << 8 | u16::from(off)), v);
        }
        fn log(&self, s: String) {
            self.log.borrow_mut().push(s);
        }
        fn taken(&self) -> Vec<String> {
            self.log.borrow().clone()
        }
        fn count(&self, prefix: &str) -> usize {
            self.log
                .borrow()
                .iter()
                .filter(|l| l.starts_with(prefix))
                .count()
        }
    }

    impl IComm for Fake {
        fn write_reg(&self, reg: u8, value: u8) -> Result<()> {
            self.log(format!("REG {reg:02x}={value:02x}"));
            self.regs.borrow_mut().insert(reg, value);
            Ok(())
        }
        fn read_reg(&self, reg: u8) -> Result<u8> {
            // The command register's bit 0 is the busy flag: a write starts a transfer and the
            // bridge clears it when the part is done. The fake finishes instantly.
            let v = if reg == REG_TRIGGER {
                0
            } else {
                self.regs.borrow().get(&reg).copied().unwrap_or(0)
            };
            self.log(format!("GET {reg:02x}={v:02x}"));
            Ok(v)
        }
        fn burst_write(&self, reg: u8, data: &[u8]) -> Result<()> {
            self.log(format!("BURST {reg:02x}[{}]={}", data.len(), hex(data)));
            Ok(())
        }
        fn write_segment(&self, slave: u8, reg: u8, d: &[u8]) -> Result<()> {
            self.log(format!("WS {slave:02x}.{reg:02x}={}", hex(d)));
            Ok(())
        }
        fn read_segment(&self, _slave: u8, _reg: u8, b: &mut [u8]) -> Result<()> {
            for (i, x) in b.iter_mut().enumerate() {
                *x = (i % 256) as u8;
            }
            Ok(())
        }
        fn ddcci_write(&self, slave: u8, vcp: u8, d: &[u8]) -> Result<()> {
            self.log(format!("DW {slave:02x}.{vcp:02x}={}", hex(d)));
            Ok(())
        }
        fn ddcci_read(&self, slave: u8, vcp: u8, len: usize) -> Result<Vec<u8>> {
            let have = self
                .ddcci
                .borrow()
                .get(&(slave, vcp))
                .cloned()
                .unwrap_or_default();
            let mut out = vec![0u8; len];
            for (i, b) in out.iter_mut().enumerate() {
                *b = have.get(i).copied().unwrap_or(0);
            }
            self.log(format!(
                "DR {slave:02x}.{vcp:02x}[{len}]=hex({})",
                hex(&out)
            ));
            Ok(out)
        }
        fn read_byte(&self, slave: u8, reg: u8) -> Result<u8> {
            let key = u16::from(*self.page.borrow()) << 8 | u16::from(reg);
            let v = self
                .per_slave
                .borrow()
                .get(&(slave, key))
                .copied()
                .or_else(|| self.page_regs.borrow().get(&key).copied())
                .unwrap_or(0);
            self.log(format!("RD {slave:02x}.{key:04x}={v:02x}"));
            Ok(v)
        }
        fn write_byte(&self, slave: u8, reg: u8, v: u8) -> Result<()> {
            self.log(format!("WR {slave:02x}.{reg:02x}={v:02x}"));
            if reg == REG_PAGE {
                *self.page.borrow_mut() = v;
            }
            Ok(())
        }
        fn set_isp_slave(&self, s: u8) -> Result<()> {
            self.log(format!("SLAVE {s:02x}"));
            *self.slave.borrow_mut() = s;
            Ok(())
        }
        fn set_continuous_isp_slave(&self, s: u8) -> Result<()> {
            self.log(format!("CSLAVE {s:02x}"));
            Ok(())
        }
        fn enter_isp_mode(&self, _retries: u32) -> Result<()> {
            self.log(String::from("ISP"));
            Ok(())
        }
        fn transfer(&self, parts: &mut [(u8, bool, &mut [u8])]) -> Result<()> {
            for (s, read, buf) in parts.iter() {
                if *read {
                    self.log(format!("XRD {s:02x}[{}]", buf.len()));
                } else {
                    self.log(format!("XWR {s:02x}={}", hex(buf)));
                }
            }
            for (i, (_, read, buf)) in parts.iter_mut().enumerate() {
                if *read {
                    for (j, b) in buf.iter_mut().enumerate() {
                        *b = (i * 16 + j) as u8;
                    }
                }
            }
            Ok(())
        }
        fn write_scaler_reg(&self, reg: u16, value: u8) -> Result<()> {
            self.log(format!("XREG {reg:04x}={value:02x}"));
            self.scaler.borrow_mut().insert(reg, value);
            Ok(())
        }
        fn read_scaler_reg(&self, reg: u16) -> Result<u8> {
            let v = self.scaler.borrow().get(&reg).copied().unwrap_or(0);
            self.log(format!("XGET {reg:04x}={v:02x}"));
            Ok(v)
        }
        fn set_speed(&self, khz: u16) -> Result<()> {
            *self.speed.borrow_mut() = khz;
            Ok(())
        }
        fn reset_firmware(&self) -> Result<()> {
            self.log("RESET".into());
            Ok(())
        }
        fn scaler_run(&self) -> Result<()> {
            self.log("RUN".into());
            Ok(())
        }
        fn scaler_stop(&self) -> Result<()> {
            self.log("STOP".into());
            Ok(())
        }
        fn smbus_vd_cmd_enable(&self) -> Result<()> {
            self.log("VD".into());
            Ok(())
        }
        fn initialize(&self) -> Result<()> {
            self.log("INIT".into());
            Ok(())
        }
        fn uninitialize(&self) -> Result<()> {
            self.log("UNINIT".into());
            Ok(())
        }
        fn write_32bit_reg(&self, a: u32, v: u32) -> Result<()> {
            self.log(format!("W32 {a:#x}={v:#x}"));
            Ok(())
        }
        fn read_32bit_reg(&self, _a: u32) -> Result<u32> {
            Ok(0)
        }
        fn write_32bit_reg_1byte(&self, a: u32, v: u8) -> Result<()> {
            self.log(format!("W32B {a:#x}={v:#x}"));
            Ok(())
        }
        fn read_mcu_reg(&self, _r: u32) -> Result<u8> {
            Ok(0)
        }
        fn write_mcu_reg_bit(&self, r: u32, bit: u8, v: u8) -> Result<()> {
            self.log(format!("MCUBIT {r:#x}[{bit}]={v:#x}"));
            Ok(())
        }
    }

    fn hex(b: &[u8]) -> String {
        b.iter()
            .map(|x| format!("{x:02x}"))
            .collect::<Vec<_>>()
            .join(",")
    }

    fn table() -> FlashDat {
        FlashDat::load(concat!(
            env!("CARGO_MANIFEST_DIR"),
            "/../vendor/PlugIn/Flash.dat"
        ))
        .expect("Flash.dat")
    }

    /// Arm the bridge so a read of REG_OPCODE reports the erase status the plugin expects.
    fn ready(fake: &Fake) {
        // 0x62 is the NOR's status byte: bit 0 is write-in-progress, so 0 means "the part is
        // idle". The bridge's ready register is 0x6f, handled by the fake's own rule.
        fake.reg(REG_STATUS, 0x00);
        fake.reg(REG_CRC_RESULT, crc8(&[]));
    }

    #[test]
    fn slave_probe_tries_the_card_slave_then_0x6a_then_0x7c() {
        let mut cfg = Settings::plugin_defaults();
        // The card names the slave in its 8-bit form: 0xA0 is 0x50 << 1.
        cfg.specified_slave = 0xA0;
        cfg.polling_count = 1;
        let mut fake = Fake::default();
        // Only 0x7C ACKs: the others answer with a non-zero, non-0x6E boot code.
        fake.slave_page_reg(0x50, PAGE_BOOT, 0xF4, 0x11);
        fake.slave_page_reg(0x6A, PAGE_BOOT, 0xF4, 0x22);
        fake.slave_page_reg(0x7C, PAGE_BOOT, 0xF4, 0x00);
        let mut isp = Isp::new(&mut fake, &cfg);
        let got = isp.detect_slave().unwrap();
        let log = fake.taken();
        assert_eq!(got, 0x7C, "wire log: {log:?}");
        assert_eq!(log[0], "SLAVE 50", "the card's specified slave goes first");
        assert!(log.contains(&"SLAVE 6a".to_string()));
        assert!(log.contains(&"SLAVE 7c".to_string()));
    }

    #[test]
    fn a_0x6e_boot_code_acks_when_the_flag_says_so() {
        let mut cfg = Settings::plugin_defaults();
        cfg.polling_count = 1;
        cfg.ddcci_read_not_return_0x6e = false;
        let mut fake = Fake::default();
        fake.page_reg(PAGE_BOOT, 0xF4, 0x6E);
        let mut isp = Isp::new(&mut fake, &cfg);
        // The first address on the list is the card's specified slave (0x94 >> 1 = 0x4A).
        assert_eq!(isp.detect_slave().unwrap(), 0x4A);
    }

    #[test]
    fn handshake_runs_the_observed_open_sequence() {
        let mut cfg = Settings::plugin_defaults();
        cfg.polling_count = 3;
        let mut fake = Fake::default();
        fake.page_reg(PAGE_BOOT, 0xF4, BOOT_CODE_ISP);
        let mut isp = Isp::new(&mut fake, &cfg);
        assert_eq!(isp.handshake().unwrap(), BOOT_CODE_ISP);
        let log = fake.taken();
        // Step 4's order: SetIspSlave(ucSpecifiedSlave) before the boot-code loop.
        assert_eq!(
            &log[..6],
            &["VD", "UNINIT", "INIT", "SLAVE 4a", "ISP", "RUN"],
            "the plugin's open order"
        );
        assert!(
            log.iter().any(|l| l.starts_with("RD 4a.01f4")),
            "boot code read: {log:?}"
        );
    }

    #[test]
    fn flash_id_arms_the_read_id_command() {
        let mut cfg = Settings::plugin_defaults();
        cfg.polling_count = 1;
        let mut fake = Fake::default();
        fake.reg(REG_TRIGGER, 0x00);
        fake.reg(REG_ID[0], 0x1f);
        fake.reg(REG_ID[1], 0x84);
        fake.reg(REG_ID[2], 0x01);
        let mut isp = Isp::new(&mut fake, &cfg);
        let id = isp.flash_id().unwrap();
        assert_eq!(id, [0x1f, 0x84, 0x01, 0x1f]);
        let log = fake.taken();
        assert_eq!(log[0], format!("REG 60={:02x}", TRIGGER_RDID[0]));
        assert_eq!(log[1], format!("REG 61={OPCODE_RDID:02x}"));
        assert_eq!(log[2], format!("REG 60={:02x}", TRIGGER_RDID[1]));
    }

    #[test]
    fn select_part_matches_the_id_the_bridge_returns() {
        let t = table();
        let cfg = Settings::plugin_defaults();
        let mut fake = Fake::default();
        ready(&fake);
        fake.reg(REG_ID[0], 0x1f);
        fake.reg(REG_ID[1], 0x84);
        fake.reg(REG_ID[2], 0x01);
        let mut isp = Isp::new(&mut fake, &cfg);
        assert_eq!(isp.select_part(&t).unwrap().name, "AT25SF041");
    }

    #[test]
    fn an_unknown_id_falls_back_to_the_default_row() {
        let t = table();
        let cfg = Settings::plugin_defaults();
        let mut fake = Fake::default();
        ready(&fake);
        fake.reg(REG_ID[0], 0x12);
        fake.reg(REG_ID[1], 0x34);
        fake.reg(REG_ID[2], 0x56);
        let mut isp = Isp::new(&mut fake, &cfg);
        assert_eq!(isp.select_part(&t).unwrap().name, "Default");
    }

    #[test]
    fn a_card_that_names_the_part_skips_the_id_read() {
        let t = table();
        let mut cfg = Settings::plugin_defaults();
        cfg.auto_detect_flash = false;
        cfg.flash_name = "GD25M21_B".into();
        let mut fake = Fake::default();
        ready(&fake);
        let mut isp = Isp::new(&mut fake, &cfg);
        assert_eq!(isp.select_part(&t).unwrap().name, "GD25M21_B");
        assert_eq!(fake.count("REG 61=9f"), 0, "no RDID on the wire");
    }

    #[test]
    fn pro_len_stops_at_the_last_byte_that_is_not_eraser() {
        // Bank 0 is full; bank 1 carries 3 bytes at its start then erased tail; bank 2 is absent.
        let mut image = vec![0xFFu8; BANK_SIZE as usize * 2];
        for i in 0..BANK_SIZE as usize {
            image[i] = 0x10;
        }
        image[BANK_SIZE as usize] = 0x12;
        image[BANK_SIZE as usize + 1] = 0x34;
        image[BANK_SIZE as usize + 2] = 0x56;
        let p0 = Isp::bank_plan(0, &image);
        assert_eq!(p0.pro_len, BANK_SIZE);
        assert_eq!(p0.sector_erase_count, SECTORS_PER_BANK);
        let p1 = Isp::bank_plan(1, &image);
        assert_eq!(p1.pro_len, 3);
        assert_eq!(p1.sector_erase_count, 1, "ceil(3/0x1000)");
        assert_eq!(Isp::bank_plan(2, &image).pro_len, 0, "past the image");
    }

    #[test]
    fn erase_sector_writes_the_address_then_the_opcode_then_the_trigger() {
        let cfg = Settings::plugin_defaults();
        let mut fake = Fake::default();
        ready(&fake);
        let mut isp = Isp::new(&mut fake, &cfg);
        isp.erase_sector(2, 1).unwrap();
        let log = fake.taken();
        assert_eq!(log[0], "REG 64=02", "bank 2 in the top address byte");
        assert_eq!(
            log[1], "REG 65=10",
            "sector 1 is 0x10 in the middle byte (sector << 4)"
        );
        assert_eq!(log[2], "REG 66=00");
        assert_eq!(log[3], format!("REG 61={OPCODE_SECTOR_ERASE:02x}"));
        assert_eq!(
            log[4],
            format!("REG 60={:02x}", TRIGGER_3BYTE[0]),
            "3-byte mode by default"
        );
        assert_eq!(log[5], format!("REG 60={:02x}", TRIGGER_3BYTE[1]));
    }

    #[test]
    fn four_byte_mode_uses_the_a0_pair() {
        let cfg = Settings::plugin_defaults();
        let mut fake = Fake::default();
        ready(&fake);
        fake.reg(REG_HW_CONFIG, 1 << HW_CONFIG_4BYTE_BIT);
        fake.reg(REG_STATUS, STATUS_BANK_ERASED);
        let mut isp = Isp::new(&mut fake, &cfg);
        assert!(isp.read_address_mode().unwrap());
        isp.erase_bank(1).unwrap();
        let log = fake.taken();
        assert!(log
            .iter()
            .any(|l| l == &format!("REG 60={:02x}", TRIGGER_4BYTE[0])));
        assert!(log
            .iter()
            .any(|l| l == &format!("REG 61={OPCODE_BANK_ERASE:02x}")));
    }

    #[test]
    fn an_erase_asks_the_nor_and_leaves_its_status_for_the_caller() {
        // Measured on the panel: the erase completes and the status byte is read with RDSR from
        // register 0x62. The old test asserted the bridge's 0x67 byte named the erase granularity;
        // on this part 0x67 is the JEDEC manufacturer ID (0xc8 on the GigaDevice).
        let cfg = Settings::plugin_defaults();
        let mut fake = Fake::default();
        ready(&fake);
        let mut isp = Isp::new(&mut fake, &cfg);
        isp.erase_sector(3, 1).unwrap();
        let seen = isp.last_status;
        let log = fake.taken();
        assert!(log.contains(&"REG 64=03".to_string()), "bank 3");
        assert!(log.contains(&"REG 65=10".to_string()), "sector 1 = 0x1000");
        assert!(log.contains(&format!("REG 61={OPCODE_SECTOR_ERASE:02x}")));
        assert!(
            log.contains(&format!("REG 61={OPCODE_RDSR:02x}")),
            "reads the status with RDSR: {log:?}"
        );
        assert_eq!(seen, 0x00);
    }

    #[test]
    fn program_writes_mode_length_fifo_address_issue() {
        let cfg = Settings::plugin_defaults();
        let mut fake = Fake::default();
        ready(&fake);
        let mut isp = Isp::new(&mut fake, &cfg);
        let data = vec![0xa5u8; 4];
        isp.program_page(0x0a_1b2c, &data, false).unwrap();
        let log = fake.taken();
        assert!(log.contains(&format!("REG 6d=02")));
        assert!(log.contains(&"REG 71=03".to_string()), "length minus one");
        assert!(
            log.iter().any(|l| l.starts_with("BURST 70[4]=a5,a5,a5,a5")),
            "{log:?}"
        );
        assert!(log.contains(&"REG 64=0a".to_string()));
        assert!(log.contains(&"REG 65=1b".to_string()));
        assert!(log.contains(&"REG 66=2c".to_string()));
        assert!(
            log.iter()
                .any(|l| l.contains(&format!("REG 6f={OPCODE_PAGE_PROGRAM:02x}"))),
            "issue"
        );
    }

    #[test]
    fn chunks_align_then_step_by_the_page() {
        // Starting mid-page, the first chunk fills to the page end, then whole pages, then a tail.
        let sizes = Isp::chunk_sizes(PAGE_SIZE - 0x80, 0x80 + 0x100 + 0x40);
        assert_eq!(sizes, vec![0x80, 0x100, 0x40]);
        assert_eq!(Isp::chunk_sizes(PAGE_SIZE, 0x200), vec![0x100, 0x100]);
        assert_eq!(Isp::chunk_sizes(PAGE_SIZE, 0), Vec::<u32>::new());
    }

    #[test]
    fn erased_runs_are_skipped() {
        let cfg = Settings::plugin_defaults();
        let mut fake = Fake::default();
        ready(&fake);
        let mut isp = Isp::new(&mut fake, &cfg);
        let mut image = vec![0xFFu8; BANK_SIZE as usize];
        image[0] = 0x11;
        image[0x101] = 0x22;
        let plan = Isp::bank_plan(0, &image);
        assert_eq!(plan.pro_len, 0x102);
        isp.program_bank(&plan, &image, false).unwrap();
        // The first chunk fills the page 0 starts in, the tail chunk carries byte 0x101.
        assert_eq!(fake.count("BURST 70["), 2, "{:?}", fake.taken());
    }

    #[test]
    fn verify_reads_the_crc_byte_back() {
        let cfg = Settings::plugin_defaults();
        let mut fake = Fake::default();
        ready(&fake);
        let data = [1u8, 2, 3];
        fake.reg(REG_CRC_RESULT, crc8(&data));
        let mut isp = Isp::new(&mut fake, &cfg);
        isp.verify_page(0x100, &data).unwrap();
        let log = fake.taken();
        assert!(
            log.iter().any(|l| l.starts_with("REG 72=")),
            "CRC end address armed: {log:?}"
        );
        assert!(log.iter().any(|l| l.contains("REG 6f=04")), "CRC issue");
    }

    #[test]
    fn a_crc_mismatch_is_reported() {
        let cfg = Settings::plugin_defaults();
        let mut fake = Fake::default();
        ready(&fake);
        fake.reg(REG_CRC_RESULT, 0x5a);
        let mut isp = Isp::new(&mut fake, &cfg);
        assert!(matches!(
            isp.verify_page(0, &[1, 2, 3]),
            Err(CommError::ReadFailed)
        ));
    }

    #[test]
    fn a_whole_image_walks_bank_by_bank_and_resets() {
        let t = table();
        let cfg = Settings::plugin_defaults();
        let mut fake = Fake::default();
        ready(&fake);
        fake.reg(REG_ID[0], 0x1f);
        fake.reg(REG_ID[1], 0x84);
        fake.reg(REG_ID[2], 0x01);
        let image = vec![0x5au8; (BANK_SIZE * 2) as usize];
        let mut isp = Isp::new(&mut fake, &cfg);
        isp.flash_image(&t, &image, false, &mut |_| {}).unwrap();
        let log = fake.taken();
        assert_eq!(
            &log[..6],
            &["VD", "UNINIT", "INIT", "SLAVE 4a", "ISP", "RUN"]
        );
        assert_eq!(
            fake.count("REG 61=20"),
            2 * SECTORS_PER_BANK as usize,
            "sector erases"
        );
        assert_eq!(
            fake.count("BURST 70["),
            2 * (BANK_SIZE / PAGE_SIZE) as usize,
            "one burst per page"
        );
        assert_eq!(
            log.last().map(String::as_str),
            Some("RUN"),
            "reset then run"
        );
    }

    #[test]
    fn io_errors_pass_through() {
        #[derive(Debug)]
        struct Failing;
        impl IComm for Failing {
            fn write_reg(&self, _: u8, _: u8) -> Result<()> {
                Ok(())
            }
            fn read_reg(&self, _: u8) -> Result<u8> {
                Err(CommError::Io(ErrorKind::TimedOut))
            }
            fn ddcci_write(&self, _: u8, _: u8, _: &[u8]) -> Result<()> {
                Err(CommError::Io(ErrorKind::TimedOut))
            }
            fn enter_isp_mode(&self, _: u32) -> Result<()> {
                Ok(())
            }
            fn transfer(&self, _: &mut [(u8, bool, &mut [u8])]) -> Result<()> {
                Ok(())
            }
            fn write_scaler_reg(&self, _reg: u16, _value: u8) -> Result<()> {
                Ok(())
            }
            fn read_scaler_reg(&self, _reg: u16) -> Result<u8> {
                Ok(0)
            }
            fn ddcci_read(&self, _: u8, _: u8, _: usize) -> Result<Vec<u8>> {
                Err(CommError::Io(ErrorKind::TimedOut))
            }
            fn burst_write(&self, _: u8, _: &[u8]) -> Result<()> {
                Ok(())
            }
            fn write_segment(&self, _: u8, _: u8, _: &[u8]) -> Result<()> {
                Err(CommError::WriteFailed)
            }
            fn read_segment(&self, _: u8, _: u8, _: &mut [u8]) -> Result<()> {
                Err(CommError::ReadFailed)
            }
            fn read_byte(&self, _: u8, _: u8) -> Result<u8> {
                Err(CommError::Io(ErrorKind::TimedOut))
            }
            fn write_byte(&self, _: u8, _: u8, _: u8) -> Result<()> {
                Ok(())
            }
            fn set_isp_slave(&self, _: u8) -> Result<()> {
                Ok(())
            }
            fn set_continuous_isp_slave(&self, _: u8) -> Result<()> {
                Ok(())
            }
            fn set_speed(&self, _: u16) -> Result<()> {
                Ok(())
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
            fn write_32bit_reg(&self, _: u32, _: u32) -> Result<()> {
                Ok(())
            }
            fn read_32bit_reg(&self, _: u32) -> Result<u32> {
                Ok(0)
            }
            fn write_32bit_reg_1byte(&self, _: u32, _: u8) -> Result<()> {
                Ok(())
            }
            fn read_mcu_reg(&self, _: u32) -> Result<u8> {
                Ok(0)
            }
            fn write_mcu_reg_bit(&self, _: u32, _: u8, _: u8) -> Result<()> {
                Ok(())
            }
        }
        let cfg = Settings::plugin_defaults();
        let mut f = Failing;
        let mut isp = Isp::new(&mut f, &cfg);
        assert!(isp.boot_code().is_err());
        assert!(matches!(
            isp.erase_bank(0),
            Err(CommError::Io(ErrorKind::TimedOut))
        ));
    }

    #[test]
    fn crc8_is_stable_and_width_correct() {
        // The measured algorithm is a bitwise OR (see the doc): order-insensitive, monotone.
        assert_eq!(crc8(&[]), 0);
        assert_eq!(crc8(&[0x12, 0x34]), 0x36);
        assert_eq!(crc8(&[0x34, 0x12]), 0x36, "order does not matter");
        assert_eq!(crc8(&[0xFF, 0x00]), 0xFF);
        assert_eq!(
            crc8(&[0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80]),
            0xFF
        );
    }
}
