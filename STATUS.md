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
    echo '<user> ALL=(ALL) NOPASSWD:ALL' | sudo tee /etc/sudoers.d/99-msi-isp
- Then run: sudo python3 t_root_priv.py (checks 0x1b gone => NVOC
  RMCTRL_FLAGS_PRIVILEGED honored via osIsAdministrator; 0x1b PERSISTS =>
  NVOC_METHOD_FLAG_PRIVILEGED kernel-only, need kernel shim instead).
  t_root_priv.py exists (1.7 KB) — built this session, expects to add
  nvrm.py to its path itself (import msi_isp.nvrm or sys.path fix).


## 2026-10-04 session 4 — SUPERUSER UNLOCKS NV0073 AUX ON NVIDIA (major)

The session-3 "0x1b INSUFFICIENT_PERMISSIONS" verdict is **superseded**: the
AUXCH controls are permissive but not `RS_PRIV_LEVEL_USER_ROOT`-exempt as
normal user; **with sudo they work.** Verified live on the 4090:

* Root client tree builds end-to-end: version-check → ATTACH_GPUS_TO_FD (esc
  **212**, array of internal gpu_id u32s; internal id for bus 01:00 is
  **0x100**, not 0) → device alloc (deviceInstance from
  `NV0073_CTRL_SYSTEM_GET_ID_INFO_V2`, authoritative) → NV01_DISPLAY(0x3) common
  (0xE0 class) → NV01_HEAD_0 (0x90 entries +0x4).
* `displayId` is a **bitmask power-of-two**, found empirically: **0x200** =
  the DP head on this box.
* `NV0073_CTRL_CMD_DP_AUXCH_CTRL (0x731341)` in **native AUX mode**
  (bIsI2C=0, AUX type WRITE then READ at DPCD 0x0000): **reads DPCD0 = 0x12**.
  Working raw AUX on NVIDIA from userland — the NVAPI ctlAUXAccess equivalent.
* Byte layout for native mode: `address` u32 = big-endian DP AUX request word
  (addr24 | (rw<<4) | n  — RM maps wire byte0 = address>>24 etc); data buffer
  u8[16]; paramsSize exactly 28 (NV0073_CTRL_DP_AUXCH_CTRL_PARAMS).

## What is still blocked (measured today)

**I2C mode of 0x731341 and bulk 0x73137C both TIMEOUT for I2C transactions**,
while native AUX works. Cause measured: DPCD 0x00D0 reads **0x01 with bit7
clear** — the RTD2711 DP branch device does **not advertise the I2C-over-AUX
tunnel** (0x00D1-0x00D5 all zero). RM's I2C mode routes through the kernel/DM
tunnel machinery which bails without capability; Windows NVAPI instead does
transparent raw transactions and hand-rolls the I2C framing.
Status codes seen: 0x23 INVALID_CLIENT (fixed via GPU-fd attach / secInfo),
I2C-mode → NV_ERR_TIMEOUT, reply-type fields odd on timeouts.

## Consequence / plan

The Windows tool's `Comm_Aux.dll` reaches the ISP slaves with **hand-rolled
I2C-over-AUX framing over transparent raw AUX** (start, 0x6F<<1|(bit13), addr,
repeated start, stop — encoded as native AUX BURST/request sequences), because
the tunnel isn't available on this monitor either on Windows! Options ranked:

1. **Compose I2C-over-AUX manually in native AUX mode** (chunked requests per
   DP spec §2.7.11.2 tunnel semantics: I2CWrite request = MOT|I2C_WRITE_CMD...).
   On NVIDIA raw AUX the hardware sends whatever request bytes we hand it —
   try putting I2C-tunnel-style requests directly (works if RM just forwards).
2. Vendor **DDC/CI opcode tunnel** (0x37 is reachable via i2c-dev DDC shim on
   NVIDIA AND via our AUX path): if `Comm.dll`'s DDCCIWrite/DDCCIRead wrap
   flash traffic in vendor opcodes, the whole flash rides DDC/CC — GPU-agnostic,
   no root needed. NEXT DISASSEMBLY TARGET: WinIspPlugIn `IspFlash`/`DumpFlash`
   → which Comm vtable slot (DDCCIWrite vs I2CWrite) carries flash bytes.
3. Kernel-shim module calling 0x731341 from kernel context (dead-last).

Files: nvrm.py = working RM client (root-validated tree + native aux read).
t_* scratch tests all reproducible; re/ holds 32-bit disasm dumps.
console.py has shurectl-style REPL + flash gates (all refusing correctly).

# SESSION 5-7 (2026-10-04, condensed handoff)

## VERIFIED ON HARDWORK, ROOT, NVIDIA RTX 4090
- nvbus.NvRMAuxBus acceptance (t_nvbus.py): EDID 128B byte-identical to
  kernel sysfs, 32B chunked OK, DDC/CI vendor fw-version 'FW.009' OK.
  Transport = NV0073 AUXCH I2C mode, PLAIN 7-bit addr (VERIFIED comments in
  nvrm.aux_i2c). nvrm.aux() size-for-read bug FIXED this session (len(data)
  is requested length for reads).
- ISP entry WORKS from Linux: magic byte write to slave 0x37 from
  AUTOENTER_CANDIDATES -> status read gains bit 0x80 (saw 0xca/0x80/0x8a/
  0xf8 depending on candidate/run; ANY bit0x80 = alive). isp.enter_isp/
  exit_isp implemented (0x24 restores normal mode; EDID/DDC fine after).
  is implemented in msi_isp/isp.py + Facts.AUTOENTER_CANDIDATES.

## ISLAVE / FLASH ACCESS FINDINGS (all read-only probes, monitor untouched)
- I2C-mode WRITES (decisive probe) to 0x20/0x22/0x18/0x19/0x1B/0x41 all
  TIMEOUT — even with ISP alive. Bare-ADDRESS READ "ACKs" on every address
  incl. nonexistent 0x17/0x21 -> noise, ignore.
- Hand-rolled native-mode I2C-style request words (slave8<<4/6/8 variants):
  writes NACK/DEFER, reads ACK zeros. RM native mode only services DPCD
  space. 0x00D0 tunnel-enable write ACKs but does NOT take effect (readback
  0x01 unchanged) — RTD branch ignores I2C_AUX config writes.
- 0x37 mailbox experiments (t_cmd37/t_mailbox): command writes ACK; reads
  return status/echo bytes incl. once "FW.009N" ASCII (cached DDC/CC reply
  buffer?) — no flash bytes from 0x11/0x10/op-variants yet.
- Disasm: Comm_Aux!0x3a630 dispatcher; NVIDIA backend builds NV_I2C_INFO
  (size 0xB0, ver 0x40000001/2) -> dynamic GetProcAddress'd NvAPI_I2CRead/
  Write. On Windows this is RM-internal transparent I2C-over-AUX that works
  WITHOUT the DPCD tunnel; our userland 0x731341 I2C mode does not replicate
  it for non-tunnel branches. Comm.dll ReadFlashData slave const 0x41
  (8-bit -> 7-bit 0x20) confirmed in f_readflash.txt.

## UNTRIED, HIGH-VALUE NEXT (recommend FIRST, zero code)
HDMI PATH: monitor has HDMI 2.1 inputs; GPU has HDMI out (i2c-5/6 adapters).
On HDMI, DDC = plain I2C master — no AUX tunnel, no RM privilege, no root.
Scaler internal bus (0x37/0x50, likely also ISP 0x20/0x41) is wired to every
port's DDC lines. If user plugs HDMI: sudo not even needed; probe 0x20/0x41
via standard i2c-dev (ddc.py). If they ACK -> full native flash on ANY gpu.
Command: ./msi-isp --bus <hdmi bus#> probe   (bus list: ddcutil detect or
  /sys/bus/i2c/devices/i2c-*/name NVIDIA adapter 6/7)

## THEN
1. HDMI ACK on 0x20/0x41 -> ReadFlashData model: 16-bit page pointer writes,
   32B-page burst reads; oracle flash@0xF806 == b"MAG 341CQ X28".
2. If HDMI gives only 0x20-style ISP after magic (same as DP): implement
   0x41-with-pointer styles (t_flash41.py ready, never ran).
3. Backup -> validate contains live FW.009 header -> implement IspFlash
   erase/program from WinIspPlugIn 0x8520 dump; gates already in console.

## STATE
git HEAD 6794200 + these notes; safe modes + shell work as user; --nvrm
works as root (sudoers.d/99-msi-isp still active, REMOVE at wrap-up).
Monitor: FW.009, DP-1, never flashed. DP cable currently; HDMI test pending
user cable swap. t_flash41.py / t_cmd37.py / t_tun4.py = latest probes,
all root-run, all idempotent-safe.

# SESSION 8 (2026-10-04 afternoon) — HDMI CONFIRMED + vendor register map started

## HDMI (bus 3, card1-HDMI-A-1) — plain i2c-dev, NOT root, works
- ddcutil detect: bus3=HDMI-A-1 (monitor), bus4=DP-1 (same monitor, now dual-linked).
- ISP entry over HDMI WORKS as plain user: cand0 magic 0x94 -> status bit0x80
  alive (0x88, then 0xdf on repeat poll), exit 0x24 clean, EDID intact after
  every run (scratch/t_hdmi_isp.py).
- BUT: even ISP-alive, slaves 0x20/0x22/0x18/19/1a/1b NO-ACK on HDMI plain
  i2c too -> the 0x20-flash-slave model is dead; flash IO must go through the
  0x37 DDC device (mailbox) or vendor DDC/CC packets.
- 0x37 mailbox burst (t_mbox.py, ISP alive, ptr F800): reads return constant
  status block `02 00 df 00 ff ff 02 02 6b...` for every cmd-prefix variant
  (10/11/12/96/6A/none) — no flash bytes. Raw-byte mailbox on HDMI likely
  needs START-condition I2C_RDWR (ddc.py does single-shot writes); low prio.

## DECISIVE FINDING: vendor op01 = "read FW string register", NOT a window
- t_regwin.py sweep proved: op01 replies `02 0l lo hi <ascii>` where l = the
  LOW operand byte echo and the string is ALWAYS the cached FW id 'FW.00...'
  regardless of operands (f8 00, 00 00, all variants). "FW.0" hits were
  echoes of operand+cached string — the flash-window theory is FALSE.
  (Parse: raw reply 6e 8l <d0=ddest> <d1=result> <d2=echo_lo> <d3=echo_hi> data...)
- t_lensweep.py: data=[FE E1 X] — X selects a VENDOR REGISTER, not length:
    FE E1 E6 -> 'FW.009' (live fw string, 6B)
    FE E1 A4 -> 1f 40 37 37 (4B, maybe date/build id)
    all other X -> `02 01 <echo> 'FW.0'` default/mismatch reply
  => opcode 0x01 = vendor VCP-style register READ, dest byte 0x00=match.
  Only E1 subpage found so far. NEXT: sweep hi byte: FE E2..EF x, and FE xx E6;
  WinIspPlugIn GetFWInfo probably uses exactly one of these. Flash
  read/backup NOT yet found here — need more of the register map, or the
  0x37 mailbox proper framing (i2c_RDWR combined msgs on HDMI), or
  disasm WinIspPlugIn@0x8520 IspFlash (only remaining authoritative source;
  re/f_*.txt has the dump).
- Monitor: still FW.009, nothing written. DP+HDMI both plugged; HDMI bus 3,
  DP bus 4. Sudoers drop-in still active.

## SESSION 8b (same evening) — register map narrowed; mailbox verdict
- pexray.py FIXED to CS_MODE_32 (all three DLLs are PE32/0x14c; previous
  64-bit dumps incl. f_ispenter_plugin.txt were GARBAGE — re-dump
  WinIspPlugIn exports now clean: IspFlash 0x8520, DumpFlash 0x8860,
  GetFWInfo 0x8800, RecordFWVersion 0x8750, EnterISPModeExport 0x8c50,
  BankErase 0x8a20, ChipErase 0x8af0).
- Flash.dat decoded: per-chip SPI init scripts as byte streams
  "06,<reg_hi>,<reg_lo>,<val>" = write scaler reg; "0d,<reg>,<len>,<w1>,<w2>,<wait>,<t>"
  = read/compare. Regs 0x6020/0x6038/0x6068/0x6069/0x64xx/0x65xx/0x66xx/0x67/0x6d/0x6f/0x70/0x71.
  => flash access goes through SCALER REGISTERS; tool's I2CWrite(0x37-ish
  block 0x30-0x35/0x22)/ReadFlashData(0x20,hi,lo) = register-then-burst design.
- Vendor DDC/CC op01 [FE x y] = register-window read on HDMI (verified):
  FE E1 E6 -> 'FW.009' (6B), FE E1 A4 -> 1f403737 (4B). All other probed
  hi/lo incl. FE F8 00/F8 06 -> empty no-parse. E1 subpage is NOT flash
  window (constant reply regardless of 2B/3B/4B operand forms).
