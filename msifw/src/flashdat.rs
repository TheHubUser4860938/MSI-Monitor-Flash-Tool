//! `PlugIn/Flash.dat` — the flash-part table.
//!
//! Layout verified this pass two independent ways: the record parser `FUN_1000dc20` and the loader
//! `FUN_1000df70` in `WinIspPlugIn.dll` (decompiled, plus the raw call arguments read out of
//! `.text`), and a byte walk of the shipped file that tiles it exactly — 150 records, last record
//! ending at the file's last byte. See `re2/findings-flashdat.md`.
//!
//! ```text
//! header  u32 magic 0x07020509 · u16 format 2 · u16 record_count 150
//! record  u32 id_lo · u32 id_hi · u32 zero · name cstr
//!         u16 banks · u8 class · u32 sector_erase_mode · u32 v48
//!         u32 status_enable_wp · u32 status_disable_wp · u32 special_command
//!         u32 four_byte_address · ops cstr · u32 safeguard_present
//!         safeguard_a cstr · safeguard_b cstr
//! ```
//!
//! Two things a reader gets wrong without the parser:
//!
//! * The record starts at **file offset 8**, not 0, and the fields are packed after a
//!   NUL-terminated name, so the record length is variable (53 to 9,779 bytes here).
//! * The command string is a **byte-code program**, not an opcode list. `FUN_10043160` runs it:
//!   each instruction's first byte is a verb with its own length — `0` sleep (u16 ms, 3 bytes),
//!   `6` write register (reg, value, 3 bytes), `0xd` poll (reg, mask, expected, retries u16,
//!   delay u16, 8 bytes), and so on. `06,60,20` is one instruction, not three opcodes.

use std::io;

/// `0x07020509`, checked by the loader (`FUN_1000df70`: `if (iVar3 == 0x7020509)`).
pub const MAGIC: u32 = 0x0702_0509;

/// One row.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FlashPart {
    /// The low ID word; 0 in 149 of the 150 shipped rows (only `XT25F04B` sets it).
    pub id_lo: u32,
    /// The part ID in wire order: `A25L020` is `0x11123037`, i.e. bytes `37,30,12,11`.
    pub id_hi: u32,
    pub name: String,
    /// Banks in the part; the capacity is `banks * 0x10000` (checked against datasheet sizes of
    /// `A25L020` 4 = 256 KiB, `AT25SF041` 8 = 512 KiB, `EN25Q128A` 256 = 16 MiB,
    /// `MX25U51245G` 1024 = 64 MiB).
    pub banks: u16,
    /// A part-class flag, observed values 1..4 (histogram 65/40/43/2). Semantics unknown.
    pub part_class: u8,
    /// Sector-erase mode, observed 1 and 2.
    pub sector_erase_mode: u32,
    /// A value the engine pairs with `part_class == 2` in one test (`FUN_1003cb60`); unknown.
    pub v48: u32,
    /// The status-register value for the Enable-WP command.
    pub status_enable_wp: u32,
    /// The status-register value for the Disable-WP command.
    pub status_disable_wp: u32,
    /// Non-zero when this row carries a special command sequence (`FUN_1003cb60` gates on it).
    pub special_command: u32,
    /// Non-zero when the part wants 4-byte addresses.
    pub four_byte_address: u32,
    /// The command program, as the comma-separated text the file stores.
    pub commands: String,
    /// Non-zero when a safe-guard command sequence follows.
    pub safeguard_present: u32,
    /// The two safe-guard programs; the caller's flag picks which (`FUN_1001dda0`).
    pub safeguard_a: String,
    pub safeguard_b: String,
}

impl FlashPart {
    /// Flash capacity in bytes.
    pub fn capacity(&self) -> u32 {
        u32::from(self.banks) * 0x1_0000
    }

    /// The ID bytes in wire order, the form the engine formats its lookup key with (`"%02x,"`).
    pub fn id_bytes(&self) -> [u8; 8] {
        let hi = self.id_hi.to_le_bytes();
        let lo = self.id_lo.to_le_bytes();
        [hi[0], hi[1], hi[2], hi[3], lo[0], lo[1], lo[2], lo[3]]
    }

    /// The engine's map key: each ID byte as two hex digits and a comma, `A25L020` →
    /// `"37,30,12,11,00,00,00,00,"` (observed: `FUN_1000e7a0`, `"%02x,"` × 8).
    pub fn key(&self) -> String {
        self.id_bytes()
            .iter()
            .map(|b| format!("{b:02x},"))
            .collect()
    }

