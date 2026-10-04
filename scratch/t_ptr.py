"""Is 0x37 raw access an auto-incrementing register pointer?
Proven framing, plain writes+reads on 0x37 (no ISP). 1-byte pointer writes:
  E1 -> reply started FE 00 46 57... ? ; E6? ; E0? ; 00?
Also 2-byte pointer [E1,E6] then 2 reads to watch increment. Read-only."""
import sys, time
sys.path.insert(0, ".")
from msi_isp import nvbus

bus = nvbus.NvRMAuxBus()
for ptr in ([0x00], [0xE1], [0xE6], [0xE0], [0xE2], [0xA4]):
    try:
        bus.write(0x37, bytes(ptr))
        d = bus.read(0x37, 16, delay=0.001)
        print(f"ptr{bytes(ptr).hex()}: {d[:16].hex(' ')}  |{bytes(c if 32<=c<127 else 46 for c in d[:16]).decode()}|")
    except Exception as e:
        print(f"ptr{bytes(ptr).hex()}: ERR {e}")
    time.sleep(0.05)
print("--- increment watch: ptr E1 E6 then 2 reads ---")
bus.write(0x37, bytes([0xE1, 0xE6]))
d1 = bus.read(0x37, 16, delay=0.001)
d2 = bus.read(0x37, 16)
print("r1:", d1[:16].hex(" "))
print("r2:", d2[:16].hex(" "))
