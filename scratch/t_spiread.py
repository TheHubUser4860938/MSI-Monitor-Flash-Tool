import sys, time
sys.path.insert(0,".")
from msi_isp import nvbus

bus = nvbus.NvRMAuxBus()
W,R = 0x0, 0x1
def w(data):
    n,_ = bus.raw_txn(W,0x4A,data=data,mot=False,addr_only=not data); return n
def wM(data):   # MOT-chained write (no STOP) - the tool likely uses one msg
    n,_ = bus.raw_txn(W,0x4A,data=data,mot=True); return n
def rd(n=4):
    name,got = bus.raw_txn(R,0x4A,data=b"\x00"*n,mot=False); return name,(got or b"")

# sanity: re-read known regs
for reg in (0x62,0x6f,0x70):
    w(bytes([reg])); n,d = rd(1)
    print(f"pre reg {reg:#04x}: {n} {d.hex(' ')}")

def page_read(order, addr=(0x00,0xF8,0x06), length=16, tag=""):
    regs = {"hi":(0x64,0x65,0x66),"lo":(0x66,0x65,0x64)}[order]
    for r,v in zip(regs,addr):
        if w(bytes([r,v]))!="ACK": return f"addr@{r:#x} fail"
    w(bytes([0x71,(length-1)&0xff]))
    w(bytes([0x62,0x03]))                      # SPI read opcode into cmd reg
    w(bytes([0x60,0x20])); w(bytes([0x60,0x21]))  # strobe (Flash.dat pattern)
    time.sleep(0.01)
    w(bytes([0x60]))
    n2,d2 = rd(1)
    if w(bytes([0x70]))!="ACK": return "port-sel-fail"
    n,d = rd(length)
    return f"poll={d2.hex(' ')} {n} {d.hex(' ')}"

print()
print("one-write style [62 03][64 00][65 F8][66 06][71 len][60 20][60 21] then burst@70:")
if w(b"\x62\x03\x64\x00\x65\xf8\x66\x06\x71\x0f\x60\x20\x60\x21")=="ACK":
    time.sleep(0.01)
    if w(b"\x70")=="ACK":
        n,d=rd(16); print("  burst:", n, d.hex(" "), ascii(bytes(x for x in d if 0x20<=x<0x7f)))
print()
for order in ("hi","lo"):
    print(f"MOT one-msg style {order}:", "seq")
    # MOT one-message: write everything as a single multi-byte MOT message then read
    regs={"hi":bytes([0x64,0x00,0x65,0xf8,0x66,0x06]),
          "lo":bytes([0x66,0x06,0x65,0xf8,0x64,0x00])}[order]
    if wM(b"\x62\x03" + regs + b"\x71\x0f")=="ACK":
        n2,_ = (lambda: (w(bytes([0x70])),rd(16)))() if False else (None,(None,None))
    if w(bytes([0x70]))=="ACK":
        n,d=rd(16); print(f"  {order}:", n, d.hex(" "), ascii(bytes(x for x in d if 0x20<=x<0x7f)))
bus.close()