- 0x37 raw mailbox (enter ISP cand magic -> [10 03 A2 A1 A0] addr -> [11]
  read): returns 'fe 00 MAG 341CQ X28n' — ADDRESS-INSENSITIVE across 10
  different test addresses -> cached EDID-descriptor string, NOT live flash
  bytes. ORACLE HITS THIS EVENING WERE FALSE POSITIVES. Mailbox either needs
  different framing or isn't flash-capable on RTD2711.
- After exit_isp + 20min rest, HDMI DDC/CI healthy (ddcutil getvcp OK on
  bus 3 AND bus 4; EDID False earlier = pointer-position artifact in test).
- NEXT (ranked): (1) redump WinIspPlugIn IspFlash/DumpFlash/GetFWInfo with
  fixed 32-bit pexray — GetFWInfo may be the FE E1 E6 impl, IspFlash shows
  the TRUE flash-read primitive sequence (register script via I2CWrite?);
  (2) implement scaler-register model: op01 [FE hi lo] is likely window READ,
  find window regs; (3) mitxela DDC-OLED post + GHENT RTD2660 programmer for
  RTD I2C-ISP register lore (web hit, not yet read).
- Monitor: still FW.009 unflashed. Both DP+HDMI connected. sudoers active.

## Session 7 (2026-10-04 pm) — post-wedge recovery + wire-recipe live tests
Monitor MCU soft-wedged (buttons dead, DDC degraded) after HDMI+DP dual-input
state during probing. Cold power-cycle + HDMI unplug = full recovery, verified:
DP-only, bus 4, EDID 512B, live FW FW.009, ddcutil detects, tool info OK.
HYPOTHESIS LOCKED: dual-input/DDC stress wedges this scaler; keep DP-only.

