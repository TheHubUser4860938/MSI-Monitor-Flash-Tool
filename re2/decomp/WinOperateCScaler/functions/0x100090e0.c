// rea decompile_all
// name: FUN_100090e0
// address: 0x100090e0
// body: available
// range: 0x100090e0-0x1000931b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10009268 to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10009280 to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000928c to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10009298 to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100092a2 to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100092ca to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100092d6 to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100092e2 to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100092ec to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100090e0(undefined4 param_1,void *param_2)

{
  uint uVar1;
  void *pvVar2;
  ulonglong *puVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  uint in_stack_0000001c;
  undefined1 uVar7;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  int local_20;
  undefined1 local_19;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10194f10;
  local_10 = ExceptionList;
  local_14 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2c = param_1;
  pvVar6 = (void *)0x0;
  pvVar5 = (void *)0x0;
  local_28 = 0;
  local_30 = 0;
  local_20 = 0;
  local_8 = 1;
  puVar3 = (ulonglong *)FUN_100151e0(&local_3c,&param_2,&DAT_101a7258,0,local_14);
  if (&local_28 != puVar3) {
    FUN_10006df0();
    local_30 = (int)puVar3[1];
    pvVar6 = *(void **)puVar3;
    pvVar5 = *(void **)((int)puVar3 + 4);
    local_28 = *puVar3;
    *(undefined4 *)puVar3 = 0;
    *(undefined4 *)((int)puVar3 + 4) = 0;
    *(undefined4 *)(puVar3 + 1) = 0;
    local_20 = local_30;
  }
  pvVar2 = pvVar6;
  if (local_3c != 0) {
    FUN_10005770(local_3c,local_38,&local_3c,local_18);
    FUN_1000fd80(local_3c,(local_34 - local_3c) / 0x18);
  }
  for (; pvVar2 != pvVar5; pvVar2 = (void *)((int)pvVar2 + 0x18)) {
    uVar7 = 0;
    FUN_10003b40(pvVar2,0,0xffffffff);
    iVar4 = FUN_10015430(uVar7);
    if ((iVar4 == 0) || (0xff < local_18)) break;
    local_19 = (undefined1)local_18;
    FUN_10010a00(&local_19);
  }
  if (pvVar6 != (void *)0x0) {
    FUN_10005770(pvVar6,pvVar5,&local_28,local_40);
    uVar1 = (local_30 - (int)pvVar6) / 0x18;
    if (0xaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1016ec51();
    }
    pvVar5 = pvVar6;
    if (0xfff < uVar1 * 0x18) {
      if ((local_28 & 0x1f) != 0) {
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
  if (0xf < in_stack_0000001c) {
    pvVar6 = param_2;
    if (0xfff < in_stack_0000001c + 1) {
      if (((uint)param_2 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
      pvVar6 = *(void **)((int)param_2 + -4);
      if (param_2 <= pvVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
      if ((uint)((int)param_2 - (int)pvVar6) < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
      if (0x23 < (uint)((int)param_2 - (int)pvVar6)) {
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

