"""Live test of the wire recipe extracted from WinIspPlugIn (32-bit disasm):
  flash read = pointer-write [addr_hi, addr_lo] then burst-read, page<=32,
  slave constant pushed as 8-bit 0x41 -> 7-bit 0x20 (plus the tool's real
  ISP slave 0x37 mailbox as variant B).
Only writes: the twice-proven ISP enter magic bytes + pointer-set writes
(never erase/program commands). Oracle = live flash header at 0xF800
('009' + model string). Ends with exit ISP + EDID verify.
DEFER-aware: retries with sleep, mirroring kernel drm_dp_i2c behaviour.
"""
import sys, time
sys.path.insert(0, ".")
from msi_isp import nvbus, isp
from msi_isp.ddc import RTBus

MAGIC_OK = {"ACK"}
ORACLE = b"MAG 341CQ X28"

def txn(bus, req, slave7, data=b"", mot=False, addr_only=False, tries=12):
    """raw_txn with kernel-style DEFER/NACK retry (sleep 7ms)."""
    last = None
    for _ in range(tries):
        try:
            name, got = bus.raw_txn(req, slave7, data=data, mot=mot, addr_only=addr_only)
        except Exception as e:
            name, got = f"ERR:{type(e).__name__}", None
        last = (name, got)
        if name in ("ACK",) or addr_only and name == "ACK":
            return name, got
        if name in ("SHORT",):     # partial but real
            return name, got
        time.sleep(0.007)
    return last

def rd(bus, slave7, addr, n, tag):
    hi, lo = (addr >> 8) & 0xFF, addr & 0xFF
    w, _ = txn(bus, 0x0, slave7, data=bytes([hi, lo]), mot=True)   # pointer write, MOT
    if w not in MAGIC_OK and w != "SHORT":
        print(f"{tag}: ptr W -> {w}"); return None
    r = b""
    # read phase: addr-only read then MOT chunks (kernel msg style)
    a, _ = txn(bus, 0x5, slave7, addr_only=True)
    if a not in MAGIC_OK:
        print(f"{tag}: ptr R-addr -> {a}"); return None
    got_all = True
    while len(r) < n:
        c = min(16, n - len(r))          # RM I2C chunk limit
        name, got = txn(bus, 0x5, slave7, addr_only=False)
        if name not in MAGIC_OK or not got:
            got_all = name in MAGIC_OK and got or False
            break
        r += got[:c]
    print(f"{tag}: ptr-ok read {len(r)}B: {r[:34].hex(' ')}")
    if ORACLE in r:
        print(f"{tag}: *** ORACLE HIT ***")
    return r

def main():
    bus = nvbus.NvRMAuxBus()
    try:
        # sanity: primitives still byte-match kernel EDID
        bus.write(0x50, b"\x00", warmup=True)
        e1 = bus.read(0x50, 16)
        kern = open("/sys/class/drm/card1-DP-1/edid","rb").read(16)
        print("sanity edid match:", e1 == kern, "\n")

        try:
            idx, st = isp.enter_isp(bus)
            print(f"ISP entered via cand[{idx}] status={st:#04x}\n")
        except Exception as e:
            print("ISP enter failed:", e); return

        # variant A: plugin's flash slave constant 8-bit 0x41 -> 7-bit 0x20
        print("--- variant A: slave 0x20 (bin slave 0x41) ---")
        for addr in (0xF800, 0xF806):
            rd(bus, 0x20, addr, 32, f"A@{addr:#06x}")

        # variant B: the tool's actual ISP slave 0x37 mailbox
        print("--- variant B: slave 0x37 mailbox ---")
        for addr in (0xF800, 0xF806):
            rd(bus, 0x37, addr, 32, f"B@{addr:#06x}")

        # variant C: 0x37 raw-register form: write 3-byte addr then read
        print("--- variant C: slave 0x37, 3-byte addr pointer ---")
        for addr in (0xF800, 0xF806):
            p = bytes([(addr >> 16) & 0xFF, (addr >> 8) & 0xFF, addr & 0xFF])
            w, _ = txn(bus, 0x0, 0x37, data=p, mot=True)
            if w not in MAGIC_OK:
                print(f"C@{addr:#06x}: W -> {w}"); continue
            a, _ = txn(bus, 0x5, 0x37, addr_only=True)
            _, d = txn(bus, 0x5, 0x37)
            d = d or b""
            print(f"C@{addr:#06x}: R {a} {d[:34].hex(' ')}", "*** ORACLE ***" if ORACLE in d else "")
    finally:
        try:
            isp.exit_isp(bus); print("\nISP exit ok")
        except Exception as e:
            print("exit err:", e)
        b2 = RTBus(4)
        with b2:
            b2.write(0x50, b"\x00"); ok = b2.read(0x50, 8)
            print("post EDID verify:", ok[:8].hex(" "), "OK" if ok[:4] == b"\x00\xff\xff\xff" else "PROBLEM")

main()
