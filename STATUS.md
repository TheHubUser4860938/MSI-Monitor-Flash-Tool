# MSI MAG 341CQP QD-OLED X28 — native Linux firmware flasher

Status: **read/info path working natively; flash-write path blocked by an
NVIDIA DP-AUX address-routing gap.** Nothing on the monitor has been written.

Machine: RTX 4090, NVIDIA open kernel modules 615.71.09 (Dual MIT/GPL),
kernel 7.2.9-1-cachyos, Wayland+XWayland, monitor on DP -> `/dev/i2c-4`.
Monitor is healthy and running `FW.009N`.

## Files
| path | what |
|---|---|
| `msi_isp/ddc.py` | i2c-dev transport + DDC/CI packet builder, byte-exact vs ddcutil 3.0.2 |
| `msi_isp/isp.py` | `I2CTarget` + raw word/burst I2C primitives (the ISP verbs) |
| `msi_isp/Facts.py` | verified facts: offsets, slaves, .bin SHA-256 |
| `msi_isp/cli.py` | the `info` / `verify` / `probe` / `backup` / `write` CLI |
| `probe3.py` | read-only 7-bit ACK scan of the DP link |
| `re/pexray.py` `re/dis32.py` `re/dumpfn.py` `re/strs.py` | PE (32-bit!) + capstone RE helpers |
| `re/f_*.txt` `re/exp_*.txt` `re/str_*.txt` | disassembly + string dumps of Comm.dll, Comm_Aux.dll, WinIspPlugIn.dll |
| `re/env.sh` | `. ./env.sh` sets `$C` `$A` `$P` to the three DLLs |

## The tool architecture (from disassembly; DLLs are PE32/i386 — NOT 64-bit)
`MSI Firmware Update Utility.exe` -> `WinOperateCScaler.dll`(UI) -> `Comm.dll`
(170 exports, dispatcher) -> `Comm/Comm_Aux.dll` (61, real wire backend) +
`PlugIn/WinIspPlugIn.dll` (flash engine, resolves Comm verbs by name).

* `enumCommID=1` in `IspSetting.ini` selects the **AUX** backend.
* `Comm_Aux.dll` wires the real GPU-side transports: NVIDIA NVAPI
  `ctlAUXAccess` (+`nvapi.dll`/`ctlEnumerateDisplayOutputs`) and AMD
  `ADL_Display_NativeAUXChannel_Access` / `ADL_Display_DDCBlockAccess_Get`.
  That is why Wine cannot work: it has no NVAPI/ADL AUX layer.
* ISP verbs = plain raw I2C, not MCCS: `ReadFlashData@0x7e50` chunks by
  `GetI2CPageLength()` (=32) and calls `I2C_READ(slave=0x41, addr_hi, addr_lo,
  buf, len)` — burst reads from 8-bit **0x41** = 7-bit **0x20**, the classic
  Realtek I2C-ISP slave.
* `IspEnable@0xc530` / register pokes use 8-bit **0x44** (7-bit 0x22) and
  **0x30..0x35** (7-bit 0x18..0x1A); `AutoEnterIspMode@0xbfe0` walks a
  command table then probes `0x6F`.
* `EnterIspMode@0x6ed0`: `call [0x101def10]` (comm probe, expects 8 or 0x11)
  then `I2CWordWrite(0x44, reg, val)`.
* `AutoDetectSlaveAddr@0x7050` starts at 0x50 and walks candidate addresses.
* Error `0x45` = "Compare bin and model name is fail" (string in the tool),
  i.e. what you saw: the cached read of offset 0xF806 came back empty because
  the comm layer never reached the scaler under Wine.

## Verified independently of the tool
* DDC/CI native on `/dev/i2c-4`: EDID ok, `getvcp 0x10` ok, and the tool's own
  vendor DDC-CC query `51 84 01 FE E1 E6` (wire dump `6E 51 84 01 FE E1 E6`)
  returns live FW **`FW.009N`** from Linux. Our packet builder reproduces the
  tool's bytes exactly.
* `.bin` is correct for this panel: `0xF800`=`"012"`, `0xF806`=`MAG 341CQ X28`,
  `RTD2711`, panel `TPO340QH1-CH01`, size `0x1C0000`, SHA-256
  `c357bfe9…` == MSI's zip for the X28.
* NVIDIA adapter quirk: repeated-start `I2C_RDWR` returns zeros; you must do
  separate `write()`/`read()` via `I2C_SLAVE` with a `0x00` warm-up, like ddcutil.

