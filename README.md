# MSI Monitor Flash Tool

Native Linux firmware utility for MSI MAG/MPG OLED monitors built on Realtek
RTD scalers. Developed against one target so far — the **MSI MAG 341CQP
QD-OLED X28** (RTD2711 scaler) driven by an NVIDIA RTX 4090 — with the design
goal of becoming the `shurectl`-style tool this family never had: no Wine, no
booting Windows just to bump a version, transparent read-before-write safety
gates.

Status (2026-11-01): **the wire contract is decoded end to end and the
inspector/verifier works today.** The flash path is proven at the *packet*
level — the tool sends a complete page-program transaction and the panel takes
it — and unproven at the *cell* level, because live transactions at 7-bit
`0x22` need a host path that reaches the scaler's internal bus. The monitor in
the dev lab has never received a flash-cell write.

## Quick start

Pure-stdlib Python 3 — no pip installs for the tool itself.

```sh
./msi-isp info                                        # who am I, what's in the .bin
./msi-isp --bin vendor/…_FW.012_4023.bin verify       # the updater's model check, natively
./msi-isp --bin vendor/…_FW.012_4023.bin record       # the updater's 12% gate: its own compare
./msi-isp probe                                       # ISP slave-address ACK scan (read-only)
./msi-isp slaves                                      # the vendor's own slave-detection, re-run
./msi-isp ladder --isp                                # Flash.dat's commands through the mailbox
./msi-isp pipeline                                    # walk the vendor's decoded flash pipeline
./msi-isp flashread --addr 0x2f7aa,0x200000           # one flash read at an address
./msi-isp flashread --grammar script --addr 0x0       # ...in the vendor's other register grammar
./msi-isp shell                                       # curses menu (arrow keys); --plain = text REPL
sudo ./msi-isp --nvrm probe                           # NVIDIA RM DP-AUX transport (root)
./msi-isp --auxdev probe                              # ...same, sudoless via kernel/msi_auxch.ko
./msi-isp --auxdev --lane native probe                # native AUX lane (byte register index)
./msi-isp --auxdev --lane bulk  flashread             # 256-byte-per-transaction AUXCH bulk lane
```

Requirements: the monitor on **DisplayPort**, your user in the `video` group
(or `sudo`), and the bus number — `ddcutil detect` finds it. `--bus N` defaults
to `$MSI_ISP_BUS` or 4.

## How it works

The firmware lives in a 4 MB SPI flash soldered to the scaler board (A25L032M).
There is no USB service port on this model (Type-C is video-only by design), so
the road to the flash is the **DisplayPort AUX wire**, which carries I2C. The
chain, hop by hop:

```
 this tool ──► transport (pick one)                    monitor side
 ────────────────────────────────────────────────────────────────────
 A) i2c-dev       /dev/i2c-N  (kernel DRM AUX→I2C      DP AUX pair
    (Intel/AMD     bridge; plain I2C semantics)            │
     only)                                            sink DP branch (0x30)
                                                       │  I2C-over-AUX
 B) NVIDIA RM     NV0073_CTRL_CMD_DP_AUXCH_CTRL        scaler RTD2711
    (root, or     (0x731341) — raw DP AUX from the         ├── 0x37 DDC/CI  ← info/verify/record
    via the       driver's Resource Manager               ├── 0x50 EDID
    kernel      (needs root; kernel/msi_auxch.ko         └── 0x22 "MCU register file"
    module)      removes that requirement)                    │ PWM2SPI master
                                                          4 MB SPI flash (A25L032M)
```

**The scaler is a packet device, not an I2C memory.** Since 16o/16p the packet
grammar is known: the PC writes a 4-byte header — `[control, arg1, arg2, SUM]`,
checksum by **addition**, not XOR — to a door register (`0x9C` write, `0x9D`
read command), followed by up to **12 data bytes per transaction** (16-byte
window transactions at the leaf). The commit byte is arithmetic in the byte
count: `2n − 0x40`, so a 4-byte header commits with `0xC8` and a full page with
`0xE0`. Commands are classes, keyed by that control byte:

| control | command | carries |
|---|---|---|
| `0x20`/`0x21` | write enable (WREN) | nothing |
| `0x38`/`0x39` | addressed read — RDID `0x90`, fast-read `0x3B` | address, mode, length |
| `0x40` | **program a page** | address + data |
| `0x42` | **erase a sector** | address |
| `0xA0`/`0xA1` | **chip erase** — opcode `0xC7` | nothing |

**Two banks, one bit.** The board record's `width_values` pair differs in
exactly bit 3 (`0xe7 ^ 0xef`) on port `0x58` — that is the bank select. A 4 MB
chip with a 1.875 MB image means two 2 MB banks, so **the inactive block starts
at `0x200000`**. The vendor's own flag is the INI key `bSwitchFLag=1`
(typo his) plus a reset and `time_after_reset_ms=10000`. `msi-isp` exposes the
knob: `program_page_at(..., bank=0|1)`, `flashread`/`flash_read_at(..., mode=)`.

