//! Reading the panel's own identity from its EDID, which is the other half of the
//! compatibility check.
//!
//! The EDID is 128 bytes (extendable to 256/384/512). Bytes 54..126 are four 18-byte
//! **descriptors**; a text descriptor is identified by its 5-byte header, and the ASCII starts at
//! offset 5 of the descriptor:
//!
//! | header | means |
//! |---|---|
//! | `00 00 FC 00` | Monitor name |
//! | `00 00 FD 00` | Range limits |
//! | `00 00 FE 00` | Additional string |
//! | `00 00 FF 00` | Serial number / asset tag |
//! | `00 00 23 F0` | Display product name |
//!
//! Measured on this box (i2c-4, the adapter with the connected display): the EDID opens
//! `00 ff ff ff ff ff ff 00 0d c4 …` — magic plus PNP id `0dc4` = **MSI**.

use crate::bus::Bus;

/// Descriptor headers that carry a printable name, in the order the tool prefers them.
const NAME_HEADERS: [[u8; 4]; 4] = [
    [0x00, 0x00, 0xFC, 0x00], // monitor name
    [0x00, 0x00, 0x23, 0xF0], // display product name
    [0x00, 0x00, 0xFE, 0x00], // additional string
    [0x00, 0x00, 0xFF, 0x00], // serial / asset
];

/// The EDID bytes, read through the adapter the display hangs off.
///
/// `edid` is the standard 128-byte block; a panel with extensions answers the higher addresses too,
/// so `blocks` walks the whole thing. Chunks are 8 bytes: the AUX page carries 16 bytes **total**,
/// and the register offset is one of them, so 16-byte reads are the first ones to fail.
pub fn read_edid(bus: &Bus, blocks: usize) -> Option<Vec<u8>> {
    let mut out = vec![0u8; 128 * blocks];
    for (i, chunk) in out.chunks_mut(8).enumerate() {
        let at = i * 8;
        if bus.write_read(EDID_SLAVE, &[at as u8], chunk).is_err() {
            return if at == 0 { None } else { Some(out) };
        }
    }
    Some(out)
}

/// The EDID slave: 7-bit `0x50` (8-bit `0xA0`).
pub const EDID_SLAVE: u8 = 0x50;

/// The PNP supplier id in bytes 8..10, e.g. `MSI`.
pub fn manufacturer(edid: &[u8]) -> Option<String> {
    let raw = u16::from_le_bytes([*edid.get(8)?, *edid.get(9)?]);
    Some(
        [0u8, 0, 0]
            .iter_mut()
            .enumerate()
            .map(|(i, b)| {
                *b = b'A' + ((raw >> (10 - 5 * i)) & 0x1F) as u8 - 1;
                *b as char
            })
            .collect(),
    )
}

/// The monitor's own name, from the first text descriptor that carries one.
pub fn product_name(edid: &[u8]) -> Option<String> {
    for header in NAME_HEADERS {
        for d in 0..4 {
            let start = 54 + d * 18;
            let desc = edid.get(start..start + 18)?;
            if desc[..4] == header {
                // Text descriptors are space-padded, not NUL-terminated.
                let name = String::from_utf8_lossy(&desc[5..]).trim_end().to_string();
                if !name.is_empty() {
                    return Some(name);
                }
            }
        }
    }
    None
}

/// The EDID's version plus the display's native size, for the panel block in the UI.
///
/// Bytes 21/22 are the screen size in **centimetres** minus 24, so 34 x 14 decodes to
/// 34 + 24 = 58 cm by 14 + 24 = 38 cm — the 34-inch class panel.
pub fn summary(edid: &[u8]) -> Option<String> {
    if edid.len() < 23 || edid[0] != 0x00 || edid[1] != 0xFF {
        return None;
    }
    let cm = |b: u8| if b == 0 { 0 } else { u16::from(b) + 24 };
    Some(format!(
        "EDID {}.{}  {}x{} cm",
        edid[18],
        edid[19],
        cm(edid[21]),
        cm(edid[22])
    ))
}

#[cfg(test)]
mod tests {
    use super::*;

    /// A minimal EDID: magic, MSI's PNP id, and a monitor-name descriptor.
    fn sample() -> Vec<u8> {
        let mut e = vec![0u8; 128];
        e[..8].copy_from_slice(&[0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00]);
        // PNP id: 5 bits per letter, most significant first, A = 1. M=13, S=19, I=9.
        e[8..10].copy_from_slice(&(13u16 << 10 | 19 << 5 | 9).to_le_bytes());
        e[18] = 1;
        e[19] = 4;
        e[21] = 34; // 58 cm
        e[22] = 14; // 38 cm
        let d = 54;
        e[d..d + 5].copy_from_slice(&[0x00, 0x00, 0xFC, 0x00, 0x00]);
        e[d + 5..d + 18].copy_from_slice(b"MAG 341CQP   ");
        e
    }

    #[test]
    fn the_manufacturer_id_unpacks_from_two_bytes() {
        assert_eq!(manufacturer(&sample()).as_deref(), Some("MSI"));
    }

    #[test]
    fn the_monitor_name_comes_from_the_text_descriptor() {
        assert_eq!(product_name(&sample()).as_deref(), Some("MAG 341CQP"));
    }

    #[test]
    fn a_nameless_edid_is_not_an_error() {
        let mut e = sample();
        e[54..58].copy_from_slice(&[0x00, 0x00, 0xFD, 0x00]);
        assert_eq!(product_name(&e), None);
    }

    #[test]
    fn the_summary_reads_the_version_and_native_size() {
        assert_eq!(summary(&sample()).as_deref(), Some("EDID 1.4  58x38 cm"));
        assert_eq!(summary(&[0u8; 4]), None);
    }
}
