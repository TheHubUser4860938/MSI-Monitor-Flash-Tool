"""RTD SPI-bridge read via 0x4A with kernel-faithful MOT message framing.

Message model (proven byte-exact vs kernel EDID on 0x50):
  write msg: addr-only? no — nvbus.write does: MOT data chunks, then
  addr-only terminating write (MOT cleared) = STOP.
  read msg:  addr phase (R) with MOT per chunk, terminating read.
Use nvbus.write/nvbus.read directly — they already implement this.

Sequence per RTD2660 model + Flash.dat evidence:
  [62]=03 (read op), [64..66]=addr BE, [71]=len-1, strobe [60]=20,[60]=21,
  poll [60] until ready, [70] FIFO burst reads.
Oracle candidates: 0xF806 -> 'MAG 341CQ X28'; JEDEC @0 -> 8B/EF/C8.. first byte.
"""
import sys, time
sys.path.insert(0,".")
from msi_isp import nvbus

bus = nvbus.NvRMAuxBus()

def reg_w(reg, val):   bus.write(0x4A, bytes([reg, val]))
def reg_r(reg):
    bus.write(0x4A, bytes([reg]));  return bus.read(0x4A, 1)
def fifo(n):           return bus.read(0x4A, n)   # after write [70]

def attempt(tag, addr, length, op=0x03, order=0x64, strobe=((0x60,0x20),(0x60,0x21))):
    a0,a1,a2 = (addr>>16)&0xff,(addr>>8)&0xff,addr&0xff
    regs = [order,(order+1),(order+2)] if order==0x64 else [0x66,0x65,0x64]
    try:
        reg_w(0x62, op)
        for r,v in zip(regs,(a0,a1,a2)): reg_w(r,v)
        reg_w(0x71,(length-1)&0xff)
        for r,v in strobe: reg_w(r,v)
        ready=None
        for _ in range(30):
            st = reg_r(0x60); ready = not (st[0]&0x80)
            if ready: break
            time.sleep(0.005)
        reg_w(0x70, 0) if False else bus.write(0x4A, bytes([0x70]))
        d = fifo(length)
        asc = bytes(x for x in d if 0x20<=x<0x7f)
        print(f"{tag:<34} ready={ready} {d[:16].hex(' ')}  {asc[:16]!r}")
        return d
    except Exception as e:
        print(f"{tag:<34} EXC {e}"); return None

print("-- oracle 1: flash 0xF806 expect 'MAG 341CQ'")
attempt("hi op03",       0x00F806, 16)
attempt("lo op03",       0x00F806, 16, order=0x66)
attempt("hi op03 no62",  0x00F806, 16)
print("-- oracle 2: JEDEC id (op 9F) expect 8B/EF/C8/MX 40 xx")
attempt("jedec hi",      0x000000,  4, op=0x9F)
attempt("jedec lo",      0x000000,  4, op=0x9F, order=0x66)
print("-- oracle 3: reset+read vector table @0")
attempt("vec hi",        0x000000, 16)
attempt("vec lo",        0x000000, 16, order=0x66)
bus.close()
