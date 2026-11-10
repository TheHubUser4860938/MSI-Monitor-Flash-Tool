// rea decompile_all
// name: FUN_00406ae0
// address: 0x406ae0
// body: available
// range: 0x406ae0-0x406c00 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x406b7e to 0x55c72e FUN_0055c72e (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x406bbc to 0x55c72e FUN_0055c72e (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x406bfc to 0x55c72e FUN_0055c72e (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00406ae0(undefined4 param_1,char param_2)

{
  char cVar1;
  undefined1 uVar2;
  lconv *plVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  char *pcVar6;
  undefined1 *puVar7;
  char *pcVar8;
  uint uStack_58;
  _Cvtvec local_48;
  lconv *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059c1e0;
  local_10 = ExceptionList;
  uStack_58 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_58;
  ExceptionList = &local_10;
  plVar3 = _localeconv();
  local_1c = plVar3;
  __Getcvt(&local_48);
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  local_8 = 0;
  if (param_2 == '\0') {
    pcVar6 = plVar3->grouping;
  }
  else {
    pcVar6 = "";
  }
  __Getcvt(&local_48);
  pcVar8 = pcVar6;
  do {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + (1 - (int)(pcVar6 + 1));
  iVar4 = FUN_005766bc(pcVar8,1);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0055c72e();
  }
  if (pcVar8 != (char *)0x0) {
    iVar5 = iVar4 - (int)pcVar6;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar6[iVar5 + -1] = cVar1;
      pcVar8 = pcVar8 + -1;
    } while (pcVar8 != (char *)0x0);
  }
  iVar5 = 6;
  *(int *)(in_ECX + 8) = iVar4;
  pcVar6 = "false";
  iVar4 = FUN_005766bc(6,1);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0055c72e();
  }
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar6[iVar4 + -0x5e87d1] = cVar1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = 5;
  *(int *)(in_ECX + 0x10) = iVar4;
  puVar7 = &DAT_005e87d8;
  iVar4 = FUN_005766bc(5,1);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0055c72e();
  }
  do {
    uVar2 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar7[iVar4 + -0x5e87d9] = uVar2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(int *)(in_ECX + 0x14) = iVar4;
  if (param_2 == '\0') {
    *(char *)(in_ECX + 0xc) = *local_1c->decimal_point;
    *(char *)(in_ECX + 0xd) = *local_1c->thousands_sep;
    ExceptionList = local_10;
    return;
  }
  *(undefined2 *)(in_ECX + 0xc) = 0x2c2e;
  ExceptionList = local_10;
  return;
}

