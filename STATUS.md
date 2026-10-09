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
  (also fixes 31 stale `/home/eugene/monitor-fw` insertions), `<user>`/
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
