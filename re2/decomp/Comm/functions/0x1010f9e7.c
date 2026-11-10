// rea decompile_all
// name: FUN_1010f9e7
// address: 0x1010f9e7
// body: available
// range: 0x1010f9e7-0x1010fcd8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1010fcd4 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1010f9e7(CDC *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  CDC *pCVar6;
  AFX_GLOBAL_DATA *pAVar7;
  undefined4 uVar8;
  CPen *pCVar9;
  CPen *pCVar10;
  COLORREF CVar11;
  int *in_ECX;
  int iVar12;
  int iVar13;
  IMAGES_IDS IVar14;
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int *local_34;
  int local_30;
  CDC *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int iStack_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_2c = param_1;
  local_30 = param_2;
  if ((param_2 != 0) && (*(int *)(param_2 + 4) != 0)) {
    iVar13 = *(int *)(param_2 + 0x34);
    iVar1 = *(int *)(param_2 + 0x38);
    iVar2 = *(int *)(param_2 + 0x3c);
    iVar3 = *(int *)(param_2 + 0x40);
    local_34 = in_ECX;
    if ((*(int *)(param_2 + 0x5c) == 0) ||
       (((iVar1 - iVar3) - iVar13) + iVar2 <= *(int *)(param_2 + 0x54))) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
      pcVar4 = *(code **)(*in_ECX + 0x16c);
      guard_check_icall(param_1,param_2,5,param_3,param_4,param_5);
      in_ECX = local_34;
      (*pcVar4)();
    }
    iVar12 = *(int *)param_1;
    pAVar7 = GetGlobalData();
    guard_check_icall(pAVar7 + 300);
    local_44 = (**(code **)(iVar12 + 0x28))();
    GetTextColor(*(HDC *)(param_1 + 8));
    if ((param_5 == 0) || (param_3 == 0)) {
      iVar12 = *(int *)(local_30 + 0x60);
    }
    else {
      iVar12 = *(int *)(local_30 + 100);
    }
    if (iVar12 == -1) {
      pAVar7 = GetGlobalData();
      iVar12 = *(int *)(pAVar7 + 0x70);
    }
    pcVar4 = *(code **)(*(int *)param_1 + 0x30);
    guard_check_icall(iVar12);
    uVar8 = (*pcVar4)();
    local_3c = CDC::SetBkMode(param_1,1);
    iVar12 = *(int *)(*(int *)(local_30 + 4) + 8);
    local_38 = *(int *)(iVar12 + 0x3bc);
    local_24 = *(int *)(iVar12 + 0x3c0);
    if (local_38 == -1) {
      local_38 = in_ECX[0x24];
    }
    local_28 = local_38;
    if (bVar5) {
      local_28 = *(int *)(local_30 + 0x54) + 5;
    }
    local_28 = local_28 + iVar13;
    if (local_24 == -1) {
      local_24 = local_34[0x25];
    }
    local_24 = iVar1 + local_24;
    iVar12 = local_38;
    if (param_5 != 0) {
      iVar12 = iVar3 - iVar1;
    }
    local_20 = local_28;
    if (local_28 <= iVar2 - iVar12) {
      local_20 = local_38;
      if (param_5 != 0) {
        local_20 = iVar3 - iVar1;
      }
      local_20 = iVar2 - local_20;
    }
    iVar12 = *(int *)param_1;
    iStack_1c = iVar3;
    guard_check_icall(*(int *)(local_30 + 8),*(undefined4 *)(*(int *)(local_30 + 8) + -0xc),
                      &local_28,0x24);
    (**(code **)(iVar12 + 0x68))();
    CDC::SetBkMode(param_1,local_3c);
    pcVar4 = *(code **)(*(int *)param_1 + 0x28);
    guard_check_icall(local_44);
    (*pcVar4)();
    pcVar4 = *(code **)(*(int *)param_1 + 0x30);
    guard_check_icall(uVar8);
    (*pcVar4)();
    if ((param_5 != 0) && (*(int *)(*(int *)(local_30 + 8) + -0xc) != 0)) {
      FUN_100796e6(&local_48);
      if (iVar13 <= iVar2 - local_48) {
        iVar13 = iVar2 - local_48;
      }
      local_14 = iVar1;
      if (iVar1 <= iVar3 - local_44) {
        local_14 = iVar3 - local_44;
      }
      local_18 = iVar13;
      local_10 = iVar2;
      local_c = iVar3;
      if ((local_48 <= iVar2 - iVar13) && (local_44 <= iVar3 - local_14)) {
        if (param_3 != 0) {
          pAVar7 = GetGlobalData();
          pCVar9 = CDC::SelectObject(param_1,(CPen *)(pAVar7 + 0xd8));
          pCVar6 = local_2c;
          pCVar10 = CDC::SelectObject(local_2c,(CPen *)(local_34 + 0x47));
          CVar11 = GetBkColor(*(HDC *)(pCVar6 + 8));
          Rectangle(*(HDC *)(local_2c + 4),local_18,local_14,local_10,local_c);
          pcVar4 = *(code **)(*(int *)local_2c + 0x2c);
          guard_check_icall(CVar11);
          (*pcVar4)();
          param_1 = local_2c;
          CDC::SelectObject(local_2c,pCVar9);
          CDC::SelectObject(param_1,pCVar10);
        }
        local_40 = 0;
        local_3c = 0;
        if (*(int *)(local_30 + 0x30) == 0) {
          IVar14 = 7;
        }
        else {
          IVar14 = 0;
        }
        CMenuImages::Draw(param_1,IVar14,(CPoint *)&local_18,0,(CSize *)&local_40);
      }
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012a3f();
}

