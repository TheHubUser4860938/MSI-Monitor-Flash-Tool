"""Shared PE/capstone helpers for reversing the MSI/Realtek ISP DLLs."""
import sys, pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_64

def load(path):
    pe = pefile.PE(path, fast_load=True)
    pe.parse_data_directories(directories=[
        pefile.DIRECTORY_ENTRY['IMAGE_DIRECTORY_ENTRY_IMPORT'],
        pefile.DIRECTORY_ENTRY['IMAGE_DIRECTORY_ENTRY_EXPORT'],
    ])
    return pe

def md():
    return Cs(CS_ARCH_X86, CS_MODE_64)

def imports(pe):
    """dll -> {name/ord: iat_va}"""
    out = {}
    for dll in getattr(pe, 'DIRECTORY_ENTRY_IMPORT', []):
        dname = dll.dll.decode()
        out[dname] = {}
        for imp in dll.imports:
            nm = imp.name.decode() if imp.name else f"ord{imp.ordinal}"
            out[dname][nm] = imp.address  # RVA of IAT slot
    return out

def exports(pe):
    out = {}
    ed = getattr(pe, 'DIRECTORY_ENTRY_EXPORT', None)
    if ed is None: return out
    for exp in ed.symbols or []:
        if exp.name:
            out[exp.name.decode()] = exp.address  # RVA (address of symbol, i.e. function)
    return out

def section_of(pe, rva):
    for s in pe.sections:
        if s.VirtualAddress <= rva < s.VirtualAddress + max(s.Misc_VirtualSize, s.SizeOfRawData):
            return s
    return None

def file_off(pe, rva):
    s = section_of(pe, rva)
    if not s: return None
    return rva - s.VirtualAddress + s.PointerToRawData

def code_at(pe, rva, n=400):
    off = file_off(pe, rva)
    if off is None: return
    data = pe.__data__[off:off+n]
    base = pe.OPTIONAL_HEADER.ImageBase + rva
    for i in md().disasm(data, base, count=200):
        print(f"  {i.address - pe.OPTIONAL_HEADER.ImageBase:>08x}  {i.bytes.hex():<20} {i.mnemonic} {i.op_str}")

def find_calls_to(pe, iat_rva):
    """scan .text for 'call qword ptr [rip+disp31]' hitting IAT slot iat_rva"""
    s = section_of(pe, pe.OPTIONAL_HEADER.BaseOfCode)
    off = file_off(pe, s.VirtualAddress)
    data = pe.__data__[off:off+s.SizeOfRawData]
    base_va = pe.OPTIONAL_HEADER.ImageBase + s.VirtualAddress
    hits = []
    for i in md().disasm(data, base_va, count=len(data)):
        if i.mnemonic == 'call' and 'rip' in i.op_str:
            try:
                tgt = int(i.op_str.split('[')[1].split(']')[0].split('+')[1].strip(), 16)
            except Exception:
                continue
            if tgt == pe.OPTIONAL_HEADER.ImageBase + iat_rva:
                hits.append(i.address - pe.OPTIONAL_HEADER.ImageBase)
    return hits

if __name__ == '__main__':
    path = sys.argv[1]
    pe = load(path)
    mode = sys.argv[2] if len(sys.argv) > 2 else 'imports'
    if mode == 'imports':
        for d, m in imports(pe).items():
            print(f"--- {d}")
            for k, v in sorted(m.items(), key=lambda x: x[1]):
                print(f"    {v:#010x}  {k}")
    elif mode == 'exports':
        for k, v in sorted(exports(pe).items(), key=lambda x: x[1]):
            print(f"    {v:#010x}  {k}")
    elif mode == 'calls':
        name = sys.argv[3]
        for d, m in imports(pe).items():
            if name in m:
                print(f"# {name} imported from {d}, IAT {m[name]:#x}")
                for h in find_calls_to(pe, m[name]):
                    print(f"  call site RVA {h:#010x}")
