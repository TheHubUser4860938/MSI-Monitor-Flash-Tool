# MSI Monitor Flash Tool

Native Linux firmware utility for MSI MAG/MPG OLED monitors built on Realtek
RTD scalers. Developed against one target so far — the **MSI MAG 341CQP
QD-OLED X28** (RTD2711 scaler) driven by an NVIDIA RTX 4090 — with the design
goal of becoming the `shurectl`-style tool this family never had: no Wine, no
Windows USB tool, transparent read-before-write safety gates.

Status: **inspector/verifier works today; flash backup/write are gated on one
open hardware question** (see `TEST-INTEL-AMD.md`). The monitor in the dev
lab has never received a write.

## Quick start

Pure-stdlib Python 3 — no pip installs for the tool itself.

```sh
./msi-isp info                                        # who am I, what's in the .bin
./msi-isp --bin vendor/…_FW.012_4023.bin verify       # the Windows updater's 0x45 check, natively
./msi-isp probe                                       # ISP slave-address ACK scan (read-only)
sudo ./msi-isp --nvrm probe                           # NVIDIA RM DP-AUX transport instead (root)
python3 scratch/spec_0x22.py                          # the decisive 0x22 contact experiment
```

Requirements: the monitor on **DisplayPort**, your user in the `video` group
(or `sudo`), and a bus number — `ddcutil detect` or the auto-detect in
`scratch/spec_0x22.py` will find it; everything takes `--bus N`.

## What works, on what

| Capability | NVIDIA 615.x (dev box) | Intel/AMD | Notes |
|---|---|---|---|
| EDID, DDC/CI, live FW version (`info`) | ✅ i2c-dev | ✅ | byte-matched to ddcutil 3.0.2 wire dumps |
| Model/checksum `verify` (the 0x45 check) | ✅ | ✅ | also verifies the `_4023` filename checksum (see below) |
| ISP slave ACK scan (`probe`) | ✅ runs; ISP slaves **no-ack** | ❓ the open question | allow-list quirk below |
| Flash `backup` / `write` | ⛔ gated | ❓ | need live transactions at 7-bit `0x22` |

## The two vendor mysteries, solved

**Error `0x45`** from the MSI Windows updater = *"Compare bin and model name
is fail"*: it compares the monitor's self-reported model string against the
`.bin`'s model field at offset `0xF806` — and the failure is the comm layer
never reliably reaching the scaler, **not** a wrong/corrupt firmware file.
Our `verify` reproduces the exact check natively: file `FW.012` matches this
monitor (`MAG 341CQ X28`, version bytes at `0xF800`).

**The `_4023` in the filename** = a content checksum: the updater sums every
byte of the `.bin` and compares only the **low 16 bits** against the last 4
hex digits of the filename (cracked from the v1.0.6 exe: `0x4119a0` byte-sum
loops + `0x4137cc` `movzx ax` mask; `sum(FW.012) = 0x0C964023` → `0x4023` ✓).
`Facts.bin_content_checksum()` reimplements it.

## What doesn't (yet) — the NVIDIA allow-list

The NVIDIA open kernel module's i2c-dev shim answers **only** for the
allow-listed addresses `0x30`/`0x37`/`0x50`; the scaler's ISP slaves
(`0x22`, `0x18–0x1B`, `0x20`) never receive an AUX transaction. We also
drive the RM path natively (`NV0073 CTRL_CMD_DP_AUXCH_CTRL = 0x731341`,
root): the spec-conformant I2C-mode probe of `0x22` returns pure TIMEOUT
(~108 tries / 2 s) on both 615.71.09 and 615.78.08 while `0x50`/`0x37` ACK
real data in the same run. `nvidia-drm` registers no `/dev/drm_dp_aux*`
nodes. The decisive test is one run of `scratch/spec_0x22.py` on an
Intel/AMD box — [`TEST-INTEL-AMD.md`](TEST-INTEL-AMD.md) is the runbook.

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
- No ISP magic bytes have ever been sent to a monitor by this tool.

## Layout

- `msi_isp/` — the tool: `cli.py`, `ddc.py` (i2c-dev transport), `isp.py`
  (ISP protocol), `nvrm.py`/`nvbus.py` (NVIDIA RM transport), `Facts.py`
  (constants + verified protocol facts).
- `scratch/spec_0x22.py` — portable decisive probe (RM + i2c-dev transports).
- `re/` — RE kit for the vendor PE32 binaries (`env.sh` → repo `.venv`);
  `STATUS.md` — the full session-by-session research log.
- `vendor/` — MSI's proprietary Windows updater + `FW.012` `.bin`
  (gitignored; grab them from MSI's support page).

MIT — see `LICENSE`. Not affiliated with MSI; poking scaler registers can,
in principle, brick a monitor. The maintainers' monitor is still unflashed.
