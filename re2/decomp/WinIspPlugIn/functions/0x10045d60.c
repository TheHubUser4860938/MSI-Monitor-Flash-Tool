// rea decompile_all
// name: FUN_10045d60
// address: 0x10045d60
// body: available
// range: 0x10045d60-0x10045e9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10045e1a to 0x10045ed0 FUN_10045ed0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10045e53 to 0x10045ed0 FUN_10045ed0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10045e5a to 0x10045ed0 FUN_10045ed0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10045e77 to 0x10045ed0 FUN_10045ed0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10045d60(short *param_1,undefined4 param_2,undefined4 param_3,short param_4)

{
  uint *puVar1;
  int *piVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  int *in_ECX;
  undefined4 extraout_ECX;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c3f46;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar8 = 0;
  local_18 = 0;
  in_ECX[2] = 0;
  iVar7 = 0x400;
  in_ECX[3] = 0;
  piVar2 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
  uVar6 = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
    uVar6 = extraout_ECX;
  }
  local_8 = 0;
  cVar3 = FUN_1000b870(uVar6);
  local_8 = 1;
  if (cVar3 != '\0') {
    local_8 = 2;
    piVar2 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
    if ((*(short **)piVar2[7] == (short *)0x0) || (*(int *)piVar2[0xb] < 1)) {
      sVar4 = (**(code **)(*piVar2 + 0x18))();
    }
    else {
      sVar4 = **(short **)piVar2[7];
    }
    while( true ) {
      if (sVar4 == -1) {
        FUN_10045ed0();
        return;
      }
      if (sVar4 == param_4) break;
      bVar9 = iVar7 != 0;
      iVar7 = iVar7 + -1;
      local_18 = local_18 + -1 + (uint)bVar9;
      if ((local_18 < 1) && ((local_18 < 0 || (iVar7 == 0)))) {
        FUN_10045ed0();
        return;
      }
      *param_1 = sVar4;
      param_1 = param_1 + 1;
      puVar1 = (uint *)(in_ECX + 2);
      uVar8 = *puVar1;
      *puVar1 = *puVar1 + 1;
      in_ECX[3] = in_ECX[3] + (uint)(0xfffffffe < uVar8);
      sVar4 = FUN_1003fd00();
    }
    puVar1 = (uint *)(in_ECX + 2);
    uVar8 = *puVar1;
    *puVar1 = *puVar1 + 1;
    in_ECX[3] = in_ECX[3] + (uint)(0xfffffffe < uVar8);
    piVar2 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
    if (*(int *)piVar2[7] != 0) {
      iVar7 = *(int *)piVar2[0xb];
      if (0 < iVar7) {
        *(int *)piVar2[0xb] = iVar7 + -1;
        *(int *)piVar2[7] = *(int *)piVar2[7] + 2;
        FUN_10045ed0();
        return;
      }
    }
    (**(code **)(*piVar2 + 0x1c))();
    FUN_10045ed0();
    return;
  }
  *param_1 = 0;
  if (in_ECX[2] == 0 && in_ECX[3] == 0) {
    uVar8 = 2;
  }
  if (uVar8 != 0) {
    uVar8 = uVar8 | *(uint *)((int)in_ECX + *(int *)(*in_ECX + 4) + 0xc);
    uVar5 = uVar8 | 4;
    if (*(int *)((int)in_ECX + *(int *)(*in_ECX + 4) + 0x38) != 0) {
      uVar5 = uVar8;
    }
    FUN_100071e0(uVar5,0);
  }
  local_8 = 4;
  piVar2 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = local_10;
  return;
}

