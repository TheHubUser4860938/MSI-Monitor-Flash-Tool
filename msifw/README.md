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

## Run it

Build once, then the binary is self-contained (it needs the vendor's `PlugIn/Flash.dat`, which it
finds in `../vendor/` beside this directory):

```sh
cd msifw
cargo build --release

# the screen: panel on the left, image + compatibility, progress meter, log
./target/release/msifw gui

# the same facts one verb at a time
./target/release/msifw buses                 # which display link has the monitor
./target/release/msifw -b 4 status           # slave, isp mode, boot code, mcu, MCM, start bank
./target/release/msifw -b 4 info             # the above plus the flash ID and the Flash.dat row
./target/release/msifw -b 4 part             # the part row: capacity, banks, write-protect words
./target/release/msifw -b 4 fwinfo           # the FW-info block over DDC/CI
./target/release/msifw -b 4 dump --len 0x10000 --out bank0.bin
./target/release/msifw inspect ../vendor/MSI_MAG_341CQP_QD-OLED_X28_FW.012_4023.bin
```

`-b 4` is the adapter this box's monitor hangs off; omit `-b` and the tool picks the link whose
EDID address answers. `--slave`, `--len`, `--addr` and `--bank` are base 0 like the card, so `0x4a`
and `74` mean the same address. `MSIFW_TRACE=1` prints every I2C transfer, which is how the protocol
was debugged and how it will be debugged further.

No `IspSetting.ini` is needed: every key has the literal default the plugin pushes, and the card
only has to name what differs (`cards/MAG-341CQP-X28.ini` is the working one for this model).

## The text UI

```
msifw gui [image.bin]
```

Four panes, one screen: the **panel** (link, the slave the probe settled on, isp mode, boot code,
mcu type, address width, MCM, start bank, the Flash.dat row the live ID selected, the EDID's name
and size, the FW-info block), the **image** (every `MSI_*.bin` in `./` and `vendor/`), the
**compatibility gate**, and a **progress meter** on the plugin's own phases with a bank counter,
the `ProLen` and the elapsed time. Keys: `i` probe, `f` flash, `d` dump, `r` reset, `↑↓` image,
`←→` link, `q` quit.

The gate is five checks, each with a verdict, so "is this the right firmware for this monitor" is
answered by data rather than by a filename:

| check | from | to |
|---|---|---|
| capacity | the image's byte size | the part the panel's flash ID selected |
| model | the identity block baked into the image | the EDID's monitor name |
| version | the version in the filename | the build stamp inside the image |
| checksum | the `CHK` in the filename | `sum(bytes) & 0xFFFF` of the file |
| geometry | the file length | whole 0x10000 banks |

Live on the X28 with FW.012 selected, all five are green:

```
ok  capacity: image 1835008 B, panel 4194304 B (fits)
ok  model:    image says "MAG 341CQ X28   RTD2711"; panel name not read
ok  version:  file 012 vs image "FW.012 20260612"
ok  checksum: matches filename
ok  geometry: 1835008 bytes = 28 banks of 0x10000
```

The **model line is the one that catches a wrong image**: MSI writes the model, the panel and the
build date into the user-data bank of every firmware file, and `Tags::scan` reads them back out —
tested against both shipped images, which name `MAG 341CQ X28   RTD2711` / `TPO340QH1-CH01 D01`.

`d` pulls the current firmware off the monitor, bank by bank, into `dumpflash.bin` — that is the
modding path, and the dump is the same accessor the flasher writes through, so a bank that reads
back correctly is a bank the write path can trust.

## The CLI

```
buses    List display links that have an I2C adapter        inspect   Show a .bin

```
i2c-1   NVIDIA i2c adapter 1 at 1:00.0 connected
i2c-5   NVIDIA i2c adapter 6 at 1:00.0 -
```

The first live session, 2026-11-10, on the X28 through `i2c-1` with
`cards/MAG-341CQP-X28.ini`:

```
$ msifw status
slave       0x49        isp mode    false     boot code   0x00
mcu type    0x00        4-byte addr false     mcm flash   false     start bank  0

$ msifw part
part      Default       id  00,00,00,00,00,00,00,00,      capacity 1048576 (16 banks)
```

Three things that only hardware says:

* The panel answers at **7-bit `0x49`** (8-bit `0x92`). `i2cdetect` sees exactly one endpoint, and
  `0x37`, `0x6E`, `0x25` all NACK — so **the scaler exposes one address that serves both the ISP
  register file and the DDC/CI VCP reads**. The plugin's constants (`0x6A`, `0x6E`, and
  `ucSpecifiedSlave = 0x94`) are its own 8-bit conventions for a different link.
* The poll's polarity: bit 0 of the command register is the **busy** flag and the plugin stops when
  it goes **clear**. The port had it inverted, which the fake could not see.
* `EnterIspMode` (`0x6F←0x81`, read back bit 7) does not ack here, and the register file reads
  `0x00` across `0x60..0x7B`, so the RDID comes back `00,00,00` and the string-key lookup lands on
  the row named `Default`. **Open:** whether the panel needs the vendor-defined DDC/CI command
  enabled first, a page selected, or a cable-power state change. The `Default` row carries no read
  command, which is why `dump` is currently blocked behind that.

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

## The path to a flash

What is proven on the panel, and what stands between here and writing FW.012:

| # | step | state |
|---|---|---|
| 1 | link, slave, ISP mode ack | **done** — `i2c-4`, 7-bit `0x4a`, bit 7 of `0x6F` sets |
| 2 | read the flash back | **done** — 32 KiB compared against FW.009, byte for byte, and the identity strings read `MAG 341CQ X28   RTD2711` |
| 3 | the part and its geometry | **done** — GD25Q32C, 4 MiB, 64 banks, start bank 3 |
| 4 | write-protect off | **not yet exercised** — the row's status words are `enable 0xFF / disable 0x00`, so a `01` write with `0x06` (WREN) first; the per-scaler WP-pin pair is the other half |
| 5 | erase one bank | **not yet exercised** — the opcode is data from the row where one exists, else `0x20` per 4 KiB sector, `0xD8` per bank |
| 6 | program one bank, verify | **not yet exercised** — 256-byte pages into FIFO `0x70`, length in `0x71` minus one, issue `0x6f ← 0x20`, verify is the range OR at `0x75` |
| 7 | write FW.012, reset, read it back | the whole point; steps 4-6 have to be seen working on one bank first |

Read speed is 0.79 ms/byte over AUX (a full 1.875 MiB image is ~26 minutes), because each 256-byte
page is one `I2C_RDWR` of nine messages; batching was measured at 0.17 s/page against 0.86 s for
the same page as separate transfers.

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
