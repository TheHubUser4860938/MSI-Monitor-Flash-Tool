// rea decompile_all
// name: FUN_1000b430
// address: 0x1000b430
// body: available
// range: 0x1000b430-0x1000b76d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000b611 to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000b676 to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000b682 to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000b68e to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000b698 to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000b6c0 to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000b6cc to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000b6d8 to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000b6e2 to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000b71c to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000b728 to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000b734 to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, n
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1000b4af) */

void FUN_1000b430(void *param_1)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  uint uVar4;
  void *pvVar5;
  void *pvVar6;
  int in_stack_00000014;
  uint in_stack_00000018;
  void *in_stack_0000001c;
  uint in_stack_00000030;
  uint *in_stack_00000034;
  uint local_28;
  undefined8 local_24;
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar1 = in_stack_00000034;
  puStack_c = &LAB_10195128;
  local_10 = ExceptionList;
  local_14 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0;
  uVar4 = 0;
  local_28 = 0;
  pvVar6 = (void *)0x0;
  local_24 = 0;
  local_1c = 0;
  local_8 = 2;
  if (in_stack_00000014 != 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
    FUN_10003b40(&param_1,0,0xffffffff);
    iVar2 = FUN_10015430();
    if (iVar2 == 0) {
      FUN_10003e70();
    }
    else {
      puVar1[0x132] = local_18;
      *puVar1 = 0;
      _memset(puVar1 + 1,0xff,0x4c4);
      puVar3 = (ulonglong *)FUN_100151e0();
      if (&local_24 != puVar3) {
        FUN_10006df0();
        pvVar6 = *(void **)puVar3;
        local_24 = *puVar3;
        local_28 = (uint)puVar3[1];
        *(uint *)puVar3 = 0;
        *(uint *)((int)puVar3 + 4) = 0;
        *(uint *)(puVar3 + 1) = 0;
        local_1c = local_28;
      }
      FUN_10006df0();
      pvVar5 = pvVar6;
      if (pvVar6 != local_24._4_4_) {
        do {
          FUN_10003b40(pvVar5,0,0xffffffff);
          iVar2 = FUN_10015430();
          if ((iVar2 == 0) || (0xff < local_18)) {
            FUN_10003e70();
            break;
          }
          *(char *)((int)(puVar1 + 1) + uVar4) = (char)local_18;
          uVar4 = uVar4 + 1;
          *puVar1 = uVar4 & 0xff;
          if (0x4c4 < (uVar4 & 0xff)) {
            FUN_10003e70();
            FUN_10003e70();
            break;
          }
          pvVar5 = (void *)((int)pvVar5 + 0x18);
        } while (pvVar5 != local_24._4_4_);
      }
    }
  }
  if (pvVar6 != (void *)0x0) {
    FUN_10005770();
    uVar4 = (int)(local_28 - (int)pvVar6) / 0x18;
    if (0xaaaaaaa < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_1016ec51();
    }
    pvVar5 = pvVar6;
    if (0xfff < uVar4 * 0x18) {
      if ((local_24 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
      pvVar5 = *(void **)((int)pvVar6 - 4);
      if (pvVar6 <= pvVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
      if ((uint)((int)pvVar6 - (int)pvVar5) < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
      if (0x23 < (uint)((int)pvVar6 - (int)pvVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
    }
    FID_conflict__free(pvVar5);
  }
  if (0xf < in_stack_00000018) {
    pvVar6 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      if (((uint)param_1 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
      pvVar6 = *(void **)((int)param_1 + -4);
      if (param_1 <= pvVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
      if ((uint)((int)param_1 - (int)pvVar6) < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
      if (0x23 < (uint)((int)param_1 - (int)pvVar6)) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
    }
    FID_conflict__free(pvVar6);
  }
  in_stack_00000018 = 0xf;
  in_stack_00000014 = 0;
  param_1 = (void *)((uint)param_1 & 0xffffff00);
  if (0xf < in_stack_00000030) {
    pvVar6 = in_stack_0000001c;
    if (0xfff < in_stack_00000030 + 1) {
      if (((uint)in_stack_0000001c & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
      pvVar6 = *(void **)((int)in_stack_0000001c + -4);
      if (in_stack_0000001c <= pvVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
      if ((uint)((int)in_stack_0000001c - (int)pvVar6) < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
      if (0x23 < (uint)((int)in_stack_0000001c - (int)pvVar6)) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
    }
    FID_conflict__free(pvVar6);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

