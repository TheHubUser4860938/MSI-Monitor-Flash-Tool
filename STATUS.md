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
git HEAD c1be88c + these notes; safe modes + shell work as user; --nvrm
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
       c4da6ba, user perms)
    2. on 0x22: write [0x60, 9F, 00, 00, 00]? — per Flash.dat semantics:
       write reg=0x60 strobe; window: write [0x60,<idx>] pairs, read data regs;
    3. oracle: JEDEC 0x9F via SPI bridge -> A25L032 ID 0x1F4010, or model string
       "MAG 341CQ X28" @0xF806 through the window.
  HDMI cable currently UNPLUGGED (user power-cycled + removed DP/HDMI dual-input
  wedge). Needs user to re-plug HDMI (secondary input; DP stays video source).