    /// The command program as bytes.
    pub fn opcodes(&self) -> Option<Vec<u8>> {
        parse_opcodes(&self.commands)
    }

    /// The row's read command: the first verb-6 write in the program (`FUN_1003eda0`).
    pub fn read_opcode(&self) -> Option<u8> {
        self.reg_write_any(0x60)
    }

    /// The row's erase command: the first write to the command register `0x60` in its program.
    ///
    /// Observed two ways: the decoded `A25L020` program opens `6,0x60,0x20` → write reg
    /// `0x60 = 0x20`, the sector-erase opcode; and the register path `FUN_1003e610` writes
    /// `0x61 ← 0x20` for the same command. The row's value is the data-driven one.
    pub fn erase_opcode(&self) -> Option<u8> {
        self.reg_write(0x60)
    }

    /// The first write to `reg` in the program, walking the verb lengths.
    fn reg_write(&self, reg: u8) -> Option<u8> {
        self.reg_write_any(reg)
    }

    fn reg_write_any(&self, reg: u8) -> Option<u8> {
        let v = self.opcodes()?;
        let mut i = 0;
        while i < v.len() {
            match v[i] {
                0 => i += 3, // sleep, u16 ms
                6 if i + 2 < v.len() => {
                    if v[i + 1] == reg {
                        return Some(v[i + 2]);
                    }
                    i += 3;
                }
                6 => i += 3,
                3 => i += 3,
                4 => i += 4,
                5 => i += 2,
                7 => i += 2,
                8 => i += 4,
                9 => i += 3,
                0xc => i += 2,
                0xd => i += 8,
                0xe => i += 5,
                0xf => i += 4,
                0x10 => i += 4,
                0x11 => i += 5,
                0x12 => i += 3,
                0x13 => i += 7,
                0x15 => i += 6,
                0x17 => i += 5,
                0x19 => i += 6,
                0x1a => i += 9,
                10 | 11 => break,
                _ => i += 1,
            }
        }
        None
    }
}

/// Parse the comma-separated hex program into bytes. Trailing commas are tolerated: every
/// shipped list ends with one.
pub fn parse_opcodes(s: &str) -> Option<Vec<u8>> {
    if s.is_empty() {
        return Some(Vec::new());
    }
    s.split(',')
        .filter(|t| !t.trim().is_empty())
        .map(|t| u8::from_str_radix(t.trim(), 16).ok())
        .collect()
}

#[derive(Debug, Clone)]
pub struct FlashDat {
    pub format: u16,
    pub declared_count: u16,
    pub parts: Vec<FlashPart>,
}

impl FlashDat {
    pub fn load(path: impl AsRef<std::path::Path>) -> io::Result<FlashDat> {
        FlashDat::parse(&std::fs::read(path)?)
    }

    pub fn parse(b: &[u8]) -> io::Result<FlashDat> {
        if b.len() < 8 {
            return Err(io::Error::new(
                io::ErrorKind::UnexpectedEof,
                "Flash.dat: short header",
            ));
        }
        let magic = u32::from_le_bytes(b[0..4].try_into().unwrap());
        if magic != MAGIC {
            return Err(io::Error::new(
                io::ErrorKind::InvalidData,
                format!("Flash.dat: magic {magic:#010x}, expected {MAGIC:#010x}"),
            ));
        }
        let format = u16::from_le_bytes(b[4..6].try_into().unwrap());
        let declared = u16::from_le_bytes(b[6..8].try_into().unwrap());
        // The loader walks by offset and stops when the cursor reaches the file size; the header's
        // count is stored, not used to drive the loop (observed in FUN_1000df70).
        let mut parts = Vec::with_capacity(declared as usize);
        let mut p = 8usize;
        while p < b.len() {
            let (part, next) = parse_one(b, p)?;
            parts.push(part);
            p = next;
        }
        Ok(FlashDat {
            format,
            declared_count: declared,
            parts,
        })
    }

    /// Find the row for an ID read from the monitor.
    ///
    /// The engine looks the row up **by name** when the card names a part (`bAutoDetectFlash` off,
    /// observed at `FUN_1001d560` via `strSpecifiedFlashName`), and by the ID-key string
    /// otherwise, falling back to `Default`. Two shipped rows share an ID (`ZB25VQ80A` and
    /// `ZB25VQ80B`, both `0x1314605e`, differing only in `part_class`), so an ID lookup is
    /// genuinely ambiguous and returns the first.
    pub fn find(&self, id: [u8; 4]) -> Option<&FlashPart> {
        // The engine's key string is the row's 8 ID bytes formatted as `"%02x,"` (`FUN_1000e7a0`),
        // and the bridge supplies three of them, repeating the first as a fourth. Matching on the
        // three real bytes is what makes `AT25SF041` (row bytes `1f 84 01 12`) answer to an
        // `1f,84,01` read.
        let want = [id[0], id[1], id[2]];
        self.parts.iter().find(|p| {
            let b = p.id_bytes();
            b[0] == want[0] && b[1] == want[1] && b[2] == want[2]
        })
    }

