# MSI Monitor Flash Tool

Native Linux firmware utility for MSI MAG/MPG OLED monitors built on Realtek
RTD scalers. Developed against one target so far — the **MSI MAG 341CQP
QD-OLED X28** (RTD2711 scaler) driven by an NVIDIA RTX 4090 — with the design
goal of becoming the `shurectl`-style tool this family never had: no Wine, no
booting Windows just to bump a version, transparent read-before-write safety
gates.

Status: **inspector/verifier works today; flash backup/write are gated on one
open hardware question** (see `TEST-INTEL-AMD.md`). The monitor in the dev
lab has never received a write.

## Quick start

Pure-stdlib Python 3 — no pip installs for the tool itself.

```sh
./msi-isp info                                        # who am I, what's in the .bin
./msi-isp --bin vendor/…_FW.012_4023.bin verify       # the Windows updater's 0x45 check, natively
./msi-isp probe                                       # ISP slave-address ACK scan (read-only)
./msi-isp shell                                       # curses menu (arrow keys); --plain = text REPL
sudo ./msi-isp --nvrm probe                           # NVIDIA RM DP-AUX transport instead (root)
./msi-isp --auxdev probe                              # ...same, but sudoless via kernel/msi_auxch.ko
python3 scratch/spec_0x22.py                          # the decisive 0x22 contact experiment
```

Requirements: the monitor on **DisplayPort**, your user in the `video` group
(or `sudo`), and a bus number — `ddcutil detect` or the auto-detect in
`scratch/spec_0x22.py` will find it; everything takes `--bus N`.

## How it works

The firmware lives in a SPI flash soldered to the scaler board. There is no
USB service port on this model (Type-C is video-only by design), so the only
road to the flash is the **DisplayPort AUX wire**, which carries an I2C bus
(I2C-over-AUX). The chain, hop by hop:

```
 this tool ──► transport (pick one)                    monitor side
 ────────────────────────────────────────────────────────────────────
 A) i2c-dev       /dev/i2c-N  (kernel DRM AUX→I2C      DP AUX pair
    (Intel/AMD     bridge; plain I2C semantics)            │
     or via the                                       sink DP branch (0x30)
    kernel relay)                                          │  I2C-over-AUX
 B) NVIDIA RM     NV0073_CTRL_CMD_DP_AUXCH_CTRL        scaler RTD2711
    (root, or     (0x731341) — raw DP AUX from the         ├── 0x37 DDC/CI  ← info/verify
    via the       driver's Resource Manager               ├── 0x50 EDID     ← work anywhere
    kernel      (needs root; kernel/msi_auxch.ko         └── 0x22 "MCU register file"
    module)      removes that requirement)                    │ PWM2SPI bit-banged master
                                                          4 MB SPI flash (A25L032M)
```

- **Layer 1 — transports** (`msi_isp/ddc.py`, `nvbus.py`/`nvrm.py`): both
  transports expose one primitive — "run one I2C transaction at this 7-bit
  slave over the DP AUX wire". On NVIDIA the kernel's i2c-dev shim only
  services an allow-list (`0x30/0x37/0x50`), so raw ISP addresses must ride
  the RM `AUXCH` control instead; `nvrm.py` is a ctypes client for that ABI,
  and `kernel/msi_auxch.ko` relays the same control unprivileged.
- **Layer 2 — protocols** (`isp.py`, `Facts.py`): DDC/CI packets (MCCS +
  MSI vendor opcodes — this is how the live `FW.009` version string is read
  byte-exactly like the Windows tool does), and the Realtek ISP handshake
  (magic-byte entry candidates written to `0x37`, status bit `0x80` = ISP
  alive, `0x24` exit). Flash erasure/programming itself rides the scaler's
  `0x22` register file (index reg `0x60`, data `0x61–0x66`, strobes
  `0x20/0x21`, `0x38/0x39`) driving a pin-banged SPI master ("PWM2SPI").
