// rea decompile_all
// name: FUN_10009ec0
// address: 0x10009ec0
// body: available
// range: 0x10009ec0-0x10009f69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10009f68 to 0x10009f9a FUN_10009f9a (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10009fac) */
/* WARNING: Removing unreachable block (ram,0x10009fbc) */
/* WARNING: Removing unreachable block (ram,0x10009fbf) */

void FUN_10009ec0(undefined4 param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  char cVar4;
  int *in_ECX;
  undefined4 extraout_ECX;
  undefined4 uVar5;
  longlong lVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c0f36;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  piVar3 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
  uVar5 = 0;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
    uVar5 = extraout_ECX;
  }
  local_8 = 0;
  cVar4 = FUN_1000b870(uVar5);
  if (((cVar4 != '\0') && (-1 < param_3)) && ((0 < param_3 || (param_2 != 0)))) {
    local_8 = 2;
    lVar6 = FUN_1000b4d0(param_1,param_2,param_3);
    puVar1 = (uint *)(in_ECX + 2);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + (uint)lVar6;
    in_ECX[3] = in_ECX[3] + (int)((ulonglong)lVar6 >> 0x20) + (uint)CARRY4(uVar2,(uint)lVar6);
    if (lVar6 != CONCAT44(param_3,param_2)) {
      FUN_10009f9a();
      return;
    }
  }
  local_8 = 4;
  piVar3 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = local_10;
  return;
}

