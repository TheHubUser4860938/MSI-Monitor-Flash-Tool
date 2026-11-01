# Review brief — MSI MAG 341CQP QD-OLED X28 firmware path on Linux

You are reviewing a reverse-engineering + driver project. **Everything below is
measured on real hardware unless a line says "inference".** Please attack the
inferences: the decode is deep and the risk is that a self-consistent story has
absorbed a wrong first reading.

## The target

- Monitor: **MSI MAG 341CQP QD-OLED X28**, Realtek **RTD2711** scaler, SPI flash
  **A25L032M (4 MiB)**, live firmware `FW.009`, DDC/CI model string
  `MAG 341CQ X28`.
- Host: Linux, kernel 7.3.1-1-cachyos, NVIDIA RTX 4090, open kernel module
  615.78.08, monitor on **DisplayPort** = `/dev/i2c-4`.
- Goal: update the firmware natively on Linux — no Wine, no clip — by porting
  MSI's Windows updater (`MSI Firmware Update Utility V1.0.6.exe`) into the
  Python tool in this repo.

## Where the truth lives

| file | what it is |
|---|---|
| `README.md` | current status (updated 2026-11-01) |
| `STATUS.md` | session journal, sessions 1→16s, chronological, with the "why" |
| `re/ghidra_isp_engine.md` | **the decode log — every claim carries its Ghidra address** |
| `msi_isp/Facts.py` | the decoded facts as data (`COMM_API`, `FLASHDAT_SCRIPT`, `PROGRAM_PACKET`, `PWM2SPI_PACKET`, `ISP_WRITE_LADDER`, `DUAL_BANK`, `PILOT_WRITE`, `ISP_WINDOW_RING`, …) |
| `msi_isp/isp.py` | the transports' protocol layer: `mailbox_ladder`, `flash_read_at`, `flash_read_script`, `isp_write_packet`, `packet_bytes`, `program_page_at`, `sector_erase_at` |
| `msi_isp/pipeline.py` | the vendor flash sequence as 8 `Step`s (the wire gap list is empty) |
| `msi_isp/record.py` | the updater's 12% gate, replayed natively |
| `tests/` | 327 stdlib unit tests on fake busses (no hardware) |

Vendor binaries (32-bit x86 PE32) in `vendor/`: the exe, `WinOperateCScaler.dll`
(the host), `Comm.dll` (**170 exports — the comm API**), `Comm/Comm_Aux.dll`
(the NVIDIA backend, 61 exports), `PlugIn/WinIspPlugIn.dll` (**the ISP flash
engine**), `PlugIn/Flash.dat` (**ASCII CSV**, 44 KB), `rtd38/Comm_GFXI2C.dll`.

## Architecture, established