- **Layer 3 — session + safety** (`console.py`, `tui.py`, `cli.py`): the
  curses menu and the text REPL share one state machine. `write` is fenced
  by five gates (firmware loaded → model verified → ISP slave visible →
  trusted backup this session → root) plus a typed `flash`. Everything else
  is strictly read-only by construction.

The Windows updater's own flash sequence is fully decoded (`Facts.ISP_PIPELINE`):
chip detect → write-protect disable → bank erase (sector fallback) → program
→ read-back verify → write-protect restore, with retry+backoff around the
whole attempt — the failure semantics our `write` will reproduce.

## What works, on what

| Capability | NVIDIA 615.x (dev box) | Intel/AMD | Notes |
|---|---|---|---|
| EDID, DDC/CI, live FW version (`info`) | ✅ i2c-dev | ✅ | byte-matched to ddcutil 3.0.2 wire dumps |
| Model/checksum `verify` (the 0x45 check) | ✅ | ✅ | also verifies the `_4023` filename checksum (see below) |
| ISP slave ACK scan (`probe`) | ✅ runs; ISP slaves **no-ack** | ❓ the open question | allow-list quirk below |
| Flash `backup` / `write` | ⛔ gated | ❓ | need live transactions at 7-bit `0x22` |
| RM AUX transport | ✅ root (`--nvrm`); ✅ **sudoless** (`--auxdev` + relay) | n/a | see relay note below |

## The two vendor mysteries, solved

**Error `0x45`** from the MSI Windows updater = *"Compare bin and model name
is fail"*: it compares the monitor's self-reported model string against the
`.bin`'s model field at offset `0xF806` — and the failure is the comm layer
never reliably reaching the scaler, **not** a wrong/corrupt firmware file.
Our `verify` reproduces the exact check natively: file `FW.012` matches this
monitor (`MAG 341CQ X28`, version bytes at `0xF800`). *(The `0xF800/0xF806`
offsets are FW.012-specific — the same blocks sit `+0x20000` higher in
FW.009, and both bins carry an EDID table; `verify` therefore pattern-
searches and confirms your monitor's byte-exact EDID is present in the
file, which is version-proof.)*

**How the Windows tool actually talks** — decoded from the vendor binaries
themselves, not inferred: `Comm_Aux.dll` (the module loaded for `commID=1`)
runs its NVIDIA backend on exactly ten public NVAPI calls (display discovery
+ `NvAPI_I2CRead/Write` with a documented struct — the same transactions our
`ScalerBus` builds byte-exactly over the RM AUX channel) plus one legacy
private AUX wrapper that assembles 16-byte messages client-side. Its flash
exports (`ReadFlashData`, `SectorErase`, …) are stubs: the flash engine lives
in the updater core. Nothing in the Windows path is a driver door Linux lacks
— and notably, no Windows run is on record reaching the flash slave on this
monitor either: the only recorded updater run happened under Wine/Proton,
and rerunning it here with the shim’s own logging (15e) shows its NVAPI is a
DXVK build that dies at initialization — before any wire call — so that 0x45
means “backend dead,” not “wire silent,” and real-Windows behavior here
remains unobserved. Evidence
`re/g_nvapi_surface.txt`; re-run with `scratch/nvapi_surface.py`.

**The `_4023` in the filename** = a content checksum: the updater sums every
byte of the `.bin` and compares only the **low 16 bits** against the last 4
hex digits of the filename (cracked from the v1.0.6 exe: `0x4119a0` byte-sum
loops + `0x4137cc` `movzx ax` mask; `sum(FW.012) = 0x0C964023` → `0x4023` ✓).
`Facts.bin_content_checksum()` reimplements it.

## What doesn't work (yet) — the NVIDIA allow-list

The NVIDIA open kernel module's i2c-dev shim answers **only** for the
allow-listed addresses `0x30`/`0x37`/`0x50`; the scaler's ISP slaves
(`0x22`, `0x18–0x1B`, `0x20`) never receive an AUX transaction. Driving the
RM path natively (`0x731341`, root): the spec-conformant I2C-mode probe of
`0x22` returns pure TIMEOUT (~108 tries / 2 s) on both 615.71.09 and
615.78.08 while `0x50`/`0x37` ACK real data in the same run. `nvidia-drm`
registers no `/dev/drm_dp_aux*` nodes. The decisive test is one run of
`scratch/spec_0x22.py` on an Intel/AMD box —
[`TEST-INTEL-AMD.md`](TEST-INTEL-AMD.md) is the runbook.

