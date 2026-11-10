// rea decompile_all
// name: CMFCPropertyGridCtrl::EndEditItem
// address: 0x537a4f
// body: available
// range: 0x537a4f-0x537af4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCPropertyGridCtrl::EndEditItem(int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCPropertyGridCtrl::EndEditItem(CMFCPropertyGridCtrl *this,int param_1)

{
  code *pcVar1;
  HWND pHVar2;
  int iVar3;
  int iVar4;
  HWND pHVar5;
  
  iVar4 = *(int *)(this + 0x3d8);
  if ((iVar4 == 0) || (*(int *)(iVar4 + 0x58) == 0)) {
    return 1;
  }
  if (param_1 == 0) {
LAB_00537aa7:
    if (*(int **)(this + 0x3d8) != (int *)0x0) {
      pcVar1 = *(code **)(**(int **)(this + 0x3d8) + 0x38);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      if (iVar4 == 0) goto LAB_00537ac5;
    }
    pHVar2 = *(HWND *)(this + 0x20);
    pHVar5 = GetCapture();
    if (pHVar5 == pHVar2) {
      ReleaseCapture();
    }
    if (*(CMFCPropertyGridProperty **)(this + 0x3d8) != (CMFCPropertyGridProperty *)0x0) {
      CMFCPropertyGridProperty::Redraw(*(CMFCPropertyGridProperty **)(this + 0x3d8));
    }
    iVar4 = 1;
  }
  else {
    pcVar1 = *(code **)(*(int *)this + 0x18c);
    guard_check_icall(iVar4);
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      pcVar1 = *(code **)(**(int **)(this + 0x3d8) + 0x28);
      guard_check_icall(iVar4);
      iVar4 = (*pcVar1)();
      if (iVar4 != 0) goto LAB_00537aa7;
    }
LAB_00537ac5:
    iVar4 = 0;
  }
  return iVar4;
}

