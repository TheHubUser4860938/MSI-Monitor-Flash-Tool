//! Firmware image handling: the `.bin` payload, its bank layout, and the `CHK` in the filename.
//!
//! Established this pass. The loader is `FUN_10007b80` (called by `IspFlash` before
//! InitCommunication): it opens the file as a binary `ifstream`, takes the size with
//! `seekg(0,end)`/`tellg`, allocates `bankCount * 0x10000` bytes zeroed to 0xFF, then per bank
//! seeks to `bank * 0x10000` and reads that bank. So:
//!
//! * the image is **flat**: file offset = `bank * 0x10000 + in-bank offset`, no record framing;
//! * the file size must be a multiple of `0x10000`, or at most one bank
//!   (`FUN_10022150`: `(size & 0xFFFF) && size > 0x10000` → `"Bin file length:0x%x invalid!"`, 0xd52);
//! * between file and wire there is **no transformation** — no byte-swap, no RLE, no repadding.
//!   The only change is that an all-0xFF page is skipped and a page with an 0xFF tail is written
//!   short (`FUN_1003d760`).
//!
//! Two blocks live at the end of the last bank, and both are copied into flash:
//!
//! * the **key** at `lastBankBase + 0xFFEC` — a big-endian u32 length then that many bytes, max
//!   0x4C4 (`FUN_10022150`, `"Key length from bin:0x%x"`, `"Key length in bin invalid!"` = 0xdac);
//! * the **signature** record, 1232 bytes, magic `'ZSTR'` (`0x5254535A`), key length at +0x0C,
//!   signature length at +0x10, key at +0x14, signature after the key (`FUN_10020110`,
//!   codes 0xd62/0xd6f/0xd70).
//!
//! The four hex digits in MSI's filename are `sum(all bytes) & 0xFFFF` over the whole padded
//! file — measured exact on both shipped images. That is a packaging convention: no code in the
//! plugin, `Comm.dll` or the exe computes it. The tool's own `bCheckCHK` is a different thing:
//! an 8-bit XOR of a DDC/CI response seeded with `0x50` (see [`ddcci`]).

use std::fmt;
use std::fs;
use std::io;
use std::path::{Path, PathBuf};

/// The bank stride, in bytes and in the file: `bank * 0x10000` (observed in the loader's seek).
pub const BANK_SIZE: usize = 0x1_0000;
/// The key block sits at `lastBankBase + 0xFFEC` — 20 bytes from the end of the last bank.
pub const KEY_OFFSET_IN_BANK: usize = 0xFFEC;
/// The longest key the tool accepts.
pub const KEY_MAX: usize = 0x4C4;
/// `'ZSTR'`, the signature record's magic.
pub const SIG_MAGIC: u32 = 0x5254_535A;
/// The signature record's size.
pub const SIG_RECORD: usize = 0x4D0;

/// The 8-bit-wide checksum over the whole file, truncated to 16 bits.
///
/// Observed: equals the filename suffix of both shipped images exactly.
pub fn chk(bytes: &[u8]) -> u16 {
    let mut sum: u32 = 0;
    for b in bytes {
        sum += u32::from(*b);
    }
    (sum & 0xFFFF) as u16
}

/// A firmware image as the tool sees it.
pub struct Image {
    pub path: PathBuf,
    pub bytes: Vec<u8>,
    /// Version as written in the filename, e.g. `009` in `…_X28_FW.009_DC2F.bin`.
    pub version: Option<String>,
    /// Checksum as written in the filename, if present.
    pub name_chk: Option<u16>,
    /// One past the last byte that is not 0xFF.
    pub payload_len: usize,
}

impl Image {
    pub fn open(path: impl AsRef<Path>) -> io::Result<Image> {
        let path = path.as_ref().to_path_buf();
        let bytes = fs::read(&path)?;
        let payload_len = payload_end(&bytes);
        let (version, name_chk) = parse_name(&path);
        Ok(Image {
            path,
            bytes,
            version,
            name_chk,
            payload_len,
        })
    }

    pub fn chk(&self) -> u16 {
        chk(&self.bytes)
    }

    /// True when the checksum in the filename equals the checksum of the bytes.
    ///
    /// A file with no checksum in its name cannot be checked, and reports `None`.
    pub fn chk_ok(&self) -> Option<bool> {
        self.name_chk.map(|want| want == self.chk())
    }

    pub fn payload(&self) -> &[u8] {
        &self.bytes[..self.payload_len]
    }

    pub fn size(&self) -> usize {
        self.bytes.len()
    }

    /// Banks in the file: the size rounded up to the bank stride.
    pub fn banks(&self) -> usize {
        self.bytes.len().div_ceil(BANK_SIZE).max(1)
    }

    /// The tool's own size rule (`FUN_10022150`).
    pub fn size_ok(&self) -> bool {
        self.bytes.len() <= BANK_SIZE || self.bytes.len().is_multiple_of(BANK_SIZE)
    }

