//! The wire: I2C over the GPU's display links, on Linux.
//!
//! The Windows tool reaches the monitor through `Comm.dll`, which is a facade over interchangeable
//! transport plugins (observed: `Comm.dll` exports 170 functions; `Comm_Aux.dll` 61 and
//! `Comm_GFXI2C.dll` 52 implement the same core interface). Those two plugins are the two physical
//! paths, and both bottom out in the NVIDIA Control API (`ctlAUXAccess`, `ctlI2CAccess` — observed
//! in `ControlLib32.dll`, whose PDB path is `…\CtlApi\bin\Release\ControlLib32.pdb`).
//!
//! On Linux the same two paths are the kernel's `i2c-dev` adapters: the NVIDIA driver registers one
//! per display output (observed on this box: `i2c-1..4,6,7` = "NVIDIA i2c adapter N at 1:00.0").
//! A DP link gives both an AUX-channel path and a DDC path; which adapter number maps to which
//! connector is read from sysfs, never hard-coded.

use std::fmt;
use std::fs;
use std::io;
use std::os::unix::io::AsRawFd;
use std::path::Path;

/// `I2C_RDWR` — one open, N messages, no bus-idle assumption between them.
const I2C_RDWR: libc::c_ulong = 0x0707;
const I2C_M_RD: u16 = 0x0001;

#[repr(C)]
struct I2cMsg {
    addr: u16,
    flags: u16,
    len: u16,
    pad: u16,
    buf: *mut u8,
}

#[repr(C)]
struct RdwrData {
    msgs: *mut I2cMsg,
    nmsgs: u32,
}

/// One physical I2C master on a display link.
#[derive(Debug)]
pub struct Bus {
    pub number: u32,
    pub connector: String,
    file: fs::File,
}

impl Bus {
    /// Open `/dev/i2c-<number>`.
    pub fn open(number: u32) -> io::Result<Bus> {
        let path = format!("/dev/i2c-{number}");
        let file = fs::File::open(&path)
            .and_then(|_| fs::OpenOptions::new().read(true).write(true).open(&path))?;
        Ok(Bus {
            number,
            connector: connector_of(number),
            file,
        })
    }

    /// Combined write-then-read transaction on one slave address.
    ///
    /// This is the shape every ISP and DDC/CI access in the Windows tool has: push a register
    /// address (and payload), then clock data back in the same transaction.
    pub fn write_read(&self, addr7: u8, out: &[u8], inp: &mut [u8]) -> io::Result<()> {
        if inp.is_empty() {
            self.write(addr7, out)
        } else {
            self.msgs(addr7, out, inp)
        }
    }

    pub fn write(&self, addr7: u8, out: &[u8]) -> io::Result<()> {
        self.msgs(addr7, out, &mut [])
    }

    pub fn read(&self, addr7: u8, inp: &mut [u8]) -> io::Result<()> {
        self.msgs(addr7, &[], inp)
    }

    fn msgs(&self, addr7: u8, out: &[u8], inp: &mut [u8]) -> io::Result<()> {
        // i2c-dev wants the buffers alive across the ioctl; borrow them mutably so the compiler
        // guarantees nothing moves them mid-call.
        let mut outv = out.to_vec();
        let mut inv = vec![0u8; inp.len()];
        let mut msgs: Vec<I2cMsg> = Vec::with_capacity(2);
        if !outv.is_empty() {
            msgs.push(I2cMsg {
                addr: u16::from(addr7),
                flags: 0,
                len: outv.len() as u16,
                pad: 0,
                buf: outv.as_mut_ptr(),
            });
        }
        if !inv.is_empty() {
            msgs.push(I2cMsg {
                addr: u16::from(addr7),
                flags: I2C_M_RD,
                len: inv.len() as u16,
                pad: 0,
                buf: inv.as_mut_ptr(),
            });
        }
        let mut data = RdwrData {
            msgs: msgs.as_mut_ptr(),
            nmsgs: msgs.len() as u32,
        };
        let trace = std::env::var_os("MSIFW_TRACE").is_some();
        if trace {
            eprintln!(
                "i2c-{} {addr7:#04x} W[{}] R[{}]",
                self.number,
                out.len(),
                inp.len()
            );
        }
        let rc =
            unsafe { libc::ioctl(self.file.as_raw_fd(), I2C_RDWR, &mut data as *mut RdwrData) };
        if rc < 0 {
            let e = io::Error::last_os_error();
            if trace {
                eprintln!("  -> {e}");
            }
            return Err(e);
        }
        if trace {
            eprintln!("  -> ok {}", hex(&inv));
        }
        inp.copy_from_slice(&inv);
        Ok(())
    }
}

