"""Function summary: disassemble an export and print only the lines that
carry immediates, calls or rets — quick eyeball of a function's shape."""
import re
import sys

import dis32

path, name = sys.argv[1], sys.argv[2]
pe = dis32.load(path)
e = dis32.exports(pe)
rva = int(sys.argv[3], 16) if len(sys.argv) > 3 else e[name]
size = int(sys.argv[4]) if len(sys.argv) > 4 else 4000
off = dis32.file_off(pe, rva)
data = pe.__data__[off:off + size]
base = pe.OPTIONAL_HEADER.ImageBase
print(f"### {name} @{rva:#x}")
for i in dis32.m32().disasm(data, base + rva, count=4000):
    t = f"{i.mnemonic} {i.op_str}"
    if (re.search(r"\b(0x[0-9a-f]{1,8})\b", t)
            or i.mnemonic.startswith("call") or i.mnemonic == "ret"):
        print(f"{i.address - base:#08x} {t}")
