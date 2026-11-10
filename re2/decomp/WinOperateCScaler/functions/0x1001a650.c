// rea decompile_all
// name: FUN_1001a650
// address: 0x1001a650
// body: available
// range: 0x1001a650-0x1001a770 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001a6ee to 0x1015501f FUN_1015501f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1001a72c to 0x1015501f FUN_1015501f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1001a76c to 0x1015501f FUN_1015501f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001a650(undefined4 param_1,char param_2)

{
  char cVar1;
  undefined1 uVar2;
  lconv *plVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  char *pcVar9;
  uint uStack_58;
  _Cvtvec local_48;
  lconv *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10196020;
  local_10 = ExceptionList;
  uStack_58 = DAT_10201fec ^ (uint)&stack0xfffffffc;
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
    ppuVar6 = (undefined **)plVar3->grouping;
  }
  else {
    ppuVar6 = &PTR_101a6410;
  }
  __Getcvt(&local_48);
  ppuVar8 = ppuVar6;
  do {
    cVar1 = *(char *)ppuVar8;
    ppuVar8 = (undefined **)((int)ppuVar8 + 1);
  } while (cVar1 != '\0');
  pcVar9 = (char *)((int)ppuVar8 + (1 - (int)((int)ppuVar6 + 1)));
  iVar4 = FUN_10175686(pcVar9,1);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1015501f();
  }
  if (pcVar9 != (char *)0x0) {
    iVar5 = iVar4 - (int)ppuVar6;
    do {
      cVar1 = *(char *)ppuVar6;
      ppuVar6 = (undefined **)((int)ppuVar6 + 1);
      *(char *)((int)ppuVar6 + iVar5 + -1) = cVar1;
      pcVar9 = pcVar9 + -1;
    } while (pcVar9 != (char *)0x0);
  }
  iVar5 = 6;
  *(int *)(in_ECX + 8) = iVar4;
  pcVar9 = "false";
  iVar4 = FUN_10175686(6,1);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1015501f();
  }
  do {
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar9[iVar4 + -0x101a784d] = cVar1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = 5;
  *(int *)(in_ECX + 0x10) = iVar4;
  puVar7 = &DAT_101a7854;
  iVar4 = FUN_10175686(5,1);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1015501f();
  }
  do {
    uVar2 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar7[iVar4 + -0x101a7855] = uVar2;
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