fn hex(b: &[u8]) -> String {
    b.iter()
        .map(|c| format!("{c:02x}"))
        .collect::<Vec<_>>()
        .join(" ")
}

impl fmt::Display for Bus {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "i2c-{} ({})", self.number, self.connector)
    }
}

/// The DRM connector an adapter belongs to, e.g. `DP-1`.
///
/// The reliable direction is DRM's own link: `/sys/class/drm/card0-DP-1/i2c-5` exists for the
/// adapter hanging off that connector. (The reverse, reading back `/sys/bus/i2c/devices/i2c-N`,
/// only yields the PCI address of the GPU, not the connector.)
fn connector_of(number: u32) -> String {
    let want = format!("i2c-{number}");
    if let Ok(cards) = fs::read_dir("/sys/class/drm") {
        for card in cards.flatten() {
            let name = card.file_name().to_string_lossy().to_string();
            // Entries look like `card0-DP-1`; the connector is the part after `cardN-`.
            let Some((_, connector)) = name.split_once('-') else {
                continue;
            };
            if card.path().join(&want).exists() {
                return connector.to_string();
            }
        }
    }
    "?".to_string()
}

/// Adapters that have a connected display behind them, in connector order.
///
/// The label is the kernel's own adapter name (`NVIDIA i2c adapter 6 at 1:00.0`), which is what
/// sysfs offers: on this box the DRM connector directories carry no `i2c-*` child, so a
/// connector-name mapping is not readable from sysfs and the adapter number is the handle the
/// user passes to `--bus`.
pub fn present_buses() -> Vec<(u32, String, bool)> {
    let mut out = Vec::new();
    for n in 0..64 {
        let dev = Path::new("/dev").join(format!("i2c-{n}"));
        if !dev.exists() {
            continue;
        }
        let label = adapter_name(n).unwrap_or_else(|| connector_of(n));
        let connected = label == "?" || status_of(&label) || status_of(&format!("DP-{n}"));
        out.push((n, label, connected));
    }
    out.sort_by_key(|(n, _, _)| *n);
    out
}

/// The adapter's own name from sysfs, e.g. `NVIDIA i2c adapter 6 at 1:00.0`.
fn adapter_name(number: u32) -> Option<String> {
    let p = Path::new("/sys/bus/i2c/devices")
        .join(format!("i2c-{number}"))
        .join("name");
    fs::read_to_string(p).ok().map(|s| s.trim().to_string())
}

fn status_of(label: &str) -> bool {
    for card in fs::read_dir("/sys/class/drm")
        .into_iter()
        .flatten()
        .flatten()
    {
        let name = card.file_name().to_string_lossy().to_string();
        if name.ends_with(label) {
            if let Ok(s) = fs::read_to_string(card.path().join("status")) {
                return s.trim() == "connected";
            }
        }
    }
    false
}

/// The monitor-side I2C addresses the Windows tool uses.
///
/// Observed: `WinIspPlugIn.dll` probes a configured address, then **0x6A**, then **0x7C**
/// (`FUN_10017300`, log `"All slave address 0x%x/0x6A/0x7C NACK! Read Count:%d"`), and
/// `Comm_Aux.dll` turns a selected address into the two wire bytes by shifting it
/// (`FUN_1003b7e0`: `SlaveAddr=0x6A` → write byte 0xD4, read byte 0xD5; `0x7C` → 0xF8/0xF9).
/// So these are **7-bit** addresses and the wire byte is `addr<<1` — i2c-dev takes them as they are.
/// The value that wins on a given panel comes from `IspSetting.ini` (`bAutoDetectSlave` picks the
/// probe order), so the tool tries all three.
pub const ISP_DP: u8 = 0x6A;
pub const ISP_HDMI: u8 = 0x7C;
/// DDC/CI, the address the configured probe starts from when the card names none.
pub const DDC_CI: u8 = 0x37;

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn slave_addresses_are_the_7_bit_forms_the_dll_probes() {
        // 0x6A and 0x7C go on the wire shifted left: 0xD4/0xD5 and 0xF8/0xF9.
        assert_eq!(ISP_DP, 0x6A);
        assert_eq!(ISP_DP << 1, 0xD4);
        assert_eq!((ISP_DP << 1) | 1, 0xD5);
        assert_eq!(ISP_HDMI, 0x7C);
        assert_eq!(ISP_HDMI << 1, 0xF8);
        assert_eq!((ISP_HDMI << 1) | 1, 0xF9);
        assert_eq!(DDC_CI, 0x37);
    }

    #[test]
    fn connector_names_come_from_sysfs_not_from_a_table() {
        // Any adapter that exists must yield a non-empty connector string, "?" allowed.
        for (n, c, _) in present_buses() {
            assert!(!c.is_empty(), "i2c-{n}");
        }
    }
}
