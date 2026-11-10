// rea decompile_all
// name: FUN_100fc750
// address: 0x100fc750
// body: available
// range: 0x100fc750-0x100fc8e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100fc8e0 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100fc750(CObject *param_1,CBasePane *param_2)

{
  code *pcVar1;
  CDockingPanesRow *pCVar2;
  int iVar3;
  __POSITION *p_Var4;
  CDockSite *in_ECX;
  LONG yTop;
  CObject *pCVar5;
  undefined4 uVar6;
  int xLeft;
  tagRECT *ptVar7;
  undefined4 uVar8;
  int xRight;
  int local_38;
  int local_34;
  CBasePane *local_30;
  CObject *local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_2c = param_1;
  local_30 = param_2;
  pCVar2 = CDockSite::RowFromPane(in_ECX,param_2);
  if (pCVar2 != (CDockingPanesRow *)0x0) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(param_2 + 0x20),&local_18);
    CWnd::ScreenToClient((CWnd *)in_ECX,&local_18);
    pcVar1 = *(code **)(*(int *)in_ECX + 0x164);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    pcVar1 = *(code **)(*(int *)local_2c + 0x260);
    guard_check_icall(&local_38,0,iVar3 != 0);
    (*pcVar1)();
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    pcVar1 = *(code **)(*(int *)in_ECX + 0x164);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) {
      iVar3 = local_18.top + -10;
      yTop = (local_18.top - local_34) + -10;
      xLeft = local_18.left;
      xRight = local_18.right;
    }
    else {
      xLeft = (local_18.left - local_38) + -10;
      yTop = local_18.top;
      xRight = local_18.left + -10;
      iVar3 = local_18.bottom;
    }
    SetRect(&local_28,xLeft,yTop,xRight,iVar3);
    pcVar1 = *(code **)(*(int *)local_2c + 0x29c);
    guard_check_icall();
    (*pcVar1)();
    CWnd::ClientToScreen((CWnd *)in_ECX,&local_28);
    iVar3 = *(int *)pCVar2;
    ptVar7 = &local_28;
    uVar8 = 0;
    uVar6 = 4;
    *(undefined4 *)(pCVar2 + 4) = 1;
    pCVar5 = local_2c;
    guard_check_icall(local_2c,4,ptVar7,0);
    (**(code **)(iVar3 + 0x1c))();
    p_Var4 = CObList::Find((CObList *)(in_ECX + 0x110),(CObject *)local_30,(__POSITION *)0x0);
    if (p_Var4 == (__POSITION *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1004886a();
    }
    CObList::InsertBefore((CObList *)(in_ECX + 0x110),p_Var4,local_2c);
    pcVar1 = *(code **)(*(int *)in_ECX + 0x2a8);
    guard_check_icall(pCVar5,uVar6,ptVar7,uVar8);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)in_ECX + 0x29c);
    guard_check_icall();
    (*pcVar1)();
    *(undefined4 *)(pCVar2 + 4) = 0;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