The Windows updater's flash sequence is fully decoded
(`Facts.ISP_PIPELINE`, `Facts.FLASHDAT_SCRIPT`): chip detect → write-protect
disable → bank erase (sector fallback) → program → read-back verify →
write-protect restore, with retry and backoff — the semantics our `write` will
reproduce.

## What works, on what

| Capability | NVIDIA 615.x (dev box) | Intel/AMD | Notes |
|---|---|---|---|
| EDID, DDC/CI, live FW version (`info`) | ✅ i2c-dev | ✅ | byte-matched to ddcutil 3.0.2 wire dumps |
| Model/checksum `verify` | ✅ | ✅ | plus the `_XXXX` filename content-checksum gate (byte-sum low-16, cracked 14c, wired 15l) |
| The updater's 12% gate, `record` | ✅ | ✅ | reads the record block out of the `.bin` and the panel's side over DDC/CI (16i) |
| Mailbox ladder (`ladder`), slave detect (`slaves`) | ✅ | ✅ | the vendor's own commands, replayed (16c, 16e) |
| Pipeline walk (`pipeline`) | ✅ 4 of 8 steps | ❓ | stops at `get flash type` on `0x22` |
| Flash read at an address (`flashread`) | ✅ runs, address-independent | ❓ | both vendor grammars; see below |
| Pilot program page | ✅ accepted, read-back mute | ❓ | 36 bytes on the wire, panel healthy (16r) |
| Flash `backup` / `write` | ⛔ gated | ❓ | need live transactions at 7-bit `0x22` |
| RM AUX transport | ✅ root (`--nvrm`); ✅ **sudoless** (`--auxdev`) | n/a | kernel relay, 3 lanes |

## Three vendor mysteries, solved

**Error `0x45` is not an error code — it is the ScalerType.** The GUI's update
routine (`FUN_004119f0`) writes progress `4,6,7,8,0xc` and `0xc` *is* the 12%
on the bar; the step there is a **string compare** of the bin's record against
the panel's, and the number printed in *"Compare bin and flash model name fail
fail, error code: 0x%x"* (both typos his) is the ScalerType: the plugin reads ID
registers `0x00` and `0x0F` — which 16m shows are **two I2C speed settings** —
and looks the pair up. This panel: `(0x14, 0x30) → 0x45`. The record block is
plaintext mid-file (`0x2F7AA` in FW.009, `0xF806` in FW.012), `0xff`-separated:
version code, model, panel, `0xaf`, scaler. Both bins say `MAG 341CQ X28` — the
`341CQP` in the filename is not in the payload. `msi-isp record` replays the
whole gate natively: model **matches**, version differs.

**The "mystery vtable" is a named API.** The plugin resolves **153** comm
methods by `GetProcAddress` into a fixed struct, so every slot the flash engine
calls has a name and an offset (`Facts.COMM_API`): `WriteRegEx`,
`WritePWM2SPIDev`, `ReadFlashData`, `WriteFlashData`, `ConfigProgramFlash`,
`AutoEnterIspMode`, `GetI2CSpeed`, and the rest. That is what turned "the two
undecoded wire forms" in the flash pipeline into named, byte-shaped steps.

**`Flash.dat` is ASCII, not binary.** 44 KB of `06,reg,value` / `0d,…`
statements. The A25L020 template that this board's A25L032M inherits is 18
statements in three phases (WREN, RDID, fast-read with `LEN 0x40`), on registers
`0x60` CTRL / `0x61` OPCODE / `0x64` ADDR / `0x65` MODE / `0x66` LEN — and the
control byte, not the opcode, is what says whether a command carries an address
and whether it carries data.

**The `_4023` in the filename** = a content checksum: the updater byte-sums the
`.bin` and compares the **low 16 bits** to the last 4 hex digits
(`sum(FW.012) = 0x0C964023` → `0x4023` ✓). `Facts.bin_content_checksum()`.

## What doesn't work (yet) — one address, three grammars

The scaler's ISP slaves — `0x22` (register file), `0x20` (burst engine), `0x35`
(mailbox) — answer on **none** of the four NVIDIA transports, while
`0x30`/`0x37`/`0x50` (+`0x4A`/`0x4B`) answer on all of them. Because all four
transports agree, **the set belongs to the sink's DP branch, not to the
driver** (16f). Confirmed on the panel: HDMI and USB-C give the same slave set.

On the slave that *does* answer, the reply is **address-independent** — three
grammars, one frame:

| grammar | registers | reply on `0x37` |
|---|---|---|
| port ladder | `0xF2 0x55 0x57 0x58 0x5E` | the 32-byte MCCS window |
| Flash.dat script | `0x60 0x61 0x64 0x65 0x66` | the same frame |
| 16-bit window | `0x841 0x842 0x845` | zeros (tunnel lane) |

The window is a **32-byte ring, and it is sticky**: it repeats byte-for-byte at
48, 64 and 96-byte reads, and its content survives process exit — a frame
written an hour earlier in another process is still what a new reader sees. A
differential sweep (snapshot, write a packet, snapshot) changed **0 of 1024**
DPCD addresses.

