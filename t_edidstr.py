import re, sys, glob
sys.path.insert(0, ".")
from msi_isp.ddc import RTBus
ed = bytearray()
with RTBus(4) as b:
    for off in range(0, 256, 16):
        b.write(0x50, bytes([off & 0xFF])); ed += b.read(0x50, 16)
ed = bytes(ed)
print("len", len(ed), "hdr ok", ed[:6] == b"\x00\xff\xff\xff\x04\x03")
for m in re.finditer(rb"[ -~]{6,}", ed):
    print(f"  @{m.start():#05x}: {m.group().decode()}")
# descriptor tags in block0
for i in range(0x36, 0x7E, 18):
    print(f"  desc@{i:#04x}: {ed[i:i+4].hex(' ')}")
