// rea decompile_all
// name: FUN_1003e920
// address: 0x1003e920
// body: available
// range: 0x1003e920-0x1003ebfd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003e979 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1003e9f8) */
/* WARNING: Removing unreachable block (ram,0x1003e9fd) */
/* WARNING: Removing unreachable block (ram,0x1003ea06) */
/* WARNING: Removing unreachable block (ram,0x1003ea13) */
/* WARNING: Removing unreachable block (ram,0x1003ea1c) */
/* WARNING: Removing unreachable block (ram,0x1003eaa3) */

void FUN_1003e920(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_ECX;
  int iVar7;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_101a0fc0;
  local_1c = ExceptionList;
  uVar1 = DAT_10206460 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  piVar2 = (int *)FUN_10048e90();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_100351a0();
  }
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))();
  local_14 = 0;
  iVar4 = (**(code **)(*(int *)*in_ECX + 0xb0))();
  if (-1 < iVar4) {
    iVar7 = 0;
    iVar5 = (int)(param_4 + ((int)param_4 >> 0x1f & 0xfU)) >> 4;
    iVar4 = param_3;
    if (0 < iVar5) {
      do {
        iVar6 = (**(code **)(*(int *)*in_ECX + 0xac))((int *)*in_ECX,&DAT_101e2428,0x20);
        if (iVar6 < 0) goto LAB_1003ea62;
        FUN_10181570(iVar4);
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + 0x10;
      } while (iVar7 < iVar5);
    }
    param_4 = param_4 & 0x8000000f;
    if ((int)param_4 < 0) {
      param_4 = (param_4 - 1 | 0xfffffff0) + 1;
    }
    if (((param_4 != 0) &&
        (iVar4 = (**(code **)(*(int *)*in_ECX + 0xac))((int *)*in_ECX,&DAT_101e2428,0x20),
        -1 < iVar4)) && (param_4 != 0)) {
      FUN_10181570(iVar7 * 0x10 + param_3);
    }
  }
LAB_1003ea62:
  local_14 = 0xffffffff;
  LOCK();
  piVar2 = puVar3 + 3;
  iVar4 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(*(int *)*puVar3 + 4))();
  }
  ExceptionList = local_1c;
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffff0);
  return;
}

