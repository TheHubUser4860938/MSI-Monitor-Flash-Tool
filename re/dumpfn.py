"""Dump a function body (linear disasm until ret-padding) to stdout."""
import sys

import pexray

path, rva = sys.argv[1], int(sys.argv[2], 16)
size = int(sys.argv[3]) if len(sys.argv)>3 else 2000
pe = pexray.load(path)
off = pexray.file_off(pe, rva)
data = pe.__data__[off:off+size]
base = pe.OPTIONAL_HEADER.ImageBase + rva
for i in pexray.md().disasm(data, base, count=5000):
    print(f"{i.address - pe.OPTIONAL_HEADER.ImageBase:08x}  {i.bytes.hex():<18} {i.mnemonic} {i.op_str}")