## The blocker (measured, not assumed)
Read-only ACK scan of `/dev/i2c-4` (see `probe3.py`): **ACK only at 7-bit
0x30 (DP branch), 0x37 (DDC/CI), 0x4a/0x4b (branch OUI), 0x50 (EDID)**.
Every ISP address — 0x20/0x21/0x22 and 0x18..0x1b — returns `EIO` (no ACK),
before and after sending the enter-ISP command.

Reason: on DP everything is I2C-over-AUX. The kernel only tunnels addresses for
the adapters it registered, and
* `/dev/drm_dp_aux*` doesn't exist; `/sys/class/drm_dp_aux_dev` is **empty**;
* `nvidia_drm.ko` contains **zero** `dp_aux` references — the open driver does
  not implement `drm_dp_aux` / the chardev, even though the kernel has
  `CONFIG_DRM_DISPLAY_DP_AUX_CHARDEV=y`;
* `DRM_IOCTL_DP_AUX` on `/dev/dri/card1` -> `EINVAL` at every struct layout
  and seq we tried.

So NVAPI's `ctlAUXAccess` (raw AUX, arbitrary 20-bit addr, arbitrary slave)
currently has **no Linux equivalent on NVIDIA**. Intel/AMD do have it
(`i915`/`xe`/`amdgap` expose `drm_dp_aux` + raw AUX), which answers your AMD/
Intel question: yes, the same tool should work there, unmodified, since it only
talks to `/dev/i2c-N`.

## Next leads (in priority order)
1. **Vendor DDC/CI tunnel.** The tool talks MCCS on 0x37 for version; check
   whether Comm.dll's AUX backend also wraps flash reads as vendor DDC-CC
   writes/reads (would be fully native today). Look at `Comm_Aux.dll
   I2CWrite@0x3b060` -> shared `0x39e50` and the `I2C2SubWrite/Read@0x3b3a0/
   0x3b4e0` pair (register-sub-addressed = the flash path).
2. Force ISP entry, then re-scan 0x20/0x18-0x1B: the scaler may only expose
   those slaves while in ISP mode.
3. NVAPI-equivalent on Linux via `nvidia-settings`/XNVCFG or RM control ioctl
   (`NV0073`-style aux channel) — heavier, needs /dev/nvidiactl.
4. Move the DP cable to an AMD/Intel GPU and the same code paths should light up.
5. Brute-force the ISP entry command table out of `AutoEnterIspMode` (its
   string/format path is at `0x10003c80`, table walked from `[ebp-0x104]`,
   3-byte entries built as `i*3`).

## Rules we obey
**Never** send erase/write/program ISP commands from this tool until a read has
been proven to return real flash contents (a JECID/JEDEC-ID read at 0x9F, or a
round-trip that matches a known byte). `write` mode stays gated behind an
explicit `--i-know-this-can-brick-it` flag.

## 2026-10-04 session 3 — NVIDIA RM (nvrm.py) probe results + final verdict

Probed the native Resource Manager path directly (ctypes over `/dev/nvidiactl`,
ABI pulled from open-gpu-kernel-modules via sparse git clone in /tmp/ogkm):

* RM client + device + subdevice alloc **succeed** (NVOS21 = 32-byte variant;
  `NV_ESC_RM_ALLOC` 0x2B, version check 0x21 OK). gpu_id from
  `/proc/driver/nvidia/gpus/*/information`, NOT the minor number.
* `NV0073_CTRL_CMD_SYSTEM_GET_NUM_HEADS` (0x730202) **works** — control fd is
  live and permissions pass for benign controls.
* The two controls we actually need both fail with **0x1b
  NV_ERR_INSUFFICIENT_PERMISSIONS**:
  - `NV0073_CTRL_CMD_DP_AUXCH_CTRL` 0x731341 (raw AUX / i2c-over-aux tunnel)
  - `NV0073_CTRL_CMD_DP_AUXCH_CTRL_STATUS` 0x731342
  (displayId probed as head index AND as bitmask 0x100-style; enumerated a real
  DP displayId via DFP enumeration — params were right, status codes confirmed
  against the RM error enum: 0x1b INSUFFICIENT_PERMISSIONS, 0x1f NOT_VALID,
  0x29 NOT_SUPPORTED.)
* Cause confirmed in source: those AUXCH methods carry
  `RMCTRL_FLAGS_KERNEL_PRIVILEGED` (kernel-privileged access-right) in the NVOC
  method tables; a normal userland RM client can't call them.
