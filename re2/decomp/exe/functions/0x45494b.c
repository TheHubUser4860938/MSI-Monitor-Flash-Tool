// rea decompile_all
// name: CMFCToolBar::OnAfterFloat
// address: 0x45494b
// body: available
// range: 0x45494b-0x4549b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCToolBar::OnAfterFloat(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBar::OnAfterFloat(CMFCToolBar *this)

{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  CMFCToolBar *local_c;
  CMFCToolBar *pCStack_8;
  
  local_c = this;
  pCStack_8 = this;
  CPane::OnAfterFloat((CPane *)this);
  pcVar1 = *(code **)(*(int *)this + 0x208);
  guard_check_icall(&local_c,*(undefined4 *)(this + 0x13c),0);
  (*pcVar1)();
  uVar3 = 0;
  pcVar1 = *(code **)(*(int *)this + 0x228);
  guard_check_icall(0);
  piVar2 = (int *)(*pcVar1)();
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 0x1b4);
    guard_check_icall(uVar3);
    (*pcVar1)();
  }
  *(undefined4 *)(this + 0xb98) = 1;
  return;
}

