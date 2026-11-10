// rea decompile_all
// name: FUN_00444503
// address: 0x444503
// body: available
// range: 0x444503-0x444748 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x444744 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00444503(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  CWnd *pCVar3;
  BOOL BVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  int iVar7;
  CDataSourceControl *in_ECX;
  bool bVar8;
  int *local_34;
  CDataSourceControl *local_30;
  int *local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if (((*(int *)(in_ECX + 4) == 0) ||
      (pCVar3 = *(CWnd **)(*(int *)(in_ECX + 4) + 0x28), pCVar3 == (CWnd *)0x0)) ||
     (local_30 = in_ECX, pCVar3 = CWnd::GetTopLevelParent(pCVar3), pCVar3 == (CWnd *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  BVar4 = IsWindowVisible(*(HWND *)(pCVar3 + 0x20));
  bVar8 = BVar4 == 0;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  if (bVar8) {
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    pHVar5 = GetDesktopWindow();
    pCVar6 = CWnd::FromHandle(pHVar5);
    GetWindowRect(*(HWND *)(pCVar6 + 0x20),&local_28);
    GetWindowRect(*(HWND *)(pCVar3 + 0x20),&local_18);
    CWnd::MoveWindow(pCVar3,(local_28.right - local_28.left) / 2,
                     (local_28.bottom - local_28.top) / 2,0,0,0);
    CWnd::ShowWindow(pCVar3,1);
  }
  pcVar1 = *(code **)**(undefined4 **)(*(int *)(in_ECX + 4) + 0x50);
  guard_check_icall(*(undefined4 **)(*(int *)(in_ECX + 4) + 0x50),&DAT_005b4e4c,in_ECX + 0x48);
  iVar7 = (*pcVar1)();
  if (iVar7 < 0) {
    puVar2 = (undefined4 *)**(undefined4 **)(*(int *)(in_ECX + 4) + 0x50);
    guard_check_icall(*(undefined4 **)(*(int *)(in_ECX + 4) + 0x50),&DAT_005b4e5c,&local_34);
    iVar7 = (*(code *)*puVar2)();
    if (iVar7 < 0) goto LAB_00444733;
    pcVar1 = *(code **)(*local_34 + 0x14);
    guard_check_icall(local_34,&local_2c);
    (*pcVar1)();
    pcVar1 = *(code **)(*local_34 + 8);
    guard_check_icall(local_34);
    (*pcVar1)();
    if (local_2c == (int *)0x0) goto LAB_00444733;
    pcVar1 = *(code **)*local_2c;
    guard_check_icall(local_2c,&DAT_005db8e0,in_ECX + 8);
    local_30 = (CDataSourceControl *)(*pcVar1)();
    pcVar1 = *(code **)(*local_2c + 8);
    guard_check_icall(local_2c);
    (*pcVar1)();
    if ((int)local_30 < 0) goto LAB_00444733;
    puVar2 = (undefined4 *)**(undefined4 **)(in_ECX + 8);
    guard_check_icall(*(undefined4 **)(in_ECX + 8),&DAT_005db8f0,in_ECX + 0xc);
    (*(code *)*puVar2)();
  }
  else {
    iVar7 = **(int **)(in_ECX + 0x48);
    guard_check_icall(*(int **)(in_ECX + 0x48),0,&DAT_005dbbb0,in_ECX + 0x4c);
    local_2c = (int *)(**(code **)(iVar7 + 0xc))();
    if (*(int *)(in_ECX + 0x4c) == 0) {
      local_2c = (int *)0x80004003;
    }
    in_ECX = local_30;
    if ((int)local_2c < 0) {
      if (bVar8) {
        CWnd::MoveWindow(pCVar3,local_18.left,local_18.top,local_18.right - local_18.left,
                         local_18.bottom - local_18.top,0);
        CWnd::ShowWindow(pCVar3,0);
      }
      goto LAB_00444733;
    }
  }
  CDataSourceControl::GetMetaData(in_ECX);
  if (bVar8) {
    CWnd::MoveWindow(pCVar3,local_18.left,local_18.top,local_18.right - local_18.left,
                     local_18.bottom - local_18.top,0);
    CWnd::ShowWindow(pCVar3,0);
  }
LAB_00444733:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

