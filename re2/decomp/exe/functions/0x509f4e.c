// rea decompile_all
// name: CControlBar::CalcInsideRect
// address: 0x509f4e
// body: available
// range: 0x509f4e-0x50a017 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CControlBar::CalcInsideRect(class CRect &,int)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall CControlBar::CalcInsideRect(CControlBar *this,CRect *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xb0);
  if ((uVar1 & 0x100) != 0) {
    *(int *)param_1 = *(int *)param_1 + DAT_006161c8;
  }
  if ((uVar1 & 0x200) != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + DAT_006161cc;
  }
  if ((uVar1 & 0x400) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - DAT_006161c8;
  }
  if ((uVar1 & 0x800) != 0) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - DAT_006161cc;
  }
  if (param_2 == 0) {
    *(int *)param_1 = *(int *)param_1 + *(int *)(this + 0x90);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + *(int *)(this + 0x88);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - *(int *)(this + 0x94);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - *(int *)(this + 0x8c);
    if ((*(uint *)(this + 0xb0) & 0x400001) == 0x400000) {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 7;
    }
  }
  else {
    *(int *)param_1 = *(int *)param_1 + *(int *)(this + 0x88);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + *(int *)(this + 0x90);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - *(int *)(this + 0x8c);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - *(int *)(this + 0x94);
    if ((*(uint *)(this + 0xb0) & 0x400001) == 0x400000) {
      *(int *)param_1 = *(int *)param_1 + 7;
    }
  }
  return;
}

