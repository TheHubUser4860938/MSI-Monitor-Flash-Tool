// rea decompile_all
// name: FUN_1003ec00
// address: 0x1003ec00
// body: available
// range: 0x1003ec00-0x1003ee05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003ec59 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003ec00(undefined4 param_1,int param_2,uint param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_ECX;
  uint uVar4;
  uint uVar5;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  int local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_101a0ff8;
  local_1c = ExceptionList;
  local_24 = DAT_10206460 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_48 = in_ECX;
  piVar1 = (int *)FUN_10048e90(local_24);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_100351a0(0x80004005);
  }
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0xc))();
  puVar9 = puVar2 + 4;
  iVar6 = 0;
  local_14 = 0;
  uVar5 = (int)param_3 >> 0x1f & 0xf;
  local_4c = 0;
  iVar3 = (int)(param_3 + uVar5) >> 4;
  if (0 < iVar3) {
    uVar4 = param_3 & 0x8000000f;
    iVar7 = param_2;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff0) + 1;
    }
    do {
      if ((uVar4 == 0) && (iVar6 == iVar3 + -1)) {
        uStack_40 = 1;
      }
      else {
        uStack_40 = 5;
      }
      uStack_3c = 0x10;
      local_44 = local_48[1];
      uStack_38 = param_1;
      local_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uVar8 = (**(code **)(*(int *)*local_48 + 0xac))
                        ((int *)*local_48,&DAT_101e2428,0x20,&local_44,&local_4c);
      uVar5 = (uint)((ulonglong)uVar8 >> 0x20);
      if (((int)uVar8 < 0) || (local_4c != 0)) goto LAB_1003edc1;
      if (uStack_3c != 0) {
        FUN_10181570(iVar7,&local_34,uStack_3c);
        uVar5 = extraout_EDX;
      }
      iVar6 = iVar6 + 1;
      in_ECX = local_48;
      iVar7 = iVar7 + 0x10;
    } while (iVar6 < iVar3);
  }
  param_3 = param_3 & 0x8000000f;
  if ((int)param_3 < 0) {
    param_3 = (param_3 - 1 | 0xfffffff0) + 1;
  }
  if (param_3 != 0) {
    local_44 = in_ECX[1];
    uStack_38 = param_1;
    local_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_40 = 1;
    uStack_3c = param_3;
    uVar8 = (**(code **)(*(int *)*in_ECX + 0xac))
                      ((int *)*in_ECX,&DAT_101e2428,0x20,&local_44,&local_4c);
    uVar5 = (uint)((ulonglong)uVar8 >> 0x20);
    if (((-1 < (int)uVar8) && (local_4c == 0)) && (uStack_3c != 0)) {
      FUN_10181570(iVar6 * 0x10 + param_2,&local_34,uStack_3c);
      uVar5 = extraout_EDX_00;
    }
  }
LAB_1003edc1:
  local_14 = 0xffffffff;
  LOCK();
  piVar1 = puVar2 + 3;
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 == 1 || iVar3 + -1 < 0) {
    (**(code **)(*(int *)*puVar2 + 4))(puVar2);
    uVar5 = extraout_EDX_01;
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0,uVar5,puVar9);
  return;
}