**Sudo note:** a small opt-in kernel module (`kernel/msi_auxch.ko`) drives
that same AUXCH control from kernel context — the entry point NVIDIA's own
`nvidia-modeset` module uses — and the tool consumes it via **`--auxdev`,
with no sudo at all**. Setup: `make -C kernel LLVM=1 CC=clang`, `sudo insmod
kernel/msi_auxch.ko`, and install `kernel/99-msi-auxch.rules` so the node is
`0660 root:video` (the group that already owns DDC). Security posture: I2C
writes to the ISP register-file slaves (`0x18`–`0x22`) are refused in-kernel
until userspace explicitly unlocks — a timed 5-second window, logged — while
reads and ordinary DDC pointer writes work freely. `kernel/test_relay.py`
proves it end to end unprivileged. The relay removes the **sudo**
requirement; it does not change the 0x22 silence.

Driver-update note: 615.78+ tightened the RM version handshake (strict
string gate) — auto-detected at runtime since commit `94f256a`, so future
driver bumps won't break the `--nvrm` path. The open module's in-kernel
DDC/CI workstream (announced mid-2026) may eventually provide
`/dev/drm_dp_aux*` natively; re-check after each driver update.

## Safety model

- Every command except `write` is strictly read-only on the monitor.
- `write` (currently a stub) will require `--allow-write` **and** a typed
  confirmation, and will refuse to run before: JEDEC `0x9F` → `0x1Fxxxx` at
  the ISP slave, a full flash backup, and a byte-compare of that backup.
  (The JEDEC gate is our own addition; the vendor updater instead keys on a
  capacity code — details in `Facts.ISP_PIPELINE`.)
- No ISP magic bytes have ever been sent to a monitor by this tool.
- The DDC bus is shared with your desktop (GNOME/ddcutil poll `0x37`).
  Tool instances serialize through a cooperative per-bus lock (flock on
  the bus device inode) — external pollers don't participate, so close
  other DDC users during ISP transfers.

## Layout

- `msi_isp/` — the tool: `cli.py`, `tui.py` (curses menu) driving the
  `console.py` REPL core, `ddc.py` (i2c-dev transport), `auxdev.py`
  (kernel-relay transport, sudoless), `isp.py` (ISP protocol),
  `nvrm.py`/`nvbus.py` (NVIDIA RM transport, sudo), `buslock.py`
  (cooperative per-bus lock), `Facts.py` (constants + verified protocol
  facts), `progress.py`.
- `kernel/` — `msi_auxch.c`: kernel-context AUXCH relay (sudoless `--auxdev`
  transport), `test_relay.py` acceptance test incl. the write-gate matrix,
  `99-msi-auxch.rules` udev policy; build notes in the Makefile header.
- `tests/` — stdlib unit tests (fake busses, no hardware): `python3 -m
  unittest discover -s tests -t .`; enforced by CI (`.github/workflows/`)
  on Python 3.11–3.14.
- `scratch/spec_0x22.py` — portable decisive probe (RM + i2c-dev transports);
  `scratch/sweep_slaves.py` — exhaustive 7-bit ACK scan, any transport.
- `re/` — RE kit for the vendor PE32 binaries (`env.sh` → repo `.venv`);
  `STATUS.md` — the full session-by-session research log (**read it first
  if you want the why**).
- `vendor/` — MSI's proprietary Windows updater + `FW.012` `.bin`
  (gitignored; grab them from MSI's support page).
- `HANDOFF.md` — condensed project brief; `CONTRIBUTING.md` — how to hack
  on this safely.

MIT — see `LICENSE`. Not affiliated with MSI; poking scaler registers can,
in principle, brick a monitor. The maintainers' monitor is still unflashed.
