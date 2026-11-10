// rea decompile_all
// name: CMFCPropertyGridCtrl::OnEditKillFocus
// address: 0x10049c25
// body: available
// range: 0x10049c25-0x10049ccd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10049cb2 to 0x1002d973 CWnd::SetFocus (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPropertyGridCtrl::OnEditKillFocus(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCPropertyGridCtrl::OnEditKillFocus(CMFCPropertyGridCtrl *this)

{
  code *pcVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  BOOL BVar4;
  int iVar5;
  HWND pHVar6;
  
  iVar5 = *(int *)(this + 0x3d8);
  if (((iVar5 != 0) && (pHVar6 = (HWND)0x0, *(int *)(iVar5 + 0x58) != 0)) &&
     (*(int *)(iVar5 + 100) != 0)) {
    pHVar2 = GetFocus();
    pCVar3 = CWnd::FromHandle(pHVar2);
    if (pCVar3 != (CWnd *)0x0) {
      pHVar6 = *(HWND *)(pCVar3 + 0x20);
    }
    BVar4 = IsChild(*(HWND *)(this + 0x20),pHVar6);
    if (BVar4 == 0) {
      pcVar1 = *(code **)(**(int **)(this + 0x3d8) + 0x90);
      guard_check_icall();
      iVar5 = (*pcVar1)();
      if (iVar5 != 0) {
        pcVar1 = *(code **)(*(int *)this + 0x188);
        guard_check_icall(1);
        iVar5 = (*pcVar1)();
        if (iVar5 == 0) {
          CWnd::SetFocus(*(CWnd **)(*(int *)(this + 0x3d8) + 0xb8));
          return;
        }
        pHVar6 = GetFocus();
        pCVar3 = CWnd::FromHandle(pHVar6);
        OnKillFocus(this,pCVar3);
      }
    }
  }
  return;
}

