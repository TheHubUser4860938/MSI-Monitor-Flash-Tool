"""32-bit x86 helper for the MSI/Realtek ISP DLLs (all are PE32/i386)."""
import sys, pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_32

def load(p):
    pe = pefile.PE(p, fast_load=True)
    pe.parse_data_directories(directories=[
        pefile.DIRECTORY_ENTRY['IMAGE_DIRECTORY_ENTRY_IMPORT'],
        pefile.DIRECTORY_ENTRY['IMAGE_DIRECTORY_ENTRY_EXPORT']])
    return pe

def m32():
    c = Cs(CS_ARCH_X86, CS_MODE_32); c.detail = True
    return c

def file_off(pe, rva):
    for s in pe.sections:
        if s.VirtualAddress <= rva < s.VirtualAddress + max(s.Misc_VirtualSize, s.SizeOfRawData):
            return rva - s.VirtualAddress + s.PointerToRawData
    return None

def fn(pe, rva, size=3000):
    off = file_off(pe, rva)
    if off is None: return
    data = pe.__data__[off:off+size]
    base = pe.OPTIONAL_HEADER.ImageBase + rva
    for i in m32().disasm(data, base, count=6000):
        print(f"{i.address - pe.OPTIONAL_HEADER.ImageBase:08x}  {i.bytes.hex():<18} {i.mnemonic} {i.op_str}")

def imports(pe):
    out = {}
    for d in getattr(pe, 'DIRECTORY_ENTRY_IMPORT', []) or []:
        out[d.dll.decode()] = {
            (i.name.decode() if i.name else f"ord{i.ordinal}"): i.address
            for i in d.imports}
    return out

def exports(pe):
    ed = getattr(pe, 'DIRECTORY_ENTRY_EXPORT', None)
    if ed is None: return {}
    return {s.name.decode(): s.address for s in ed.symbols or [] if s.name}

def calls_to(pe, target_rva):
    """RVA of every 'call <target>' and 'jmp <target>' in .text (E8 rel32)."""
    s = pe.sections[0]
    off = file_off(pe, s.VirtualAddress)
    data = pe.__data__[off:off+s.SizeOfRawData]
    base = pe.OPTIONAL_HEADER.ImageBase + s.VirtualAddress
    tgt = pe.OPTIONAL_HEADER.ImageBase + target_rva
    hits = []
    for i in m32().disasm(data, base, count=len(data)):
        if i.mnemonic in ('call', 'jmp') and i.op_str.startswith('0x'):
            try: a = int(i.op_str, 16)
            except ValueError: continue
            if a == tgt: hits.append(i.address - pe.OPTIONAL_HEADER.ImageBase)
    return hits

if __name__ == '__main__':
    path = sys.argv[1]; mode = sys.argv[2]
    pe = load(path)
    if mode == 'fn':
        print(f"==== {path.rsplit('/',1)[-1]} fn {int(sys.argv[3],16):#x} ====")
        fn(pe, int(sys.argv[3], 16), int(sys.argv[4]) if len(sys.argv) > 4 else 3000)
    elif mode == 'x':
        e = exports(pe); name = sys.argv[3]
        r = e.get(name)
        if r is None:
            for iat in imports(pe).values():
                pass
            sys.exit(f"no export {name}")
        print(f"# {name} RVA {r:#x}; callers:")
        for h in calls_to(pe, r): print(f"   {h:#010x}")
