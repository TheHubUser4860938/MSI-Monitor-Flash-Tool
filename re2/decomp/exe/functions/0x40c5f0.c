// rea decompile_all
// name: FUN_0040c5f0
// address: 0x40c5f0
// body: available
// range: 0x40c5f0-0x40c735 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c6b0 to 0x40c766 FUN_0040c766 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40c6e9 to 0x40c766 FUN_0040c766 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40c6f0 to 0x40c766 FUN_0040c766 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40c70d to 0x40c766 FUN_0040c766 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040c5f0(short *param_1,undefined4 param_2,undefined4 param_3,short param_4)

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
  int local_1c;
  short *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059c886;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar8 = 0;
  in_ECX[2] = 0;
  iVar7 = 0x400;
  in_ECX[3] = 0;
  local_18 = param_1;
  local_1c = 0;
  piVar2 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
  uVar6 = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
    uVar6 = extraout_ECX;
  }
  local_8 = 0;
  cVar3 = FUN_00406a20(uVar6);
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
        FUN_0040c766();
        return;
      }
      if (sVar4 == param_4) break;
      bVar9 = iVar7 != 0;
      iVar7 = iVar7 + -1;
      local_1c = local_1c + -1 + (uint)bVar9;
      if ((local_1c < 1) && ((local_1c < 0 || (iVar7 == 0)))) {
        FUN_0040c766();
        return;
      }
      *local_18 = sVar4;
      local_18 = local_18 + 1;
      puVar1 = (uint *)(in_ECX + 2);
      uVar8 = *puVar1;
      *puVar1 = *puVar1 + 1;
      in_ECX[3] = in_ECX[3] + (uint)(0xfffffffe < uVar8);
      sVar4 = FUN_0040cea0();
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
        FUN_0040c766();
        return;
      }
    }
    (**(code **)(*piVar2 + 0x1c))();
    FUN_0040c766();
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
    FUN_00402a10(uVar5,0);
  }
  local_8 = 4;
  piVar2 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = local_10;
  return;
}