    /// One bank's window. `None` past the end.
    pub fn bank(&self, bank: usize) -> Option<&[u8]> {
        let start = bank.checked_mul(BANK_SIZE)?;
        self.bytes.get(start..start + BANK_SIZE)
    }

    /// `FUN_1001e4c0`: the bytes worth programming in a bank — one past the last non-0xFF byte.
    ///
    /// A bank that is entirely erased has nothing to write.
    pub fn bank_pro_len(&self, bank: usize) -> usize {
        match self.bank(bank) {
            Some(w) => w
                .iter()
                .rposition(|&b| b != 0xFF)
                .map_or(0, |last| last + 1),
            None => 0,
        }
    }

    /// The key block, if the last bank carries one.
    pub fn key(&self) -> Option<&[u8]> {
        let last = self.banks().checked_sub(1)?;
        let base = last * BANK_SIZE + KEY_OFFSET_IN_BANK;
        let len = self.be_u32(base)? as usize;
        if len == 0 || len > KEY_MAX {
            return None;
        }
        self.bytes.get(base + 4..base + 4 + len)
    }

    /// The signature record, if present at the start of the last bank's tail area.
    pub fn signature(&self) -> Option<Signature<'_>> {
        let last = self.banks().checked_sub(1)?;
        let base = last * BANK_SIZE;
        // The tool asks the monitor where the signature lives; the shipped images carry the
        // record in the same tail area as the key, so probe the key block's own header.
        let rec = self.bytes.get(base + KEY_OFFSET_IN_BANK - 0x14..)?;
        if self.be_u32(base + KEY_OFFSET_IN_BANK - 0x14)? != SIG_MAGIC {
            return None;
        }
        Some(Signature { rec })
    }

    fn be_u32(&self, at: usize) -> Option<u32> {
        let b = self.bytes.get(at..at + 4)?;
        Some(u32::from_be_bytes([b[0], b[1], b[2], b[3]]))
    }
}

/// The `'ZSTR'` signature record.
pub struct Signature<'a> {
    rec: &'a [u8],
}

impl<'a> Signature<'a> {
    pub fn magic(&self) -> u32 {
        u32::from_le_bytes(self.rec[0..4].try_into().unwrap_or([0; 4]))
    }
    pub fn key_len(&self) -> u32 {
        u32::from_le_bytes(self.rec[0x0c..0x10].try_into().unwrap_or([0; 4]))
    }
    pub fn sig_len(&self) -> u32 {
        u32::from_le_bytes(self.rec[0x10..0x14].try_into().unwrap_or([0; 4]))
    }
    pub fn key(&self) -> &[u8] {
        let n = self.key_len() as usize;
        &self.rec[0x14..0x14 + n.min(SIG_RECORD - 0x14)]
    }
}

impl fmt::Display for Image {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(
            f,
            "{} v{} size={:#x} banks={} payload={:#x} chk={:04X}",
            self.path.display(),
            self.version.as_dashed(),
            self.bytes.len(),
            self.banks(),
            self.payload_len,
            self.chk()
        )
    }
}

trait Dashed {
    fn as_dashed(&self) -> String;
}

impl Dashed for Option<String> {
    fn as_dashed(&self) -> String {
        self.clone().unwrap_or_else(|| "-".to_string())
    }
}

/// Index one past the last byte that is not 0xFF. An all-0xFF file has a zero-length payload.
fn payload_end(bytes: &[u8]) -> usize {
    let mut i = bytes.len();
    while i > 0 && bytes[i - 1] == 0xFF {
        i -= 1;
    }
    i
}

/// Pull `FW.<version>_<chk>` out of an MSI image filename.
///
/// Observed grammar: `MSI_<model>_<panel>_FW.<version>_<CHK>.bin`.
fn parse_name(path: &Path) -> (Option<String>, Option<u16>) {
    let stem = path
        .file_stem()
        .map(|s| s.to_string_lossy().to_string())
        .unwrap_or_default();
    let version = stem
        .rsplit("FW.")
        .next()
        .and_then(|rest| rest.split(['_', '.']).next())
        .filter(|s| !s.is_empty() && s.chars().all(|c| c.is_ascii_digit()))
        .map(str::to_string);
    let name_chk = stem
        .rsplit('_')
        .next()
        .filter(|s| s.len() == 4 && s.chars().all(|c| c.is_ascii_hexdigit()))
        .and_then(|s| u16::from_str_radix(s, 16).ok());
    (version, name_chk)
}

#[cfg(test)]
mod tests {
    use super::*;

    fn dir() -> PathBuf {
        Path::new(env!("CARGO_MANIFEST_DIR")).join("../vendor")
    }

    fn open(n: &str) -> Image {
        Image::open(dir().join(n)).expect("shipped image")
    }

