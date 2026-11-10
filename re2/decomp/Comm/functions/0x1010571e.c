// rea decompile_all
// name: FUN_1010571e
// address: 0x1010571e
// body: available
// range: 0x1010571e-0x10105a11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10105a0d to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1010571e(CDC *param_1,CRect *param_2,undefined4 param_3,int param_4,int param_5,
                 CMFCVisualManager *param_6,int param_7,int param_8)

{
  code *pcVar1;
  CMFCVisualManager *pCVar2;
  int *piVar3;
  int iVar4;
  CMFCToolBarMenuButton *in_ECX;
  int iVar5;
  undefined4 uVar6;
  undefined1 local_78 [8];
  int local_70 [2];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  int local_60;
  undefined4 uStack_5c;
  int iStack_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 uStack_48;
  int local_44;
  int iStack_40;
  int local_3c;
  CMFCToolBarMenuButton *local_38;
  int local_34;
  CDC *local_30;
  CMFCVisualManager *local_2c;
  int local_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  int local_18;
  undefined4 uStack_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_30 = param_1;
  local_50 = param_3;
  local_38 = in_ECX;
  if (*(int *)(in_ECX + 0xf0) == 0) {
    if (*(int *)(in_ECX + 0x100) == 0) {
      local_60 = *(int *)param_2;
      uStack_5c = *(undefined4 *)(param_2 + 4);
      iStack_58 = *(int *)(param_2 + 8);
      local_54 = *(int *)(param_2 + 0xc) + -1;
      if (*(int *)(in_ECX + 0xfc) == 0) {
        uVar6 = 0x40000;
        pcVar1 = *(code **)(*(int *)in_ECX + 0x8c);
        guard_check_icall(0x40000);
        (*pcVar1)();
        param_6 = (CMFCVisualManager *)0x0;
        local_3c = 1;
        local_2c = (CMFCVisualManager *)0x0;
      }
      else {
        local_2c = param_6;
        if ((*(int *)(in_ECX + 0xec) == 0) || (param_6 == (CMFCVisualManager *)0x0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = 0x10000;
        }
        pcVar1 = *(code **)(*(int *)in_ECX + 0x8c);
        guard_check_icall(uVar6);
        (*pcVar1)();
        local_3c = param_8;
      }
      local_34 = *(int *)(in_ECX + 0xe8);
      if (local_34 == 0x4278) {
        *(undefined4 *)(in_ECX + 0xc) = 0;
        *(undefined4 *)(in_ECX + 0x34) = 0xffffffff;
      }
      if ((param_6 != (CMFCVisualManager *)0x0) && (*(int *)(in_ECX + 0xfc) != 0)) {
        iVar5 = local_60 + 2;
        uStack_48 = uStack_5c;
        iStack_40 = local_54;
        local_44 = iStack_58 + -1;
        local_4c = iVar5;
        pCVar2 = CMFCVisualManager::GetInstance();
        pcVar1 = *(code **)(*(int *)pCVar2 + 0x98);
        guard_check_icall(uVar6);
        iVar4 = (*pcVar1)();
        if ((iVar4 == 0) && (local_34 != 0x4278)) {
          pCVar2 = CMFCVisualManager::GetInstance();
          pcVar1 = *(code **)(*(int *)pCVar2 + 0x2dc);
          guard_check_icall();
          iVar4 = (*pcVar1)();
          piVar3 = (int *)FUN_1005f3ff(local_78);
          local_4c = iVar5 + iVar4 * 5 + *piVar3 * 2;
        }
        pCVar2 = CMFCVisualManager::GetInstance();
        pcVar1 = *(code **)(*(int *)pCVar2 + 0x90);
        guard_check_icall(local_30,local_38,local_4c,uStack_48,local_44,iStack_40,local_64);
        (*pcVar1)();
        in_ECX = local_38;
      }
      FUN_1005f3ff(local_70);
      local_18 = local_60;
      uStack_14 = uStack_5c;
      local_10 = iStack_58;
      local_c = local_54;
      pCVar2 = CMFCVisualManager::GetInstance();
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x2dc);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      local_18 = iVar4 + local_18 + 1;
      pCVar2 = CMFCVisualManager::GetInstance();
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x2dc);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      pCVar2 = local_2c;
      local_10 = iVar4 + local_70[0] + local_18 + 2;
      local_c = local_c + -1;
      pcVar1 = *(code **)(*(int *)in_ECX + 0xfc);
      guard_check_icall(local_30,&local_18,local_2c);
      (*pcVar1)();
      if (((pCVar2 != (CMFCVisualManager *)0x0) && ((*(uint *)(in_ECX + 0x24) & 0x40000) == 0)) &&
         (local_34 != 0x4278)) {
        pcVar1 = *(code **)(*(int *)in_ECX + 0x8c);
        guard_check_icall(0);
        (*pcVar1)();
      }
      uStack_24 = uStack_5c;
      iStack_20 = iStack_58;
      iStack_1c = local_54;
      local_28 = local_10;
      FUN_100da6e3(local_30,&local_28,local_50,param_5,local_2c,local_3c,1);
    }
    else {
      CMFCToolBarMenuButton::OnDraw
                (in_ECX,param_1,param_2,(CMFCToolBarImages *)0x0,param_4,param_5,(int)param_6,
                 param_7,param_8);
    }
  }
  else {
    local_4c = *(int *)param_2;
    uStack_48 = *(undefined4 *)(param_2 + 4);
    local_44 = *(int *)(param_2 + 8);
    iStack_40 = *(int *)(param_2 + 0xc);
    pCVar2 = CMFCVisualManager::GetInstance();
    iVar4 = *(int *)pCVar2;
    piVar3 = (int *)FUN_1005f3ff(local_68);
    pcVar1 = *(code **)(iVar4 + 0x2dc);
    guard_check_icall();
    local_4c = (*pcVar1)();
    local_4c = local_4c + *piVar3 * 2;
    local_34 = *(int *)(local_38 + 0x6c);
    if (local_34 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10012a3f();
    }
    local_2c = CMFCVisualManager::GetInstance();
    iVar4 = *(int *)local_2c;
    guard_check_icall(local_30,local_34,local_4c,uStack_48,local_44,iStack_40,0);
    (**(code **)(iVar4 + 0x48))();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

