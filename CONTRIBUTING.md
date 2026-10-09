# Contributing

Everything here assumes you've read [`README.md`](README.md) (what the tool
is) and skimmed [`STATUS.md`](STATUS.md) (why it is that way — the full
session log). `HANDOFF.md` is the condensed brief. Bugs, ideas, and especially
**Intel/AMD test results** are welcome as GitHub issues.

## The one rule that outranks the rest

This tool pokes a monitor's flash controller. **A mistake here is a
paperweight, not a stack trace.** Binding safety policy:

- No erase/program ever runs unless a JEDEC read (`0x9F`) returned `0x1Fxxxx`
  from the ISP slave, a full backup was taken, **and** the backup re-read
  byte-compares.
- Every ISP experiment ends with the `0x24` exit command + an EDID re-check
  at `0x50` (proves the scaler came back).
- Keep the monitor on **DP only** during testing — dual HDMI+DP input
  combined with DDC polling has soft-wedged this scaler once (session 7;
  recovered by power-cycle, but let's not repeat it).
- The user decides whether to flash. Gates and the typed `flash`
  confirmation are product features; PRs that loosen them need a good story.

## Dev environment

- **The tool** (`msi_isp/`): Python ≥ 3.10, standard library only. There is
  no runtime dependency, no build step — keep it that way.
- **Lint**: `ruff check .` must pass. The policy is pinned in `ruff.toml`:
  strict on shipping surfaces (`msi_isp/`, `kernel/`, `re/`), real-bug-family
  rules only on the research archives (`scratch/` incl. `scratch/legacy/`,
  those are frozen experiment records; don't restyle them).
- **RE kit** (`re/`): needs capstone + pefile in a venv —
  `python3 -m venv .venv && .venv/bin/pip install capstone pefile ruff`,
  then `. re/env.sh` sets `$PY`, `$P` (plugin DLL), `$C`/`$A` (Comm DLLs).
  The vendor binaries are **PE32/i386** — disassemble `CS_MODE_32`; every
  embedded string is UTF-16LE. `vendor/` (the updater + `FW.012` .bin) is
  gitignored: fetch it from MSI's support page for your model.
- **Kernel module** (`kernel/`): optional, NVIDIA-only. Needs an
  open-gpu-kernel-modules checkout whose tag **exactly matches the loaded
  driver** (the Makefile `OGKM=` default is just the dev box), kernel
  headers for your running kernel, and — if your distro kernel was built
  with clang — build with `make LLVM=1 CC=clang`. The Makefile auto-
  generates the modpost symvers from `/proc/kallsyms`; nvidia.ko must be
  loaded. It declares `Dual MIT/GPL` because it consumes GPL-only exports.
  Node policy: mode `0660` by default, group via
  `kernel/99-msi-auxch.rules` (`root:video`); ISP-slave writes (0x18–0x22)
  are refused in-kernel unless the timed `MSI_AUXCH_UNLOCK` ioctl armed the
  5-second window — `kernel/test_relay.py` exercises exactly that matrix.

## Definition of done for a change

1. `ruff check .` and `python3 -m py_compile` (via `git ls-files '*.py' |
   xargs python3 -m py_compile`) are clean.
2. Regression sweep on the live monitor matches recorded baselines
   (`STATUS.md` has the expected outputs — outputs are byte-stable by
   convention): `./msi-isp info`, `verify --bin`, `probe`, and if you
   touched transport code: `sudo ./msi-isp --nvrm probe`, both arms of
   `scratch/spec_0x22.py`.
3. Kernel module touched? rebuild + `insmod`, confirm the dmesg oracle lines
   (`DPCD0 reply=ACK b0=0x12`, `0x50 read 8B ... 00ffffffffffff00`), run
   `python3 kernel/test_relay.py` **unprivileged**, then `rmmod` — twice.
4. TUI changes: exercise under a real terminal, and
   `printf '1qq' | script -qec './msi-isp shell' /dev/null` for automation.
5. Append a dated session entry to `STATUS.md` — **append-only; never edit
   history** (write a "superseded:" line instead). Record raw numbers: try
   counts, reply verbs, elapsed time. "One TIMEOUT is not a result" — probes
   follow the ≥200-tries-or-2-seconds policy with logging of every reply
   verb (the retry budget has burned us before: see dead-ends list).
6. Commit per experiment. Reference dead-ends rather than re-running them
   (HANDOFF §Dead-ends is authoritative for the NVIDIA dev box).

## Where to help (ranked by value)

1. **Run the Intel/AMD experiment** ([`TEST-INTEL-AMD.md`](TEST-INTEL-AMD.md)):
   one probe run on any Linux box with Intel/AMD graphics + DP cable
   decides whether `backup`/`write` finish for those GPUs. Open the issue
   with the log — that's the contribution.
2. **Kernel relay packaging** — the hardening is DONE (0660+udev group
   policy, timed unlock gate on ISP-slave writes, `--auxdev` wired into
   CLI/console/TUI). Remaining: a DKMS/modprobe-friendly install story so
   the relay survives driver updates, and feedback on the 5 s unlock
   window from anyone who runs a real backup over it.
3. **Your monitor model**: the ISP magic candidates, ISP slave set, and
   DDC/CI vendor opcode live in `Facts.py`, per model. A port = re-deriving
   those with `probe` + the vendor updater's INI for your model. Start an
   issue with `./msi-isp info` output and your `IspSetting.ini`.
4. **RE archaeology**: `Facts.ISP_PIPELINE` names the vendor flash steps but
   not their register traffic yet. `WinIspPlugIn` fn `0x3e610` (erase) and
   `0x3e2a0` (program) still hide the exact PWM2SPI strobe/opcode sequences
   — decoding those is the last mile before `write` can be implemented on
   machines where `0x22` ACKs. Method notes live in the STATUS entries.
5. **NVIDIA driver watch**: the open module's in-kernel DDC/CI workstream
   would make both the allow-list and the kernel relay moot — the i2c-dev
   code path adopts it unchanged. Note findings in an issue with the driver
   version + `spec_0x22.py` output.

## Style notes that are load-bearing

- 7-bit addresses in code and issues; the vendor binaries use 8-bit —
  `0x44` in disassembly is `0x22` on the wire. Never mix.
- `Facts.py` is the single source of protocol truth; new constants go there
  with provenance comments (how it was measured, which session).
- User-visible refusals state the concrete missing precondition and the
  command to fix it ("ISP flash slave visible → run with sudo ...").
- The tool degrades gracefully when the monitor is unreachable — never
  crash-trace at a user mid-flash-thought.

Thanks — the person who runs probe #1 on an AMD box matters more than any
code change on the dev machine.
