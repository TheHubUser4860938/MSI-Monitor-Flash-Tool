#!/usr/bin/env python3
"""Post-ISP-entry probe of flash slave 0x20 over raw I2C-over-AUX.

All prior 0x20 sweeps ran BEFORE isp entry (magic 0x94 -> status 0xca proven).
If the RTD2711 exposes the flash slave only while ISP is alive, this is the
whole ballgame: pointer-write [hi,lo] to 0x20, then burst read (ReadFlashData
model, slave const 0x/41 = 0x20 7-bit). Windows NVAPI path proves these
transactions exist on this exact hw; RM DEFER-handling was the suspect, so
every op retries on DEFER/TIMEOUT up to a few seconds.

Target oracle: flash 0xF800 -> b"012" + b"MAG 341CQ" (from .bin layout).
Safe: pure reads; exit ISP (0x24) + EDID verify at end. Run as root.
"""
import sys, time
sys.path.insert(0, "/home/eugene/Projects/monitor-fw")
from msi_isp.nvbus import NvRMAuxBus
from msi_isp.isp import enter_isp, exit_isp, isp_alive

ORACLE = b"MAG 341CQ"


def retry(fn, tries=25, pause=0.2, what="op"):
    last = None
    for i in range(tries):
        try:
            return fn()
        except OSError as e:
            last = str(e)
            time.sleep(pause)
    raise OSError(f"{what} failed x{tries}: {last}")


def main():
    b = NvRMAuxBus()
    DDC = 0x37
    FLASH = 0x20

    print("pre: isp_alive =", isp_alive(b))
    idx, st = enter_isp(b)
    print(f"entered via cand{idx}, status={st:#04x}")

    ok = None
    for tag, ptr in [("F800 hi-first", b"\xF8\x00"), ("F800 lo-first", b"\x00\xF8")]:
        try:
            retry(lambda p=ptr: b.write(FLASH, p), what=f"write {tag}")
            print(f"  {tag}: pointer write ACKed!")
            try:
                d = retry(lambda: b.read(FLASH, 32), what="read")
            except OSError as e:
                print(f"  {tag}: write ok, read fail: {e}")
                d = b""
            asc = ("".join(chr(c) if 32 <= c < 127 else "." for c in d))
            print(f"  {tag}: read32={d[:16].hex(' ')} |{asc[:16]}|")
            if b"012" in d or ORACLE in d:
                ok = tag
                break
        except OSError as e:
            print(f"  {tag}: {e}")

    # also try bare ACK existence of 0x20 while alive, with retries
    try:
        retry(lambda: b.write(FLASH, b"\x00"), tries=10, what="bare 0x20 write")
        print("bare 0x20 write ACK (with retries)")
    except OSError as e:
        print("bare 0x20 write:", e)

    exit_isp(b)
    time.sleep(0.4)
    ed = b.read(0x50, 8, warmup=True)
    print(f"exited; EDID={ed.hex(' ')} ; RESULT={ok}")


if __name__ == "__main__":
    main()