The tool is **one engine, two shells**: `WinOperateCScaler.dll` and
`WinIspPlugIn.dll` are the same ISP engine (RTTI `CCpIsp`, and the plugin's 19
export names appear in the host's name table). The port's target is
`OperateScalerEx`.

The comm layer is a **named 153-slot table**: the plugin
(`WinIspPlugIn!FUN_100057c0`) calls `GetProcAddress` 153 times on the comm DLL
handle into a fixed struct, so every slot the flash engine calls has a name
(`Facts.COMM_API`). Slot arithmetic: the plugin calls a **byte** offset, the
loader writes `param_1[i]` on an `int*`, so **byte = 4 × index**.

The scaler is a **packet device**, not an I2C memory. Packet =
`[control, arg1, arg2, SUM]` + ≤12 data bytes, to door register **`0x9C`**
(write) / **`0x9D`** (read command); commit byte = `2n − 0x40`. Commands are
classes: `0x20/0x21` WREN, `0x38/0x39` addressed read (RDID `0x90`, fast-read
`0x3B`), `0x40` program page, `0x42` sector erase, `0xA0/0xA1` chip erase
(`0xC7`). Two banks, selected by **bit 3 of port `0x58`** (`0xE7` bank 0, `0xEF`
bank 1); 4 MiB / 1.875 MiB image ⇒ **the inactive bank's base is `0x200000`**.

## Measured on the wire (i2c-dev, slave 0x37, 2026-11-01)

```
VCP 0x01 + payload FE E1 E6  ->  6e 8a | 02 00 fe 00 | "FW.009N" 00…
                                   4-byte header, string at raw index 6
VCP 0x02 (MCCS Model Name)   ->  6e 80 be   (N=0) on 10/10 tries
```

The reply window is a **32-byte ring** (`d[:32] == d[32:64]` exactly at 48, 64
and 96-byte reads) and it is **sticky across processes** — content written an
hour earlier in another process is what a new reader sees.

Three register grammars, one frame each, **all address-independent**:

| grammar | registers | reply on `0x37` |
|---|---|---|
| port ladder (`Comm!FUN_10003990`) | `0xF2 0x55 0x57 0x58 0x5E` | `8a 02 00 fe 00 "FW.009N"` at `0x0`, `0xF806`, `0x2F7AA`, `0x200000` |
| Flash.dat script | `0x60 0x61 0x64 0x65 0x66` | the same frame |
| 16-bit window | `0x841 0x842 0x845` | zeros (tunnel lane) |

Slave visibility, four NVIDIA transports (i2c-dev, RM tunnel, RM native, RM
bulk 256 B/txn): `0x30`, `0x37`, `0x50` (+ `0x4A`/`0x4B`, zeros) answer;
`0x22`, `0x20`, `0x35`, `0x18–0x1B` are silent (EIO on i2c-dev, TIMEOUT on RM).
**HDMI and USB-C on this panel show the same slave set** (owner, many runs).

The native-lane relay answers `0x22` with `00 00 05 21 00 04 2b 04 09 00 80 0f
0e 11 08 00` — constant at every address and every bank; a differential sweep
(snapshot → write a packet to door `0x9C` → snapshot) changed **0 of 1024**
DPCD addresses.

## The pilot write

`program_page_at(0x200000, 32-byte marker, bank=1)` on the native lane sent
**36 bytes on the wire with no error**; read-back unchanged; panel healthy
afterwards (`FW.009`, `MAG 341CQ X28`). A sector erase in bank 1 also changed
nothing readable.

## Bugs I suspect in MY code — please attack these specifically

1. **The 24-bit address path.** `flash_read_at(..., mode=1)` writes the data
   port `0x5E` as *low, high, low|1* — **16 bits plus an arm bit**. In
   `Comm!FUN_10003990` the `mode 2` branch writes `param_1`, `param_3 >> 8`,
   `param_3` — i.e. **mode 2 is the 24-bit path and I default to mode 1**. If
   the address phase is really 24-bit, then reading `0x200000` with mode 1
   aliases to `0x000000`, which would *explain the "address-independent"
   result* as a bug in my addressing, not a property of the sink. **Is my
   mode→address-width mapping right, and which mode does the plugin use for a
   4 MiB part?**
2. **The checksum scope.** `packet_bytes()` sums **only the 3 header bytes**,
   read off `ReadPWM2SPIDev`'s `CONCAT13(sum, header)`. But the leaf's unrolled
   tail (`FUN_1000a350` / `FUN_1000a650`) also accumulates over **12-byte blocks
   of the 32-byte buffer** — which looks like a **second checksum over the
   data**, appended as a trailer. If packets need a data trailer, my writes are
   malformed and the sink is answering with its last good frame. **Please read
   those two leaves and tell me the exact packet layout, byte by byte.**
3. **The write ladder's prototype.** `isp_write_packet` is built from
   `Comm!FUN_10003c80`, whose Ghidra prototype is `(param_1..param_5)` with
   `param_1` written to `0x5E`. Callers use 3 args (`FUN_10003c80(0x9d, 4,
   &buf)`), so **the decompiler's arg mapping is unreliable** — I assumed
   "param_1 = the door register, the rest = payload". **Confirm the calling
   convention and the register order, including whether `0x57`/`0x58` must be
   written as read-modify-write pairs (I do) or plain writes.**
4. **The trigger arithmetic.** I send `2n − 0x40` (n = payload bytes). From
   `FUN_10003c80` the value is `cVar10 * 2 − 0x40` where `cVar10` is
   `chunk−1` (mode 0), `chunk` (mode 1) or `chunk+1` (mode 2) — so **the
   trigger depends on the address mode I chose in (1)**. Give me the table for
   all three modes.
5. **Slot arithmetic `byte = 4 × index`.** Two spot checks fit (`+0xf0` →
   `WriteRegEx`, which really writes registers; `+0xc4` → `GetI2CSpeed`, which
   16j measured as a getter of `obj+0xc8`). One apparent conflict
   (`+0x28c`: 16a labelled it `GetQCDisplaySetting` from a log string; the
   arithmetic says `I2CSlaveRead`) I resolved as "string = purpose, slot =
   mechanism". **If the object's `[0]` vtable is NOT the same array the loader
   fills, my whole slot-naming layer is off** — and the two "fits" are
   coincidence. Please check `WinIspPlugIn!FUN_100057c0` against a call site.
6. **`0x45` as ScalerType.** Sound only if the `(0x14, 0x30)` branch is the
   unique producer of `0x45` (I verified: one `mov eax,0x45` in the plugin).
   16m then claims `IDCode0/IDCode1` are **two I2C speed settings** because
   slot `+0xc0`/`+0xc4` map to `SetI2CSpeed`/`GetI2CSpeed`. That rests on (5).
7. **VCP 0x02 N=0.** I read the panel's model from the EDID `0xFC` descriptor
   because VCP 0x02 answers `6e 80 be` (N=0) ten times running. Is that the
   MCCS two-step done wrong on my side (write, read header, read body)?

## The one blocked thing, ranked

1. **CH341A / SOP-8 clip** — bypasses the sink's branch, reads all 4 MiB.
   `CLIP-PLAYBOOK.md`. Primary route.
2. **Intel/AMD box** — `drm_dp_i2c` forwards the address byte unfiltered;
   `msi-isp --bus N probe` is the test. Expectations lowered by the HDMI/USB-C
   result. `TEST-INTEL-AMD.md` is the runbook.
3. **The vendor's USB ISP board** — the plugin's USB path (`SendUsbPacket`,
   `ReceiveUsbPacket`, `ConfigProgramFlash`, `CompleteIspFlowInISPBoard`).

## Questions, in priority order

1. Is the "address-independent reply" my addressing bug (item 1) or a real
   property of the sink's branch? What experiment distinguishes them **on the
   native lane, read-only**?
2. Exact packet layout for a page program — header, data, trailer, trigger —
   for all three address modes (items 2–4).
3. Does the plugin's `ConfigProgramFlash` (Comm.dll RVA `0xc6f0`, a dispatcher)
   set a mode that changes the packet shape, and if so which field?
4. Is `0x22` reachable at all over DP AUX on any host, or is the branch's map
   fixed at six addresses?
5. Any place where I have a self-consistent story built on one misread
   structure — that is the failure mode I can't see from inside.

## Constraints

Linux-native for the shipped tool (Wine is acceptable as a *witness* only);
probes are read-only; the monitor has never received a flash-cell write;
gates are `python3 -m unittest discover -s tests -t .` (327) and
`.venv/bin/ruff check .`.

Prefer "the measurement that settles it" over "the plausible story".
