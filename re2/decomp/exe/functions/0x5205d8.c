// rea decompile_all
// name: FUN_005205d8
// address: 0x5205d8
// body: available
// range: 0x5205d8-0x5206b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005205d8(undefined4 param_1,undefined4 param_2)

{
  double dVar1;
  AFX_GLOBAL_DATA *pAVar2;
  int in_ECX;
  
  pAVar2 = GetGlobalData();
  if (*(int *)(pAVar2 + 0x1e8) == 0) {
    dVar1 = 1.0;
  }
  else {
    dVar1 = *(double *)(pAVar2 + 0x1e0);
  }
  if (dVar1 != 1.0) {
    GetGlobalData();
    param_1 = FUN_0055bce0();
    GetGlobalData();
    param_2 = FUN_0055bce0();
  }
  *(undefined4 *)(in_ECX + 0x3f4) = param_1;
  *(undefined4 *)(in_ECX + 0x3f8) = param_2;
  if ((*(int *)(in_ECX + 0x3d0) == 0) || (*(int *)(in_ECX + 0x3b4) < 1)) {
    *(undefined4 *)(in_ECX + 0x254) = param_1;
    *(undefined4 *)(in_ECX + 600) = param_2;
  }
  else {
    *(undefined4 *)(in_ECX + 0x254) = param_1;
    *(int *)(in_ECX + 600) = *(int *)(in_ECX + 0x3f8) + -3;
  }
  return;
}