t_wire/t_wire2 (root, --nvrm, strictly read-only apart from ISP magic bytes):
- ISP entry works on clean monitor too: cand[0], handshake status 0xfe (bit7 set).
- Slave 0x20/0x22 writes TIMEOUT (12x DEFER-retry) in ISP mode. DEAD, again.
- Slave 0x37 raw pointer-writes ALL return identical 16B:
  `06 02 00 fe 00 | "FW.009N"` — NOT address-sensitive: this is the DDC/CC
  REPLY framing (06=dest, 02=src host... actually vendor reply header) + the
  version-寄存器 content my pointer bytes happened to select (0xF806 -> the
  tool's version regs FE E1 E6 family!). => 0x37 raw-I2C reads land in the
  DDC/CC engine, which answers with *its* framing; raw pointer protocol is
  NOT what 0x37 speaks here.
- INTERPRETATION (high confidence): on this model the ISP flash surface is
  reached via DDC/CC VENDOR PACKETS (opcode 0x01 reg-read proven; write-form
  opcode still unknown) or the 0x30-0x35 register-file seen in normal mode.
  Flash.dat = scaler PWM/SPI engine register scripts (idx reg 0x60, data
  0x61-0x66, strobes 0x20->0x21, 0x38->
 0x39). The plugin's raw-pointer slave constants (0x41 etc) belong to the
 older Comm protocol generation; for this MSI build the answer is vendor
 DDC/CC packets + those register scripts.

NEXT STEPS (ranked):
1. Mine Comm.dll/WinIspPlugIn 32-bit dumps (re/f_*.txt, fresh this session)
   for the DDC/CC WRITE framing of the FE Ex register window (opcode +
   payload layout) and the ISP-mode register map; implement flash-read as
   register pokes via the proven ddc packet layer.
2. Probe candidate write opcodes 0x02/0x03 with [reg][data] payloads on
   0x37, safe regs only (never the 0x6Exx ISP regs until decoded), verify
   read-back unchanged.
3. Implement backup/verify; then write cycle, every gate + typed confirm.
Monitor state: FW.009 untouched, DP-only, healthy. sudo NOPASSWD drop-in
/etc/sudoers.d/99-msi-isp still active (remove at release).

## Session 9 (2026-10-04 pm)
- ISP-alive full write-decisive sweep (112 addrs, log scratch/sweep_isp.log):
  ZERO slaves ACK writes while ISP alive (even 0x37 stops ACKing raw writes
  once in ISP mode; magic-byte entry itself is a separate raw path).
  => slave-level flash access is dead on this RM AUX path, definitively.
- Vendor DDC/CI WRITE-opcode probe (scratch/t_wopcode.py, state-preserving
  write-back of the version register): candidates 0x02,0x03,0x04,0x32,0x33,
  0x3B,0x00 ALL rejected (reply 00 00 00), read-back unchanged, monitor
  healthy. Write opcode is NOT under the plain get/execute envelope.
  Next: the plugin's write-reg primitive (re/f_4e90.txt fresh 32-bit dump)
  builds packets itself — read its buffer layout to get the real opcode
  instead of guessing (Grok concurs: "the constant next to 0x01 is it").
- progress.py: live progress bars (TTY in-place bar w/ elapsed+ETA; non-TTY
  5%-step lines) wired into read_burst(progress=) and both backup loops
  (cli + console). write will reuse the same callback when implemented.
- Fixed latent import bug: cli.py imported IspError from wrong module.
- monitor healthy, FW.009 untouched, DP-only.

## Session 10 (2026-10-04 evening) — NV2080 I2C dead on DP; Write32BitRegEx fully decoded
- NV2080_CTRL_CMD_I2C_READ/WRITE_BUFFER (0x20800601/2) + READ_REG (0x20800603):
  every DP-derived port id (4-7 from GET_I2C_PORTID) -> NV_ERR_INVALID_ARGUMENT 0x1f,
  flags 0 and PRIVILEGE(2) alike. struct sizes 532/276 validated against upstream
  ctrl2080i2c.h (saved: /tmp/c2080i2c.h). NV2080_CTRL_CMD_I2C_ACCESS (0x20800610,
  phase-level bit-bang, full cmd/flag table in header): TEST_PORT -> 0x1f on all ports.
  VERDICT: RM's "DDC ports" for DP displays are AUX-emulated shims, not raw I2C
  masters; those controls are for GPU-internal/pixelport I2C. Dead lane, do not retry.
- Write32BitRegEx (Comm!0x10008750, w32bre.txt) device-type 0x11 == NVIDIA-AUX:
  32-bit reg value split -> 4-byte payload [reg&0xFF, val>>16 lo?? order:
  [ebp-4]=val>>16, [ebp-3]=val>>8 (reg byte also stored at [ebp-3]? SEE dump),
  [ebp-2]=val>>8, [ebp-1]=val&0xFF] then I2CWrite(global 0x101dee04, slave, buf4, len 4).
  i.e. plain 4-byte I2C write to 8-bit slave 0x44 (=7-bit 0x22) — byte 0 = register
  index (Flash.dat CSV's 06,<reg>,<val>), bytes 1-3 = big-endian 24-bit register VALUE.
  Flash.dat reg space == the 0x22 slave's register file. index reg 0x60, data 0x61-0x66.
- sweep_isp.log (DP, ISP alive): 0x22 write TIMEOUT (re-entry at 0x22 proves it was
  probed and failed). DP AUX I2C to 0x22 = dead on NVIDIA RM (no tunnel + shim ports).
- Remaining live lane (only one): HDMI DDC is a REAL I2C bus (no tunnel semantics).
  Plan t_crossisp.py: HDMI-only (or DP-enter + HDMI-probe cross if ISP state is
  global to the scaler, which the design says it is):
    1. magic 94/9a/... candidate write to 0x37, status read flips bit7 (proven on HDMI,
       3fb6f11, user perms)
    2. on 0x22: write [0x60, 9F, 00, 00, 00]? — per Flash.dat semantics:
       write reg=0x60 strobe; window: write [0x60,<idx>] pairs, read data regs;
    3. oracle: JEDEC 0x9F via SPI bridge -> A25L032 ID 0x1F4010, or model string
       "MAG 341CQ X28" @0xF806 through the window.
  HDMI cable currently UNPLUGGED (user power-cycled + removed DP/HDMI dual-input
  wedge). Needs user to re-plug HDMI (secondary input; DP stays video source).

## Session 7 (evening) — USB-C lane: investigated and CLOSED (manual + kernel receipts)
- Hypothesis: Realtek hubs (bus 10/11, 0bda:5411/0411) = monitor Type-C ISP pipe. **Refuted:**
  they enumerate at boot (dmesg t=1.7s, before any cable work), mount at internal header ports
  (10-3/11-3), and everything attached is motherboard peripherals (kb/mouse/AURA/DualShock).
- Monitor Type-C = exactly one USB function ever: VIA 2109:0103 Billboard (Alt-mode status only).
- MSI manual (MAG_341CQP_QD-OLED_X28v1.0, p.7 item 10): Type-C "only carries video signals and
  doesn't support data transmission function"; spec page: "Non Support: KVM". Port is DP-Alt + 15W PD, data unpopulated.
- Comm.dll DOES contain a full USB backend (GetUsbDevicePath/Send-ReceiveUsbPacket/
  SetNewRealtekUSBMode/TypeCUsb*SysDevice; CreateFileW+ReadFile/WriteFile device-handle model)
  -- feature of the shared multi-model tool for boards WITH a populated hub/upstream. Not this board.
- Consequence: DDC/CI via DP (slave 0x37) remains the ONLY physical lane. Fork A/B question is
  unchanged and remains THE next step: mine opcode-switch at WinIspPlugIn+0x3c80 + IspFlash body.
- re/u_*.txt: fresh 32-bit dumps of the USB exports (dispatcher thunks -> backend vtable) kept for
  reference in case a hub-populated model (271QPX/321UP family) is ever ported.

## Session 11 (final) — fork CLOSED: verdict Fork B (NVAPI-proprietary dataplane)

Re-disassembled with the fixed 32-bit toolchain (fresh exports, RVAs from
WinIspPlugIn.dll): IspFlash@0x8520, DumpFlash@0x8860, ReadFlashData@0x7e50
(dumps: re/x_ispflash.txt, x_dumpflash2.txt, x_readflash.txt — zero movabs,
clean 32-bit).

Findings:
- NO vendor-DDC packet opcode constants anywhere in the flash engine.
  The "opcode switch at 0x3c80" was a vtable stub (earlier RVA guess wrong);
  the real data plane is what Session 7 read and today re-verified:
  per-page (I2C_PAGE_LEN=32) calls through Comm interface slot +0x14 to
  I2C_READ/I2C_WRITE with slave const 0x41 (burst), 0x44 (MCU regs),
  0x6F (ISP/status) — i.e. Comm_Aux.dll -> NVAPI ctlAUXAccess ->
  driver-internal transparent I2C-over-AUX.
- Therefore Fork B is the recorded verdict: the flash read/write/burst
  protocol is NOT expressible as vendor DDC/CC packets on 0x37 (all such
  opcode candidates proven dead by two live probe rounds), and the raw-AUX
  framing NVAPI uses is not issuable from Linux on NVIDIA:
  * NVAPI absent on Linux (libnvidia-api.so.1 = NGX shim),
  * RM AUX controls: native DPCD + I2C-tunnel mode only; sink lacks tunnel
    (DPCD 0x00D0 measured), non-allowlisted slaves (0x20/0x22/0x41) never
    ACK (write-decisive sweeps pre/post ISP entry, both DP and HDMI),
  * NV2080 I2C controls wired to GPU-internal ports only (all DP port
    numbers rejected on 615.71.09).
- Consequence for the tool: backup/write stay gated (honest refusal with
  this reason); info/verify/probe/shell/progress all ship as v0.1. Flash
  path today = Windows reference tool (verified everything else correct:
  cable, port, DP-only lane, file model-match OK).

Housekeeping at close:
- sudo NOPASSWD drop-in (/etc/sudoers.d/99-msi-isp) still on disk — agent shell lost
  sudo access at close; USER should remove: `sudo rm /etc/sudoers.d/99-msi-isp`.
  (Until removed, passwordless sudo is active for the dev user.) User runs
  `sudo msi-isp shell` from their own terminal when root mode is wanted.
- Monitor: FW.009, verified healthy, never flashed. HDMI lane: keep cable
  only if testing Intel/AMD machines later; not required for v0.1 modes.

## Session 13 (2026-10-07 late) — spec'd 0x22 probe, definitive negative on 4090
User protocol spec (wire: I2C-over-AUX, cmd nib 0x4/0x5, 7-bit addr, len N-1, MOT held,
addr-only MOT-clear stop; >=200 tries / 2 s; log every reply verb). Run as root, scratch/spec_0x22.py:
- Same-control sanity, same framing: native DPCD0 = ACK 0x12; 0x50 EDID = ACK+data; 0x37 DDC = ACK+data.
  -> control path and framing demonstrably emit I2C-over-AUX that the sink answers at 0x37/0x50.
- STEP 1 on 0x22: 108 tries within 2.0 s budget (5-20 ms backoff), replies 108x TIMEOUT,
  ZERO DEFER, ZERO NACK, zero data. Adddress-only MOT-clear stop form: TIMEOUT.
- Captured submitted struct: displayId=0x200 cmd=0x1 (addr is 7-bit 0x22, I2C mode) size=0
  bAddrOnly=0 replyType=TIMEOUT st=0x40.
- SPEC VERDICT: continuous silence => RM control 0x731341 I2C-mode on the 4090 open module
  will not emit/route transactions for 0x22 on this sink. STOP that control (do not retry with
  bigger budgets; 10 vs 108 tries identical). Per decision tree: next machine = any Intel/AMD
  GPU on Linux, DP cable, SAME binary + SAME MOT framing. ACK there => tool done for those GPUs,
  4090 awaits a driver that services arbitrary I2C-over-AUX addresses. Silence there too =>
  remaining difference is Windows NVAPI defer/transparent policy; no further disassembly on
  this box creates a wire.
- Monitor verified healthy during run (same-run 0x50 ACK with data; no ISP entry, no writes).
- Sudo: drop-in 99-msi-isp re-added for tonight's run (remove when done: sudo rm /etc/sudoers.d/99-msi-isp).

## Session 14 (2026-10-09) — 615.78.08 driver + kernel 7.2.9-2: dead-end re-measured; nvrm version-string break found

User package update + reboot. New baseline: NVIDIA open module **615.78.08**, kernel
**7.2.9-2-cachyos** (headers 7.2.9-2 installed, match running kernel). Checks (read-only
unless stated; monitor untouched):

- i2c-dev probe (/dev/i2c-4): identical allow-list — 0x30/0x37/0x50 ACK,
  0x22/0x20/0x18-1b no-ack. info/verify green, live FW.009.
- No /dev/drm_dp_aux*; /sys/class/drm_dp_aux_dev empty; nvidia-drm.ko 615.78.08 still
  **zero `dp_aux` string references** (same strings test as session 3); no new
  AUX/I2C/DDC module params. Release-note sweep (Phoronix/GoL/9to5Linux): VKD3D-Proton
  latency, Wayland HDR fixes, suspend/SELinux, UseKernelSuspendNotifiers=1 default —
  **no display I2C/AUX/DDC changes**.
- **NEW BREAK — nvrm.py pinned version string:** NV_ESC_CHECK_VERSION on 615.78.08
  rejects the hardcoded `VERSION = b"615.71.09"` with **EINVAL** (proved side-by-side:
  b"615.71.09" → EINVAL, b"615.78.08" → handshake OK). Affects `sudo ./msi-isp --nvrm
  probe` and `scratch/spec_0x22.py` alike. .78 branch evidently tightened the relaxed
  gate. TODO: derive the version string at runtime from /proc/driver/nvidia/version —
  until then every future driver update re-breaks the RM path.
- spec_0x22 re-run (root, via in-memory VERSION patch; same framing + controls):
  native DPCD0=0x12 ACK; 0x50/0x37 ACK+data; STEP 1 on 0x22: **SILENCE — 109 tries /
  2.0 s, 100% TIMEOUT, zero DEFER/NACK/data**; addr-only MOT-clear stop form TIMEOUT.
  Dead-end #11 re-stamped on 615.78.08: verdict unchanged vs 615.71.09 (108 tries).
  Next gate remains the Intel/AMD box, same binary + MOT framing.
- Scratch finding: spec_0x22.py is **NVIDIA-RM-only** (builds NvRMAuxBus at startup) —
  HANDOFF's "i2c-dev path auto-selected there" is false for this script; portable
  transport = next workflow item. msi_isp/ itself is 100% stdlib (verified by import
  audit) ⇒ `./msi-isp probe` is already portable to Intel/AMD boxes unchanged.
- Env: sudoers drop-in 99-msi-isp re-installed by user (active); remove after root
  testing ends. capstone 5.0.7 currently MISSING from system python (pefile 2024.8.26
  present) — re/ toolchain blocked until restored (repo-local .venv planned).
- FIX APPLIED same day: nvrm.py now derives the version string at runtime from
  /proc/driver/nvidia/version (NvRM._driver_version; pinned-string fallback kept).
  Re-ran BOTH bare: `sudo ./msi-isp --nvrm probe` exit 0; spec_0x22 STEP 1 verdict
  unchanged (109 tries / 2.0 s, all TIMEOUT). Future driver updates no longer
  break the RM path.
- Monitor: FW.009, DP-only, healthy, never flashed.

## Session 14b (2026-10-09) — portable spec_0x22 (Phase 5 of the workflow) + new NVIDIA 0x50 quirk

`scratch/spec_0x22.py` rewritten as ONE script with two transports
(--transport auto|rm|i2cdev, --bus N, bus auto-detect via 0x50 EDID magic):

- **RM path unchanged** semantics; re-run verified byte-identical verdict vs
  session 13 (108 tries / 2.0 s TIMEOUT; addr-only WRITE-form stop probe →
  TIMEOUT).
- **i2c-dev path** (the Intel/AMD gate): per-try errno verbs logged
  (NACK/EIO, ENXIO, TIMEOUT, BUSY, EMPTY-READ guard for the NVIDIA shim's
  zero-length "successes"); DEFER retries live in-kernel there, so try-count
  is ~50 vs 108 on RM — same 2.0 s wall, same pass criterion (ACK+data only).
- Dry-run on this box (user, --transport i2cdev): autodetect → bus 4, EDID
  sanity OK, controls 0x50/0x37 ACK, **0x22 = STABLE-NACK/EIO ×50/2.0 s →
  NO CONTACT exit 1**. Known negative reproduced through the new backend ⇒
  backend validated; same code is what the Intel/AMD box will run.
- **NEW measured fact: the NVIDIA i2c-dev shim corrupts the FIRST byte of
  every 0x50 read** (returns 0x00 where the EDID has 0xFF; bytes 1..15
  verified correct against the real header + vendor ID 0x0dc4 at the right
  offset). Hence EDID-presence detection uses a 6-FF run within the first 10
  bytes. Intel/AMD adapters are expected to return byte 0 normally; the test
  tolerates both alignments.
- TEST-INTEL-AMD.md: user-facing runbook (commands, verdict table, capture
  list). spec_0x22.py + probe + info are stdlib-only ⇒ copy-the-directory
  portability.
- Workflow state: Phase 1 (session records) DONE; Phase 4 (nvrm version
  autodetect, 94f256a) DONE; Phase 5 DONE this entry. Phase 2 (GitHub MCP)
  configured — awaiting user's /mcps OAuth sign-in; Phase 3 (repo) gated on
  it. Phase 6 (capstone+RE) next executable without user action.

## Session 14c (2026-10-09) — RE toolchain restored; OPEN Q6 SOLVED: the _4023 checksum

- capstone 5.0.7 + pefile 2024.8.26 reinstalled in repo-local `.venv` (system
  python is PEP 668 externally-managed); `.gitignore` += `.venv/`; `re/env.sh`
  now exports the venv PATH + `$PY`. Toolchain sanity: WinIspPlugIn exports
  re-derived and exact vs session 8b RVAs — IspFlash 0x8520, DumpFlash 0x8860,
  GetFWInfo 0x8800, RecordFWVersion 0x8750, EnterISPModeExport 0x8c50. Name
  correction: full export names are **BankEraseFlash**@0x8a20 /
  **ChipEraseFlash**@0x8af0 (8b listed short forms); ReadFlashData@0x7e50
  lives in Comm.dll (re-confirmed, as session 11 recorded).
- Method notes (vendor binaries speak UTF-16): string hunt must use utf-16-le
  patterns; xref = scan .text for the LE-packed VA; function start = backscan
  for `55 8b ec` prologue; then capstone CS_MODE_32 linear dump.
- **Q6 cracked — updater filename checksum = low 16 bits of the plain byte
  sum of the .bin as stored on disk.** Evidence chain (MSI Firmware Update
  Utility V1.0.6.exe, RVAs):
  * fn 0x4119a0: two interleaved `movzx`/`add` loops (even/odd offsets) + odd
    tail = plain 32-bit Σbytes;
  * caller 0x4137c9-0x4137d5: `movzx eax, ax` → compare low 16 only vs value
    parsed from filename tail (strings "Checksum from bin file name string to
    int:0x%x checksum from bin content:0x%x" @0x413796; missing suffix →
    "Get bin file name checksum fail!" @0x4136e3);
  * verdict gate: call 0x4133b0, fail → "Compare checksum fail!" @0x40febb.
  Reproduction: sum(FW.012 bytes) = 0x0C964023 → low16 = 0x4023 = filename ✓.
  The earlier "32-bit over 4,194,304 B region" assumption is superseded (the
  0x4133b0 function reads the actual file, chunked 32 KiB, no padding).
- Red herring cleared: WinIspPlugIn "CheckSum calculate from read buffer:
  0x%x" (fn 0x10026d90) is the DDC/CI page XOR seeded 0x50 — the same rule
  ddc.py already implements; unrelated to bin validation.
- Facts.py += BIN_CHECKSUM_EXPECTED + bin_content_checksum() helper (pure
  stdlib, usable for future post-flash verify once a dump exists).
- GitHub MCP: `opencode mcp list` → "⚠ github needs authentication" — config
  confirmed live; OAuth sign-in is the user-side step (Phase 3 gated).
- Phase 7 done early (doesn't depend on GitHub): README.md written (0x45
  answer, _4023 answer, working matrix, NVIDIA status, safety model) + MIT
  LICENSE added. Phase 8 (kernel-module kill-switch check) is the remaining
  executable item; Phase 3 (repo push) awaits user sign-in + STATUS skim.

## Session 14d (2026-10-09) — Phase 8 KILL-Switch verdict: GO (kernel-context AUXCH is clean)

Static analysis of open-gpu-kernel-modules **615.78.08** (shallow clone at
`/tmp/opencode/ogkm`, tag matches the running driver exactly):

- A formal KERNEL-CLIENT RM API exists, purpose-built for in-kernel RM
  clients (it's what nvidia-modeset uses): `nvidia_get_rm_ops()`
  (EXPORT_SYMBOL_**GPL**, kernel-open/nvidia/nv-modeset-interface.c:146)
  → `.op = rm_kernel_rmapi_op` (osapi.c:5218) → switch covering
  NV04_ALLOC (NVOS64), NV04_CONTROL (NVOS54), NV01_FREE, NV01_ALLOC_OBJECT
  (NVOS05 root client), dup/share — i.e. every escape our nvrm.py uses
  from userspace, but entered from kernel with KERNEL params.
- Privilege chain, the decisive question: these entries call
  `_nv04Control(pArgs, NV_FALSE, NV_FALSE)` (entry_points.c:127) →
  `rmapiInitDeprecatedContext(..., bUserModeArgs=NV_FALSE)` →
  `secInfo.privLevel = RS_PRIV_LEVEL_KERNEL` (deprecated_context.c:184).
  The only process-identity gate found on our path, `osIsGpuAccessible`
  (nv.c:6088 `iterate_fd` over **the caller's fd table** requiring an open
  /dev/nvidiaN), runs in device.c:140-148 **only when
  privLevel < RS_PRIV_LEVEL_KERNEL** ⇒ skipped for kernel clients.
- NV0073 AUXCH control 0x731341: host dispatch table entry
  (g_disp_objs_nvoc.c [108]) carries **accessRight=0x0** — no RS access
  right required. Implementation is NOT in the open tree (only
  `disp_common_kern_ctrl_minimal.c`): 615.x display controls execute in
  **GSP-RM firmware**, which only ever sees host-kernel-originated RPC —
  user vs module origin is indistinguishable there. Our proven root
  userspace sequence therefore implies the identical kernel-context sequence.
- Bonus: `rm_kernel_rmapi_op` never passes NV_ESC_CHECK_VERSION (the
  userspace handshake), so the 615.78 strict version-string gate is
  irrelevant in-kernel too.
- Caveats for the prototype build: GPL-symbol use ⇒ module must declare a
  GPL-compatible license ("Dual MIT/GPL" fine for an MIT project);
  `nvidia_get_rm_ops` handshake compares `version_string` against
  NV_VERSION_STRING — read it from /proc/driver/nvidia/version (same trick
  as commit 94f256a); an nvidia_stack_t per call via alloc_stack().
- Verdict: proceed to chardev prototype — user ioctl → alloc_stack →
  NVOS05 root client → NVOS64 device/subdevice/NV0073 chain → NVOS54
  control 0x731341 relay; acceptance = nvbus EDID-identical test run
  **unprivileged** through the module. Kernel build env ready
  (/usr/src/linux-cachyos 7.2.9-2, symvers present).
- GitHub MCP still "needs authentication" (user-side /mcps sign-in pending).
- Monitor: FW.009, DP-only, healthy, never flashed.

## Session 14e (2026-10-09) — Phase 8 module VERIFIED: unprivileged DP-AUX on NVIDIA

- PII/anonymization for public release: repo-relative paths everywhere
  (also fixes 31 stale `<old-repo-location>` insertions), `<user>`/
  `<repo>` placeholders in docs+transcripts, LICENSE holder + module
  author de-named, __pycache__ untracked, kernel build artifacts
  gitignored; full git history rewritten to `msi-isp-dev
  <dev@msi-isp.local>` (nothing pushed pre-rewrite, so zero traces) and
  doc hash references re-pointed. `git grep` = tree clean of
  name/handle/email/hostname.
- kernel/msi_auxch.ko now LINKS + LOADS. Build facts: CachyOS kernel is
  clang-built → `make LLVM=1 CC=clang`; CONFIG_MODVERSIONS is OFF →
  modpost needs only symbol NAMES: Makefile generates `nvidia-syms`
  from live /proc/kallsyms into KBUILD_EXTRA_SYMBOLS (this kernel's
  dump format is 5 tab fields: crc/sym/module/export/namespace — even
  an empty namespace column is mandatory).
- insmod, first load, all from kernel context (NVRM 615.78.08):
  ops handshake OK, open_gpu(0x100) OK, NV01_ROOT/DEVICE_0/NV0073 all
  status=0x0, displayId discovery 0x200, DPCD0 read **ACK b0=0x12** and
  0x50 read **00 ff ff ff ff ff ff 00** — byte-identical to the
  session-13 root-userspace oracles. Kill-switch GO confirmed at
  runtime, not just statically.
- Acceptance (kernel/test_relay.py, stdlib ctypes): as **uid 1000, no
  sudo**, DPCD0 + EDID-header oracles both ACK byte-exact →
  `UNPRIVILEGED RELAY: PASS`.
- Repeatability: insmod→pass→rmmod→insmod→pass→rmmod; every RM free
  returns 0x0, /dev node vanishes on unload, no residual state.
- Bugs fixed during bring-up: two `ret = PTR_ERR(NULL)` ordering bugs in
  chardev error paths; oracle comment said "expect ff*7 00" but the
  EDID magic genuinely starts with 0x00.
- Deliberately NOT done yet (polish gate): node is 0666 (plan: 0660
  group `msi-isp` + unlock-gated writes per security discussion),
  ioctl still relays write-direction transactions ungated.
- Monitor: untouched by all of this — read-only oracles; FW.009, DP-only.
- **Debug & polish gate (user-imposed, passed — gates the TUI work):**
  * `ruff.toml` pins the lint policy: strict on shipping surfaces
    (msi_isp/, kernel/, re/), real-bug-families-only on the research
    archives. Whole-repo `ruff check .` = **All checks passed** (started
    at 648 findings; every one triaged, none silenced blindly —
    policy exceptions are documented per entry: SDK-name mirror in
    nvrm.py, error boundaries in cli/console/isp/nvbus).
  * Real defects fixed: dead local `push_name` in re/pdump.py, unused
    unpack `stride` in nvbus, `sorted()[0]`→`min()`, env-default type
    bug (`MSI_ISP_BUS` default int→"4"), redundant int() cast in
    progress, 3 files opened without context manager, try/except-pass →
    contextlib.suppress, dead imports (console.time, isp.field),
    shebangs without exec bit ×4, plus the long-dead fsum.py (above).
  * Kernel module: `make W=1` = **zero warnings** (sparse not installed;
    W=1 tier covers it); earlier PTR_ERR ordering + wrong oracle-comment
    fixes already listed.
  * Dynamic regression after every edit: `info`/`verify`/`probe` output
    byte-stable vs baselines; `spec_0x22.py` both transports unchanged
    (i2c-dev STABLE-NACK/EIO, RM 108x TIMEOUT); `--nvrm probe` healthy;
    console `flash` gate refuses with the right five-gate table; module
    insmod→unprivileged PASS→rmmod, three cycles.
  * Hygiene: STATUS.md.bak untracked + `*.bak` ignored; README gained a
    truthful kernel/ entry (relay removes the sudo requirement, **not**
    the 0x22 silence); HANDOFF working-commands extended with the module
    flow. PII re-sweep post-edit: clean.
  * Full-file re-read of the shipping package (cli/console/ddc/progress,
    targeted re-reads isp/nvrm/nvbus): docstring corruption in cli's
    `--help` headline ("5 words of write") fixed; `cmd_probe` no longer
    opens the transport twice (halves `--nvrm probe` setup cost);
    `bin_header` single-pass read; console: dead ImportError fallback
    (silently empty model string) removed, `last_sha` initialized +
    actually shown in `status` (the old message promised it),
    `do_flash`'s leaked bus fd wrapped in `with`; progress: redundant
    local. HANDOFF TL;DR corrected (backup exits 1 with reason; only
    `write` exits 3). Regression re-run after: probe identical on both
    transports, shell gate table unchanged, verify OK, PII clean.

## Session 14f (2026-10-09) — TUI: shurectl-style curses menu (plan step 4)

- `msi_isp/tui.py` (~250 lines, pure-stdlib curses) drives the existing
  `Console` session object — zero logic duplication: menu actions capture
  stdout+stderr into a live-scrolling pane (progress bars auto-degrade to
  line mode since the sink reports non-TTY) and share all gates/state with
  the text REPL. Header shows transport/uid, live model+FW (queried once
  at start, `r` refreshes), bin/verified/backup state — the verify action
  flips the header to `verified ✓` live.
- Keys: arrows/j/k, Enter or 1-9 run, PgUp/PgDn/Home/End scroll, ESC/q
  back, ^L noted in footer. `.bin` file browser (dirs first, sizes shown,
  starts in `vendor/` or `$MSI_ISP_BINDIR`). The one typed gate survives
  by policy: `Console._confirm` hook — text REPL uses `input()`, the TUI
  draws its own bottom-row line editor (ESC aborts).
- Wiring: `./msi-isp shell` now opens the menu on a TTY and the text REPL
  otherwise; `--plain` forces the REPL; a `tui` subcommand was added too.
  Non-TTY + `tui` degrades to the REPL instead of crashing.
- Bugs caught in self-review + testing: `ImportError` re-export subtlety
  (`as`-aliased names bind under the alias only — import
  `_edid_model_name` from `.cli`), operator-precedence bug in file-list
  highlight attrs, garbled long-prompt echo in `ask`, dead statements ×2.
- pty-tested end to end (`script -qec`): info → live data pane; verify →
  model match + header flip; FLASH → five-gate table with correct refusals
  (bin + verified pass, ISP/backup/root fail); browser navigates dirs;
  `--nvrm` header renders as root (FW.009 via RM); non-TTY fallback clean;
  ruff + compileall green repo-wide after.
- README quickstart/layout + HANDOFF commands/repo-map updated for the TUI.
- RE (target 2): **the vendor flash pipeline is decoded.** IspFlash@0x8520
  = dispatcher (mode gate {4,5,6,7,11,1a,1b}; `InitCommunication+entry`
  0x7b80; error ids 0xd39/0xd56) → retry loop 0x34000 (logs "---Retry Isp
  retry count: %d---" + Sleep backoff) → single attempt 0x34120, whose own
  debug strings spell out the whole sequence: Get Flash Mode (0x1aa50) →
  TypeC check (0x17300) → Set MCU Reg Defaults (0x1a050) → **Get Flash
  Type = chip detect vs Flash.dat table (0x1d560, "Flash Name: %ls")** →
  Detect/Config Address Mode (0x1db90) → bank-space check (0x1db20) →
  Set WP Pin (0x1ad20) → **Disable Software WP (0x1e8f0)** → JudgeSMBUS
  (0x203d0)/Clear Flag (0x1dfa0) → per bank: params "Bank, ProLen,
  SectorErase, SectorEraseCount" (0x1e4c0) → **erase (0x3e610)** with
  per-sector fallback → **"Bank %d ISP Success" program (0x3e2a0)** →
  **verify "Get Final Code" (0x3e9c0)** → write flag/version region
  (0x21040) → **re-enable SW WP (0x1e7c0)** + SMBUS re-judge + MCU reset
  trio (0x1b8f0/0x18fa0/0x2d7c0) → "Isp time : %d ms". Findings in
  Facts.ISP_PIPELINE; raw dumps re/f_ispflash_full.txt, re/f_ispcore.txt,
  re/f_douispraw.txt, re/f_ispsteps.txt.
  Implications: (a) chip-detect before erase is VENDOR practice — our
  JEDEC 0x1F gate mirrors the updater, it is not an invented oracle (HANDOFF
  §5 note refined); (b) verify-after-program + WP restore even on error
  paths = the failure semantics our `write` must reproduce; (c) the retry
  wrapper = evidence the ISP entry/transaction path IS flaky by design —
  session-13's handshake flakiness has vendor-side retry precedent with
  logging. Method note: pdump's 3rd arg is BYTES (linear capstone stops at
  data gaps); string-pipeline extraction = grep `push 0x10XXXXXX` + UTF-16
  resolve per site.
- RE follow-up (same session): **Flash.dat is keyed by capacity code, not
  JEDEC.** GetFlashType(0x1d560) gets identity from fn 0x1da20, branched on
  the scaler enum ('I','H','N','P' → Comm vtable[0xd0] reg 0x85A read;
  'G','A','P' → 1-byte I2C at 0x77 with bit-5 mask): a 16-bit capacity
  ladder code that indexes the table. Record layout: `"70" + code pair +
  name + config + CSV` (A25L020=`12 11`, A25L040=`13 12`, A25L080=`14 13`,
  ours A25L032M=`16 15`); mismatch → 'Default' row, no abort. So the tool
  never compares a 0x9F response — our JEDEC gate stays as our own safety
  addition, while the vendor's real protections are per-bank read-back
  ("Get Final Code") + WP discipline. Dumps: re/f_getflash_type.txt.
- Pre-publication pass (per plan step "skim STATUS.md for the user"): full
  800-line read — verdict publishable: chronology self-corrects in place,
  no PII/secrets anywhere (paranoid grep: IPs, MACs, tokens, emails), the
  two ancient typos (`JECID` in the rules section, one stray CJK word in
  session 7's notes) left untouched per append-only policy. README rewritten
  with a proper "How it works" transport-chain section; new `CONTRIBUTING.md`
  (safety-first onboarding, DoD checklist incl. regression baselines, ranked
  help-wanted list). Awaiting GitHub MCP sign-in for repo creation + push.
- **GO-LIVE (2026-10-09):** GitHub MCP connected via header auth (`oauth:
  false` + `Authorization: Bearer {env:GITHUB_PAT}` — classic PAT, scopes
  repo/read:org/workflow, 90-day expiry; GitHub's hosted MCP rejected the
  OAuth-DCR flow because GitHub publishes no registration endpoint — that
  is a GitHub limitation, not a config fault). Created
  `TheHubUser4860938/MSI-Monitor-Flash-Tool` (public, uninitialized,
  description exact) through the MCP; `git push -u origin main` over SSH.
  Verified anonymously: private=false, vendor/ + .venv absent, 30 commits
  all authored `msi-isp-dev <dev@msi-isp.local>` with NO GitHub account
  linkage (linked-account: null). Public:
  https://github.com/TheHubUser4860938/MSI-Monitor-Flash-Tool

## Session 14g (2026-10-09) — repo tidy: root slimmed 90 → 10 entries (public)

- All pre-package experiment archives moved with history via `git mv`:
  root `t_*.py` + `probe*.py` + `ddcci/dp_aux/rt_*.py` → `scratch/legacy/`;
  `tools/` → `scratch/legacy/tools/`; `.smoke/` → `scratch/legacy/smoke/`.
  Deleted: empty 0-byte `probe` (redirect accident) and on-disk
  STATUS.md.bak (git history is the backup). Nothing else removed — `re/`
  and `scratch/*.log` stay (they are the evidence; vendor binaries are
  gitignored so the dumps are irreplaceable).
- Kept honest: every `sys.path.insert` in the moved scripts recomputed for
  the new depth (41 × `parents[2]`, 7 × `parents[3]`; `smoke/` uses
  getcwd(), `root_aux_test.py`'s single `.parent` never targeted root —
  both left). `ruff.toml` archive coverage collapsed to `scratch/**` with
  a layout note; HANDOFF repo-map + CONTRIBUTING lint paragraph + nvbus.py
  "repo root" provenance comment updated to say `scratch/legacy/`.
- README heading fix (user flag): "What doesn't (yet)" → "What doesn't
  work (yet) — the NVIDIA allow-list". `.gitignore` += `.ruff_cache/`.
## Session 14h (2026-10-09) — relay hardened (0660/video + timed write gate); --auxdev = first sudoless NVIDIA path

- Module policy per the agreed security posture:
  * node mode 0660 by default (without the udev rule that means root-only —
    fail-safe); group opened to **video** via new
    `kernel/99-msi-auxch.rules` (install = one cp + udevadm reload; removal
    returns system exactly prior). Verified: `crw-rw---- root video`.
  * **ISP write gate:** I2C-mode writes carrying data at slaves
    0x18..0x22 return EPERM unless `MSI_AUXCH_UNLOCK` armed a **timed 5 s**
    window (every unlock logged with pid; forgotten unlocks expire on
    their own). Bare-address phases (probes, terminators) exempt —
    zero-data packets provably cannot alter state (t_kern6 precedent);
    native-AUX (DPCD) and DDC slaves 0x50/0x37 free. Design bug caught
    during test: first cut had the ktime comparison sign-flipped (unlocked
    after expiry, locked during window) — the 4-case matrix test caught
    it red-handed.
- New transport `msi_isp/auxdev.py` (stdlib ctypes; framing mirrors the
  proven nvbus protocol, transport = ioctl): full RTBus parity
  (select/warmup/probe/read/write/raw_txn), actionable error strings
  (missing module / group hints, gate message says "call bus.unlock()").
  `--auxdev` global flag (mutually exclusive with --nvrm), wired through
  cli `_bus()`, `console._bus()/do_status`, TUI header. Transports now
  self-label (`i2c-dev /dev/i2c-4` / `nvrm RM DP-AUX (NVIDIA, root)` /
  `kernel relay /dev/msi-auxch`) — info/probe/console/TUI all show truth.
- Build gotchas fixed en route: `msecs_to_ktime` absent on this clang-built
  7.2 kernel (explicit ktime_set math), and a make-exit-code swallowed by a
  grep pipe nearly shipped a stale .ko.
- Live verification (module loaded, udev rule installed, uid 1000, zero
  sudo): test_relay PASS incl. gate matrix (locked→EPERM, unlocked→wire
  (TIMEOUT = dead-end #11 honestly reproduced), relock→EPERM, 0x50 free);
  `./msi-isp --auxdev info` = FW.009 + full EDID; `--auxdev probe` =
  identical verdict to root `--nvrm probe` (0x30/0x37/0x50 ACK, ISP all
  no-ack, visible:False); console status reads "euid 1000 (not needed
  (kernel relay))"; TUI header labels the relay; raw python: gated write
  raises actionable error, post-unlock write reaches TIMEOUT. i2c-dev
  regression byte-stable; ruff + compileall green; rmmod clean.
- Docs: README quickstart/matrix/sudo-note/layout updated for `--auxdev`,
  CONTRIBUTING module policy + help-wanted #2 rewritten (packaging is the
  new open item), HANDOFF commands + item 3 refreshed. Monitor: still
  FW.009, untouched, DP-only.

## Session 14i (2026-10-09) — RE: the universal ISP flash primitive decoded

- Tooling: promoted the ad-hoc string/call skeleton extractor to
  `re/steps.py` (disassembles an RVA range, resolves UTF-16 log strings,
  flags every vtable-indirect call + immediate cmp — the exact lens that
  cracked the pipeline in 14f).
- **Comm vtable slot map now pinned by cross-evidence** (object
  [0x10249d10]): +0x14 = 32 B page I2C xfer; +0xc4 = write reg32(reg,val);
  +0xf0 = write byte(reg,val); +0xf8 = read byte; +0xd0 = read reg32.
  Independent confirmations: GetFlashType (14f) used f0/f8 at 0x77 with
  read-modify-writeback; erase/verify/program use c4/f0 against the same
  register roles at 32-bit addresses 0x841-0x84f and 8-bit 0x83-0x89.
- **The universal op sequence** (all of erase 0x3e610, program 0x3db10/
  0x3e2a0, verify 0x3e9c0): ADDR regs ← target; CTRL ← 0xB8 (latch);
  OPCODE ← JEDEC command (erase: 0x20 sector; 0xD8 block appears in the
  verify-path window writes; program arms 0x100 = 256 B flash page length
  via the 0xf5/slot+0x74 pair; payload moves through slot +0x14);
  CTRL ← 0xB9 (GO); busy-wait 0x3ee40 with 0x4E20 = **20 s budget**.
  B8/B9 = latch/GO inferred from invariant bracketing of every opcode
  write — labeled as inference in Facts, since no RTD datasheet prose
  exists; as far as I can tell this is now the ONLY written-up account of
  the RTD2711 flash window anywhere.
- Flash.dat structure notes: record = 4-byte chip key (either raw JEDEC
  e.g. AT25DF041 `1f 44 01 ff`, or "70"+capacity code for the A25L family)
  + NUL-name + size-in-64KiB-units (`40 00`=4 MB for A25L032M ✓ matches
  Facts.FW_BIN_SIZE context) + flags; the CSV scripts live in a separate
  block table (31 script blocks for 136 chips — scripts shared; full
  record→script binding = its own future session).
- Honest residual (open question #3 refined, not closed): two register
  grammars coexist — the older `06,60,<idx> / 06,61,<data>` byte-window
  (Flash.dat scripts) vs the 0x83-0x89/0x841-0x84f window driven by these
  plugin functions. Which one RTD2711's wire traffic actually receives
  will be settled by the first live 0x22 transaction on Intel/AMD hardware
  — the probe plan in HANDOFF §Open-questions #3 works verbatim either way.
- Evidence files: re/g_ispopseq.txt (172 lines: skeletons of all three
  ops + busy-wait + program body). Facts.py += ISP_WINDOW documentation
  block. No monitor contact this session (pure offline RE); gates: ruff +
  compileall green.

## Session 14j (2026-10-09) — DDC bus arbitration: cooperative per-bus lock

- New `msi_isp/buslock.py`: `bus_lock(bus, timeout)` context manager +
  `BusBusyError` with an actionable message (holder pid when knowable).
- Lock carrier = **flock on the /dev/i2c-N device inode itself** (no
  lockfile): one inode shared root/user, no DAC/creation races, `open()`
  alone never emits bus traffic so passive observers (ddcutil indexer)
  are undisturbed, and our own transports co-open the node without
  self-deadlock (they don't flock). Design learned the hard way this
  session: a /run/lock-first scheme split root and user into different
  files (mutual exclusion silently void), and a /tmp lockfile hit
  kernel protected-regulars EACCES for the root opener — both dead,
  documented in the module header. pid-tagging only on the file-fallback
  path (a write() to the chardev fd would be bus traffic); device path
  reports "pid ?" honestly (flock owner is not exposed via F_GETLK).
- Scope wired where it matters: `cli backup` (clean one-line refusal,
  exit 1), `console backup` (2 s cooperative wait then refusal),
  `console flash -> _program` (exclusive). info/verify/probe stay
  lock-free (reads, cheap, no ISP mode toggling). Transport-agnostic by
  bus number (the AUX wire is the shared resource).
- Live matrix on this box: root-holder → user CLI refuses ✓, user
  console refuses ✓; user-holder → sudo CLI refuses ✓ (same inode
  cross-uid); after release → baseline ISP refusal restored ✓. ruff +
  compileall + CLI green. Honest limit unchanged: ddcutil/GNOME never
  take the lock — close them during ISP work per safety policy.

## Session 14k (2026-10-09) — re-audit round: two harness-era lies fixed + probes that had never been run

- **B4, transport-aware gates/messages** (the user's "did we miss
  something?" instinct paid instantly): the flash gate table hard-required
  root even though --auxdev made root unnecessary, and backup/refusal
  texts still narrated the pre-relay world ("sudo (root) is required on
  NVIDIA"). Root gate now appears ONLY for --nvrm (live matrix: --auxdev +
  i2c-dev show no root gate, --nvrm-as-user fails it with "sudo ... or
  load the kernel relay and use --auxdev"); ISP-visibility hints cite
  dead-end #11 across all three transports. Bonus validation: with the
  module deliberately unloaded, --auxdev failed with the actionable "load
  the relay first" string — graceful-path error design proved in anger.
- **A1, first unconstrained full-space scan ever**: 0x03–0x77 (120 addrs)
  over raw AUXCH via the relay as uid 1000 — ACK ONLY 0x30/0x37/0x4a/0x4b/
  0x50, 112 TIMEOUT, zero NACKs/odd replies. Proves the old i2c-dev
  allow-list hid nothing (identical ACK set), and 0x3B (the 0x77 slave the
  vendor's G/A/P-path GetFlashType uses) is silent — consistent with
  RTD2711 being the 0x85A-register family. Dead-end #11 closed
  exhaustively.
- **A2, first sudoless ISP handshake**: enter_isp end-to-end over the
  relay — candidate 5 wins again, status walk 0x00→0x6e→0x8a (bit 0x80 =
  ISP alive), 0x24 exit clears the bit, EDID head byte-identical before/
  after, zero NEW dmesg unlock events (0x37 sits outside the 0x18–0x22
  gate band exactly as designed). Relay write semantics proven on real ISP
  traffic, not just EDID reads.
- **A3, vendor pacing grounded twice**: retry loop 0x34000 consumes a
  global pair (movq [0x1024a3a4]) ← static initializer at 0x32b7b sets
  retries=10, Sleep=0xC8 (200 ms); our Facts.TIMING (from IspSetting.ini)
  already had 10/200 — the INI mirrors vendor built-in defaults, not a
  tuned deployment. Second pair (0x3d376 path): 10 × 100 ms. enter_isp
  constants unchanged (already the vendor truth); Facts.TIMING comment now
  cites the RVA evidence.
- Tooling: `scratch/sweep_slaves.py` — the A1 sweep promoted to a reusable,
  transport-selectable script (exit 1 when no ISP slave is alive) so the
  Intel/AMD testers run the identical exhaustive scan over i2c-dev, where
  it IS ground truth; wired into TEST-INTEL-AMD.md. Both legs re-verified
  live (auxdev 0.1 s / i2c-dev 2.9 s, same ACK set; classifier treats
  i2c-dev NACK and AUXCH TIMEOUT as equally dead). Gates: ruff +
  compileall + sweep behavior + exit semantics all green.

## Session 14l (2026-10-09) — B5 test suite + B6 CI: the harness-era debt paid

- **B5: `tests/` — first real automated suite** (31 tests, stdlib unittest,
  zero hardware): DDC codec pinned against the THREE recorded real wire
  replies (checksum convention 0x50-vs-0x6E included); ISP enter/exit
  state machine on a scripted FakeBus (idempotent zero-write probe path,
  candidate-order magic/companion writes verbatim from
  AUTOENTER_CANDIDATES, exhaustion raise, exit verify + error swallow);
  ScalerBus framing (reg16-LE packets, 8-bit w/r forms, retarget-warmup
  rule, burst paging + progress callback sequence); buslock cross-open
  semantics (exclusion, pid publication+clearing, timeout waits, timer
  handoff); progress non-TTY 5%-line degradation; checksum synthetic vectors
  (+ the _4023 real-file check auto-skipped in CI since vendor/ is
  gitignored). Runs in 1.0 s. `tests/fakebus.py` documents the duck-typed
  transport surface implicitly relied on by all three transports.
- **One real bug caught by test authoring**: `enter_isp(only_candidate=N)`
  modulo-wrapped its index — `(loop0+i) % n` with n=1 → candidate 0's
  magic bytes were silently sent AND index 0 was reported back. Dormant
  knob (no caller), so zero blast radius — but exactly the class of lie
  the harness-era "write it, eyeball it, move on" produced. Fixed +
  regression test. Also extracted `buslock.lock_path()` for testability.
- **B6: `.github/workflows/ci.yml`** — push/PR on main: ruff 0.17.0 (same
  pinned policy) + `compileall` every Python file + the unit suite, across
  Python 3.11–3.14 (honest support claim = what CI actually runs). All
  four steps rehearsed green locally pre-push; YAML validated with pyyaml.
- Docs: CONTRIBUTING gained the test definition-of-done + strict-on-tests
  lint policy; HANDOFF working-commands and README layout now list
  `python3 -m unittest discover -s tests -t .`, the CI guarantee, and
  `scratch/sweep_slaves.py`. Post-edit live regression: info green,
  relay rebuild + test_relay PASS, rmmod clean.

## Session 14m (2026-10-09/10) — CI hardened on first real run + community launch (issue #1, tag v0.1.0)

- CI's first run caught a real portability lie: the compileall step included
  the frozen scratch archives, and four of them use f-string backslashes —
  legal on the 3.14 dev box, SyntaxError pre-3.12 (PEP 701). Fix was policy
  alignment, not restyle: CI now compiles exactly the shipping surfaces
  (`msi_isp/ tests/ kernel/ re/`), same split as ruff.toml, with the reason
  commented in the workflow. Second run: **green on Python 3.11/3.12/3.13/
  3.14** (commit `48b757a`). Log-fetch detours documented for future me:
  Actions job logs need auth even for public repos, fish quoting bit twice
  (`\$` inside single-quoted bash → literal `$GITHUB_PAT` → 401), and
  `ast.parse(feature_version=…)` misses pre-701 f-string rules entirely —
  trust the runner, not the simulator.
- **Issue #1 filed** (help wanted): "Intel/AMD Linux + DisplayPort owners
  wanted" — 2-minute read-only tester call pointing at TEST-INTEL-AMD.md +
  the sweep tool, with the verdict→consequence table. Pinning = web-UI
  click for the maintainer (this toolset has no pin mutation).
- **Tag v0.1.0** (annotated; message summarizes scope: read/probe/verify
  complete, backup/write gated on the decisive experiment) pushed onto
  `48b757a` = CI-green HEAD; tag + issue verified visible anonymously.
- Session arc this run, in one line: user flagged a README heading typo and
  asked "do we still need sudo / what might we have missed?" → 9 commits:
  B4 transport-aware UX (2 real lies fixed), 14k probe round (exhaustive
  0x03–0x77 sweep closes dead-end #11, first sudoless ISP handshake, vendor
  pacing grounded twice), B5 test suite (+1 latent bug caught by authoring),
  B6 CI (first green on four Pythons), 14m launch. Monitor: still FW.009,
  never written, DP-only.

## Session 14n (2026-10-10) — the 0x73137C kernel-privilege experiment: hypothesis falsified cleanly, bulk relay born, dead-end #11 at four origins

- The plan item "the one untried NVIDIA-side lead": NVAPI's prime suspect
  control — NV0073_CTRL_CMD_DP_AUXCH_I2C_TRANSFER_CTRL (0x73137C), "bulk
  I2C over aux, 256 B/txn, driver splits + ACK-retries" — had only ever
  been measured from userland (0x23 NV_ERR_INVALID_CLIENT: the fd-table
  gate the kill-switch analysis says kernel context skips). Built the test:
  new MSI_AUXCH_BULK ioctl (0x43) in the relay, full struct conversion
  in-kernel, module fills subDeviceInstance/displayId itself, same
  rm_lock serialization, and the ISP-slave write gate EXTENDED to the new
  path (gates both 7-bit 0x18..0x22 and 8-bit 0x30..0x45 spellings since
  addr passes through verbatim — deliberate). W=1 clean.
- Experiment (scratch/bulk_kernel_test.py, uid 1000, one driver round-trip
  per line): **the control is ALIVE from kernel context** — EDID pointer
  write + 256-byte double-block read land in ONE call, byte-perfect (blk1
  CEA tag 0x02 @0x80), no first-byte quirk (confirmed shim-only), branch
  slaves 0x30/0x4a/0x4b ACK. Address convention settled: PLAIN 7-bit (the
  SDK's "20 bits valid" phrasing does NOT mean 8-bit DDC forms: 0xa1 ->
  NV_ERR_GENERIC). Status table decoded against nvstatuscodes.h: 0xffff =
  NV_ERR_GENERIC — my old "0x26=TIMEOUT-ish" label was wrong (it's
  NV_ERR_INVALID_DEVICE); Facts gains the verified BULK_I2C_STATUS map.
- **The verdict: 0x22 answers NV_ERR_GENERIC — identical to unoccupied
  slaves (0x36/0x39) — in both addr forms, read and unlocked-write, while
  occupied slaves on the same control ACK. No address policy inside the
  control; the refusal is at the wire.** Dead-end #11 confirmed from a
  FOURTH origin; "kernel privilege unlocks 0x22" is honestly falsified.
  The Windows-vs-Linux delta now provably lives above control-reachability:
  NVAPI sequencing/mode, or the closed driver's pre-GSP path (open
  question #2 sharpened, not closed).
- Also learned: NV_ERR_GENERIC doubles as "slave silent" — a cleaner
  discriminator than the XFER path's conflated TIMEOUT. And the bulk
  primitive is the right transport for whatever future driver DOES route
  0x22: 256 B/txn = ~7k transactions for a full dump vs ~115k at 16 B.
  Kept out of auxdev.py read()/write() for now (nvbus parity is
  live-proven; wiring bulk into production transport without a consumer
  would be the dead-code sin B5 just caught).
- test_relay.py extended (8-case matrix): bulk EDID oracle + plain-7-bit
  proof + read-passes-while-write-refuses gate interaction — all green;
  every case PASSes unprivileged. scratch/bulk_kernel_test.py embeds the
  verdict text + "re-run costs seconds, do it after every major driver
  update" (a standing experiment, not a one-shot). ruff + gates green;
  module rmmod-clean pending final cycle.

## Session 14o (2026-10-10) — FW.009 downloaded: checksum crack re-proven, layout is version-relative, verify rebuilt on byte-exact identity

- User supplied `vendor/..._FW.009_DC2F.bin` (the monitor's CURRENT
  firmware, official). Instant dividends:
  * `Facts.bin_content_checksum(data) == 0xDC2F` == its filename suffix —
    the 14c crack validated on a second, independently-built file. No
    longer a fitted theory: a proven algorithm.
  * **Sizes differ**: .009 = 0x1E0000, .012 = 0x1C0000. `Facts.FW_BIN_SIZE`
    was treated as a general bound — the console's pre-flash fit gate
    (`size > FW_BIN_SIZE`) would have refused to write .009 as "larger
    than flash" (it isn't: the chip is 4 MiB). New `Facts.FLASH_SIZE =
    0x400000` (A25L032M, Flash.dat capacity field agrees) now backs the
    gate; FW_BIN_SIZE demoted to "the .012 image size".
  * **Layout moved**: version string +0x7A00, model/EDID block +0x20000
    between builds; boot-head 16 bytes identical at offset 0 (stable
    anchor). Absolute-offset claims are now footnote-scoped to .012
    (README, BIN_LAYOUT comment, HANDOFF next-actions rewritten).
  * Both bins carry an **EDID TABLE** (.009: 54 strong candidates
    0x1D0200-0x1D7000 + 'RTK FHD' template @0x0B08C; .012: table at
    0x1A0200-0x1B6E00), so "the model string" is many strings — names
    alone are a weak identity.
- Three real bugs in one pass (the user's `.009` made invisible assumptions
  visible): (1) `bin_header` read .012-fixed offsets → .009 parsed as empty
  model/version; (2) BOTH verify paths then said "model match OK" because
  the empty string is a substring of everything — a silent pass on an
  UNKNOWN identity, the worst possible gate failure; (3) the fit gate
  above. Fixed with layered truth: version = `FW.NNN` pattern-search;
  model = (a) byte-exact live-EDID containment (the strongest possible
  identity claim, `edid_offset` reported and surfaced in CLI/console/TUI
  output), (b) first strong candidate (valid checksum + printable name —
  magic+sum alone hits 100+ false windows in FF-seas), (c) labeled
  .012-offset fallback; unreadable model now prints UNKNOWN + exit 1
  everywhere instead of shrug-OK.
- New facts recorded: `Facts.PREVIOUS_BINS["009"]` (sha256, size, _DC2F,
  exact live EDID @0x1D0200, table span); .012 contains THIS monitor's
  exact EDID too (@0x1B0000 — measured, live verify) ⇒ the .012 update
  preserves the EDID, an assumption the write path needed, now held.
- Tests: `tests/test_bin_header.py` +10 (synthetic EDID-table fixtures
  including first-strong vs byte-exact precedence, strong-filter garbage
  rejection, real .009/.009 self-referential live-EDID runs) → suite at
  **41 green**. Live verify on both real bins via CLI AND console paths:
  both report "OK — the monitor's EXACT EDID (block0) is in the bin @
  0x1d0200 / 0x1b0000" with the .009 variant table disclosed. ruff,
  compileall, gates green.

## Session 14p (2026-10-10) — backup completed end-to-end: vendor ISP sequence + JEDEC gate + safety hygiene, live-proven refusal

- `msi_isp/isp.py` gains the flash-path orchestration both frontends
  share: `flash_path_enter` (idempotent ISP entry → flash-slave probe →
  auto-exit on refusal so the scaler is NEVER left mid-ISP), 
  `flash_path_exit` (0x24 exit + EDID re-verify per safety policy), and
  `jedec_id` (the OUR-addition 0x9F→vendor-prefix gate, tried as BOTH
  register grammars — window 0x841/0x842/0x845 per 14i decode, then
  Flash.dat index/data 0x60/0x64/0x20→0x21 strobe — with the honest note
  that the MISO register is the least-decoded link; verbose echoes raw
  pokes so the first live wire settles it in one run).
- `cli backup` and `console backup` rewritten around it: enter → JEDEC →
  4 KB/256 B sanity reads → page-loop dump → exit + "monitor 0x50 alive"
  hygiene report. Dump default size = **Facts.FLASH_SIZE (4 MiB, whole
  chip)** — the beyond-image regions are the skip-list data (open
  question #7) the diff against `Facts.PREVIOUS_BINS` will map.
- `_isp_visible` (status/flash-gate probe) now retries via one
  enter-probe-exit cycle — flash visibility is only meaningful in ISP
  mode (vendor sequence), and on NVIDIA the cycle honestly confirms
  "entered, slave still silent" instead of the old message that refused
  without ever entering.
- **New live fact**: on NVIDIA the ISP *entry* works over plain i2c-dev
  too (magic ACKs via the shim, status bit observed) — refusal now reads
  "ISP mode entered, but flash slave 0x20 stays silent", auto-exits, and
  the monitor verifies healthy (FW.009 + EDID) after every cycle on both
  transports. A good omen for the Intel/AMD boxes: entry has no special
  transport requirements at all.
- Tests: +7 (flash_path enter/exit matrices incl. the silent-slave-
  auto-exit-restore property, jedec window-grammar frame bytes pinned
  `42089f/4108b8/4108b9`, index-grammar fallback, all-garbage→None) →
  **48 green**; FakeBus.writes_to unpacking bug fixed (probe 2-tuples).
  ruff + live verify/backup/status/flash-gate matrix green on both
  transports; module left loaded (dev state).

## Session 15a (2026-10-10) — open question #2 CLOSED: Comm_Aux.dll's real NVAPI surface decoded from the binary; "Windows works" downgraded to unproven

- Chosen plan (a): stage NVIDIA/nvapi R615 kit (`/tmp/opencode/nvapi` @
  `70d337db`, re-clone: `git clone --depth 1 https://github.com/NVIDIA/nvapi`;
  CHM extract via 7z = same doxygen text as the header, no extra lore) and
  decode what the Windows tool ACTUALLY executes in `vendor/Comm/Comm_Aux.dll`.
- Method note (three self-inflicted traps caught and fixed mid-run, all now
  encoded in the repro tool): objdump prints this build's call/jump targets
  with `0x` prefixes AND `mov ebp,esp` WITHOUT a space — naive prologue and
  call-target regexes silently found zero functions/calls until fixed; and a
  list-comprehension that referenced a stale outer match variable crashed
  prettily rather than wrong. Lesson stands: on stripped PE32, verify the
  disassembler's exact output format before trusting any scan that returns
  "nothing".
- Naive interface-ID immediate scan sees 276 hits and says nothing — that is
  the *statically linked lazy-resolution facade* (nvapi.c pattern: cached fp
  global + generation-stamped invalidation triple per function) which the
  plugin code itself never calls. The honest question — wrapper ENTRY
  recovered from prologues, then who CALLS it — flipped the picture entirely:
  the NVIDIA backend (transport dispatcher `0x1003a3e0`,
  `switch ds:0x1021ae1c`, mode 3 = NVAPI; modes 1/2 carry AMD-ADL
  (`ADL_Display_NativeAUXChannel_Access` et al.) and Intel
  (`vendor/Comm/IntelControlAPI/`) siblings) executes exactly TEN interfaces:
  Initialize, 6 display-discovery calls (outputId → `displayMask` member),
  and `NvAPI_I2CWrite` ×4 / `NvAPI_I2CRead` ×3. Struct build decoded:
  `NV_I2C_INFO_V3` (`0x3002c`), `bIsDDCPort=1`, 8-bit DDC slave passthrough
  with the read LSB ORed (`0x6E→0x6F`), `i2cSpeed=0xffff`
  (DEPRECATED-conformant), `pbI2cRegAddress=&reg` arg (combined format per
  the header's own ≤16 B rule) — then write-then-read pairs: functionally
  EXACTLY what ScalerBus/nvbus already do over NV0073 `0x731341`.
- The one genuinely private door: `QueryInterface(0x8EB56969)` —
  **`NvAPI_Disp_DpAuxChannelControl`**, absent from the R615 public table
  (name confirmed by 15+ independent community tables, e.g. NvAPIWrapper's
  `FunctionId.cs`, and a community tool's
  `"NV_DP_AUXCH_CMD_REQ_TYPE_READ" failed` log string). Called from the
  SAME mode-3 method behind flag `ds:0x1021ae90` (`SetAuxMode`-adjacent;
  the export itself is a stub in this build): V2 struct `0x20068` (104 B),
  length packed `(16B-chunks<<4 | tail)` ≤ 255 B, mode `2` = write the
  pointer+data, mode `3` = read back 16 B per transaction (`movups` loop) —
  i.e. client-side DP-AUX message assembly. The 615.x SDK has NO control of
  that name (`0x731341`/`0x73137C` are the only AUXCH controls) ⇒ NVAPI is
  re-wrapping what our relay already calls, both proven wire-dead for `0x22`
  here. Only nvapi.dll's internal defer/retry pacing stays unobservable.
- Architecture facts worth keeping forever: EVERY Comm module stubs the
  flash-scope exports (`ReadFlashData/WriteFlashData/SectorErase/BankErase/
  ConfigProgramFlash/ResetFirmware/IspEnable/SetAuxMode` all aliased to one
  no-op) — the flash engine is the updater CORE; the plugin only executes
  paged I2C transactions (`GetI2CPageLength`: 32 for the commID-1 build —
  matches INI — and 128 in `rtd38/Comm_GFXI2C.dll`, whose `GetCommID()==5`:
  a different scaler-family backend, not this monitor's path).
- **Biggest finding is the premise downgrade**: nothing in the decoded
  Windows path exceeds what Linux reaches (4 origins, dead-end #11), AND no
  evidence exists that ANY Windows run ever reached `0x22` on this sink —
  the user's own Windows attempt failed with 0x45, which this decode fits
  perfectly. "Windows reaches 0x22 via NVAPI" (HANDOFF's blocking-wall line)
  was inherited assumption, now corrected to "Windows uses the same
  primitives; success on this unit unobserved". Issue #1 (Intel/AMD wire
  test) stays THE decider — and the ADL backend's existence hints the AMD
  answer may ride `ADL_Display_DDCBlockAccess_Get` semantics, plain i2c-dev
  likely fine.
- Artifacts: `re/g_nvapi_surface.txt` (full evidence write-up),
  `scratch/nvapi_surface.py` (standing repro: EAT alias map + live-NVAPI-call
  scan + private-ID diff, run against any vendor Comm DLL), `Facts.NVAPI_SURFACE`
  block; HANDOFF blocking-wall line rewritten, open question #2 struck as
  CLOSED. No tool-behavior change this session; monitor untouched; suite
  48 green; ruff/compile gates green. Kit reacquisition: nvapi clone is
  ephemeral under /tmp/opencode (like ogkm); evidence is git-tracked.

## Session 15b (2026-10-10) — write acceptance PROVEN through our own framing (T0a/T0b/T1) + user corrections banked (Wine/0x45 attribution, USB-C display-only)

- User corrections accepted and propagated: (1) the recorded 0x45 was a
  **Wine/Proton** run — `nvapi.dll` has no driver behind it there, so that
  failure says "backend absent," NOT "wire silent" → real-Windows behavior
  on this sink is genuinely UNOBSERVED (15a's "Windows fails the same way"
  clause overclaimed; fixed in HANDOFF wall-line + open #2, README,
  Facts.NVAPI_SURFACE, TEST-INTEL-AMD); (2) the X28's USB-C/upstream port
  is **display-only** → vendor USB-ISP backends are board-level-only here,
  new dead-end #12, open #8 reinforced (recovery = service or CH341A).
  Borrowed-Windows-PC flagged as the remaining zero-code datum.
- **T0a (ddcutil)**: `setvcp 0x10` same-value round-trip, exit 0 = monitor
  returned result 0x00. Baseline surprises honestly recorded: brightness
  reads 0/100 (verified via `--verify` raw: `mh=00 ml=64 sh=00 sl=00`) —
  plausibly the user's actual setting, contrast/gain read sanely.
- **T0b (our plumbing, scratch/vcp_write_test.py)**: our raw MCCS set packet
  `51 84 03 10 00 32 9a` ACCEPTED: brightness moved 0→50→0 with every step
  verified through live GET replies; final reply byte-identical to baseline
  (FW-version query 'FW.009' before/after as witness). First write performed
  by our own framing that the monitor accepted, changed state for, and we
  restored — the exact lifecycle the flash write driver will run, rehearsed
  at zero risk. Two design facts captured:
  * vendor GET-reply layout has ONE filler byte beyond the MCCS textbook
    (cur = payload[6:8]) — calibrated against three VCPs + ddcutil;
  * the in-band write-reply (0x6E 0x82 02 00) is NEVER readable through the
    i2c-dev 0x37 proxy (retry ladder 0→320 ms → all-zero, kernel swallow):
    **verify-by-readback is the only write oracle** — already the flash
    design (verify-after-program), now with the reply-path dead-end proven.
- **T1 (write_policy_probe.py, 2×6 matrix)**: i2c-dev shim AND kernel relay
  both forward 1- and 2-byte writes to every ACKed slave (0x30/0x4a/0x4b/
  0x50), zero rejections; emulated slaves swallow writes statelessly; relay
  first-byte-shift quirk visible once more (`ffffff00` pre-pointer-write →
  `00ffffff` after — pointer write doubles as quirk reset). Conclusion:
  host-side write policy is exactly our unlock gate; sink-side, only `0x22`
  refuses — and it NACKs the ADDRESS byte, so "we never wrote acceptable
  data" cannot explain `0x22` on this box (payload never reaches the
  conversation). The user's risk-instinct was still right on the merits:
  what remained unproven was OUR write framing, and that is now proven.
- Tooling self-crit noted: T0b first run mis-indexed the reply value (wrote
  0x6400 — out-of-range, harmless, state provably unchanged) and T1 first
  run treated write()'s None-return as failure — both caught by reading raw
  outputs instead of trusting verdict lines; fixes baked into the scripts.
- Next (approved queue): dump attempt with entry-variant × flash-slave
  matrix + cross-transport combos (15c), then the systematic combing pass
  (15d: Comm.dll commID map, WinIspPlugIn vocabulary, ctrl2080i2c port
  enumeration re-check, Flash.dat binding), THEN the T2 decision with
  full evidence in hand. Gates: ruff/compile/48-tests green; monitor
  healthy (FW.009, brightness restored, EDID anchors unchanged).

## Session 15c (2026-10-10) — dump attempt, exhaustively matrixed: no entry variant opens the flash slaves; wire half of open #5 CLOSED; monitor data baseline captured

- User framing: "try to dump the firmware/data off the monitor -- if that
  cracks this open it's the best path" + "make sure nothing was overlooked."
  Script: `scratch/dump_attempt_matrix.py` (re-runnable, 25 s).
- **A. entry-candidate x flash-slave matrix (i2c-dev, full vendor pacing).**
  First-run bug self-caught: `retries=1` false-failed every candidate
  (handshake walk takes ~8 polls); with correct pacing the real picture is
  richer than any prior session had it:
  * cand2 (0x54/0x56/0x58) -> handshake WON, status **0x88**
  * cand3 (0x98/0x9A/0x68) -> handshake WON, status **0xdf**
  * cand4 (0x9C/0x9E/0x6C) -> handshake WON, status **0xff**
  * cand0/cand1/cand5 -> no handshake this run (cand5 WON in relay-era
    runs -- candidate winners vary across sessions/order: open #12's
    flakiness, now measured, not folklore).
  * **After EVERY candidate -- handshake or not -- 0x18/0x20/0x22 stay
    silent and JEDEC (both grammars x both targets) returns None.**
    => open #5's WIRE half closes: no entry variant opens the flash slave
    on this GPU/driver. (Which variant opens it on live wire remains an
    issue-#1 question; the probe matrix is ready for that box.)
- **B. cross-transport:** enter-i2c-dev/probe-relay and enter-relay/probe-
  i2c-dev -- probes False + JEDEC None in both directions; no transport
  pairing changes the silence. One transient TypeError in a status-probe
  line (non-reproducible standalone; probe cells unaffected).
  Observation: during ISP, i2c-dev raw 0x37 reads return 0x02 (proxy view
  shifts during ISP -- consistent with STATUS:401 raw-traffic weirdness;
  recorded for whoever designs mid-ISP recovery paths).
- **C. monitor DATA baseline (files /tmp/opencode/monitor_state_15c/, sha
  only here -- serials are PII):** EDID 256 B cross-verified byte-identical
  between i2c-dev chunked read and relay read (sha256[:16] 28ca86b6dfde329e
  both); ddcutil capabilities captured (1878 B, ca351cf27c4d0cf5); FW 'FW.009'
  witness before/after every phase; monitor healthy throughout. First time
  the sink's readable identity has a cross-transport-consistent snapshot on
  record -- the anchor line for the day the flash dump happens.
- Verdict: the dump stays honestly blocked -- but the block is now
  exhaustively characterized (6 entry variants x 3 slaves x 2 grammars x
  2 transports = 72 probe cells + cross combos, all silent). Next: 15d
  combing pass (Comm.dll commID map, WinIspPlugIn vocabulary, NV2080 I2C
  port-enumeration re-check, Flash.dat binding) -- then the T2 decision.

## Session 15d (2026-10-10) — the systematic combing: vendor INI fully decoded -> DUAL-BANK architecture; DDCCI-ISP mailbox answers on this box (open #13); NV2080 door verified-closed

- Ran the "make sure nothing was overlooked" pass the user asked for, item
  by item, with receipts:
  1. **NV2080 I2C port enumeration** (suspicion: did session 13 guess port
     numbers?) — NO: STATUS:419 shows GET_I2C_PORTID(0x730211) enumerated
     portids 4-7 and READ/WRITE_BUFFER + READ_REG + **I2C_ACCESS(0x20800610)
     TEST_PORT** all returned INVALID_ARGUMENT (session 10 explicitly:
     "DDC ports for DP are AUX-emulated shims, dead lane"). The one header
     find of value (ACCESS = raw bit-bang API with PORT_DYNAMIC) was
     ALREADY tested. Door verified closed, not overlooked.
  2. **Comm.dll loader + commID map**: GUI relaunches the engine as
     `WinISPTool.exe --ispdiff --newboot --fw "%ls" --comm %d
     --settingfile "%ls"` (+ `--userdefinedinfo --newboot ...`) — note the
     **--ispdiff mode: the vendor itself diffs flash vs bin before
     updating**, validating our backup-compare policy. commID 1 =
     Comm/Comm_Aux (ours); 5 = rtd38/Comm_GFXI2C (RTD38-family, 128 B
     pages -- different chip, not our path).
  3. **IspSetting.ini fully decoded** (md5 d1be1f3a..., identical across
     both Wine prefixes; only file surviving the Wine runs):
     * `[ISP_DualBank] bSwitchFLag=1 enumBootCodeType=1
       ulTimeWaitCopyBank=8000 enumIspMode=1` -> **the flash is a
       DUAL-BANK design: program the inactive bank, switch the boot flag**.
       The 4 MiB chip = two ~2 MiB images; this ALSO explains the .009 vs
       .012 +0x20000 block shifts as BANK SLOTTING (14o's mystery,
       resolved). Write driver plan updated (open #7 rewritten).
     * `[ScalerConfig] BinVersionAddress=0xF800 ulModelNamePosInBin=0xF806`
       -> bin offsets are per-RELEASE CONFIG, confirming 14o's
       pattern-search as the right tool; `CheckVersion=0` (model+checksum
       checked, version not).
     * `[ISP_User_Defined] bGetVersion=1 strVersionDdcciCmd=0x6E,0x51,0x84,
       0x01,0xFE,0xE1,0xE6` -- **byte-identical to our vendor_fw_version
       packet**: the tool's own version path is the DDC/CI lane we've
       always proven working (independent confirmation).
     * `[Comm_AUX]` per-vendor routing knobs (issue-#1 gold):
       `AUX_SendCmdToFirstBranchForAMD=1` (AMD: ISP cmds to first DP
       branch = plain-i2c semantics we replicate),
       `AUX_bAutoDetectIntelSDK=1` + `IntelControlAPI/` (Intel path rides
       Intel's display SDK -- refinement for Intel replies),
       `AUX_GraphicsType` manual-vendor selector, `AUX_CheckSlaveAddress=1`
       + ExtarSlaveAddress knobs (slave address is CONFIGURABLE in vendor
       design -- another data-point that ISP slaves are treated as
       board-variable), `AUX_I2CPageLen=32` matches Facts.
  4. **WinIspPlugIn.dll EAT + spot-disasm**: engine verbs =
     IspFlash/BankEraseFlash/ChipEraseFlash/DumpFlash/EnterISPModeExport/
     ResetMCUExport/IspEeprom/GetKeyFromFlash/RecordFWVersion/
     GetUserDefinedInfoFromDDCCI/SendUserDefinedInfo (+merge-fw verbs).
     GetUserDefinedInfoFromDDCCI mode-switch (enumVersionRecordMode=2 ->
     worker 0x10025fc0) pushes 0x6E/0x51 via comm vtable +0x140 (DDCCI
     mailbox); **DumpFlash worker (0x100239b0) rides vtable +0x14 = the
     I2C page primitives -> flash bulk stays on the 0x22 lane**.
  5. **NEW LEAD (open #13)**: sent the engine's `strInitialDdcciCmd`
     (0x85,0xA0 = len-flag n5 + ISP opcode A0) as raw MCCS on THIS box:
     `51 85 a0 00 00 00 00 1a -> 6e 80 be ...` -- **the sink's DDCCI
     mailbox ANSWERS ISP opcodes on the working lane**. SendUserDefinedInfo
     parses a 5228-byte IspUserDefined.txt record format (info domain;
     flash-window capability undecided). Time-boxed bind owed: workers
     0x1002b2d0/0x1002b7e0 + enumIspMode dispatch + the record format --
     if flash read/write can ride DDCCI, THIS box gets a backup path
     without the dead 0x22 lane; if info-only, on-box options are
     formally exhausted and CH341A/other-box decides.
- Also banked from strings: exe verifies model via *flash* ("Compare bin
  and flash model name" -- 0x45 needs backend reachability, consistent
  with the Wine no-NVAPI failure), IspLog.txt/bSaveDebugLog knobs exist
  (debug-log run of the vendor tool = wire-capture option if Windows ever
  enters the picture), engine also knows Eeprom targets and merge-fw mode.
- Monitor: untouched this phase (read-only probes + one harmless vendor-
  opcode probe, state witnesses 'FW.009' + EDID intact after every step).
- Gates: ruff/compile/48-tests green after Facts.VENDOR_CONFIG block +
  HANDOFF (#1 refined, #5 wire-half closed, #7 dual-bank rewrite, #12
  measured, #13 new) updates.

## Session 15e (2026-10-10) — #13 grammar bind CLOSED (mailbox = info-only, evidence-complete); 0x45 under Wine now LOG-REPRODUCED; prefix forensics done

- **Wine/Proton prefix forensics (user asked "what else can we glean"):**
  * The GUI exe embeds its FULL default IspSetting.ini as a template --
    the two Wine-prefix temp copies are byte-faithful regenerations (no
    hidden config). Copyright 2024; PDB `E:\Git\2_CpIspTool\Windows\
    UserDefinedUI\01_MSI_MAG27_32\ISPToolForMsi\Release` -- engine lineage
    = MSI's CpIspTool family. `WinISPTool.exe` (the CLI the GUI launches
    via --ispdiff/--userdefinedinfo) does NOT ship in this package.
  * **strInitialDdcciCmd=[0x85,0xA0] provenance fixed: the key exists in
    NO binary/INI of this package** -- it belongs to other-generation
    CpIspTool inis. Our 14f->HANDOFF note imported it wrongly; 0xA0 is
    nevertheless what this firmware answers (below).
  * Recorded run environment recovered from prefix `user.reg [Volatile
    Environment]`: DW-Proton 11.0-14, exactly DXVK_ENABLE_NVAPI=1 +
    DXVK_NVAPI_ALLOW_OTHER_DRIVERS=1, NO WINEDLLOVERRIDES, no DllOverrides
    registry entries.
- **0x45 LOG-REPRODUCED on this box (Facts.PROTON_045):** reran the GUI
  under that prefix with DXVK_NVAPI_LOG_LEVEL=info: shim
  `dwproton-11.0-14`; `NvAPI_Initialize` fails ("Creating DXGI Factory
  failed... dxgi.dll present" -- the prefix never loads DXVK's dxgi as
  native) -> Comm_Aux retries at exactly INI-plausible cadence
  (AUX_RetryLimit=10) -> ZERO I2C-interface activity. The monitor wire
  was NEVER contacted under Wine/Proton; 0x45 = backend dead before
  wire. (Forced-native dxgi/d3d9 runs take a different init branch with
  no NVAPI calls at all -- no configuration of this prefix reaches the
  wire.) Attribution upgraded from inference to direct log evidence in
  HANDOFF wall-line/open#2, README, Facts.NVAPI_SURFACE, TEST-INTEL-AMD.
- **#13 GRAMMAR BIND (engine side):** comm vtable slot pair `+0x13c` =
  MCCS write (7-bit slave arg + pre-parsed payload from config object),
  `+0x140` = reply read `(0x6E, 0x51, len, buf)` -- i.e. plain DDC/CI on
  0x37, identical transport to our vendor_fw_version (15a's NVAPI
  write->read pair decode covers it). Shipped generation's ONLY DDCCI
  record = version (INI strVersionDdcciCmd == our packet byte-for-byte).
  `RecordFWVersion` primary worker = local linked-list store (`[eax+0x14]
  = 0`, zero comm calls) -- no mailbox flash-write path.
- **#13 LIVE MAPPING (firmware side), the long tail:**
  * First-run lesson: reads at 150 ms return zeros because the kernel's
    0x37 reply cache holds nothing until the monitor's late window --
    the INI's ulDelayTimeAfterDdcciWrite=3000 EXISTS for this reason.
  * 256-subcode paced sweep (`scratch/mailbox_a0_sweep.py`, ~15 min):
    exactly ONE unusual reply (0x28 -> '2e 30 30 39 4e' = ".009N"),
    two silent args (0xE6, 0xFE -- bytes of the FE/E1/E6 opcode family,
    handler mis-consumes arg frames carrying them; recovery verified,
    monitor healthy throughout, fw-witnesses every 32 subs).
  * Repro hunt (`mailbox_a0_records.py` byte-orders/n-lengths,
    `mailbox_a0_state.py` early+late reads, `mailbox_a0_capture.py`
    frame windows, `mailbox_a0_trace.py` BYTE-STREAM trace): 0x28 and
    control 0x00 traces are IDENTICAL -- one frame per write (the
    `6e 80 be` empty-reply), re-served cyclically by the kernel cache
    (shifting window every ~0.75 s). Phase-locked interloper test: a
    version query right before an A0 write leaves its frame `6e 8a 02
    00 fe 00 46 57 2e 30 30 39`+chk in the cache -- and that frame's
    checksum computes to 0x4E='N'. **".009N" = tail of a STALE FW.009
    version read-back + its checksum byte -- cache artifact, proven,
    not a mailbox record.** ISP-mode precondition also ruled out
    (phase-4 in-ISP A0/0x28 -> empty ack).
- **#13 CLOSED: the DDCCI mailbox routes ISP opcode 0xA0 but answers
  every argument with a VALID EMPTY reply (n=0, checksum 0xBE=0x50^6E^
  0x80); no flash window sits behind it on this unit.** The working lane
  carries exactly one monitor datum (the FW version), and we already
  read it. On-box options are now FORMALLY EXHAUSTED: next moves are
  issue #1 reply, borrowed real-Windows+NVIDIA run, or CH341A.
- New operational trivia banked (Facts.DDCCI_MAILBOX): the 0x37 reply
  cache RE-SERVES the last frame on shifting offsets ~0.75 s apart on
  this driver -- multi-read frame extraction must dedupe by content,
  and "delayed frame" intuitions must be checked against stale-cache
  read-back before being believed (this session's own favorite
  single-anomaly almost fooled us in the other direction).
- Tooling added: scratch/mailbox_probe_a0.py, mailbox_a0_sweep.py,
  mailbox_a0_records.py, mailbox_a0_state.py, mailbox_a0_capture.py,
  mailbox_a0_trace.py. Gates: ruff/compile/48-tests green; monitor
  FW.009, EDID anchors unchanged (sha 28ca86b6dfde329e still implied by
  head bytes), brightness untouched.

## Session 15f (2026-10-10) — USER RUN BREAKS THE FLOOR: vendor tool reached 12% + ISP-control-stage failure (0xd21) under umu/proton-cachyos

- User screenshot: 'Update fw fail, error code: 0xd21', progress 12%, red
  FAIL, file path X:\Projects\monitor-fw\vendor\... Deep run forensics:
  * Runner recovered from the live process tree: **umu-run +
    proton-cachyos-slr** (Steam compatibilitytools.d), Heroic prefix
    (x: -> /home/eugene), PROTON_ENABLE_NVAPI=1 +
    DXVK_NVAPI_ALLOW_OTHER_DRIVERS=1. Different stack from the recorded
    DW-Proton runs -- full DXVK => NvAPI_Initialize SUCCEEDS where
    DW-Proton failed (15e). The tool is single-instance; it was still
    open during analysis.
  * Engine wrote a NEW IspSetting.ini (1580 B, 23:35, md5 350e93b2...) --
    diff vs the 15d default adds exactly:
    AUX_IncompleteWriteNeedRetry=1, AUX_NvidiaMSTSupport=0,
    **AUX_NvidiaIICAuxAccess=0** -- deeper comm init than any recorded
    run; and the knob's name confirms slave-address/access mode is a
    vendor-tunable (AUX_IICAuxAccess=0 = public NVAPI_I2C path, matching
    15a's decode; =1 presumably the private DpAuxChannelControl path).
  * MONITOR UNHARMED after the failed update: live FW.009, EDID anchors
    intact, VCPs exactly as user left them (brightness 0/contrast 70).
    Dual-bank design is the working hypothesis why: failure came BEFORE
    any bank switch (boot bank never targeted).
- **0xd21 bound (offline):** five sites in WinIspPlugIn, each `call
  0x10019df0 (set-IspModeError) ; mov eax,0xd21 ; log`. Enclosing-stage
  strings: HandShakeBeforeEnterIspModeByBootType /
  EnableIspProgramChannelOneBankMode ('Enable Isp Channel Success!' as
  its happy path) / Set Background Flash Write Time / 'Ask for Start
  bank ... Fw code size' / 'Ask for User Flag address' / 'Get Current
  Key address' -- i.e. 0xd21 = **scaler rejected an ISP-control command
  (IspModeError class), not a comm-class error** -- the engine passed
  file checksum + version + model checks and ENTERED ISP, then died in
  the dual-bank pre-write handshake (enable-program-channel /
  ask-start-bank / flag+key-address queries). The vendor's pre-write
  command sequence -- the exact ladder our write driver must replicate
  -- now has a runtime anchor (big Flash.dat-binding win).
- Discriminating question under live test (scratch/rerun_umu_logged.sh,
  background): did the DXVK-NVAPI shim's NvAPI_I2CRead/Write actually
  reach the kernel (-> ISP-control bytes went to the flash lane and the
  SCALER rejected/timed out = vendor-engine third-party witness of the
  dead lanes, monitor-side rejection now the live hypothesis for #5's
  remaining half), or did QI hand back unimplemented stubs (wire never
  saw the ISP stage)? Startup version-read discriminates WITHOUT any
  clicks (NvAPI_I2C log lines + visible version = shim I2C live).
  nvapi.dll is the SAME binary size as DW's fork; no /dev or drm strings
  (mechanism unknown); interface NAMES present prove nothing about
  implementation.

## Session 15g (2026-10-10) — 0xd21 TRANSPORT DECODED: the ISP-control ladder rides slave 0x35 via the I2C-page slots -- fresh i2c-dev probe finds it dead-silent here (relay sweep had it at TIMEOUT since 14k)

- Static bind of the five 0xd21 sites (EnableIspProgramChannelOneBankMode
  and siblings): each call = comm vtable slots +0x74 (write) / +0x78
  (read) with args (slave8=0x6A -> **7-bit 0x35**, reg=**0xCA**, count,
  &buf) -- the flashrom-documented MSTAR-DP-CI scaler mailbox (same
  family as our proven 0x22 ISP-register slave; our exhaustive sweep
  covered 0x18/0x20/0x22 -- **0x35 was never probed here**).
- Failure path even overwrites the returned status byte with 0x6A =
  'MSTARDDCCIACK' (no ACK from the scaler) before logging enumError --
  i.e. 0xd21 = the scaler did not ACK the 0xCA command ladder.
- Flashrom mstarddc_spi anchor (offline docs): enter-ISP 0x85 0xA0
  [0xA0 0x3D 0x05 0x02 0xA0], exit 0x85 0xA0 0x24 on the SAME slave --
  and our live mailbox data shows A0-family traffic hangs exactly on
  (0x37, A0, FE) and (0x37, A0, E6) -- the ISP-enter payload bytes
  0xA0,0x3D,0x05,0x02,0xA0 include FE/E1/E6-family values; the FW.009
  scaler partially parses them and stalls DDC/CI (banked for whoever
  replays enter sequences).
- Retry history for the logged rerun (3 launches): (1) env -i lost X auth
  -> GUI dead; (2) direct proton script -> protonfixes IndexError on the
  non-numeric STEAM_COMPAT_DATA_PATH (artifact of bypassing umu); (3)
  umu-run + inherited session env -> GUI alive (xalia/DXVK 3.1.1-47,
  RTX 4090 @ 615.78.8 in the dxgi log), engine started but wrote only
  the 1498B DEFAULT ini (shallower than the user's 1580B 3-key run) ->
  100 s window too short; window-4 (240 s) launched background.
  Interesting for attribution: in retry-3 no nvapi.log appeared at all
  despite the shim being active at the dxgi layer -- interface load
  timing unconfirmed.
- Also decoded today: WinISPTool CLI is 'newboot'-only in this build
  (the two template invocations both carry --newboot).
- **LIVE PROBE DONE (`scratch/probe_0x35.py`): `0x35` is DEAD SILENT on
  this box, both transports** -- i2c-dev: NACK/EIO on probe, reads AND
  writes (Errno 5 on every cell); relay: bare-address False,
  TIMEOUT on write cells. Witnessed FW.009 + EDID intact after every
  run. Verdict: the vendor's `0x35/0xCA` ISP-control ladder fails on
  this GPU/DP-link EXACTLY where our measurements say everything flash-
  side fails -- the 0xd21 event is WITNESS CONSISTENT WITH (and after
  window-4's log, confirmatory of) dead-end #11 via the NVAPI shim path:
  first unACKed slave, first engine failure. W3 (alive-0x35-rejected-
  content) is DEAD: the address itself never answers natively.
  Honest nuance: 14k's relay sweep already listed 0x35 among TIMEOUTs;
  this session adds the FIRST i2c-dev cells for 0x35 (NACK/EIO) + the
  reg-shaped write/read cells both transports -- and now a *purpose*:
  it's the vendor's command channel.
