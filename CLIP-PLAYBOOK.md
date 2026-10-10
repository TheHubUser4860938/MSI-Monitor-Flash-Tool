# CH341A clip playbook — dump day, then (user-gated) practice-write day

Companion to the safety policy (HANDOFF §Safety) and `Facts.FLASH_CHIP`.
Everything here is ordered so that each step either produces evidence or
is reversible. **The monitor must be UNPLUGGED FROM MAINS for every clip
step** (a powered scaler will fight the bus and can back-power the clip).

## Kit (chosen 2026-10-10)

CH341A programmer + SOP-8 test clip (lever type) + 8→16 adapter + pin
headers. Buy additionally: **multimeter** (level check), **kapton tape or
mounting putty** (clip stabilization — contact is THE failure mode),
small spudger (case). Optional-if-needed: zener mod (below).

## Step 0 — package check (kills or greenlights the whole plan, 5 min)

Open the back (screws; note warranty sticker). Locate the 4 MB SPI NOR
(markings: `A25L032M...`, or a Winbond/GigaDevice second-source).
- **SOIC-8 / SOP-8 (gull-wing legs visible)** → proceed. 208-mil and
  150-mil widths both clip fine.
- **WSON-8 (flat pads, no legs)** → STOP. The clip cannot grab it.
  Options: solder a SOIC-8 breakout "stump" onto the pads, or pogo probe
  rig, or abandon clip route. Take a photo before deciding.

## Step 1 — level check (before touching the chip)

Board VCC jumper set to 3.3 V. With clip in hand (not on chip), power
programmer, measure on the clip: pin 8 (VCC) must read **3.3 V ± 0.1**,
and any data pin's idle-high must NOT exceed ~3.6 V. A25L032M is
2.7–3.6 V, **not 5 V tolerant** — cheap CH341A boards often keep data
levels at 5 V. If 5 V: do the community zener-mod (or a level-shifting
adapter) before clipping anything.

## Step 2 — clip on, monitor UNPLUGGED from mains

Clip-on technique (from the kit's own guidance + community practice):
open the lever, slide the clip onto the chip **from the side**, never
press straight down; release likewise. Align pin-1 (dot on chip = pin 1)
with the clip's marked end. Once on: tape/putty the ribbon down so zero
strain sits on the jaws. Check flashrom sees sane levels:

```
flashrom -p ch341a_spi            # expect: "Found AMIC/... A25L032 (4096 KiB)"
```

If detection fails or ID is garbage: re-seat (contact), re-check
orientation, re-check levels. Do NOT proceed past a clean detect.
Note: flashrom flags `A25L032` `PREW` — verify at first use whether the
build auto-handles it (it should; if a write step complains, that flag
is the first suspect).

## Step 3 — record chip state BEFORE any read decision

From `flashrom -p ch341a_spi -V` verbose output, record: exact vendor/ID
(expect `1f 40 10` = our in-house JEDEC oracle — if the chip is a
second-source, ID differs; that's fine, record it, the 0x1F gate is OUR
safety mirror not gospel), and any reported protection state. The
A25L032M has BP write-protect bits; flashrom may auto-unlock on write —
note the before-state so it can be restored deliberately, not silently.

## Step 4 — THE DUMP (this is the backup; nothing before this is trusted)

```
flashrom -p ch341a_spi -r dump1.bin
flashrom -p ch341a_spi -r dump2.bin
sha256sum dump1.bin dump2.bin    # MUST be identical
```

Mismatch → clip contact moved; re-seat, re-run. Two identical 4 MiB
reads = the community standard (`mstar-monitor-firmware-dumper` does
exactly this double-read + hash discipline) and our verify-by-readback
doctrine at the SPI layer. `dump1.bin` == `dump2.bin` is now THE
monitor's backup — bank it (literally: copy to two machines).

## Step 5 — bank + flag map derivation (offline, no clip time)

Against the dump, in front of a computer:
- locate the live FW.009 image (exact-copy anchors from
  `Facts.PREVIOUS_BINS["009"]`; EDID template ~`0x1d0200` era offsets
  were file-relative — the dump gives true chip addresses);
- the second bank copy = same pattern at a different base (expected
  2 MiB apart, but the dump, not hope, decides — dual-bank model per
  `Facts.VENDOR_CONFIG.isp_mode`);
- boot-flag region = small differing area near the bank bases, cross-
  checked against `re/g_flashdat_map.txt` (Phase A bind) and the
  engine's "ask user flag address" stage semantics;
- record per-panel calibration regions (in dump, absent from bins) —
  these must survive every write (region-guard does exactly that).

## Step 6 — compose the practice image (no hardware yet)

`new.bin` = byte-for-byte copy of the verified dump with ONLY the
inactive bank region replaced by the `.012` bin laid out per the map.
Flag bytes untouched. Everything outside the bank stays identical —
which is why the write uses a layout file (next step), never a bare
`-w new.bin`.

## Step 7 — write, user-gated (safety policy: explicit decision)

```
# layout file:  inactive_bank  0xSTART  0xEND   (from Step 5 map)
flashrom -p ch341a_spi -w new.bin -i bank_layout.ini
flashrom -p ch341a_spi -r dump3.bin
# sha256(dump3[bank region]) == sha256(new.bin[bank region])
# AND dump3 outside bank == original dump outside bank, byte-exact
```

If either check fails: rewrite, re-verify; if it never matches, restore
`flashrom -p ch341a_spi -w dump1.bin -i full_chip.ini` — you are home,
zero damage done, because the boot bank and flag were never touched.

## Step 8 — reassemble, power, witness

Monitor boots FW.009 exactly as before (the practice is invisible from
the user side — this is the point of the flag design). DDC/CI witnesses:
`./msi-isp info` (FW string, EDID) + VCPs unchanged.

## Step 9 — commit day (separate, explicit user decision)

Flag write = one small region via the clip (again with a layout file)
— or, if the Phase-A map shows the flag writable through the DDC/CI
register family (open #13's alive lane), possibly without re-clip.
Expected: FW.012 boots. **Rollback is the same one byte in reverse**
(boot bank still holds pristine .009 until the FIRST .012 boot swaps
roles — even after commit, the other bank remains a full fallback).

## Failure-mode table

| Symptom | Almost always | Action |
|---|---|---|
| detect garbage/intermittent | clip contact/orientation | re-seat, tape, retry |
| ID ≠ 1f4010 on an AMIC-marked chip | clone CH341 levels / wrong pins | Step 1 re-check |
| reads differ between passes | jaws moved | re-clip, no shame |
| WSON pads | reality | Step 0 exit, deliberate |
| write verify fails | BP bits / PREW sequencing | record SRS, unlock, retry; worst case restore dump1 |
| anything at all, ever | — | you hold a verified dump; this is the reversible state |

## What the clip does NOT need

No soldering (if SOIC-8), no driver work (flashrom present: `ch341a_spi`
built, USB `1a86:5512` recognized on this machine already), no ISP
mailbox (the dead `0x35/0x49` lanes are irrelevant at the SPI layer —
the clip never asks the scaler's permission).
