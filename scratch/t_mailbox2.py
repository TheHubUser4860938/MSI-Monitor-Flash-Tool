#!/usr/bin/env python3
"""ISP-alive + 3-byte register pointer on raw slave 0x37 (Write32BitRegEx
addr form: [page, b1, b0], page FE = version/window). If the window honors
the pointer, FE F8 00 / FE F8 06 return flash content (009 / MAG oracle).
Read-only; exits ISP and EDID-verifies."""
import sys, time
sys.path.insert(0, str(__import__("pathlib").Path(__file__).resolve().parent.parent))
from msi_isp.nvbus import NvRMAuxBus
from msi_isp.isp import enter_isp, exit_isp, isp_alive, IspError

def asc(b):
    return "".join(chr(c) if 32 <= c < 127 else "." for c in b)

def rd(bus, ptr, n=24):
    bus.write(0x37, ptr, warmup=True)
    time.sleep(0.01)
    return bus.read(0x37, n)

def main():
    bus = NvRMAuxBus()
    for attempt in range(3):
        try:
            cand, st = enter_isp(bus)
            print(f"ISP alive: cand {cand} st {st:#04x}")
            break
        except IspError as e:
            print(f"entry {attempt}: {e}"); time.sleep(2)
    else:
        sys.exit(1)

    tests = [
        (bytes([0xFE,0xE1,0xE6]), "window FE E1 E6 (ver, expect FW.009)"),
        (bytes([0xFE,0xF8,0x00]), "window FE F8 00 (flash ver, 012 in .bin)"),
        (bytes([0xFE,0xF8,0x06]), "window FE F8 06 (flash MAG 341CQ X28)"),
        (bytes([0xFE,0xF8,0x10]), "window FE F8 10"),
        (bytes([0xFE,0xE1,0x00]), "window FE E1 00"),
        (bytes([0x00,0x00,0x00]), "window 00 00 00 (boot/IVT: 0x10-ish opcodes)"),
        (bytes([0xFE,0xE1,0xE6]), "re-repeat FE E1 E6 (state? stream?)"),
    ]
    for ptr, tag in tests:
        if isp_alive(bus) is None:
            try: enter_isp(bus)
            except IspError: pass
        try:
            d = rd(bus, ptr)
        except OSError as e:
            print(f"  {tag:<44} ERR {e}"); continue
        print(f"  {tag:<44} {d.hex(' ')}  |{asc(d)}|")

    exit_isp(bus); time.sleep(0.3)
    bus.write(0x50, b"\x00", warmup=True)
    ed = bus.read(0x50, 16, warmup=False)
    print(f"EDID: {ed[:8].hex(' ')} head-ok={ed[:4]==bytes([0,0xff,0xff,0xff])}")
    bus.close()

main()
