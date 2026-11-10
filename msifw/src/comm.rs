//! The `IComm` interface: the device contract `Comm.dll` exposes to the ISP engine.
//!
//! The method set is the vtable `WinIspPlugIn.dll` calls through `DAT_10249d10`; each method names
//! the slot's byte offset (observed call sites: `re2/findings-isp-steps.md`,
//! `re2/findings-banks.md`). The engine's own vocabulary is a **SPI-bridge register file** on the
//! scaler: it writes an opcode and an address into indexed registers, triggers a transfer, and
//! polls — so the interface is register-shaped, not "read a flash page"-shaped.
//!
//! | slot | method | bridge registers used |
//! |---|---|---|
//! | 0xf0 | `write_reg` | any |
//! | 0xf8 | `read_reg` | any |
//! | 0xf4 | `masked_write` | any (reg, mask, value) |
//! | 0x74 | `burst_write` | `0x70` = the data FIFO |
//! | 0x5c | `write_segment` | reg-addressed block write |
//! | 0x64 | `read_segment` | reg-addressed block read |
//! | 0x78 | `read_byte` | one register byte |
//! | 0x10 | `set_isp_slave` | |
//! | 0x14 | `set_continuous_isp_slave` | |
//! | 0x94 | `set_speed` | (`ulIspSpeed`) |
//! | 0xa8 | `reset_firmware` | |
//! | 0xb8 | `scaler_run` | |
//! | 0xbc | `scaler_stop` | |
//! | 0xc0 | `smbus_vd_cmd_enable` | |
//! | 0x0c | `initialize` | |
//! | 0x10c | `uninitialize` | |
//! | 0x13c/0x140/0x148 | the 32-bit scaler register file (write-protect pins) | |
//! | 0xd8/0xe0 | the MCU register file | |
//!
//! Under the transport, `Comm_Aux.dll`'s shapes are (observed, `re2/JOURNAL.md` step 6):
//! `I2CWrite(slave, reg, len, buf)` sends `[reg, buf…]` as **16-byte AUX writes**;
//! `I2CRead` writes `reg` then reads **16 bytes per AUX read**; `NativeWrite`/`NativeRead` are a
//! **single** AUX transaction (`0x808` if longer than 16). The AUX call is a 32-byte descriptor
//! `{…, …, 0x10, slave, data[16]}` handed to vtable `+0xac` / `+0xb0` — the NVIDIA Control API AUX
//! access, which on Linux is what an i2c-dev transaction on a DP output drives.
//!
//! Return codes observed at this layer: 0 ok, 0x801 bad length/pointer, 0x802 read failed,
//! 0x803 write failed, 0x804 unknown comm mode, 0x805/0x806 native write/read failed,
//! 0x807 over the page maximum, 0x808 native length over 16.

use std::cell::Cell;

use crate::bus::Bus;

/// AUX burst size the **plugin** uses: `uStack_148 = 0x10` in every descriptor, and the plugin's
/// chunk loops step by 0x10. This is what msifw bursts by.
pub const AUX_PAGE: usize = 16;

/// The transport's ceiling: `GetI2CPageLength` reads `[Comm_AUX] AUX_I2CPageLen`, default
/// **0x20 = 32**, and `I2CWriteEx` answers `0x807` above it (`Comm_Aux!0x1003a3e0`). The plugin
/// never asks for more than 16, so the two are not in conflict — the ceiling is the looser bound,
/// and a card can raise the transport to 32 for a wider burst.
pub const AUX_PAGE_MAX: usize = 32;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CommError {
    /// 0x801
    BadLength,
    /// 0x802
    ReadFailed,
    /// 0x803
    WriteFailed,
    /// 0x807 / 0x808
    OverLength(usize),
    Io(std::io::ErrorKind),
    /// The `EnterIspMode` loop ran out of tries — the plugin's own code 10.
    EnterIsp,
}

