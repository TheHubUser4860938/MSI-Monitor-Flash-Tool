// rea decompile_all
// name: FUN_1005a3be
// address: 0x1005a3be
// body: available
// range: 0x1005a3be-0x1005a720 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005a71c to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005a3be(CDC *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  code *pcVar1;
  COLORREF CVar2;
  AFX_GLOBAL_DATA *pAVar3;
  int iVar4;
  CPen *pCVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  tagRECT local_28;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_44 = param_2;
  if ((param_2 != 0) && (*(int *)(param_2 + 4) != 0)) {
    local_18 = *(int *)(param_2 + 0x34);
    local_14 = *(int *)(param_2 + 0x38);
    local_10 = *(int *)(param_2 + 0x3c);
    local_c = *(int *)(param_2 + 0x40);
    CVar2 = GetBkColor(*(HDC *)(param_1 + 8));
    iVar4 = local_44;
    if (*(int *)(local_44 + 0x2c) == 0) {
      pAVar3 = GetGlobalData();
      uVar6 = *(undefined4 *)(pAVar3 + 0x54);
    }
    else {
      pAVar3 = GetGlobalData();
      uVar6 = *(undefined4 *)(pAVar3 + 0x3c);
    }
    FUN_10030c28(&local_18,uVar6);
    pcVar1 = *(code **)(*(int *)param_1 + 0x2c);
    guard_check_icall(CVar2);
    (*pcVar1)();
    if ((*(int *)(iVar4 + 0x5c) == 0) ||
       (((local_14 - local_18) - local_c) + local_10 <= *(int *)(iVar4 + 0x54))) {
      local_50 = 0;
    }
    else {
      local_50 = 1;
      pcVar1 = *(code **)(*local_40 + 0x16c);
      guard_check_icall(param_1,iVar4,5,param_3,param_4,param_5);
      (*pcVar1)();
    }
    iVar7 = *(int *)param_1;
    pAVar3 = GetGlobalData();
    guard_check_icall(pAVar3 + 300);
    local_48 = (**(code **)(iVar7 + 0x28))();
    GetTextColor(*(HDC *)(param_1 + 8));
    if ((param_5 == 0) || (param_3 == 0)) {
      iVar7 = *(int *)(iVar4 + 0x60);
    }
    else {
      iVar7 = *(int *)(iVar4 + 100);
    }
    if (iVar7 == -1) {
      if (*(int *)(iVar4 + 0x2c) == 0) {
        pAVar3 = GetGlobalData();
        iVar7 = *(int *)(pAVar3 + 0x70);
      }
      else {
        pAVar3 = GetGlobalData();
        iVar7 = *(int *)(pAVar3 + 0x6c);
      }
    }
    pcVar1 = *(code **)(*(int *)param_1 + 0x30);
    guard_check_icall(iVar7);
    local_3c = (*pcVar1)();
    local_58 = CDC::SetBkMode(param_1,1);
    iVar7 = local_44;
    iVar4 = *(int *)(*(int *)(iVar4 + 4) + 8);
    local_54 = *(int *)(iVar4 + 0x3bc);
    local_34 = *(int *)(iVar4 + 0x3c0);
    if (local_54 == -1) {
      local_54 = local_40[0x24];
    }
    iStack_2c = local_c;
    local_38 = local_54;
    if (local_50 != 0) {
      local_38 = *(int *)(local_44 + 0x54) + 5;
    }
    local_38 = local_18 + local_38;
    if (local_34 == -1) {
      local_34 = local_40[0x25];
    }
    local_34 = local_14 + local_34;
    iVar4 = local_54;
    if (param_5 != 0) {
      iVar4 = local_c - local_14;
    }
    local_30 = local_38;
    if (local_38 <= local_10 - iVar4) {
      local_30 = local_54;
      if (param_5 != 0) {
        local_30 = local_c - local_14;
      }
      local_30 = local_10 - local_30;
    }
    iVar4 = *(int *)param_1;
    guard_check_icall(*(int *)(local_44 + 8),*(undefined4 *)(*(int *)(local_44 + 8) + -0xc),
                      &local_38,0x24);
    (**(code **)(iVar4 + 0x68))();
    CDC::SetBkMode(param_1,local_58);
    pcVar1 = *(code **)(*(int *)param_1 + 0x28);
    guard_check_icall(local_48);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)param_1 + 0x30);
    guard_check_icall(local_3c);
    (*pcVar1)();
    if ((param_5 != 0) && (*(int *)(*(int *)(iVar7 + 8) + -0xc) != 0)) {
      FUN_100796e6(&local_4c);
      local_28.left = local_18;
      iVar4 = (-(((local_c - local_14) + 1) / 2) - (local_4c + 1) / 2) + local_10;
      if (local_18 <= iVar4) {
        local_28.left = iVar4;
      }
      iVar4 = (-(((local_c - local_14) + 1) / 2) - (local_48 + 1) / 2) + local_c;
      local_28.top = local_14;
      if (local_14 <= iVar4) {
        local_28.top = iVar4;
      }
      local_28.right = local_28.left + local_4c;
      local_28.bottom = local_48 + local_28.top;
      local_3c = local_28.left;
      if ((local_28.right <= local_10) && (local_28.bottom <= local_c)) {
        if (param_3 != 0) {
          pAVar3 = GetGlobalData();
          pCVar5 = CDC::SelectObject(param_1,(CPen *)(pAVar3 + 0xd0));
          CVar2 = GetBkColor(*(HDC *)(param_1 + 8));
          pAVar3 = GetGlobalData();
          uVar8 = *(ulong *)(pAVar3 + 0x58);
          pAVar3 = GetGlobalData();
          CDC::Draw3dRect(param_1,&local_28,*(ulong *)(pAVar3 + 0x6c),uVar8);
          pcVar1 = *(code **)(*(int *)param_1 + 0x2c);
          guard_check_icall(CVar2);
          (*pcVar1)();
          CDC::SelectObject(param_1,pCVar5);
        }
        local_5c = 0;
        local_58 = 0;
        CMenuImages::Draw(param_1,(-(uint)(*(int *)(local_44 + 0x30) != 0) & 0xfffffff9) + 7,
                          (CPoint *)&local_28,0,(CSize *)&local_5c);
      }
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012a3f();
}

