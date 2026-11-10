# msifw — MSI monitor flash tool, native Linux

A Linux-native reimplementation of **MSI Firmware Update Utility V1.0.6**, built by
reverse-engineering the Windows binaries rather than by wrapping them. No Wine, no
boot-a-Windows-to-bump-a-version.

Everything below is either **observed** (read out of the vendor binaries, with the address
attached) or **measured** (run against the two shipped firmware images on this box). Where the
decompiler and the bytes disagreed, the bytes won, and that is said out loud.

## What is on the wire

The Windows tool is three pieces:

| piece | what it is | what we recovered |
|---|---|---|
| `MSI Firmware Update Utility.exe` | the MFC GUI | the verbs, the INI it writes to `%TEMP%\ISPToolForMsi\` |
| `WinIspPlugIn.dll` | the ISP engine | the whole prepare sequence, the bank loop, `Flash.dat`, `IspSetting.ini` |
| `Comm.dll` | the transport | the `IComm` vtable — every slot's name is **proven** by `GetProcAddress` |

The panel is reached over **DisplayPort AUX**, which the kernel exposes as an I2C adapter
(`/dev/i2c-N`), so a Linux tool needs nothing beyond i2c-dev.

### The shape of it

* The engine speaks a **SPI-bridge register file** on the scaler, not "read a flash page": write
  an opcode and an address into indexed registers, trigger, poll. Bridge registers: `0x60` trigger,
  `0x61` opcode, `0x64/65/66` address, `0x67/68/69` the RDID answer, `0x6d` mode, `0x6f` issue,
  `0x70` data FIFO, `0x71` page length, `0x72/73/74` CRC range, `0x75` CRC result.
* **Flash geometry**: bank `0x10000` → sector `0x1000` (16 per bank) → page `0x100`.
* **The image is raw.** File offset = `bank * 0x10000 + in-bank offset`, padded with `0xFF`, and
  there is **no transformation** between file and wire beyond skipping all-`0xFF` pages. Size must
  be a multiple of `0x10000` (code `0xd52` if not).
* **`ProLen` is derived, not stored**: one past the last non-`0xFF` byte of the bank, so an erased
  tail is not rewritten.
* **Verify is a checksum byte, not a read-back** — and it is the **bitwise OR of the range**, not a
  polynomial CRC. Read from the raw disassembly of `FUN_1001c910` after Ghidra mangled its SSE body:
  eight bit-planes, rebuilt one lane at a time. It proves the range arithmetic, not the flash.
* **Address width** is bit 5 of MCU register `0x77` (the scaler window uses `0x85a`); the trigger
  pair is `0xA0/0xA1` in 4-byte mode, `0xB8/0xB9` in 3-byte.
* **The flash part is chosen by a string key**: the 8 ID bytes formatted `"%02x,"` each — `A25L020`
  is `"37,30,12,11,00,00,00,00,"` — looked up in `Flash.dat`, falling back to the row named
  `Default` with the log line `Flash MisMatch Use Default Value`.
* **`Flash.dat`** is a header (magic `0x07020509`, format 2, **150** records) plus packed records;
  `banks` is capacity in 64 KiB units, checked against seven datasheet sizes. Its command strings
  are a **byte-code program** (verb 0 sleep · 3 WriteReg · 6 WriteMcuReg · 0xd poll · 0x10/0x11
  WriteRegEx/BitEx · … 0x1a Write32BitRegEx), not an opcode list.
* **`IspSetting.ini` is not one flat namespace**: 186 read sites across **19 sections**
  (`ISP_Basic` carries 30 keys), and ints are parsed **base 0** (`_wcstoi64(buf,0,0)`), so `0x…` is
  hex. A missing INI is not an error — every read carries its own default literal, so the defaults
  *are* the built-in configuration.
* **The tool asks the panel where things live** rather than hard-coding it: DDC/CI on slave `0x6E`
  (VCP `0x71` in, `0x51` out) and a mailbox on `0x6A` register `0xCA` — one sub-command byte out,
  five bytes back, byte 0 echoing `0xCA`, bytes 1..4 a little-endian address.

## Verbs

```
msifw [-b BUS] [-s CARD.ini] [--flash-dat Flash.dat] [--slave 0x6A] <verb>

buses     List display links that have an I2C adapter        inspect   Show a .bin
card      Show the model card in force                        part      The Flash.dat row the panel selects
info      FW version the monitor reports (GetFWInfo)          status    Boot code, MCU type, address mode, start bank
fwinfo    The FW-info block over DDC/CI                       version   The paged user version → ISPVersion.txt
key       Ask where the key lives, read the block             dump      Flash → file
erase     One bank, every bank, or the chip                   flash     A .bin, bank by bank
reset     Reset the MCU
```

`buses` on the dev box, live:

```
i2c-1   NVIDIA i2c adapter 1 at 1:00.0 connected
i2c-5   NVIDIA i2c adapter 6 at 1:00.0 -
```

`inspect` on both shipped images, measured:

```
MSI_MAG_341CQP_QD-OLED_X28_FW.009_DC2F.bin v009 size=0x1e0000 banks=30 payload=0x1d7200 chk=DC2F  chk OK
MSI_MAG_341CQP_QD-OLED_X28_FW.012_4023.bin v012 size=0x1c0000 banks=28 payload=0x1b7000 chk=4023  chk OK
```

The four hex digits in MSI's filename are `sum(all bytes) & 0xFFFF` over the **whole padded file** —
exact on both. That is a packaging convention: **no code in the plugin, `Comm.dll` or the exe
computes it.** The tool's own `bCheckCHK` is a different thing entirely — an 8-bit XOR of a DDC/CI
response seeded with `0x50`.

## Building

```
cargo build --release && cargo test
```

58 tests, no runtime dependencies beyond `libc` and `clap`. The tests that read the shipped images
look for them in `../vendor`; the protocol tests run against an in-memory fake bridge, so they need
no monitor.

## What is not settled

1. **Nothing has been clocked on hardware yet.** Every constant here is decompiled. The first live
   session is the next source of truth, and these notes are the thing it will contradict.
2. The image's **40-byte prologue** is byte-identical across the two builds (the first difference is
   at offset 40), and its first dword `0x6A7CB86D` recurs at `0x20000` — so it is reset code, not a
   magic. Field maps the decompiler proposed (version at +4, CHK at +8, length at +12) do not match
   the bytes at those offsets.
3. `FUN_1001f0e0` decodes a bank count from file offset `0x7004` as `(b0>>6) + dword*4`; both
   samples say **399**, which is neither image's bank count (30 / 28). That reader is for a
   different file class — EDID, or `dumpflash.bin`.
4. `part_class` (1..4) and `v48` in `Flash.dat`; `mode == 2` appears in every shipped row.
5. The comm-mode selector behind `DAT_1021ae1c` (1 = AUX, 2, 3): which setting picks it.

The full audit trail — every claim with the function address it came from — is in `../re2/JOURNAL.md`.

— Clio