    #[test]
    fn filename_checksum_matches_both_shipped_images() {
        for (name, want, size, payload) in [
            (
                "MSI_MAG_341CQP_QD-OLED_X28_FW.009_DC2F.bin",
                0xDC2F,
                1_966_080,
                0x1D_7200,
            ),
            (
                "MSI_MAG_341CQP_QD-OLED_X28_FW.012_4023.bin",
                0x4023,
                1_835_008,
                0x1B_7000,
            ),
        ] {
            let img = open(name);
            assert_eq!(img.size(), size, "{name} size");
            assert_eq!(img.chk(), want, "{name} sum16");
            assert_eq!(img.name_chk, Some(want), "{name} name parse");
            assert_eq!(img.payload_len, payload, "{name} payload end");
            assert_eq!(img.chk_ok(), Some(true), "{name} chk_ok");
        }
    }

    #[test]
    fn banks_are_64k_slabs_and_the_size_rule_holds() {
        let a = open("MSI_MAG_341CQP_QD-OLED_X28_FW.009_DC2F.bin");
        assert_eq!(a.banks(), 30);
        assert!(a.size_ok(), "0x1E0000 is a multiple of 0x10000");
        let b = open("MSI_MAG_341CQP_QD-OLED_X28_FW.012_4023.bin");
        assert_eq!(b.banks(), 28);
        assert!(b.size_ok());
        assert_eq!(a.bank(0).map(|w| w.len()), Some(BANK_SIZE));
        assert_eq!(a.bank(99).map(|w| w.len()), None);
    }

    #[test]
    fn pro_len_is_measured_from_the_erased_tail() {
        let a = open("MSI_MAG_341CQP_QD-OLED_X28_FW.009_DC2F.bin");
        // The last bank ends at 0x1D7200; bank 29 starts at 0x1D0000.
        assert_eq!(a.bank_pro_len(29), 0x7200, "measured payload boundary");
        assert_eq!(
            a.bank_pro_len(0),
            0xB8_AC,
            "bank 0 has an 0xFF tail of its own"
        );
        assert_eq!(a.bank_pro_len(0x13), BANK_SIZE, "the data bank is full");
        assert_eq!(a.bank_pro_len(99), 0, "past the image");
    }

    #[test]
    fn the_two_shipped_images_share_their_first_40_bytes() {
        let a = open("MSI_MAG_341CQP_QD-OLED_X28_FW.009_DC2F.bin");
        let b = open("MSI_MAG_341CQP_QD-OLED_X28_FW.012_4023.bin");
        assert_eq!(&a.bytes[..40], &b.bytes[..40], "the prologue is shared");
        assert_ne!(a.bytes[40], b.bytes[40], "the payload starts at 40");
    }

    #[test]
    fn the_model_and_panel_strings_are_where_the_tool_reads_them() {
        // Observed by the info path: the user-data bank carries the model, panel and build date.
        let a = open("MSI_MAG_341CQP_QD-OLED_X28_FW.009_DC2F.bin");
        assert!(
            a.bytes.windows(13).any(|w| w == b"MAG 341CQ X28"),
            "model string present"
        );
        assert!(
            a.bytes.windows(9).any(|w| w == b"FW.009 20"),
            "build stamp present"
        );
    }

    #[test]
    fn key_block_is_big_endian_length_then_bytes() {
        // A synthesised image: the shipped ones carry an erased key area.
        let mut bytes = vec![0xFFu8; BANK_SIZE];
        bytes[0] = 0x01;
        let base = KEY_OFFSET_IN_BANK;
        bytes[base..base + 4].copy_from_slice(&3u32.to_be_bytes());
        bytes[base + 4] = 0xaa;
        bytes[base + 5] = 0xbb;
        bytes[base + 6] = 0xcc;
        let img = Image {
            path: PathBuf::from("t.bin"),
            bytes,
            version: None,
            name_chk: None,
            payload_len: 0,
        };
        assert_eq!(img.key(), Some(&[0xaa, 0xbb, 0xcc][..]));
    }

    #[test]
    fn an_erased_key_area_reads_as_no_key() {
        let a = open("MSI_MAG_341CQP_QD-OLED_X28_FW.009_DC2F.bin");
        assert_eq!(a.key(), None, "the shipped images carry no key block");
    }

    #[test]
    fn name_without_a_checksum_is_not_a_failure() {
        let (v, c) = parse_name(Path::new("firmware.bin"));
        assert_eq!(v, None);
        assert_eq!(c, None);
        let (v, c) = parse_name(Path::new("MSI_X_FW.012_4023.bin"));
        assert_eq!(v.as_deref(), Some("012"));
        assert_eq!(c, Some(0x4023));
    }

    #[test]
    fn chk_and_payload_boundaries_are_arithmetic() {
        assert_eq!(payload_end(&[0xFF, 0xFF, 0xFF]), 0);
        assert_eq!(payload_end(&[0x01, 0xFF, 0xFF]), 1);
        assert_eq!(payload_end(&[]), 0);
        assert_eq!(chk(&[0xFF, 0x01]), 0x0100);
        assert_eq!(chk(&[0xFF; 0x10000]), 0x0000);
    }
}