So the open item is one contact, not a decode. Ranked:

1. **CH341A / SOP-8 clip on the SPI chip** — bypasses the branch entirely,
   reads all 4 MB including the regions the AUX path cannot address. See
   [`CLIP-PLAYBOOK.md`](CLIP-PLAYBOOK.md). **This is now the primary route.**
2. **Intel/AMD box** — `drm_dp_i2c` forwards the address byte with no
   host-side filtering. One command: `msi-isp --bus N probe`. Expectations are
   modest now that HDMI and USB-C are known to show the same six slaves.
   Runbook: [`TEST-INTEL-AMD.md`](TEST-INTEL-AMD.md).
3. **The vendor's USB ISP board** — the plugin's USB path (`SendUsbPacket`,
   `ReceiveUsbPacket`, `ConfigProgramFlash`, `CompleteIspFlowInISPBoard`).

**Sudo note:** the opt-in kernel module `kernel/msi_auxch.ko` drives the AUXCH
control from kernel context and the tool consumes it via **`--auxdev`, no
sudo**. Setup: `make -C kernel LLVM=1 CC=clang`, `pkexec insmod
kernel/msi_auxch.ko`, and `kernel/99-msi-auxch.rules` for a `0660 root:video`
node. Rebuild it after every kernel **or** NVIDIA driver update (the Makefile
documents fetching the matching open-gpu-kernel-modules headers). Writes to the
ISP register-file slaves are refused in-kernel until userspace unlocks a timed
5-second window; `kernel/test_relay.py` proves it end to end unprivileged. The
relay removes the **sudo** requirement; it does not change the `0x22` silence.

Driver note: 615.78+ tightened the RM version handshake (strict string gate),
auto-detected at runtime since `94f256a`.

## Safety model

- Every command except `write` is read-only in effect. The ISP ladder's writes
  land in a 32-byte window; the flash cells change only under a program
  command.
- **Expect a transient blank.** On this sink the ladder's ports are DPCD byte
  addresses (`0x55`/`0x57`/`0x58` are lane-adjust requests, `0xF2` is MTPMT1),
  so driving the ladder retrains the DP link: the screen blanks, the source says
  "no signal", the panel may standby, and it recovers — a power cycle restores
  the image. Measured 2026-11-01; `Facts.DP_BLANKING`.
- `write` (a stub today) will require `--allow-write` **and** a typed
  confirmation, and will refuse to run before: JEDEC `0x9F` → `0x1Fxxxx` at the
  ISP slave, a full flash backup, and a byte-compare of that backup. (The JEDEC
  gate is ours; the vendor keys on a capacity code — `Facts.ISP_PIPELINE`.)
- Pilot measured on the panel (16r): a 32-byte marker page programmed at
  `0x200000` in the **inactive** bank — 36 bytes on the wire, no error, panel
  still reporting `FW.009` and `MAG 341CQ X28` afterwards.
- The DDC bus is shared with your desktop (GNOME/ddcutil poll `0x37`). Tool
  instances serialize through a cooperative per-bus lock; external pollers
  don't participate, so close other DDC users during ISP transfers.

## Layout

- `msi_isp/` — the tool: `cli.py`, `tui.py` (curses menu) driving the
  `console.py` REPL core, `ddc.py` (i2c-dev), `auxdev.py` (kernel relay,
  sudoless), `nvrm.py`/`nvbus.py` (RM transport, root), `lane.py` (the three
  lanes), `isp.py` (ISP protocol: mailbox, ladder, packet write, page program),
  `record.py` (the updater's model gate, replayed), `pipeline.py` (the vendor's
  flash sequence as data), `buslock.py`, `Facts.py` (every decoded fact, with
  its address), `progress.py`.
- `kernel/` — `msi_auxch.c` (the relay), `test_relay.py`, `99-msi-auxch.rules`.
- `tests/` — stdlib unit tests on fake busses, no hardware: `python3 -m
  unittest discover -s tests -t .` (**327 tests**, enforced by CI on Python
  3.11–3.14).
- `scratch/spec_0x22.py` — portable decisive probe; `scratch/sweep_slaves.py` —
  exhaustive 7-bit ACK scan.
- `re/` — RE kit for the vendor PE32 binaries (`env.sh` → repo `.venv`) and
  `ghidra_isp_engine.md`, the decode log where every claim carries its address;
  `STATUS.md` — the session journal (**read it first for the why**).
- `vendor/` — MSI's Windows updater + the `.bin` files (gitignored; MSI's
  support page).
- `HANDOFF.md` — condensed brief; `CONTRIBUTING.md` — how to hack safely;
  `CLIP-PLAYBOOK.md` — the clip procedure; `TEST-INTEL-AMD.md` — the runbook.

MIT — see `LICENSE`. Not affiliated with MSI; poking scaler registers can, in
principle, brick a monitor. The maintainers' monitor is still unflashed.
