// rea decompile_all
// name: FUN_1000b1c0
// address: 0x1000b1c0
// body: available
// range: 0x1000b1c0-0x1000b42c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000b35c to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000b391 to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000b39d to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000b3a9 to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000b3b3 to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000b3db to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000b3e7 to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000b3f3 to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000b3fd to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b1c0(undefined4 *param_1)

{
  uint uVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  uint in_stack_00000018;
  undefined1 *in_stack_0000001c;
  undefined1 uVar8;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  undefined1 *local_2c;
  uint local_28;
  undefined8 local_24;
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101950e0;
  local_10 = ExceptionList;
  local_14 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2c = in_stack_0000001c;
  pvVar7 = (void *)0x0;
  local_24 = 0;
  local_28 = 0;
  local_1c = 0;
  iVar5 = 0;
  local_18 = 0;
  local_8 = 1;
  puVar2 = (ulonglong *)FUN_100151e0(&local_38,&param_1,&DAT_101a7514,0,local_14);
  if (&local_24 != puVar2) {
    FUN_10006df0();
    pvVar7 = *(void **)puVar2;
    local_24 = *puVar2;
    local_28 = (uint)puVar2[1];
    *(uint *)puVar2 = 0;
    *(uint *)((int)puVar2 + 4) = 0;
    *(uint *)(puVar2 + 1) = 0;
    local_1c = local_28;
  }
  if (local_38 != 0) {
    FUN_10005770(local_38,local_34,&local_38,local_28);
    FUN_1000fd80(local_38,(local_30 - local_38) / 0x18);
  }
  if (((int)local_24._4_4_ - (int)pvVar7) / 0x18 == 2) {
    pvVar6 = pvVar7;
    if (pvVar7 != local_24._4_4_) {
      do {
        iVar5 = iVar5 + 1;
        uVar8 = 0;
        FUN_10003b40(pvVar6,0,0xffffffff);
        iVar3 = FUN_10015430(uVar8);
        if ((iVar3 == 0) || (0xff < local_18)) goto LAB_1000b361;
        if (iVar5 == 1) {
          *local_2c = (char)local_18;
        }
        else if (iVar5 == 2) {
          local_2c[1] = (char)local_18;
        }
        pvVar6 = (void *)((int)pvVar6 + 0x18);
      } while (pvVar6 != local_24._4_4_);
    }
  }
  else {
LAB_1000b361:
    puVar4 = &param_1;
    if (0xf < in_stack_00000018) {
      puVar4 = param_1;
    }
    FUN_10003e70("Parameter illegal! --udtime %s \n",puVar4);
  }
  if (pvVar7 != (void *)0x0) {
    FUN_10005770(pvVar7,local_24._4_4_,&local_24,local_3c);
    uVar1 = (int)(local_28 - (int)pvVar7) / 0x18;
    if (0xaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1016ec51();
    }
    pvVar6 = pvVar7;
    if (0xfff < uVar1 * 0x18) {
      if ((local_24 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
      pvVar6 = *(void **)((int)pvVar7 - 4);
      if (pvVar7 <= pvVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
      if ((uint)((int)pvVar7 - (int)pvVar6) < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
      if (0x23 < (uint)((int)pvVar7 - (int)pvVar6)) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
    }
    FID_conflict__free(pvVar6);
  }
  if (0xf < in_stack_00000018) {
    puVar4 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      if (((uint)param_1 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
      puVar4 = (undefined4 *)param_1[-1];
      if (param_1 <= puVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
      if ((uint)((int)param_1 - (int)puVar4) < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
      if (0x23 < (uint)((int)param_1 - (int)puVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
    }
    FID_conflict__free(puVar4);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

