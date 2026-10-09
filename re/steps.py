"""Function skeleton: linear disassembly of an RVA range, printing only the
decision surface — resolved UTF-16 log strings, call targets, vtable slot
uses, and interesting immediates. This is how the ISP pipeline was decoded
(STATUS session 14f): vendor plugins narrate themselves through log strings.

usage:  $PY re/steps.py <dll> <rva-hex> [n-bytes]     (n default 0x1000)
"""
import re
import sys

import dis32

DLLS = {"P": "vendor/PlugIn/WinIspPlugIn.dll",
        "C": "vendor/Comm.dll",
        "A": "vendor/Comm/Comm_Aux.dll"}

INTERESTING = re.compile(
    r"\b(0x[0-9a-f]{2,8}|call|j\w+|ret|loop|rep|Sleep)\b")


def main():
    dll = DLLS.get(sys.argv[1], sys.argv[1])
    pe = dis32.load(dll)
    base = pe.OPTIONAL_HEADER.ImageBase
    raw = pe.__data__

    def rva2off(r):
        for s in pe.sections:
            if s.VirtualAddress <= r < s.VirtualAddress + max(
                    s.Misc_VirtualSize, s.SizeOfRawData):
                return s.PointerToRawData + (r - s.VirtualAddress)
        return None

    def u16(va):
        off = rva2off(va - base)
        if off is None:
            return None
        txt = raw[off:off + 256].decode("utf-16-le", "ignore")
        s = txt.split("\x00")[0]
        return s if len(s) > 1 else None

    rva = int(sys.argv[2], 16)
    size = int(sys.argv[3], 16) if len(sys.argv) > 3 else 0x1000
    push_str = re.compile(r"push (0x10[0-9a-f]{6})")
    for ins in dis32.m32().disasm(raw[rva2off(rva):rva2off(rva) + size],
                                  base + rva):
        t = f"{ins.mnemonic} {ins.op_str}"
        r = ins.address - base
        m = push_str.match(t.replace("push dword ptr ", "push ", 1)) \
            if t.startswith("push") else None
        if m:
            va = int(m.group(1), 16)
            s = u16(va)
            if s:
                print(f"{r:#08x}  STR   {s!r}")
            continue
        if ins.mnemonic.startswith("call"):
            if "dword ptr [e" in t:                 # vtable / IAT
                print(f"{r:#08x}  CALL  {t}   <-- indirect")
            else:
                tgt = re.search(r"0x(10[0-9a-f]{6})", t)
                print(f"{r:#08x}  CALL  {int(tgt.group(1), 16) - base:#x}"
                      if tgt else f"{r:#08x}  CALL  {t}")
        elif ins.mnemonic == "ret":
            print(f"{r:#08x}  RET")
        elif "cmp" in t and re.search(r"0x[0-9a-f]{2,}", t):
            print(f"{r:#08x}       {t}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
