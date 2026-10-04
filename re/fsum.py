import sys, re, dis32
path, name = sys.argv[1], sys.argv[2]
pe = dis32.load(path); e = dis32.exports(pe); rva = e[name]
rva = int(sys.argv[3],16) if len(sys.argv)>3 else rva
size = int(sys.argv[4]) if len(sys.argv)>4 else 4000
off = dis32.file_off(pe, rva); data = pe.__data__[off:off+size]
base = pe.OPTIONAL_HEADER.ImageBase
imm = re.compile(r'^(push|mov|cmp|and|lea|movzx)\s+(byte|word|dword)?\s*\[?(e[a-z]+|0x[0-9a-f]+)', re.I)
print(f"### {name} @{rva:#x}")
for i in dis32.m32().disasm(data, pe.OPTIONAL_HEADER.ImageBase+rva, count=4000):
    t = f"{i.mnemonic} {i.op_str}"
    r = i.address - base
    if i.mnemonic in ('push','pop'): continue if False else True
    elif re.search(r'\b(0x[0-9a-f]{1,8})\b', t) or i.mnemonic.startswith('call') or i.mnemonic=='ret':
        pass
    else: continue
    print(f"{r-base+base:#x} ".replace(hex(r),f"{r:#08x}")+" "+t) if False else print(f"{r:#08x} {t}")
