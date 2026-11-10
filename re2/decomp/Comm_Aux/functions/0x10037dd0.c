// rea decompile_all
// name: FUN_10037dd0
// address: 0x10037dd0
// body: available
// range: 0x10037dd0-0x10037eb5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037dd0(CArchive *param_1)

{
  ulong uVar1;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int *piVar3;
  undefined1 local_2c [28];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a08c3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    for (uVar1 = CArchive::ReadCount(param_1); uVar1 != 0; uVar1 = uVar1 - 1) {
      _eh_vector_constructor_iterator_(local_2c,0x1c,1,FUN_10036030,FUN_100360d0);
      local_8 = 0;
      FUN_10037f40(extraout_ECX_01);
      FUN_10037c50(local_2c);
      local_8 = 0xffffffff;
      _eh_vector_destructor_iterator_(local_2c,0x1c,1,FUN_100360d0);
    }
  }
  else {
    CArchive::WriteCount(param_1,*(ulong *)(in_ECX + 0xc));
    piVar3 = *(int **)(in_ECX + 4);
    uVar2 = extraout_ECX;
    if (piVar3 != (int *)0x0) {
      do {
        FUN_10037f40(uVar2);
        piVar3 = (int *)*piVar3;
        uVar2 = extraout_ECX_00;
      } while (piVar3 != (int *)0x0);
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}

