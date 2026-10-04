import sys, pefile, capstone

DLL = sys.argv[1]
pe = pefile.PE(DLL)
base = pe.OPTIONAL_HEADER.ImageBase
sec = next(s for s in pe.sections if s.Name.rstrip(b"\0").startswith(b".text"))
data = sec.get_data()
va0 = base + sec.VirtualAddress
md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)


def dump(rva, n=70, tag=""):
    va = base + int(rva, 0) if rva.startswith("0x") else base + int(rva)
    print(f"==== {tag} {va:#x} ====")
    off = va - va0
    if off < 0 or off >= len(data):
        print("  [rva outside .text]")
        return
    for c, i in enumerate(md.disasm(data[off:], va)):
        print(f"{i.address:08x}  {i.bytes.hex():16s}  {i.mnemonic} {i.op_str}".rstrip())
        if c >= n:
            break


if __name__ == "__main__":
    for spec in sys.argv[2:]:
        rva, _, tag = spec.partition(":")
        dump(rva, tag=tag or rva)