    pub fn find_name(&self, name: &str) -> Option<&FlashPart> {
        self.parts.iter().find(|p| p.name == name)
    }

    /// The `Default` row (all-zero ID) the engine falls back to.
    pub fn default_part(&self) -> Option<&FlashPart> {
        self.find_name("Default")
    }
}

fn cstr(b: &[u8], p: usize) -> io::Result<(String, usize)> {
    let end = b[p..].iter().position(|&c| c == 0).ok_or_else(|| {
        io::Error::new(
            io::ErrorKind::UnexpectedEof,
            "Flash.dat: unterminated string",
        )
    })?;
    Ok((
        String::from_utf8_lossy(&b[p..p + end]).into_owned(),
        p + end + 1,
    ))
}

fn u16_at(b: &[u8], p: usize) -> io::Result<u16> {
    b.get(p..p + 2)
        .map(|s| u16::from_le_bytes(s.try_into().unwrap()))
        .ok_or_else(|| io::Error::new(io::ErrorKind::UnexpectedEof, "Flash.dat: short record"))
}

fn u32_at(b: &[u8], p: usize) -> io::Result<u32> {
    b.get(p..p + 4)
        .map(|s| u32::from_le_bytes(s.try_into().unwrap()))
        .ok_or_else(|| io::Error::new(io::ErrorKind::UnexpectedEof, "Flash.dat: short record"))
}

fn parse_one(b: &[u8], s: usize) -> io::Result<(FlashPart, usize)> {
    let id_lo = u32_at(b, s)?;
    let id_hi = u32_at(b, s + 4)?;
    let (_pad, p) = (u32_at(b, s + 8)?, s + 12);
    let (name, p) = cstr(b, p)?;
    // The fixed block, at the offsets the record parser uses (value+0x40 … value+0x58).
    let banks = u16_at(b, p)?;
    let part_class = *b
        .get(p + 2)
        .ok_or_else(|| io::Error::new(io::ErrorKind::UnexpectedEof, "Flash.dat: short record"))?;
    let sector_erase_mode = u32_at(b, p + 3)?;
    let v48 = u32_at(b, p + 7)?;
    let status_enable_wp = u32_at(b, p + 0xb)?;
    let status_disable_wp = u32_at(b, p + 0xf)?;
    let special_command = u32_at(b, p + 0x13)?;
    let four_byte_address = u32_at(b, p + 0x17)?;
    let mut q = p + 0x1b;
    let (commands, nq) = cstr(b, q)?;
    q = nq;
    let safeguard_present = u32_at(b, q)?;
    q += 4;
    let (safeguard_a, nq) = cstr(b, q)?;
    q = nq;
    let (safeguard_b, nq) = cstr(b, q)?;
    q = nq;
    Ok((
        FlashPart {
            id_lo,
            id_hi,
            name,
            banks,
            part_class,
            sector_erase_mode,
            v48,
            status_enable_wp,
            status_disable_wp,
            special_command,
            four_byte_address,
            commands,
            safeguard_present,
            safeguard_a,
            safeguard_b,
        },
        q,
    ))
}

#[cfg(test)]
mod tests {
    use super::*;

    fn table() -> FlashDat {
        FlashDat::load(concat!(
            env!("CARGO_MANIFEST_DIR"),
            "/../vendor/PlugIn/Flash.dat"
        ))
        .expect("shipped Flash.dat")
    }

    #[test]
    fn the_header_is_read() {
        let t = table();
        assert_eq!(t.format, 2);
        assert_eq!(t.declared_count, 150);
        assert_eq!(t.parts.len(), 150, "declared count equals the rows walked");
    }

    #[test]
    fn a_bad_magic_is_reported_not_tolerated() {
        let mut bytes = std::fs::read(concat!(
            env!("CARGO_MANIFEST_DIR"),
            "/../vendor/PlugIn/Flash.dat"
        ))
        .unwrap();
        bytes[0] ^= 0xff;
        assert!(FlashDat::parse(&bytes).is_err());
    }

