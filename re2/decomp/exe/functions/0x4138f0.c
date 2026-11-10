// rea decompile_all
// name: FUN_004138f0
// address: 0x4138f0
// body: available
// range: 0x4138f0-0x413c0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4139db to 0x57663d FUN_0057663d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4139e7 to 0x57663d FUN_0057663d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4139f3 to 0x57663d FUN_0057663d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4139fd to 0x57663d FUN_0057663d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413b5e to 0x57663d FUN_0057663d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413b6a to 0x57663d FUN_0057663d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413b76 to 0x57663d FUN_0057663d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413b80 to 0x57663d FUN_0057663d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413bbc to 0x57663d FUN_0057663d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413bc8 to 0x57663d FUN_0057663d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413bd4 to 0x57663d FUN_0057663d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413bde to 0x57663d FUN_0057663d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee c
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void FUN_004138f0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 ****ppppuVar4;
  void *_Memory;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  undefined1 uVar8;
  void *local_78 [5];
  uint local_64;
  undefined4 *local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 ***local_30 [4];
  uint local_20;
  uint local_1c;
  char local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0059d2c0;
  local_10 = ExceptionList;
  uVar1 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_14 = uVar1;
  ExceptionList = &local_10;
  local_5c = param_1;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (undefined4 ***)((uint)local_30[0] & 0xffffff00);
  local_40 = 0xf;
  local_44 = 0;
  local_54 = 0;
  local_8 = 2;
  if (param_2 == 0) {
    local_15 = ' ';
  }
  else {
    if (param_2 != 1) goto LAB_00413b49;
    local_15 = '.';
  }
  if (in_stack_0000001c != 0) {
    uVar5 = 0;
    if (in_stack_0000001c != 0) {
      do {
        puVar2 = &param_3;
        if (0xf < in_stack_00000020) {
          puVar2 = param_3;
        }
        if ('/' < *(char *)((int)puVar2 + uVar5)) {
          puVar2 = &param_3;
          if (0xf < in_stack_00000020) {
            puVar2 = param_3;
          }
          if (*(char *)((int)puVar2 + uVar5) < ':') break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < in_stack_0000001c);
    }
    if (uVar5 != in_stack_0000001c) {
      uVar3 = FUN_00409870(local_78,uVar5,0xffffffff);
      FUN_00403450(uVar3);
      if (0xf < local_64) {
        _Memory = local_78[0];
        if (0xfff < local_64 + 1) {
          if (((uint)local_78[0] & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0057663d(uVar1);
          }
          _Memory = *(void **)((int)local_78[0] + -4);
          if (local_78[0] <= _Memory) {
                    /* WARNING: Subroutine does not return */
            FUN_0057663d(uVar1);
          }
          if ((uint)((int)local_78[0] - (int)_Memory) < 4) {
                    /* WARNING: Subroutine does not return */
            FUN_0057663d(uVar1);
          }
          if (0x23 < (uint)((int)local_78[0] - (int)_Memory)) {
                    /* WARNING: Subroutine does not return */
            FUN_0057663d(uVar1);
          }
        }
        FID_conflict__free(_Memory);
      }
      uVar5 = 0;
      if (local_20 != 0) {
        do {
          ppppuVar4 = local_30;
          if (0xf < local_1c) {
            ppppuVar4 = (undefined4 ****)local_30[0];
          }
          if (*(char *)((int)ppppuVar4 + uVar5) < '0') {
LAB_00413a3e:
            ppppuVar4 = local_30;
            if (0xf < local_1c) {
              ppppuVar4 = (undefined4 ****)local_30[0];
            }
            if (*(char *)((int)ppppuVar4 + uVar5) != local_15) break;
          }
          else {
            ppppuVar4 = local_30;
            if (0xf < local_1c) {
              ppppuVar4 = (undefined4 ****)local_30[0];
            }
            if ('9' < *(char *)((int)ppppuVar4 + uVar5)) goto LAB_00413a3e;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_20);
      }
      if (uVar5 == local_20) {
        local_34 = 0;
        local_3c = 0;
        FUN_00408a10(&local_15,uVar5);
        local_8 = CONCAT31(local_8._1_3_,3);
        iVar7 = local_3c._4_4_ - (int)local_3c >> 0x1f;
        iVar6 = (local_3c._4_4_ - (int)local_3c) / 0x18 + iVar7;
        if (((uint)(iVar6 - iVar7) < 5) && (uVar5 = 0, iVar6 != iVar7)) {
          iVar7 = 0;
          do {
            local_58 = 0;
            uVar8 = 0;
            FUN_004044e0((int)local_3c + iVar7,0,0xffffffff);
            iVar6 = FUN_00408050(uVar8);
            if (iVar6 == 0) break;
            uVar5 = uVar5 + 1;
            iVar7 = iVar7 + 0x18;
            *local_5c = local_58;
            local_5c = local_5c + 1;
          } while (uVar5 < (uint)((local_3c._4_4_ - (int)local_3c) / 0x18));
        }
        FUN_0040bd20();
      }
    }
  }
LAB_00413b49:
  if (0xf < local_1c) {
    ppppuVar4 = (undefined4 ****)local_30[0];
    if (0xfff < local_1c + 1) {
      if (((uint)local_30[0] & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0057663d(uVar1);
      }
      ppppuVar4 = (undefined4 ****)local_30[0][-1];
      if (local_30[0] <= ppppuVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_0057663d(uVar1);
      }
      if ((uint)((int)local_30[0] - (int)ppppuVar4) < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_0057663d(uVar1);
      }
      if (0x23 < (uint)((int)local_30[0] - (int)ppppuVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_0057663d(uVar1);
      }
    }
    FID_conflict__free(ppppuVar4);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (undefined4 ***)((uint)local_30[0] & 0xffffff00);
  if (0xf < in_stack_00000020) {
    puVar2 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      if (((uint)param_3 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0057663d(uVar1);
      }
      puVar2 = (undefined4 *)param_3[-1];
      if (param_3 <= puVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0057663d(uVar1);
      }
      if ((uint)((int)param_3 - (int)puVar2) < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_0057663d(uVar1);
      }
      if (0x23 < (uint)((int)param_3 - (int)puVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_0057663d(uVar1);
      }
    }
    FID_conflict__free(puVar2);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

