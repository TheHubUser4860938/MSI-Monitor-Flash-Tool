# Intel/AMD test session — runbook (the decisive 0x22 experiment)

**Purpose.** HANDOFF open-question #1 / dead-end #11: the scaler's flash register
file (7-bit `0x22`) has never ACKed I2C-over-AUX from Linux on the RTX 4090.
This experiment runs the *same* probe from an Intel or AMD GPU. It is the gate
that decides whether `backup`/`write` get finished for non-NVIDIA GPUs
(ACK) or the tool ships the v0.1 conclusion (silence).

**Nothing here writes to the monitor.** Reads only; no ISP entry, no erase,
no program. Keep the monitor on DP only (dual-input DDC stress soft-wedged
this scaler once — STATUS session 7).

## What you need

- Any Linux box with an **Intel or AMD GPU** and a DP output + DP cable.
- This repo: `git clone` or copy the directory (the tool is pure stdlib
  python3 — no pip installs needed).
- i2c-dev permission on the GPU bus: usually the `video` group, else run the
  same commands with `sudo`. (`ddcutil detect` working is a good sign.)

## Run

```sh
cd monitor-fw
# optional: find the bus (script auto-detects the one whose 0x50 answers an EDID)
ddcutil detect

./msi-isp --bus N info          # expect: live 'FW.009' + model 'MAG 341CQ X28'
./msi-isp --bus N probe         # full ACK table
python3 scratch/sweep_slaves.py --bus N   # exhaustive 0x03-0x77 scan; on this
                                # hardware i2c-dev IS ground truth — a live
                                # 0x18-0x1b/0x20/0x22 there = the flash path
python3 scratch/spec_0x22.py --bus N
```

`--bus N` is optional everywhere (auto-detect via 0x50 EDID magic; it refuses
ambiguously rather than guessing). On an NVIDIA box the script would
auto-select the RM transport instead — irrelevant here, no `/dev/nvidiactl`.

## Reading the result (script prints verdicts itself)

| Result at `0x22` | Meaning | Next |
|---|---|---|
| `ACK` + data (`STEP 1 RESULT: CONTACT`) | I2C-over-AUX to the flash register file works | ACK path: `backup`/`write` implementation proceeds. Step-2 reg values (`0x60/0x61/0x00/0xFF`) decide address-sensitivity — capture them all. |
| `STABLE-NACK/EIO` (or `STABLE-TIMEOUT`) for the full 2 s | The slave does not answer here either | Silence path: ship the v0.1 conclusion — with the session-15a/15b caveat that "Windows NVAPI works" was never an observed fact for this unit (the only recorded updater run was Wine/Proton, where NVAPI has no driver — 0x45 there = backend absent, not wire silent); the decoded `Comm_Aux.dll` shows the Windows path uses the same class of primitives. If every Linux vendor goes silent too, the realistic remaining routes are a borrowed real-Windows+NVIDIA run, the vendor's Realtek-USB ISP backend (board-level adapter — this unit's USB-C is display-only), or a CH341A clip. |

Note (session 15a, for AMD reporters): the vendor's own AMD comm backend rides
`ADL_Display_DDCBlockAccess_Get` — plain DDC I2C semantics — so the i2c-dev
`--bus` path used above IS the faithful reproduction of what Windows does on
AMD hardware; no driver special-casing needed in the reply.

Note: on i2c-dev the kernel performs the DEFER-retry loop internally, so the
2.0 s wall budget is met with fewer, slower tries than the RM path
(NVIDIA box: 108–109× TIMEOUT in 2 s; i2c-dev: ~50× EIO). Try counts differ,
verdict logic is identical: **contact requires ACK + data.**

## Capture for the return trip

1. Full console output of the three commands above (every verb line matters).
2. `uname -a` and `lspci -nnk | grep -A4 -E "VGA|Display"`.
3. `ddcutil --version`.
4. Monitor state before/after (`./msi-isp --bus N info` — should be identical;
   it's a read-only session).

If the box is a hybrid GPU (laptop), make sure the DP port belongs to the
GPU you think it does (`xrandr --listproviders` / BIOS mux settings) — the
runbook target is any Intel/AMD DP output; wrong provider just means the bus
auto-detect will not see the monitor and `--bus N` fixes it.
