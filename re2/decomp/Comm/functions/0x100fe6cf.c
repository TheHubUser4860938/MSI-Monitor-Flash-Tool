// rea decompile_all
// name: CMFCOutlookBarTabCtrl::OnMouseMove
// address: 0x100fe6cf
// body: available
// range: 0x100fe6cf-0x100fe7d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCOutlookBarTabCtrl::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCOutlookBarTabCtrl::OnMouseMove
          (CMFCOutlookBarTabCtrl *this,undefined4 param_1,int param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(this + 0x25c) == 0) {
    CMFCBaseTabCtrl::OnMouseMove((CMFCBaseTabCtrl *)this,param_1,param_3,param_4);
  }
  else if (((*(int *)(this + 0x110) != 0) && (iVar1 = *(int *)(this + 0x254), iVar1 != -1)) &&
          (iVar3 = (*(int *)(this + 0x290) - param_4) / *(int *)(this + 0x110), iVar3 != 0)) {
    iVar3 = iVar1 + iVar3;
    *(int *)(this + 0x254) = iVar3;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    pcVar2 = *(code **)(*(int *)this + 0x1a4);
    guard_check_icall();
    iVar4 = (*pcVar2)();
    if (iVar4 < iVar3) {
      pcVar2 = *(code **)(*(int *)this + 0x1a4);
      guard_check_icall();
      iVar3 = (*pcVar2)();
    }
    else {
      iVar3 = *(int *)(this + 0x254);
      if (iVar3 < 0) {
        iVar3 = 0;
      }
    }
    *(int *)(this + 0x254) = iVar3;
    if (iVar1 != iVar3) {
      *(undefined4 *)(this + 0x260) = 1;
      pcVar2 = *(code **)(*(int *)this + 0x184);
      guard_check_icall();
      (*pcVar2)();
      *(undefined4 *)(this + 0x260) = 0;
      param_4 = (*(int *)(this + 0x298) + *(int *)(this + 0x290)) / 2;
      ClientToScreen(*(HWND *)(this + 0x20),(LPPOINT)&param_3);
      SetCursorPos(param_3,param_4);
    }
  }
  return;
}

