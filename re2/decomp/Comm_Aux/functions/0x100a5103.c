// rea decompile_all
// name: CMFCTabCtrl::AdjustTabsScroll
// address: 0x100a5103
// body: available
// range: 0x100a5103-0x100a51c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a51c1 to 0x100a9578 FUN_100a9578 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCTabCtrl::AdjustTabsScroll(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCTabCtrl::AdjustTabsScroll(CMFCTabCtrl *this)

{
  RECT *lpRect;
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(this + 0x264) == 0) {
LAB_100a5110:
    *(undefined4 *)(this + 0x2a4) = 0;
    *(undefined4 *)(this + 0x2b0) = 0;
    return;
  }
  if (*(int *)(this + 0xbc) == 0) {
    *(undefined4 *)(this + 0x2a8) = 0;
    goto LAB_100a5110;
  }
  iVar1 = *(int *)(this + 0x2a4);
  lpRect = (RECT *)(this + 0x2dc);
  if ((lpRect->left - *(int *)(this + 0x2e4)) + *(int *)(this + 0x2ac) < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (lpRect->left - *(int *)(this + 0x2e4)) + *(int *)(this + 0x2ac);
  }
  *(int *)(this + 0x2a8) = iVar3;
  if (((*(int *)(this + 0x254) == 0) && (*(int *)(this + 600) == 0)) &&
     (*(int *)(this + 0x25c) == 0)) {
    iVar4 = 0;
    if (-1 < iVar1) {
      iVar4 = iVar1;
    }
    if (iVar3 <= iVar4) goto LAB_100a518a;
  }
  iVar3 = 0;
  if (-1 < iVar1) {
    iVar3 = iVar1;
  }
LAB_100a518a:
  *(int *)(this + 0x2a4) = iVar3;
  if (iVar1 != iVar3) {
    pcVar2 = *(code **)(*(int *)this + 0x2dc);
    guard_check_icall();
    (*pcVar2)();
    InvalidateRect(*(HWND *)(this + 0x20),lpRect,1);
    UpdateWindow(*(HWND *)(this + 0x20));
  }
  FUN_100a9578();
  return;
}