    #[test]
    fn the_walk_tiles_the_file() {
        // Records are variable length and packed; the loader stops at the file size.
        let t = table();
        assert_eq!(t.parts.first().unwrap().name, "A25L020");
        assert_eq!(t.parts.last().unwrap().name, "ZB25VQ80B");
        assert_eq!(t.declared_count as usize, t.parts.len());
    }

    #[test]
    fn banks_are_64k_units_and_match_the_parts_capacity() {
        let t = table();
        let want: [(&str, u32); 7] = [
            ("A25L020", 256 * 1024),
            ("A25L040", 512 * 1024),
            ("A25L080", 1024 * 1024),
            ("A25L032M", 4 * 1024 * 1024),
            ("AT25SF041", 512 * 1024),
            ("EN25Q128A", 16 * 1024 * 1024),
            ("MX25U51245G", 64 * 1024 * 1024),
        ];
        for (name, bytes) in want {
            let p = t.find_name(name).unwrap_or_else(|| panic!("{name}"));
            assert_eq!(p.capacity(), bytes, "{name} capacity");
        }
    }

    #[test]
    fn the_key_is_the_id_bytes_as_hex_pairs() {
        let t = table();
        assert_eq!(
            t.find_name("A25L020").unwrap().key(),
            "37,30,12,11,00,00,00,00,"
        );
        assert_eq!(t.default_part().unwrap().key(), "00,00,00,00,00,00,00,00,");
    }

    #[test]
    fn lookup_by_id_works_and_the_default_row_is_the_zero_id() {
        let t = table();
        // AT25SF041's id_hi is 0x1201841f, i.e. the wire bytes 1f 84 01 12.
        assert_eq!(
            t.find([0x1f, 0x84, 0x01, 0x1f]).unwrap().name,
            "AT25SF041",
            "matched on 24 bits"
        );
        assert_eq!(t.find([0, 0, 0, 0]).unwrap().name, "Default");
    }

    #[test]
    fn two_rows_share_one_id_so_id_lookup_is_first_wins() {
        let t = table();
        let hits: Vec<_> = t.parts.iter().filter(|p| p.id_hi == 0x1314_605e).collect();
        assert_eq!(hits.len(), 2, "ZB25VQ80A and ZB25VQ80B");
        assert_eq!(t.find([0x5e, 0x60, 0x14, 0x5e]).unwrap().name, hits[0].name);
    }

    #[test]
    fn commands_are_a_program_not_a_flat_list() {
        assert_eq!(
            parse_opcodes("06,60,20,0d").unwrap(),
            vec![0x06, 0x60, 0x20, 0x0d]
        );
        assert_eq!(parse_opcodes("").unwrap(), Vec::<u8>::new());
        assert!(parse_opcodes("06,zz").is_none());
        let t = table();
        // 15 rows carry a program; each opens with the WREN register write `06,61,06`.
        let listed: Vec<_> = t.parts.iter().filter(|p| !p.commands.is_empty()).collect();
        assert_eq!(listed.len(), 15, "rows carrying a program");
        for p in &listed {
            let v = p
                .opcodes()
                .unwrap_or_else(|| panic!("{} program parses", p.name));
            assert!(v.len() >= 3, "{} program is a sequence", p.name);
        }
        // The erase command is the write to register 0x61, not a list position.
        assert_eq!(
            t.find_name("A25L020").unwrap().erase_opcode(),
            Some(0x20),
            "sector erase"
        );
    }

    #[test]
    fn rows_that_carry_every_field_keep_them() {
        let t = table();
        let g = t.find_name("GD25M21_B").expect("row");
        assert_eq!(g.banks, 4);
        assert_eq!(
            g.safeguard_present, 1,
            "this row carries a safe-guard program"
        );
        assert!(!g.safeguard_a.is_empty() && !g.safeguard_b.is_empty());
        assert_eq!(g.commands.matches(',').count(), 124, "124 instructions");
        assert_eq!(
            g.status_enable_wp, 0x2ff,
            "a 16-bit status value, not a byte"
        );
        assert_eq!(g.status_disable_wp, 0x200);
    }

    #[test]
    fn the_status_values_are_the_wp_register_values() {
        let t = table();
        for p in &t.parts {
            assert!(p.banks > 0, "{} banks", p.name);
            assert!(
                (1..=4).contains(&p.part_class),
                "{} class {}",
                p.name,
                p.part_class
            );
            assert!(p.capacity() >= 0x1_0000, "{} capacity", p.name);
        }
    }
}
