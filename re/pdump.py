#!/usr/bin/env python3
"""Dump export bodies from any tool DLL (32-bit), with IAT-referenced names
resolved so callees show as names, not raw addresses. Output -> stdout."""
import re as _re
import pefile

DLLS = {
    "P": "/home/eugene/Projects/monitor-fw/vendor/PlugIn/WinIspPlugIn.dll",
    "C": "/home/eugene/Projects/monitor-fw/vendor/Comm.dll",
    "A": "/home/eugene/Projects/monitor-fw/vendor/Comm/Comm_Aux.dll",
}


class PE:
    def __init__(self, key):
        from capstone import Cs, CS_ARCH_X86, CS_MODE_32
        self.image = 0x10000000
        self.pe = pefile.PE(DLLS[key])
        self.base = self.pe.OPTIONAL_HEADER.ImageBase
        self.md = Cs(CS_ARCH_X86, CS_MODE_32)
        self.names = {}          # VA -> "dll!name"
        self.by_rva = {}         # rva -> name (exports)
        for e in self.pe.DIRECTORY_ENTRY_EXPORT.symbols:
            if e.name:
                self.by_rva[e.address] = e.name.decode()
        for d in getattr(self.pe, "DIRECTORY_ENTRY_IMPORT", []):
            dll = d.dll.decode().split(".")[0]
            for imp in d.imports:
                if imp.name and imp.address:
                    self.names[imp.address] = f"{dll}!{imp.name.decode()}"

    def dis(self, rva, n=140, label=""):
        va = self.base + rva
        code = self.pe.get_data(rva, n)
        print(f"==== {label or self.by_rva.get(rva, hex(rva))}  VA {va:#x} ====")
        push_name = None
        for ins in self.md.disasm(code, va):
            m = _re.search(r"\[0x([0-9a-f]+)\]", ins.op_str)
            note = ""
            if m:
                target = int(m.group(1), 16)
                if target in self.names:
                    note = f"   ; {self.names[target]}"
                elif target in self.by_rva:
                    note = f"   ; {self.by_rva[target]}"
                elif 0x10000 < target < 0x140000:
                    # string/data heuristic: printable?
                    try:
                        raw = self.pe.get_data(target - self.base, 48)
                        txt = raw.split(b"\0")[0]
                        if len(txt) >= 3 and all(32 <= b < 127 for b in txt):
                            note = f'   ; "{txt.decode()}"'
                    except Exception:
                        pass
            if ins.mnemonic == "push" and ins.op_str.startswith("0x"):
                push_name = ins.op_str
            print(f"  {ins.address:#010x}  {ins.bytes.hex():<10} {ins.mnemonic} {ins.op_str}{note}")


def dump(tag, name, n=140):
    pe = PE(tag)
    pe.dump = None
    if name not in pe.by_rva.values():
        # allow hex RVA too
        try:
            rva = int(name, 0); name = f"{tag}:rva{rva:#x}"
        except Exception:
            print(f"!! {tag} export {name} not found"); return
    else:
        rva = next(r for r, n_ in pe.by_rva.items() if n_ == name)
    pe.dis(rva, n, f"{tag}!{name}")


if __name__ == "__main__":
    import sys
    dump(sys.argv[1], sys.argv[2], int(sys.argv[3]) if len(sys.argv) > 3 else 140)
