// rea decompile_all
// name: FUN_0049316b
// address: 0x49316b
// body: available
// range: 0x49316b-0x4933e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4933e2 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049316b(int param_1)

{
  POINT pt;
  bool bVar1;
  bool bVar2;
  BOOL BVar3;
  ulong uVar4;
  HMONITOR hMonitor;
  AFX_GLOBAL_DATA *pAVar5;
  int iVar6;
  uint uVar7;
  int in_ECX;
  tagMONITORINFO *lpmi;
  tagWINDOWPLACEMENT local_9c;
  tagMONITORINFO local_70;
  tagRECT local_48;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  iVar6 = *(int *)(in_ECX + 0xfc);
  bVar1 = false;
  bVar2 = false;
  if ((iVar6 != 0) && (*(int *)(iVar6 + 0x20) != 0)) {
    BVar3 = IsWindowVisible(*(HWND *)(iVar6 + 0x20));
    if ((BVar3 == 0) && (*(int *)(in_ECX + 0xd0) == 0)) {
      BVar3 = IsWindowVisible(*(HWND *)(*(int *)(in_ECX + 0xb0) + 0x20));
      if (BVar3 != 0) goto LAB_004931e4;
    }
    if (*(int *)(*(int *)(in_ECX + 0xfc) + 0x328) != 0) {
      bVar1 = true;
      bVar2 = true;
    }
  }
LAB_004931e4:
  uVar4 = CWnd::GetExStyle(*(CWnd **)(in_ECX + 0xb0));
  if ((uVar4 & 0xc00000) != 0) {
    uVar4 = CWnd::GetExStyle(*(CWnd **)(in_ECX + 0xb0));
    if (((uVar4 & 0x800000) != 0) && (!bVar1)) goto LAB_004933cf;
  }
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  GetWindowRect(*(HWND *)(*(int *)(in_ECX + 0xb0) + 0x20),&local_28);
  BVar3 = IsIconic(*(HWND *)(*(int *)(in_ECX + 0xb0) + 0x20));
  if (BVar3 != 0) {
    local_9c.length = 0x2c;
    CWnd::GetWindowPlacement(*(CWnd **)(in_ECX + 0xb0),&local_9c);
    CopyRect(&local_28,&local_9c.rcNormalPosition);
  }
  lpmi = &local_70;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  local_70.cbSize = 0x28;
  pt.y = (local_28.bottom + local_28.top) / 2;
  pt.x = (local_28.right + local_28.left) / 2;
  hMonitor = MonitorFromPoint(pt,2);
  BVar3 = GetMonitorInfoW(hMonitor,lpmi);
  if (BVar3 == 0) {
    SystemParametersInfoW(0x30,0,&local_18,0);
  }
  else {
    CopyRect(&local_38,&local_70.rcWork);
    CopyRect(&local_48,&local_70.rcMonitor);
    local_18.left = local_38.left - local_48.left;
    local_18.right = (local_38.right - local_38.left) + local_18.left;
    local_18.top = local_38.top - local_48.top;
    local_18.bottom = (local_38.bottom - local_38.top) + local_18.top;
  }
  if (bVar2) {
    pAVar5 = GetGlobalData();
    iVar6 = AFX_GLOBAL_DATA::IsDwmCompositionEnabled(pAVar5);
    if (iVar6 != 0) {
      OffsetRect(&local_18,-local_18.left,-local_18.top);
    }
  }
  pAVar5 = GetGlobalData();
  uVar7 = AFX_GLOBAL_DATA::GetShellAutohideBars(pAVar5);
  if ((uVar7 & 8) != 0) {
    local_18.bottom = local_18.bottom + -2;
  }
  if ((uVar7 & 4) != 0) {
    local_18.top = local_18.top + 2;
  }
  if ((uVar7 & 2) != 0) {
    local_18.right = local_18.right + -2;
  }
  if ((uVar7 & 1) != 0) {
    local_18.left = local_18.left + 2;
  }
  *(LONG *)(param_1 + 0x10) = local_18.left;
  *(LONG *)(param_1 + 0x14) = local_18.top;
  *(LONG *)(param_1 + 8) = local_18.right - local_18.left;
  *(LONG *)(param_1 + 0xc) = local_18.bottom - local_18.top;
  iVar6 = *(int *)(in_ECX + 0xfc);
  if (((iVar6 != 0) && (*(int *)(iVar6 + 0x20) != 0)) && (*(int *)(iVar6 + 0x328) != 0)) {
    pAVar5 = GetGlobalData();
    iVar6 = AFX_GLOBAL_DATA::IsDwmCompositionEnabled(pAVar5);
    if (iVar6 == 0) {
      iVar6 = GetSystemMetrics(0x22);
      *(int *)(param_1 + 0x18) = iVar6;
      iVar6 = GetSystemMetrics(0x23);
      *(int *)(param_1 + 0x1c) = iVar6;
    }
  }
LAB_004933cf:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

