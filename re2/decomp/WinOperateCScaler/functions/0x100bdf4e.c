// rea decompile_all
// name: CMDIFrameWndEx::OnSetMenu
// address: 0x100bdf4e
// body: available
// range: 0x100bdf4e-0x100be015 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMDIFrameWndEx::OnSetMenu(struct HMENU__ *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMDIFrameWndEx::OnSetMenu(CMDIFrameWndEx *this,HMENU__ *param_1)

{
  code *pcVar1;
  COleClientItem *this_00;
  CWnd *pCVar2;
  int iVar3;
  ulong uVar4;
  CMDIChildWnd *pCVar5;
  
  pcVar1 = *(code **)(*(int *)this + 0x22c);
  guard_check_icall();
  this_00 = (COleClientItem *)(*pcVar1)();
  if ((this_00 == (COleClientItem *)0x0) ||
     (pCVar2 = COleClientItem::GetInPlaceWindow(this_00), pCVar2 == (CWnd *)0x0)) {
    if ((*(CWnd **)(this + 0x44c) == (CWnd *)0x0) ||
       ((uVar4 = CWnd::GetExStyle(*(CWnd **)(this + 0x44c)), (uVar4 & 0x10000000) == 0 &&
        (*(int *)(this + 0x420) == 0)))) {
      if (*(int *)(this + 0x3fc) == 0) {
        return 0;
      }
      pcVar1 = *(code **)(*(int *)this + 0x70);
      guard_check_icall(0);
      (*pcVar1)();
      if (param_1 == (HMENU__ *)0x0) {
        param_1 = *(HMENU__ **)(this + 0x390);
      }
      pcVar1 = *(code **)(**(int **)(this + 0x3fc) + 0x434);
      guard_check_icall(param_1,0,0);
      (*pcVar1)();
    }
    else {
      pcVar1 = *(code **)(*(int *)this + 0x70);
      guard_check_icall(0);
      (*pcVar1)();
      pCVar5 = CMDIFrameWnd::MDIGetActive((CMDIFrameWnd *)this,(int *)0x0);
      CMFCRibbonBar::SetActiveMDIChild(*(CMFCRibbonBar **)(this + 0x44c),(CWnd *)pCVar5);
    }
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}

