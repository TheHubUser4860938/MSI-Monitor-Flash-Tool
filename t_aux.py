import sys
sys.path.insert(0, "/home/eugene/monitor-fw")
import dp_aux as D

fd = D.open_card()
print("card1 open OK")
n = D._count_connectors(fd)
print("connectors:", n)
targets = []
for c in D.list_connectors(fd):
    cid, ctype, ctid, conn = c
    names = {0: "DP", 5: "HDMI", 15: "DP-MST"}
    print(f"  id={cid} type={names.get(ctype, ctype)}-{ctid} connection={conn}")
    if conn == 1 and ctype in (0, 15):
        targets.append((cid, ctype, ctid))

print("\nAUX native (DPCD) reads on connected DP connectors:")
for cid, ctype, ctid in targets:
    print(f"-- connector {names.get(ctype,ctype)}-{ctid} (id={cid})")
    # DPCD: DP native AUX, slave_addr 0x0000, addr 0x0000 -> DPCD[0] rev
    for addr, ln, label in [(0x0000, 1, "DPCD_REV"), (0x0001, 1, "MAX_LINK_RATE"),
                            (0x0200, 16, "VENDOR_OUI-ish area")]:
        a = bytes([(addr >> 16) & 0xF, (addr >> 8) & 0xFF, addr & 0xFF])
        try:
            d = D.aux_xfer(fd, 0x0000, out=a, in_len=ln, conn_type=0)
            print(f"   {label}: {d.hex(' ')}")
        except OSError as e:
            print(f"   {label}: ERR {e.errno} {e.strerror}")
