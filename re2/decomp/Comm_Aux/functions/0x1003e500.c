// rea decompile_all
// name: FUN_1003e500
// address: 0x1003e500
// body: available
// range: 0x1003e500-0x1003e91d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003e55c to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1003e7ee) */
/* WARNING: Removing unreachable block (ram,0x1003e7f3) */
/* WARNING: Removing unreachable block (ram,0x1003e7f8) */
/* WARNING: Removing unreachable block (ram,0x1003e8b8) */
/* WARNING: Removing unreachable block (ram,0x1003e8c1) */
/* WARNING: Removing unreachable block (ram,0x1003e8ca) */
/* WARNING: Removing unreachable block (ram,0x1003e7d5) */
/* WARNING: Removing unreachable block (ram,0x1003e7de) */
/* WARNING: Removing unreachable block (ram,0x1003e7fc) */
/* WARNING: Removing unreachable block (ram,0x1003e863) */
/* WARNING: Removing unreachable block (ram,0x1003e805) */
/* WARNING: Removing unreachable block (ram,0x1003e917) */
/* WARNING: Removing unreachable block (ram,0x1003e812) */

void FUN_1003e500(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_ECX;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 local_130 [268];
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_101a0f81;
  local_1c = ExceptionList;
  local_24 = DAT_10206460 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  piVar1 = (int *)FUN_10048e90();
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_100351a0();
  }
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0xc))();
  local_14 = 0;
  _memset(local_130 + 1,0,0x101);
  local_130[1] = (undefined1)param_2;
  uVar7 = param_4 + 2;
  local_130[0] = (undefined1)((uint)param_2 >> 8);
  FUN_10181570(local_130 + 2);
  iVar9 = 0;
  iVar3 = (int)(uVar7 + ((int)uVar7 >> 0x1f & 0xfU)) >> 4;
  if (0 < iVar3) {
    uVar5 = uVar7 & 0x8000000f;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffff0) + 1;
    }
    puVar8 = local_130;
    do {
      if ((uVar5 == 0) && (iVar9 == iVar3 + -1)) {
        local_140 = 0;
        uStack_13c = 0;
        uStack_138 = 0;
        uStack_134 = 0;
        uVar6 = 0;
        do {
          *(undefined1 *)((int)&local_140 + uVar6) = puVar8[uVar6];
          uVar6 = uVar6 + 1;
        } while (uVar6 < 0x10);
      }
      else {
        local_140 = 0;
        uStack_13c = 0;
        uStack_138 = 0;
        uStack_134 = 0;
        uVar6 = 0;
        do {
          *(undefined1 *)((int)&local_140 + uVar6) = puVar8[uVar6];
          uVar6 = uVar6 + 1;
        } while (uVar6 < 0x10);
      }
      iVar4 = (**(code **)(*(int *)*in_ECX + 0xb0))((int *)*in_ECX,&DAT_101e2428,0x20);
      if (iVar4 < 0) goto LAB_1003e874;
      iVar9 = iVar9 + 1;
      puVar8 = puVar8 + 0x10;
    } while (iVar9 < iVar3);
  }
  uVar7 = uVar7 & 0x8000000f;
  if ((int)uVar7 < 0) {
    uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
  }
  if (uVar7 != 0) {
    uVar5 = 0;
    local_140 = 0;
    uStack_13c = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    if (uVar7 != 0) {
      do {
        *(undefined1 *)((int)&local_140 + uVar5) = local_130[uVar5 + iVar9 * 0x10];
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar7);
    }
    (**(code **)(*(int *)*in_ECX + 0xb0))((int *)*in_ECX,&DAT_101e2428,0x20);
  }
LAB_1003e874:
  local_14 = 0xffffffff;
  LOCK();
  piVar1 = puVar2 + 3;
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 == 1 || iVar3 + -1 < 0) {
    (**(code **)(*(int *)*puVar2 + 4))();
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}

