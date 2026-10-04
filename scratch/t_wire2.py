"""t_wire v2: flash-read probe using ONLY the proven bus.write/bus.read
framing (full kernel-style messages with STOP terminators), which byte-
matches the kernel on EDID. Same safety envelope: ISP enter + pointer
writes + reads + ISP exit, no erase/program.
"""
import sys, time
sys.path.insert(0, ".")
from msi_isp import nvbus, isp
from msi_isp.ddc import RTBus

ORACLE = b"MAG 341CQ X28"

def attempt(bus, slave7, addr, nbytes, ptr_len, tag):
    ptr = bytes(([(addr >> 16) & 0xFF] if ptr_len == 3 else [])
                + [(addr >> 8) & 0xFF, addr & 0xFF])
    try:
        bus.write(slave7, ptr)                    # pointer (write ptr_len==1: single byte)
        d = bus.read(slave7, nbytes, delay=0.002)
        hit = "  *** ORACLE ***" if ORACLE in d else ""
        print(f"{tag}: {len(d)}B {d[:34].hex(' ')}{hit}")
        return d
    except Exception as e:
        print(f"{tag}: {type(e).__name__}: {e}")
        return None

def main():
    bus = nvbus.NvRMAuxBus()
    try:
        bus.write(0x50, b"\x00", warmup=True)
        kern = open("/sys/class/drm/card1-DP-1/edid", "rb").read(16)
        print("sanity edid match:", bus.read(0x50, 16) == kern)
        idx, st = isp.enter_isp(bus)
        print(f"ISP entered cand[{idx}] status={st:#04x}\n")

        print("--- slave 0x20, 2-byte pointer ---")
        for a in (0xF806, 0xF800, 0x0000):
            attempt(bus, 0x20, a, 16, 2, f"0x20@{a:#06x}")
        print("--- slave 0x20, 1-byte page (page_len=32 model: hi-byte page) ---")
        for a in (0xF800,):
            attempt(bus, 0x20, a, 16, 1, f"0x20p@{a:#06x}")
        print("--- slave 0x37 mailbox, 2- and 3-byte pointer ---")
        for a in (0xF806, 0xF800):
            attempt(bus, 0x37, a, 16, 2, f"0x37@{a:#06x}/2")
            attempt(bus, 0x37, a, 16, 3, f"0x37@{a:#06x}/3")
        print("--- slave 0x22 (MCU regs) sanity: any address-sensitive read? ---")
        prev = None
        for a in (0x0000, 0xF800):
            d = attempt(bus, 0x22, a, 8, 2, f"0x22@{a:#06x}")
            if prev is not None and d is not None:
                print("     address-sensitive:", d != prev)
            prev = d
    finally:
        try:
            isp.exit_isp(bus); print("\nISP exit ok")
        except Exception as e:
            print("exit err:", e)
        with RTBus(4) as b2:
            b2.write(0x50, b"\x00")
            ok = b2.read(0x50, 8)
            print("post EDID:", ok[:8].hex(" "),
                  "OK" if ok[:4] == b"\x00\xff\xff\xff" else "PROBLEM")

main()
