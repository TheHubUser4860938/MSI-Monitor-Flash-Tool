// rea decompile_all
// name: CMFCTabCtrl::OnLButtonUp
// address: 0x1007d3bb
// body: available
// range: 0x1007d3bb-0x1007d4e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCTabCtrl::OnLButtonUp(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCTabCtrl::OnLButtonUp(CMFCTabCtrl *this,undefined4 param_1,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  long lVar5;
  tagPOINT local_c;
  
  local_c.x = (LONG)this;
  local_c.y = (LONG)this;
  if ((*(int *)(this + 0x26c) != 0) || (*(int *)(this + 0x29c) != 0)) {
    StopResize(this,0);
    *(undefined4 *)(this + 0x26c) = 0;
    *(undefined4 *)(this + 0x29c) = 0;
    ReleaseCapture();
  }
  pcVar1 = *(code **)(*(int *)this + 0x2f0);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) goto LAB_1007d4c9;
  local_c.x = 0;
  local_c.y = 0;
  GetCursorPos(&local_c);
  local_c.x = *(int *)(this + 0x15c) - local_c.x;
  local_c.y = *(int *)(this + 0x160) - local_c.y;
  iVar2 = GetSystemMetrics(0x44);
  pHVar3 = GetCapture();
  pCVar4 = CWnd::FromHandle(pHVar3);
  if ((pCVar4 == (CWnd *)this) && (*(int *)(this + 0x158) != 0)) {
    lVar5 = _labs(local_c.x);
    if (lVar5 <= iVar2) {
      lVar5 = _labs(local_c.y);
      if (lVar5 <= iVar2) goto LAB_1007d4c0;
    }
    ReleaseCapture();
    pcVar1 = *(code **)(*(int *)this + 0x164);
    guard_check_icall(param_3,param_4);
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      pHVar3 = GetParent(*(HWND *)(this + 0x20));
      pCVar4 = CWnd::FromHandle(pHVar3);
      SendMessageW(*(HWND *)(pCVar4 + 0x20),DAT_1020a950,(WPARAM)this,
                   CONCAT22((undefined2)param_4,(undefined2)param_3));
    }
  }
  else {
LAB_1007d4c0:
    ActivateMDITab(this,-1);
  }
LAB_1007d4c9:
  CMFCBaseTabCtrl::OnLButtonUp((CMFCBaseTabCtrl *)this,param_1,param_3,param_4);
  return;
}

