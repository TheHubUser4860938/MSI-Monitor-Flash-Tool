// rea decompile_all
// name: FUN_100d1b4f
// address: 0x100d1b4f
// body: available
// range: 0x100d1b4f-0x100d1e6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100d1e6a to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100d1b4f(CPane *param_1,undefined4 param_2,int param_3,int param_4)

{
  code *pcVar1;
  CDockSite *pCVar2;
  CPane *this;
  int iVar3;
  int iVar4;
  long lVar5;
  CDockingPanesRow *pCVar6;
  CDockSite *in_ECX;
  CDockingPanesRow *pCVar7;
  CDockingPanesRow *pCVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  tagPOINT local_44;
  undefined4 local_3c;
  CDockSite *local_38;
  undefined1 local_31;
  CPane *local_30;
  CDockingPanesRow *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  pCVar6 = *(CDockingPanesRow **)(param_1 + 0xbc);
  local_18.right = 0;
  local_18.bottom = 0;
  local_30 = param_1;
  local_38 = in_ECX;
  CPane::GetVirtualRect(param_1,(CRect *)&local_18);
  OffsetRect(&local_18,param_3,param_4);
  local_44.x = 0;
  local_44.y = 0;
  GetCursorPos(&local_44);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  CDockingPanesRow::GetWindowRect(pCVar6,(CRect *)&local_28);
  puVar10 = &local_3c;
  local_3c = 0;
  uVar9 = 0xf;
  pcVar1 = *(code **)(*(int *)param_1 + 0x2b4);
  guard_check_icall(0xf,puVar10);
  iVar3 = (*pcVar1)();
  this = local_30;
  if (iVar3 != 0) {
    CPane::UpdateVirtualRect(local_30,param_3,param_4);
    CPane::GetVirtualRect(this,(CRect *)&local_18);
    pcVar1 = *(code **)(*(int *)this + 0x1fc);
    guard_check_icall(local_18.left,local_18.top,local_18.right,local_18.bottom,1,1);
    (*pcVar1)();
    goto LAB_100d1e57;
  }
  local_31 = 0;
  local_2c = CDockSite::RowFromPoint();
  pcVar1 = *(code **)(*(int *)in_ECX + 0x164);
  guard_check_icall(uVar9,puVar10);
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    iVar3 = local_20 - local_18.right;
    if (local_28 - local_18.left <= local_20 - local_18.right) {
      iVar3 = local_28 - local_18.left;
    }
    iVar4 = local_18.right - local_18.left;
  }
  else {
    iVar3 = local_1c - local_18.bottom;
    if (local_24 - local_18.top <= local_1c - local_18.bottom) {
      iVar3 = local_24 - local_18.top;
    }
    iVar4 = local_18.bottom - local_18.top;
  }
  lVar5 = _labs(iVar3);
  pCVar2 = local_38;
  if (lVar5 <= (iVar4 * 2) / 3) {
LAB_100d1e19:
    iVar4 = local_1c - local_24;
    lVar5 = _labs(iVar3);
    if (lVar5 < iVar4) {
      local_38 = BeginDeferWindowPos(*(int *)(pCVar6 + 0x30));
      CDockingPanesRow::MovePane(pCVar6,local_30,param_3,param_4,1,&local_38);
      EndDeferWindowPos(local_38);
    }
    goto LAB_100d1e57;
  }
  if ((1 < *(int *)(pCVar6 + 0x30)) && (iVar3 < *(int *)(pCVar6 + 0xc))) {
    local_2c = (CDockingPanesRow *)
               CObList::Find((CObList *)(local_38 + 300),(CObject *)pCVar6,(__POSITION *)0x0);
    if (local_2c == (CDockingPanesRow *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001d023();
    }
    if (iVar3 < 0) {
      CDockSite::FindNextVisibleRow(pCVar2,(__POSITION **)&local_2c,1);
    }
    pcVar1 = *(code **)(*(int *)pCVar6 + 0x24);
    guard_check_icall(local_30);
    (*pcVar1)();
    pCVar2 = local_38;
    pcVar1 = *(code **)(*(int *)local_38 + 0x164);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) {
      iVar3 = local_18.right - local_18.left;
    }
    else {
      iVar3 = local_18.bottom - local_18.top;
    }
    pCVar6 = CDockSite::AddRow(pCVar2,(__POSITION *)local_2c,iVar3);
    pcVar1 = *(code **)(*(int *)pCVar6 + 0x20);
    guard_check_icall(local_30,1);
    (*pcVar1)();
    goto LAB_100d1e57;
  }
  if ((pCVar6 == local_2c) || (local_2c == (CDockingPanesRow *)0x0)) goto LAB_100d1e19;
  SendMessageW(*(HWND *)(local_38 + 0x20),0xb,0,0);
  pcVar1 = *(code **)(*(int *)pCVar6 + 0x60);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  pCVar7 = local_2c;
  pCVar8 = pCVar6;
  if (iVar3 == 0) {
    pcVar1 = *(code **)(*(int *)local_2c + 0x60);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    pCVar7 = pCVar6;
    pCVar8 = local_2c;
    if (iVar3 != 0) goto LAB_100d1db9;
    pcVar1 = *(code **)(*(int *)pCVar6 + 0x24);
    guard_check_icall(local_30);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)local_2c + 0x20);
    guard_check_icall(local_30,1);
    (*pcVar1)();
  }
  else {
LAB_100d1db9:
    FUN_100d27d9(pCVar7,pCVar8);
  }
  local_30[0x110] = (CPane)0x1;
  SendMessageW(*(HWND *)(pCVar2 + 0x20),0xb,1,0);
  RedrawWindow(*(HWND *)(pCVar2 + 0x20),(RECT *)0x0,(HRGN)0x0,0x185);
LAB_100d1e57:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

