#!/usr/bin/env python3
"""While ISP-alive, find the flash-bridge slave by read-back oracle.

Facts (INI + disasm):
  * ReadFlashData: pointer-write [hi,lo] then burst read, 32B page
  * SPI chip on this board: A25L032 (in Flash.dat) -> native I2C-style addr 0x50
  * AutoDetectSlaveAddr probes upward from 0x50 -> bridge addresses vary by board
  * ONLY raw-I2C commands exist for flash IO (INI defines exactly ONE DDC/CI cmd:
    the version query), so the bridge IS an I2C slave while ISP is alive

Method: enter ISP (proven: 0x94 -> status bit0x80), then for each candidate
slave: burst-read 48B at flash 0xF800 (pointer write [F8,00] if candidate !=
EDID-slave candidates we skip writes on; for those, only pure reads compared
against the EDID oracle). DATA oracle: "012" + "MAG 341CQ" at 0xF800.
Bare-address ACKs proved unreliable on this RM -> data is the only verdict.
Exit ISP, verify EDID + version query afterward. Read-mostly; root.
"""
import sys, time
sys.path.insert(0, str(__import__("pathlib").Path(__file__).resolve().parents[2]))
from msi_isp.nvbus import NvRMAuxBus
from msi_isp.isp import enter_isp, exit_isp, isp_alive

ORACLE = b"MAG 341CQ"

# candidate 7-bit slaves the bridge could live at (8-bit constants seen in the
# DLLs shifted, plus AutoDetect's neighborhood; EDID's 0x50 disambiguated by oracle)
CANDS = [0x20, 0x28, 0x29, 0x2C, 0x2E, 0x44, 0x45, 0x4C, 0x4D, 0x50, 0x51,
         0x18, 0x19, 0x1A, 0x1B, 0x22, 0x36, 0x37]


def retry(fn, tries=6, what="op"):
    last = None
    for _ in range(tries):
        try:
            return fn()
        except OSError as e:
            last = str(e); time.sleep(0.05)
    raise OSError(f"{what}: {last}")


def burst(b, slave, off2):
    """pointer-write 2B then 48B burst read; returns data or raises."""
    retry(lambda: b.write(slave, bytes(off2)), what=f"w@{slave:#04x}")
    d = b""
    while len(d) < 48:
        d += retry(lambda: b.read(slave, 32), tries=4, what=f"r@{slave:#04x}")
    return d[:48]


def main():
    b = NvRMAuxBus()
    print("pre: isp_alive =", isp_alive(b))
    idx, st = enter_isp(b)
    print(f"ISP entered cand{idx} status={st:#04x} alive={isp_alive(b) is not None}")

    hits = []
    for s in CANDS:
        try:
            d = burst(b, s, (0xF8, 0x00))
        except OSError as e:
            print(f"  {s:#04x}: {e}")
            continue
        asc = "".join(chr(c) if 32 <= c < 127 else "." for c in d)
        v = "ORACLE" if ORACLE in d or b"012" in d else ("nonzero" if d.strip(b"\x00") else "zeros")
        print(f"  {s:#04x}: {d[:20].hex(' ')} |{asc[:20]}| {v}")
        if v == "ORACLE":
            hits.append(s)
            if len(hits) >= 1:
                break

    exit_isp(b)
    time.sleep(0.4)
    ed = b.read(0x50, 8, warmup=True)
    print(f"exit: ISP cleared={isp_alive(b) is None} EDID={ed.hex(' ')} HITS={hits}")


if __name__ == "__main__":
    main()
