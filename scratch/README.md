# `scratch/` — experiment harness index

One-shot probes, grouped by question. Every script opens real buses at
runtime — import/execute only with the monitor in the state its docstring
expects. Policy: these are FROZEN session records (lint-relaxed per
`ruff.toml`); conclusions live in `STATUS.md`/`Facts.py`, the scripts exist
so any claim can be re-run. `scratch/legacy/` holds the superseded pre-
package generations (see commit `0a70769`); `scratch/legacy/smoke/` is the
old smoke suite.

## CI-pinned — DO NOT MOVE

| file | why |
|---|---|
| `flashdat_bind.py` | Flash.dat record→script parser; `tests/test_flashdat_bind.py` exec-imports this exact path and CI compile-checks it; generator of `re/g_flashdat_map.txt` |

## Cross-vendor runbook tools (cited by `TEST-INTEL-AMD.md`)

| file | purpose |
|---|---|
| `spec_0x22.py` | THE decisive 0x22 contact protocol; transport-adaptive (i2c-dev on Intel/AMD, RM on NVIDIA); auto-detects bus |
| `sweep_slaves.py` | unfiltered 0x03–0x77 ACK sweep over any transport (the A1 harness behind the DP dead-roster) |
| `probe_0x35.py` | the 0x35/0x6A ISP-ladder question (15g) |
| `nvapi_surface.py` | Comm_Aux NVAPI-surface evidence regen (15a); header provenance + re-fetch URL in-file |
| `bulk_kernel_test.py` | relay `MSI_AUXCH_BULK` (0x73137C) ground truth (14n) |

## 15c–15f — DDC/CI-ISP mailbox 0xA0 (open #13 closure ladder)

`mailbox_probe_a0.py` → `mailbox_a0_sweep.py` → `mailbox_a0_state.py` →
`mailbox_a0_capture.py` → `mailbox_a0_trace.py` → `mailbox_a0_records.py`
(documented progression, each cites its predecessor's lesson), plus
`t_embed44.py` (embedded-target-byte variant) and
`dump_attempt_matrix.py` (15c systematic dump attempts).
Result: `Facts.DDCCI_MAILBOX` — info lane only.

## 15j–15k — state-axis probes (standby / power-off / gen-2 opcodes)

| file | purpose |
|---|---|
| `standby_matrix.py` | shared harness core (`log/probe/sweep/try_magic/PAC`) — the three below IMPORT it; do not break that |
| `standby_input.py` | no-signal-standby via VCP 0x60 input blind |
| `standby_button.py` | button-standby patrol harness (queued cell A re-runs start here) |
| `off_content_probe.py` | content-oracle pattern (the 15k phantom-ACK rule made executable) |
| `wopcode_15j.py` | gen-2 write-opcode roster probe |
| `ddcisp_85a0.py` | the [0x85,0xA0] pair-routes-opens-nothing test |

## 14-era ISP window / flash-read framing probes (superseded by dead-end #11, kept for the Intel/AMD day)

`t_22isp.py`, `t_22steps.py` (step-by-step spec-faithful 0x22 sequences —
the wire settle-material for the inference flags in `isp.py`),
`t_mailbox.py`/`t_mailbox2.py`/`t_mbox.py`/`t_mbox2.py` (mailbox read shapes;
note four near-homonyms with distinct hypotheses), `t_rdseq.py`, `t_rdwr.py`
(I2C_RDWR/ENOTTY finding), `t_subread.py`, `t_wire.py`/`t_wire2.py`,
`t_ptr.py`, `t_memrd.py`, `t_regwin.py`, `t_reg2b.py`, `t_reg3b.py`,
`t_lensweep.py`, `t_femap.py`, `t_spi2.py`, `t_spiread.py`, `t_4a_aux.py`,
`t_state.py`, `t_addrscope.py`, `t_tun.py`, `t_input.py`, `t_wdual.py`,
`t_wopcode.py`/`t_wop2.py` (+ `wopcode_15j.py` above).
Naming caution: `t_*` basenames collide with `legacy/` counterparts —
cite with the `scratch/` prefix.

## HDMI/DDC variants (15h and precursors)

`hdmisp.py`, `t_hdmi_isp.py`, `t_mbox.py`/`t_mbox2.py` (HDMI-bus mailbox),
`crossisp.py` — the allow-list confession arc (Facts.STANDBY_AXES note);
kit-day side-quest closes the analog remainder.

## NVIDIA transport internals (14-era)

`t_nv2080_i2c.py`, `t_nv2080b.py`, `t_2080acc.py` — public NV2080 I2C
controls & privilege-flag variants (the escape-0x39 background).

## Write-policy ground truth (15b)

`vcp_write_test.py` (T0b: our raw VCP write accepted + restored),
`write_policy_probe.py` (T1: 2×6 forwarding matrix).

## Proton reproduction trio (15e–15f)

`rerun_umu_logged*.sh` — the vendor-tool-under-Proton reruns with nvapi-log
capture (paths `$HOME`/`$USER`-parameterized in 15l). `rerun_umu_logged.sh`
is the DW-Proton variant, `2`/`3` the umu/proton-cachyos ones.
Result: `Facts.PROTON_045`.

## Captured outputs (dated wire records, not regenerable)

`ctrl.log` (from `t_ctrl_probe.py`: probe-semantics ground truth per slave),
`harmless.log` (from `t_harmless.py`: which probe shape survives ISP),
`sweep_isp.log` (from `t_sweep_isp.py`: RM write-decisive sweep).
