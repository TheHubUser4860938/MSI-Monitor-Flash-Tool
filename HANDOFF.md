# msi-isp — Project Handoff Brief (2026-10-09)

Point a new agent at this file plus `STATUS.md` (chronological session log, sessions 1–14 — the canonical deep state). Git log is the authoritative changelog; working tree clean at the session-14 commit as of this 2026-10-09 update.

## Mission

Native Linux firmware tool for the **MSI MAG 341CQP QD-OLED X28** monitor (Realtek **RTD2711** scaler, 4 MB SPI flash `A25L032CT`, 1.8 MB firmware image). Origin: MSI's Windows updater fails under Wine with **error 0x45**. User's goals in order: (1) solve 0x45 — done; (2) native flasher for NVIDIA (RTX 4090, open kernel module); (3) shurectl-style interactive console with anti-brick gates and progress bars; (4) community-grade tool (README/packaging pending — "it's ridiculous I can't update monitor firmware on Linux").

## Status TL;DR

- **v0.1 shipped and verified**: `info` / `verify` / `probe` / `shell` work on the 4090, no Wine, normal user (RM path needs sudo). Progress bars implemented. `backup`/`write` exist but refuse honestly with the concrete blocking reason (`write` exits code 3).
- **The blocking wall (measured, not guessed)**: the scaler's flash register file — **7-bit I2C slave `0x22`** — has never answered from Linux on this machine, on any lane. Flash access = plain I2C register pokes to `0x22`; Windows reaches it via **NVAPI's driver-internal transparent I2C-over-AUX**, which does not exist on Linux (NVAPI absent; RM's AUX controls service native DPCD + DP-spec tunnel mode only; this monitor's DP branch **does not implement the I2C-over-AUX tunnel**, measured at DPCD `0x00D0` bit7=0; the NVIDIA kernel driver allow-lists which I2C addresses DP ever sees).
- **Decisive next experiment (off this box)**: same binary, any **Intel/AMD GPU** Linux machine, DP cable. ACK at `0x22` → finish backup/write for those GPUs, NVIDIA awaits an in-kernel DDC/CI driver (NVIDIA team is actively working on one per Phoronix, July 2026). Silence there too → Windows NVAPI defer/transparent policy is the remaining difference; more disassembly on this box cannot create a wire.
- **Monitor is untouched at `FW.009`.** Zero erase/program bytes ever sent from Linux. All experiments were reads + the tool's own ISP enter/exit handshake.

## Environment (verified facts)

