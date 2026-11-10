// rea decompile_all
// name: CMFCDropDownFrame::RecalcLayout
// address: 0x100fcbcb
// body: available
// range: 0x100fcbcb-0x100fcda9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCDropDownFrame::RecalcLayout(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCDropDownFrame::RecalcLayout(CMFCDropDownFrame *this,int param_1)

{
  code *pcVar1;
  BOOL BVar2;
  CObject *pCVar3;
  undefined4 uVar4;
  HMONITOR hMonitor;
  int iVar5;
  int iVar6;
  tagMONITORINFO *lpmi;
  int local_58;
  int local_54;
  tagMONITORINFO local_50;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  BVar2 = IsWindow(*(HWND *)(this + 0x20));
  if ((BVar2 == 0) || (BVar2 = IsWindow(*(HWND *)(this + 0x158)), BVar2 == 0)) goto LAB_100fcd99;
  if ((*(int *)(this + 0x134) == 0) ||
     (pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_10201648,
                                  *(CObject **)(*(int *)(this + 0x134) + 0x6c)),
     pCVar3 == (CObject *)0x0)) {
    uVar4 = 1;
  }
  else {
    pcVar1 = *(code **)(*(int *)pCVar3 + 0x164);
    guard_check_icall();
    uVar4 = (*pcVar1)();
  }
  pcVar1 = *(code **)(*(int *)(this + 0x138) + 0x2a4);
  guard_check_icall(&local_58,uVar4);
  (*pcVar1)();
  local_58 = local_58 + 6;
  lpmi = &local_50;
  local_54 = local_54 + 6;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  local_50.cbSize = 0x28;
  hMonitor = MonitorFromPoint(*(POINT *)(this + 0xe7c),2);
  BVar2 = GetMonitorInfoW(hMonitor,lpmi);
  if (BVar2 == 0) {
    SystemParametersInfoW(0x30,0,&local_18,0);
  }
  else {
    CopyRect(&local_18,&local_50.rcWork);
  }
  if (local_18.right < *(int *)(this + 0xe7c) + local_58) {
    if ((*(int *)(this + 0x134) != 0) &&
       (pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_10201648,
                                    *(CObject **)(*(int *)(this + 0x134) + 0x6c)),
       pCVar3 != (CObject *)0x0)) {
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x164);
      guard_check_icall();
      iVar5 = (*pcVar1)();
      if (iVar5 == 0) {
        local_28.left = iVar5;
        local_28.top = iVar5;
        local_28.right = iVar5;
        local_28.bottom = iVar5;
        GetWindowRect(*(HWND *)(pCVar3 + 0x20),&local_28);
        *(LONG *)(this + 0xe7c) = local_28.left - local_58;
        goto LAB_100fcd3d;
      }
    }
    *(LONG *)(this + 0xe7c) = ((local_18.right - local_18.left) - local_58) + -1;
  }
LAB_100fcd3d:
  if (local_18.bottom < *(int *)(this + 0xe80) + local_54) {
    iVar5 = *(int *)(this + 0x134);
    iVar6 = *(int *)(this + 0xe80) - local_54;
    *(int *)(this + 0xe80) = iVar6;
    if (iVar5 == 0) {
      if (iVar6 < 0) {
        *(undefined4 *)(this + 0xe80) = 0;
      }
    }
    else {
      *(int *)(this + 0xe80) = (*(int *)(iVar5 + 0x58) - *(int *)(iVar5 + 0x60)) + -4 + iVar6;
    }
  }
  CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,*(int *)(this + 0xe7c),*(int *)(this + 0xe80),local_58
                     ,local_54,0x14);
LAB_100fcd99:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