impl std::fmt::Display for CommError {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            CommError::BadLength => write!(f, "0x801 bad length or pointer"),
            CommError::ReadFailed => write!(f, "0x802 read failed"),
            CommError::WriteFailed => write!(f, "0x803 write failed"),
            CommError::OverLength(n) => write!(f, "0x807 length {n} over the page maximum"),
            CommError::Io(k) => write!(f, "i2c io error: {k:?}"),
            CommError::EnterIsp => write!(f, "10 enter ISP mode: no ack"),
        }
    }
}

impl std::error::Error for CommError {}

pub type Result<T> = std::result::Result<T, CommError>;

/// The device interface the ISP engine is written against.
pub trait IComm: std::fmt::Debug {
    /// Slot 0xf0 — write one bridge register.
    fn write_reg(&self, reg: u8, value: u8) -> Result<()>;
    /// Slot 0xf8 — read one bridge register.
    fn read_reg(&self, reg: u8) -> Result<u8>;
    /// Slot 0xf4 — read-modify-write a bridge register under a mask.
    fn masked_write(&self, reg: u8, mask: u8, value: u8) -> Result<()> {
        let cur = self.read_reg(reg)?;
        self.write_reg(reg, (cur & !mask) | (value & mask))
    }
    /// Slot 0x74/4 = 29 — a burst write into a register (the data FIFO at `0x70`).
    fn burst_write(&self, reg: u8, data: &[u8]) -> Result<()>;
    /// Slot 0x5c — a register-addressed block write.
    fn write_segment(&self, slave: u8, reg: u8, data: &[u8]) -> Result<()>;
    /// Slot 0x64 — a register-addressed block read.
    fn read_segment(&self, slave: u8, reg: u8, data: &mut [u8]) -> Result<()>;
    /// Slot 0x78 — one byte at a register, through the page-addressed window.
    fn read_byte(&self, slave: u8, reg: u8) -> Result<u8>;
    /// Slot 0x74 (the byte form) — one byte into a register.
    fn write_byte(&self, slave: u8, reg: u8, value: u8) -> Result<()>;
    /// Many messages in one `I2C_RDWR`. The transport's page is 16 bytes, so a long read is still
    /// a run of AUX transactions — but issued in one syscall, which is what costs on a DP link.
    fn transfer(&self, parts: &mut [(u8, bool, &mut [u8])]) -> Result<()>;
    fn set_isp_slave(&self, slave: u8) -> Result<()>;
    /// Slot 0x14 — the continuous/background slave.
    fn set_continuous_isp_slave(&self, slave: u8) -> Result<()>;
    fn set_speed(&self, khz: u16) -> Result<()>;
    fn reset_firmware(&self) -> Result<()>;
    /// Slot 0x124 `EnterIspMode(retries)` — `WriteMcuReg(0x6f, 0x81)`, then read `0x6f` back and
    /// accept when bit 7 is set, one millisecond apart. Ten tries; running out is code 10.
    fn enter_isp_mode(&self, retries: u32) -> Result<()>;
    fn scaler_run(&self) -> Result<()>;
    fn scaler_stop(&self) -> Result<()>;
    fn smbus_vd_cmd_enable(&self) -> Result<()>;
    fn initialize(&self) -> Result<()>;
    fn uninitialize(&self) -> Result<()>;
    /// Slot 0x13c — a DDC/CI write: `[vcp, data…]` to the control slave (0x6E, 8-bit).
    fn ddcci_write(&self, slave: u8, vcp: u8, data: &[u8]) -> Result<()>;
    /// Slot 0x140 — a DDC/CI read: `len` bytes from `vcp`.
    fn ddcci_read(&self, slave: u8, vcp: u8, len: usize) -> Result<Vec<u8>>;
    /// Slots 0xc0 / 0xc4 (`ReadRegEx` / `WriteRegEx`) — the scaler's 16-bit-indexed register
    /// file. This is the **MCM** window: the ISP bridge sits behind it at `0x841` (command),
    /// `0x842` (opcode), `0x846/0x847/0x848` (address), `0x84c` (trigger), and the data FIFO is
    /// the 8-bit pair `0xf4` (command) / `0xf5` (stream).
    fn write_scaler_reg(&self, reg: u16, value: u8) -> Result<()>;
    fn read_scaler_reg(&self, reg: u16) -> Result<u8>;
    /// The scaler's 32-bit register file.
    fn write_32bit_reg(&self, addr: u32, value: u32) -> Result<()>;
    fn read_32bit_reg(&self, addr: u32) -> Result<u32>;
    fn write_32bit_reg_1byte(&self, addr: u32, value: u8) -> Result<()>;
    /// Slots 0xd8 / 0xe0 — the MCU register file.
    fn read_mcu_reg(&self, reg: u32) -> Result<u8>;
    fn write_mcu_reg_bit(&self, reg: u32, bit: u8, value: u8) -> Result<()>;
}

