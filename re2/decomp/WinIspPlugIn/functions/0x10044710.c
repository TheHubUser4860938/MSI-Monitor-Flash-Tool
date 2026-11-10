// rea decompile_all
// name: FUN_10044710
// address: 0x10044710
// body: available
// range: 0x10044710-0x100447b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10044710(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c0d36;
  local_10 = ExceptionList;
  uVar3 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = std::basic_filebuf<wchar_t,std::char_traits<wchar_t>_>::vftable;
  if ((in_ECX[0x13] != 0) && (*(undefined4 **)in_ECX[3] == in_ECX + 0xf)) {
    iVar1 = in_ECX[0x15];
    iVar2 = in_ECX[0x14];
    *(int *)in_ECX[3] = iVar2;
    *(int *)in_ECX[7] = iVar2;
    *(int *)in_ECX[0xb] = iVar1 - iVar2 >> 1;
  }
  if (*(char *)(in_ECX + 0x12) != '\0') {
    FUN_10045a80(uVar3);
  }
  *in_ECX = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::vftable;
  iVar1 = in_ECX[0xd];
  if (iVar1 != 0) {
    local_8 = 0;
    if (*(int **)(iVar1 + 4) != (int *)0x0) {
      puVar4 = (undefined4 *)(**(code **)(**(int **)(iVar1 + 4) + 8))();
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)(1);
      }
    }
    FUN_1017f662(iVar1,8);
  }
  ExceptionList = local_10;
  return;
}

