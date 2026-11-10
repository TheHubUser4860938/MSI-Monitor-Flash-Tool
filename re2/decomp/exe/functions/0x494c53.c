// rea decompile_all
// name: RestorePosition
// address: 0x494c53
// body: available
// range: 0x494c53-0x494de3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: void __thiscall CFrameImpl::RestorePosition(struct tagCREATESTRUCTA &)
    protected: void __thiscall CFrameImpl::RestorePosition(struct tagCREATESTRUCTW &)
   
   Library: Visual Studio 2015 Release */

void RestorePosition(int param_1)

{
  code *pcVar1;
  POINT pt;
  AFX_MODULE_STATE *pAVar2;
  CObject *pCVar3;
  int iVar4;
  HMONITOR hMonitor;
  BOOL BVar5;
  tagMONITORINFO *lpmi;
  undefined4 local_68;
  int local_64;
  tagMONITORINFO local_60;
  tagRECT local_38;
  tagRECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  pAVar2 = AfxGetModuleState();
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CWinAppEx_005c63e8,*(CObject **)(pAVar2 + 4));
  if ((pCVar3 == (CObject *)0x0) || (*(int *)(param_1 + 4) == 0)) goto LAB_00494dd2;
  local_18.left = *(int *)(param_1 + 0x1c);
  local_18.top = *(int *)(param_1 + 0x18);
  local_68 = 0;
  local_18.right = local_18.left + *(int *)(param_1 + 0x14);
  local_18.bottom = *(int *)(param_1 + 0x10) + local_18.top;
  local_64 = 1;
  if (*(int *)(pCVar3 + 0x104) == 0) {
LAB_00494cee:
    local_64 = 1;
  }
  else {
    pcVar1 = *(code **)(*(int *)pCVar3 + 0x140);
    guard_check_icall(&local_18,&local_68,&local_64);
    iVar4 = (*pcVar1)();
    if (iVar4 == 0) goto LAB_00494dd2;
    if (local_64 != 3) goto LAB_00494cee;
  }
  pAVar2 = AfxGetModuleState();
  iVar4 = *(int *)(*(int *)(pAVar2 + 4) + 0x4c);
  if ((iVar4 < 2) || ((3 < iVar4 && (1 < iVar4 - 6U)))) {
    pAVar2 = AfxGetModuleState();
    *(int *)(*(int *)(pAVar2 + 4) + 0x4c) = local_64;
  }
  lpmi = &local_60;
  local_60.cbSize = 0x28;
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  local_38.left = 0;
  local_38.top = 0;
  local_38.right = 0;
  local_38.bottom = 0;
  pt.y = local_18.top;
  pt.x = local_18.left;
  hMonitor = MonitorFromPoint(pt,2);
  BVar5 = GetMonitorInfoW(hMonitor,lpmi);
  if (BVar5 == 0) {
    SystemParametersInfoW(0x30,0,&local_28,0);
  }
  else {
    CopyRect(&local_28,&local_60.rcWork);
  }
  if (local_64 == 3) {
    *(LONG *)(param_1 + 0x14) = local_28.right - local_28.left;
    *(LONG *)(param_1 + 0x1c) = local_28.left;
    iVar4 = local_28.bottom - local_28.top;
    *(LONG *)(param_1 + 0x18) = local_28.top;
  }
  else {
    BVar5 = IntersectRect(&local_38,&local_28,&local_18);
    if (BVar5 == 0) goto LAB_00494dd2;
    *(LONG *)(param_1 + 0x1c) = local_38.left;
    *(LONG *)(param_1 + 0x18) = local_38.top;
    *(LONG *)(param_1 + 0x14) = local_18.right - local_18.left;
    iVar4 = local_18.bottom - local_18.top;
  }
  *(int *)(param_1 + 0x10) = iVar4;
LAB_00494dd2:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

