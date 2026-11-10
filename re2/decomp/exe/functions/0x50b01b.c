// rea decompile_all
// name: PreCreateWindow
// address: 0x50b01b
// body: available
// range: 0x50b01b-0x50b095 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CControlBar::PreCreateWindow(struct tagCREATESTRUCTA &)
    public: virtual int __thiscall CControlBar::PreCreateWindow(struct tagCREATESTRUCTW &)
   
   Library: Visual Studio 2015 Release */

undefined4 PreCreateWindow(int param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  
  iVar2 = PreCreateWindow(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x4000000;
  uVar1 = *(uint *)(in_ECX + 0xb0);
  if ((char)uVar1 < '\0') {
    return 1;
  }
  uVar3 = uVar1 & 0xff00;
  if (uVar3 != 0x1400) {
    if (uVar3 == 0x2800) {
      uVar3 = 0x200;
      goto LAB_0050b07b;
    }
    if (uVar3 != 0x4100) {
      if (uVar3 != 0x8200) {
        return 1;
      }
      uVar3 = 0x800;
      goto LAB_0050b07b;
    }
  }
  uVar3 = 0xa00;
LAB_0050b07b:
  *(uint *)(in_ECX + 0xb0) = uVar1 & 0xfffff0ff | uVar3 | 0x80;
  return 1;
}