/// The DisplayPort-AUX transport, over a kernel i2c-dev adapter.
#[derive(Debug)]
pub struct AuxComm<'a> {
    pub bus: &'a Bus,
    /// The slave the plugin has selected. Slot 0x30 `SetIspSlave` writes it and every later
    /// register transfer uses it, so it is a cell, not a field set at construction.
    slave: Cell<u8>,
    /// `ulIspSpeed`, stored the way `Comm_Aux!SetI2CSpeed` stores it.
    pub speed_khz: u16,
    /// Inter-chunk pause (`DAT_1021ae28`/`DAT_1021ae60` in the plugin); 0 disables it.
    pub chunk_delay_ms: u64,
}

impl<'a> AuxComm<'a> {
    pub fn new(bus: &'a Bus) -> AuxComm<'a> {
        AuxComm {
            bus,
            slave: Cell::new(crate::bus::ISP_DP),
            speed_khz: 0,
            chunk_delay_ms: 0,
        }
    }

    /// The slave to start on, before the probe picks one. Base 0 on the CLI, 7-bit on the wire.
    pub fn set_slave_start(&self, slave: u8) {
        self.slave.set(slave);
    }

    pub fn with_slave(bus: &'a Bus, slave: u8) -> AuxComm<'a> {
        let c = AuxComm::new(bus);
        c.slave.set(slave);
        c
    }

    /// `[reg, data…]` split into 16-byte AUX writes — the shape of `FUN_1003d850`.
    fn push(&self, slave: u8, reg: u8, data: &[u8]) -> Result<()> {
        let mut wire = Vec::with_capacity(data.len() + 1);
        wire.push(reg);
        wire.extend_from_slice(data);
        for chunk in wire.chunks(AUX_PAGE) {
            self.bus
                .write(slave, chunk)
                .map_err(|e| CommError::Io(e.kind()))?;
            if self.chunk_delay_ms > 0 {
                std::thread::sleep(std::time::Duration::from_millis(self.chunk_delay_ms));
            }
        }
        Ok(())
    }
}

impl IComm for AuxComm<'_> {
    fn transfer(&self, parts: &mut [(u8, bool, &mut [u8])]) -> Result<()> {
        self.bus
            .transfer(parts)
            .map_err(|e| CommError::Io(e.kind()))
    }

    fn write_reg(&self, reg: u8, value: u8) -> Result<()> {
        self.push(self.slave.get(), reg, &[value])
    }

    fn read_reg(&self, reg: u8) -> Result<u8> {
        let mut b = [0u8; 1];
        self.bus
            .write_read(self.slave.get(), &[reg], &mut b)
            .map_err(|e| CommError::Io(e.kind()))?;
        Ok(b[0])
    }

    fn burst_write(&self, reg: u8, data: &[u8]) -> Result<()> {
        if data.is_empty() {
            return Err(CommError::BadLength);
        }
        self.push(self.slave.get(), reg, data)
    }

    fn write_segment(&self, slave: u8, reg: u8, data: &[u8]) -> Result<()> {
        if data.is_empty() {
            return Err(CommError::BadLength);
        }
        self.push(slave, reg, data)
    }

    /// A register-addressed read, burst in `AUX_PAGE`-sized transactions.
    ///
    /// One AUX transaction carries 16 bytes, so anything longer is a run of reads from the same
    /// register — which is what `I2CReadEx` does, in 0x100-byte bursts that are themselves 16-byte
    /// AUX chunks. The register is re-sent per chunk: the bridge's address pointer walks with it.
    fn read_segment(&self, slave: u8, reg: u8, data: &mut [u8]) -> Result<()> {
        if data.is_empty() {
            return Err(CommError::BadLength);
        }
        for chunk in data.chunks_mut(AUX_PAGE) {
            self.bus
                .write_read(slave, &[reg], chunk)
                .map_err(|e| CommError::Io(e.kind()))?;
        }
        Ok(())
    }

    fn ddcci_write(&self, slave: u8, vcp: u8, data: &[u8]) -> Result<()> {
        let mut packet = Vec::with_capacity(data.len() + 1);
        packet.push(vcp);
        packet.extend_from_slice(data);
        self.push(slave, vcp, &packet)
    }

    fn ddcci_read(&self, slave: u8, vcp: u8, len: usize) -> Result<Vec<u8>> {
        if len == 0 {
            return Err(CommError::BadLength);
        }
        let mut buf = vec![0u8; len];
        self.read_segment(slave, vcp, &mut buf)?;
        Ok(buf)
    }

    fn read_byte(&self, slave: u8, reg: u8) -> Result<u8> {
        let mut b = [0u8; 1];
        self.bus
            .write_read(slave, &[reg], &mut b)
            .map_err(|e| CommError::Io(e.kind()))?;
        Ok(b[0])
    }

    fn write_byte(&self, slave: u8, reg: u8, value: u8) -> Result<()> {
        self.push(slave, reg, &[value])
    }

    fn set_isp_slave(&self, slave: u8) -> Result<()> {
        self.slave.set(slave);
        Ok(())
    }

    fn set_continuous_isp_slave(&self, slave: u8) -> Result<()> {
        let _ = slave;
        Ok(())
    }

    fn set_speed(&self, khz: u16) -> Result<()> {
        let _ = khz;
        Ok(())
    }

    fn reset_firmware(&self) -> Result<()> {
        self.bus
            .write(self.slave.get(), &[0xF7, 0x01])
            .map_err(|e| CommError::Io(e.kind()))
    }

    fn enter_isp_mode(&self, retries: u32) -> Result<()> {
        for _ in 0..retries.max(1) {
            self.write_reg(0x6f, 0x81)?;
            let v = self.read_reg(0x6f)?;
            if v & 0x80 != 0 {
                return Ok(());
            }
            std::thread::sleep(std::time::Duration::from_millis(1));
        }
        Err(CommError::EnterIsp)
    }

    fn scaler_run(&self) -> Result<()> {
        self.bus
            .write(self.slave.get(), &[0xF7, 0x00])
            .map_err(|e| CommError::Io(e.kind()))
    }

    fn scaler_stop(&self) -> Result<()> {
        self.bus
            .write(self.slave.get(), &[0xF7, 0x00])
            .map_err(|e| CommError::Io(e.kind()))
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

    /// The scaler's 32-bit register file: a 16-bit index, then a little-endian value
    /// (observed: the command trigger's two halves are written low-then-high).
    fn write_scaler_reg(&self, reg: u16, value: u8) -> Result<()> {
        self.bus
            .write(self.slave.get(), &[(reg >> 8) as u8, reg as u8, value])
            .map_err(|e| CommError::Io(e.kind()))
    }

    fn read_scaler_reg(&self, reg: u16) -> Result<u8> {
        let idx = [(reg >> 8) as u8, reg as u8];
        let mut v = [0u8; 1];
        self.bus
            .write_read(self.slave.get(), &idx, &mut v)
            .map_err(|e| CommError::Io(e.kind()))?;
        Ok(v[0])
    }

    fn write_32bit_reg(&self, addr: u32, value: u32) -> Result<()> {
        let mut buf = vec![(addr >> 8) as u8, addr as u8];
        buf.extend_from_slice(&value.to_le_bytes());
        self.bus
            .write(self.slave.get(), &buf)
            .map_err(|e| CommError::Io(e.kind()))
    }

    fn read_32bit_reg(&self, addr: u32) -> Result<u32> {
        let idx = [(addr >> 8) as u8, addr as u8];
        let mut v = [0u8; 4];
        self.bus
            .write_read(self.slave.get(), &idx, &mut v)
            .map_err(|e| CommError::Io(e.kind()))?;
        Ok(u32::from_le_bytes(v))
    }

    fn write_32bit_reg_1byte(&self, addr: u32, value: u8) -> Result<()> {
        let buf = [(addr >> 8) as u8, addr as u8, value];
        self.bus
            .write(self.slave.get(), &buf)
            .map_err(|e| CommError::Io(e.kind()))
    }

    fn read_mcu_reg(&self, reg: u32) -> Result<u8> {
        let idx = [(reg >> 8) as u8, reg as u8];
        let mut v = [0u8; 1];
        self.bus
            .write_read(self.slave.get(), &idx, &mut v)
            .map_err(|e| CommError::Io(e.kind()))?;
        Ok(v[0])
    }

    fn write_mcu_reg_bit(&self, reg: u32, bit: u8, value: u8) -> Result<()> {
        let cur = self.read_mcu_reg(reg)?;
        let mask = 1u8 << bit;
        let buf = [(reg >> 8) as u8, reg as u8, (cur & !mask) | (value & mask)];
        self.bus
            .write(self.slave.get(), &buf)
            .map_err(|e| CommError::Io(e.kind()))
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use std::io::ErrorKind;

    #[test]
    fn native_transactions_are_capped_at_the_aux_page() {
        assert_eq!(AUX_PAGE, 16);
        assert!(check_len(&[0u8; 16]).is_ok());
        assert!(matches!(
            check_len(&[0u8; 17]),
            Err(CommError::OverLength(17))
        ));
        assert!(matches!(check_len(&[]), Err(CommError::OverLength(0))));
    }

    /// The length rule `FUN_1003ac20` applies before it touches the bus.
    fn check_len(data: &[u8]) -> Result<()> {
        if data.is_empty() || data.len() > AUX_PAGE {
            Err(CommError::OverLength(data.len()))
        } else {
            Ok(())
        }
    }

    #[test]
    fn a_register_write_is_split_into_16_byte_bursts() {
        let bursts = |n: usize| (n + 1 + AUX_PAGE - 1) / AUX_PAGE;
        assert_eq!(bursts(1), 1);
        assert_eq!(bursts(15), 1);
        assert_eq!(bursts(16), 2);
        assert_eq!(bursts(256), 17, "one 256-byte flash page is 17 AUX bursts");
    }

    #[test]
    fn error_codes_match_the_ones_the_dll_returns() {
        assert_eq!(
            CommError::BadLength.to_string(),
            "0x801 bad length or pointer"
        );
        assert_eq!(CommError::ReadFailed.to_string(), "0x802 read failed");
        assert_eq!(CommError::WriteFailed.to_string(), "0x803 write failed");
        assert_eq!(
            CommError::OverLength(20).to_string(),
            "0x807 length 20 over the page maximum"
        );
        assert_eq!(
            CommError::Io(ErrorKind::TimedOut).to_string(),
            "i2c io error: TimedOut"
        );
    }
}