* `NV_ESC_RM_I2C_ACCESS` (escape 0x39, `nv_i2c_msg_t`) exists in the loaded
  module's escape table but is the *deprecated* path and routes to a
  kernel-only control too. Same answer.
* NVI2C class 0x90CC: in RM 615.x that class number is **GF100_PROFILER**
  (legacy G8x I2C class is gone) — dead end.
* `libnvidia-api.so.1` on Linux is only the NGX loader shim (every
  `nvapi_QueryInterface` ID -> NULL); real NVAPI does not exist on Linux.
* `ddcutil` route on NVIDIA: its own docs say DP is unsupported (HDMI/DVI
  only); our i2c-4 probe shows the adapter services only an allow-list
  (0x30 emulated, 0x37 DDC shim, 0x50 real EDID, DP branch 0x4a/0x4b);
  tunnel-reply slave 0x32 gives EIO, so **DP I2C-over-AUX tunnel via
  i2c-dev is unreachable on NVIDIA**, and ISP slaves are never even attempted.

### Verdict (settled)
* **Intel/AMD:** everything the tool needs (`/dev/i2c-N` raw I2C incl. any
  slave addr) works today — `amdgpu`/`i915`/`xe` expose real AUX tunneling
  through i2c-dev. `probe`/`backup`/`write` should work there unmodified.
* **NVIDIA (this box):** `info`/`verify`/`read EDID`/`live FW version` work
  natively. Flash read/write is blocked by RM privilege gating on the only two
  controls that can do arbitrary AUX. Options, in order of realism:
  1. plug the DP cable into an AMD/Intel GPU (or a second machine) → tool works;
  2. kernel-side: patch `nvidia-drm`/`nvidia.ko` or a small out-of-tree module
     that calls the AUXCH control from kernel context and exposes it (e.g. as a
     sysfs/ioctl) — nvrm.py + isp.py already speak the rest;
  3. Wine + Windows tool (what MSI intends; still the zero-risk path).

## CLI verified end-to-end (safe modes, on NVIDIA, no Wine)
```
$ ./msi-isp --bin <x28.bin> info
bus /dev/i2c-4
  live firmware : 'FW.009'
  EDID monitor  : MAG 341CQ X28
  EDID mfg      : CND, week 35, year 1991
  EDID product  : 0x3de3
  .bin file     : ... version '012'  model 'MAG 341CQ X28'
                  size 1835008 bytes  sha256 c357bfe97be4eaa5…
$ ./msi-isp --bin <x28.bin> verify   -> model match: OK  (exit 0)
$ ./msi-isp probe                    -> 0x30/0x37/0x50 ACK, ISP slaves no-ack,
                                         "ISP slaves visible: False"
$ ./msi-isp backup ...               -> refuses with explicit NVIDIA explanation
$ ./msi-isp write                    -> refuses (stub, exit 3)
```
EDID read = 16-byte chunked with pointer re-posed per chunk, verified
byte-identical to /sys EDID. Model name from the 0xFC monitor-name descriptor
(tag at desc+3, text at desc+4 in block 0 here).


## CONSOLE (2026-10-04 11:0x) — BUILT, TESTED, NOT ROOT-TESTED YET
- `msi_isp/console.py` + `shell` subcommand: shurectl-style REPL (cmd.Cmd).
  Commands: status / set bin / scan / info / verify / backup [--write] /
  flash / quit. All verified end-to-end over pipes as USER on bus 4:
  info -> 'MAG 341CQ X28' + 'FW.009'; verify -> model match OK; gates all
  display + abort correctly. flash requires ALL gates pass + typed 'flash'.
- Program cycle (_program) still a stub BY DESIGN until ISP read proven.
- i2c-dev needs only `video` group (already have). RM AUX channel (nvrm.py)
  is what needs root.

## ROOT-TEST BLOCKER (next action, needs user)
- sudo cache is keyed to the USER'S tty; my exec shell has no shared tty, so
  `sudo -v` in their Konsole does NOT help me. Need the drop-in once:
    echo 'eugene ALL=(ALL) NOPASSWD:ALL' | sudo tee /etc/sudoers.d/99-msi-isp
- Then run: sudo python3 t_root_priv.py (checks 0x1b gone => NVOC
  RMCTRL_FLAGS_PRIVILEGED honored via osIsAdministrator; 0x1b PERSISTS =>
  NVOC_METHOD_FLAG_PRIVILEGED kernel-only, need kernel shim instead).
  t_root_priv.py exists (1.7 KB) — built this session, expects to add
  nvrm.py to its path itself (import msi_isp.nvrm or sys.path fix).