- CachyOS (Arch-based), KDE/Konsole, Wayland+XWayland. Kernel: CachyOS build; headers-only source at `/usr/src/linux-cachyos` (no `.c` files). `CONFIG_DRM_DISPLAY_DP_AUX_CHARDEV=y` exists but nvidia-drm doesn't use it.
- GPU: **RTX 4090**, NVIDIA open module **615.78.08** (updated 2026-10-09; prior 615.71.09, kernel 7.2.9-2-cachyos). `nvidia-drm` registers **no** `/dev/drm_dp_aux*`; `DRM_IOCTL_DP_AUX` → EINVAL; `/sys/class/drm_dp_aux_dev` empty — all re-verified unchanged on 615.78.08. **615.78 tightened the version-check gate (mismatched string → EINVAL); FIXED in session 14: `nvrm.py` now auto-detects the driver version at runtime.**
- Cables: **DP = active video (keep it)**; HDMI currently unplugged; Type-C in (Billboard device only — this model's Type-C has no data functions by design, per MSI manual p.7).
- `/dev/i2c-4` = DP connector. NVIDIA services an **allow-list only**: `0x50` real EDID, `0x37` DDC/CI shim, `0x30` emulated (reads zeros), ACK-noise at `0x4a/0x4b`. **`I2C_RDWR` → ENOTTY** and repeated-start reads return zeros — must use **separate `write()`/`read()` with a 1-byte warm-up write** (ddcutil's method; matched byte-exact via `ddcutil --trace=io_detail` + journal).
- sudo: agent shell is non-interactive and **`sudo -v` does not help** (credentials cache is per-tty; user's Konsole ≠ agent shell). The working pattern is the global drop-in: `echo '<user> ALL=(ALL) NOPASSWD:ALL' | sudo tee /etc/sudoers.d/99-msi-isp` (currently **installed**; remove after root testing with `sudo rm /etc/sudoers.d/99-msi-isp`).
- Tooling: python 3.14, capstone 5.0.7, pefile 2024.8.26 (`re/env.sh`), ddcutil 3.0.2, git. `curl`/raw.githubusercontent often time out; web tools flaky at times; **sparse `git clone` of NVIDIA open-gpu-kernel-modules works** (last clone at `/tmp/ogkm` — ephemeral; recreate with sparse-checkout of `src/nvidia/generated`, `src/nvidia/src/kernel/rmapi`, `src/common/sdk/nvidia/inc/ctrl/{ctrl0073,ctrl0080,ctrl2080,ctrl90cc}`). The generated headers (`g_rs_server_nvoc.h` control tables with **param sizes + privilege flags**, `rmapi/control.c` flag semantics, `ctrl90cl.h` card_info layout) were the highest-value primary sources.

## Monitor & firmware facts (verified)

- EDID: 256 B, **model string in the `0xFC` text descriptor (block 0, descriptor 3)** = `MAG 341CQ X28`; PNP `MSI`, product `0x3DE3`. EDID reads need 16-byte chunks with pointer re-posing on this adapter.
- Live firmware: **`FW.009`** via the vendor DDC/CC query (below). Input-select VCP: `0x8D` unsupported, `0x08` never answered (unresolved).
- Target image: `vendor/MSI_MAG_341CQP_QD-OLED_X28_FW.012_4023.bin` — 1,835,008 B, SHA-256 in `Facts.py`/STATUS.md; **version `012` @ `0xF800`, model `MAG 341CQ X28` @ `0xF806`** (exact match with monitor ⇒ file is correct; 0x45 is NOT a file problem); `4023` in the filename = **low 16 bits of the plain byte-sum of the .bin as stored on disk** — cracked 2026-10-09 (session 14c) from the updater exe (`0x4119a0` two interleaved byte-sum loops; `0x4137cc` `movzx ax` mask; verified `sum == 0x0C964023`). Earlier "32-bit over 4 MiB" assumption superseded; helper `Facts.bin_content_checksum()`.
- Vendor package (`vendor/`, gitignored): `ISPToolForMsi.exe`, `Comm/Comm.dll`, `Comm/Comm_Aux.dll`, `PlugIn/WinIspPlugIn.dll`, `PlugIn/Flash.dat`, `rtd38/Comm_GFXI2C.dll`, PDF manual. **All binaries are 32-bit PE32/i386 — disassemble `CS_MODE_32`** (a 64-bit-mode bug corrupted early results; telltale: `movabs` in dumps).
- Tool config: `IspSetting.ini` copies exist under the Heroic/Wine prefix (paths in STATUS.md). Key values: `enumCommID=1` (AUX backend), ISP slave `0x6F`, `AUX_I2CPageLen=32`, delays 3000/200/10000 ms, 10 retries, `CheckModelName=1` @ `0xF806`, `CheckChecksum=1`, `strVersionDdcciCmd = 6e 51 84 01 fe e1 e6` (reproduced byte-exact), `0xEA60` (60 s) values in several places = ISP-watchdog suspects.

## Working commands (v0.1)

```bash
cd ~/Projects/monitor-fw
./msi-isp info
./msi-isp --bin vendor/MSI_MAG_341CQP_QD-OLED_X28_FW.012_4023.bin verify   # the 0x45 check, natively: OK
./msi-isp probe
./msi-isp shell          # curses menu (arrow keys); --plain for the gated text REPL
sudo ./msi-isp --nvrm probe          # NVIDIA RM-backend bus (nvbus.py) — root
sudo python3 scratch/spec_0x22.py    # the spec protocol experiment (see below)
make -C kernel LLVM=1 CC=clang       # build prototype relay module (sudoless RM path)
sudo insmod kernel/msi_auxch.ko && python3 kernel/test_relay.py   # -> PASS, as user
sudo rmmod msi_auxch                 # fully reversible; nothing auto-loads it
```

## Repo map

- `msi_isp/`: `cli.py` (subcommands + `--nvrm`), `tui.py` (curses menu: live header, .bin browser, drives Console actions; typed `flash` still required; auto-falls back to the REPL when piped), `console.py` (shurectl-style REPL; gates = firmware loaded → model verified → ISP visible → trusted backup on disk → root; typed `flash` required; refuses with concrete reasons), `ddc.py` (`RTBus` i2c-dev transport + `ddc_packet`/`ddc_parse_reply` — returns **dict with `payload`** — byte-exact vs ddcutil), `isp.py` (`ScalerBus`, `I2CTarget`, `enter_isp` (magic-candidate loop), `IspError`, page primitives), `nvrm.py` (ctypes on raw NVIDIA RM escapes: version handshake, **NVOS21 32-byte** alloc negotiation, `NV_ESC_ATTACH_GPUS_TO_FD` (escape **212**, before any GPU-fd op), card_info `gpu_id` (skip 0; this GPU = `0x100`), client→device→dispclass→FINN allocs, `displayId` is a **bitmask** (`0x200` = this DP head), `GET_ID_INFO_V2`, `aux()`/`aux_i2c()` over `NV0073_CTRL_CMD_DP_AUXCH_CTRL` **0x731341**, NV2080 I2C allocs), `nvbus.py` (`NvRMAuxBus` — RTBus-duck-typed over the RM; **acceptance: EDID byte-identical to kernel's, 17-byte multi-chunk reads, live FW query**), `Facts.py` (protocol constants, BIN_LAYOUT, ISP magic, timing), `progress.py` (TTY in-place bar / 5%-line non-TTY; wired at ISP-page granularity; **never yet run on real flash traffic**).
- `re/`: 32-bit RE toolchain (`env.sh`, `dump.py`, `dumpfn.py`, `pdump.py`, `pexray.py` — fixed, `strs.py`, `fsum.py`, `dis32.py`, `d2.py`) + recorded dumps/traces (`o_*.txt`, `f_*.txt`, `g_*.txt`, `wire*.txt`). Files predating commit `b367ef6` may contain stale 64-bit garbage.
- `scratch/`: 44 one-shot experiment scripts (`t_*.py`, incl. `spec_0x22.py`). Top-level `t_*.py` are older pre-package scratch.
- `vendor/`: MSI package (gitignored). Flash.dat = `vendor/PlugIn/Flash.dat`.
- `STATUS.md`: chronological session log 1–11, measured logs, file paths, INI copies, decision records. **Read first.**

## Decoded protocol (facts from the fixed 32-bit disassembly unless marked "inferred")

1. **Error 0x45** = string "Compare bin and model name is fail". Wine fails because every NVAPI read returns junk (NVAPI absent on Linux). Not a Wine-tuning problem.
2. **Version channel (live-proven)**: vendor DDC/CC packet `0x6E 0x51 0x84 0x01 FE E1 E6` (addr/src/len/opcode/data + XOR checksum). Opcode `0x01` + 3-byte reg → 4-byte ASCII reply. Address ladder: only `FE E1 E6` is real (FW string); other addresses reply with canned `FW.0`; `FE E1 A4` = build code. Write-opcode candidates `02 03 04 32 33 3B 00` **all rejected**.
3. **ISP entry (live-proven, DP at user-level and RM-root)**: raw magic-byte writes to 8-bit `0x6F` (= 7-bit `0x37`). Candidate table (6×3B, extracted): `94 96 6a | 64 64 68 | 54 56 58 | 98 9a 68 | 9c 9e 6c | 90 92 60`. Status poll from `0x6F`; **bit 0x80 = ISP ready** (`0x0a→0xca/0xdf/0x88`). Exit = `0x24`. Flaky across runs → use full-candidate retries + INI pacing (3000 ms after DDC writes).
4. **Flash dataplane**: `IspFlash`/`DumpFlash`/`ReadFlashData` (plugin RVA `0x7e50`) contain **no DDC packet opcodes** — 32-byte pages through Comm vtable `I2C_READ`/`I2C_WRITE` → `Comm_Aux.dll` → **NVAPI `ctlAUXAccess` / `NvAPI_I2CRead`/`Write`** (dynamically resolved; `nvapi.dll` not in static imports). Code slave constants are 8-bit: `0x44`→7-bit `0x22` (MCU register file), `0x41`→`0x20`, `0x6E/0x6F`→`0x37`. Register-write primitive = 4-byte I2C-memory packet **`[reg, val>>16, val>>8, val]`** to `0x22` (`Write32BitRegEx` decode).
5. **Flash.dat**: per-chip entries = `[4-byte raw JEDEC ID][NUL][CSV register script]` (values are hex fields). Grammar: `06,<reg>,<val>` = write reg; `0d,<reg>,<len>,…,<wait>` = read reg. Registers: **index `0x60`, data `0x61–0x66`, strobe pairs `0x20→0x21` and `0x38→0x39`**. No script contains `0x9F` — the JEDEC-read oracle is our invention, not a tool op. PWM2SPI = Realtek pin-banged SPI master on PWM pads (inferred; zero public docs).
6. **RM control facts (615.x)**: `0x731341` (AUXCH_CTRL) flags `0x844` = CACHEABLE|ROUTE_TO_PHYSICAL|**PRIVILEGED(0x4)** → root suffices (`osIsAdministrator()`); `0x73137C` (bulk I2C) = dead from userland (0x23/0x1b). NV2080 I2C controls (`0x20800601/2/3`, structs 532/276 B verified) work for GPU-internal ports only — every DP/HDMI port number → `INVALID_ARGUMENT`.

## Address rule + wire format (user protocol, binding)

- Disassembly addresses are **8-bit**; Linux/AUX fields are **7-bit**: `0x44→0x22`, `0x41→0x20`, `0x6E/0x6F→0x37`, `0x94→0x4A`. Never put `0x44` in an AUX address field.
- All probes use **I2C-over-AUX** (not native): cmd nibble `0x4`=write+MOT, `0x5`=read+MOT; address field = 7-bit slave; length byte = N-1; **MOT held across chunks**; stop = **address-only request, same slave, MOT clear, length 0**. A native `0x8/0x9` ACK is a failed test even if it ACKs (that's the DPCD path).
- Retry policy: **≥200 tries or 2 s on DEFER, backoff 5–20 ms**, log every reply verb (ACK/NACK/DEFER/TIMEOUT) + the raw command sent. One 10-retry TIMEOUT is not a result.

## Dead ends — do NOT re-litigate on this box (all experimentally measured)

1. HDMI bare-metal i2c-dev probe of `0x22`/`0x20` (before/during/after ISP — no ACK; ISP entry itself works there).
2. USB-C as a data lane on this model (manual p.7: video-only; kernel shows Billboard only; the Realtek hubs on buses 10/11 are the **motherboard's**, enumerating at second 1.7 of boot). Comm.dll *does* carry a full USB backend (`GetUsbDevicePath`/`SendUsbPacket`/`SetNewRealtekUSBMode`) for other MSI models with populated Type-C upstream — future feature, not this unit.
3. Native-AUX hand-rolled I2C start/stop bit-stuffing (DP spec §2.7.6 + NVIDIA's own `dp_auxbus.h` split native vs i2c request types; no fallback encodes I2C inside native).
4. `I2C_RDWR` on DP i2c-dev (ENOTTY on NVIDIA) and repeated-start combined transfers (zeros).
5. NVAPI on Linux 615.x (NGX shim only; all QueryInterface IDs NULL).
6. NV2080 I2C controls with DP/HDMI port numbers.
7. `0x73137C` bulk I2C control (INVALID_CLIENT/PERMISSIONS under root).
8. Raw byte reads at `0x37` as a flash window (it's the DDC/CC packet FIFO — the early "MAG 341CQ X28 oracle hits" were cached-descriptor **false positives**, proven by address ladder).
9. `drm_dp_aux` chardev / `DRM_IOCTL_DP_AUX` on nvidia-drm.
10. More than two strobe polarities without a JEDEC match (we never got a contact to strobe).
11. **Spec Step 1 final verdict (commit `d1f5948`)**: patient I2C-mode probe of `0x22` via `0x731341` as root — **108 tries / 2.0 s: all TIMEOUT, zero DEFER/NACK/data**, while `0x50` and `0x37` ACK real data with the same control and framing in the same run (native DPCD0=`0x12` sanity passed). The 4090 open module will not emit I2C transactions to `0x22` on this sink. **Re-measured 2026-10-09 on 615.78.08: identical (109 tries / 2.0 s, 100% TIMEOUT; same-run controls ACK). Verdict stands on both .71 and .78.**

## Open questions (ranked)

1. **Will `0x22` ACK I2C-over-AUX on Intel/AMD Linux?** The decisive test; same binary, no code changes (`nvbus.py` is NVIDIA-only; i2c-dev `ddc.py` path auto-applies there).
2. NVAPI's exact defer/transparent policy (only matters if #1 also fails).
3. PWM2SPI strobe/busy semantics — what `0x38→0x39` latches, which bit to poll; planned oracle: `06,61,9f`-style opcode load + strobe → read `0x64` expecting **`0x1F`** manufacturer byte.
4. Page-read mechanics: 32 sequential data-port reads vs length-armed burst.
5. Which magic candidate actually enables flash access (cand0 vs cand4 gave different status bytes; `strInitialDdcciCmd` values `[133,160]` semantics unverified).
6. ~~Checksum algorithm for `0x4023`~~ **SOLVED session 14c**: low 16 bits of the plain byte-sum over the file (see `Facts.BIN_CHECKSUM_EXPECTED`); post-flash verify can now be done natively once a flash dump exists.
7. Flash layout/erase plan (exports show `SectorErase` + `BankErase`; ROM-region skip list unknown).
8. Brick recovery: no evidence of ROM/USB self-recovery for RTD2711; MSI's own failed-update path is service-flash ⇒ assume clip programmer (CH341A + SOIC-8) as last resort.
9. ISP mode vs live video during a 30–60 min dump (watchdog? `0xEA60`=60 s suspects); dump duration unmeasured.
10. Input-select VCP code on this monitor.
11. Progress bars untested on real traffic.
12. ISP handshake flakiness root cause (pacing study needed before `write` is real).

## Safety policy (user rules, binding)

- **No erase or program until a JEDEC read returns `0x1Fxxxx` from `0x22`.** Full `backup` (+ re-read compare) mandatory before any `write`; no erase during backup.
- Every ISP experiment ends with `0x24` exit + EDID re-verify at `0x50`. Exclusive DDC bus during transfers (GNOME/ddcutil must not touch `0x37` mid-dump; no inter-process lock exists yet).
- The user decides whether to flash — they have no brick-recovery rig. Console gates and typed `flash` confirmation stay mandatory. `write` additionally requires `--allow-write`.

## Next actions (ordered)

1. (User, hardware) Intel/AMD Linux box + DP cable: copy the repo, follow
   **`TEST-INTEL-AMD.md`** (`./msi-isp --bus N info|probe` +
   `scratch/spec_0x22.py --bus N`). As of session 14b `spec_0x22.py` is
   transport-adaptive: on Intel/AMD it auto-selects i2c-dev, same verdict
   logic everywhere. Log every reply verb.
2. **ACK path**: implement `backup` — ISP entry → register window per Flash.dat grammar → JEDEC gate (`0x1F`) → page-loop dump of 1,835,008 B at 32 B/page with INI pacing + progress bar → dump must contain `FW.009`-era image + model string @ `0xF806` → then decode `IspFlash` write sequence from `re/` dumps → implement `write` behind gates → README/packaging for release (the user's "everyone on Linux needs this" goal).
3. **Silence path**: ship v0.1 conclusion; watch NVIDIA's in-kernel DDC/CI driver work (Phoronix, July 2026) — the i2c-dev code path adopts it unchanged. Kernel-module prototype: **VERIFIED session 14e** — `kernel/msi_auxch.ko` builds (`make LLVM=1 CC=clang`, symvers auto-generated from /proc/kallsyms), and at insmod reproduces the whole RM tree + DPCD0/EDID oracles byte-identically; `kernel/test_relay.py` passes **unprivileged (uid 1000, no sudo)**; rmmod clean and repeatable. Kill-switch evidence retained: `nvidia_get_rm_ops().op = rm_kernel_rmapi_op` enters RM at `RS_PRIV_LEVEL_KERNEL`, skipping the fd-table gate and the version-string escape; 0x731341 needs no RS access right (executes in GSP-RM, origin-agnostic). Module is "Dual MIT/GPL" (GPL-symbol consumers). Remaining before shipping in instructions: 0660 group node + in-kernel write gating.
4. Housekeeping: remove the sudo drop-in when root testing ends; keep `STATUS.md` as the append-only session log; commit after every experiment.
