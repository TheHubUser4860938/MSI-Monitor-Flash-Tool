// rea decompile_all
// name: FUN_00414840
// address: 0x414840
// body: available
// range: 0x414840-0x4148b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00414840(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  int iVar4;
  
  iVar4 = 0;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  iVar1 = *(int *)(*in_ECX + -0xc);
  if (iVar1 <= iVar4) {
    FUN_00415c00(in_ECX);
    return param_1;
  }
  piVar3 = *(int **)(*in_ECX + -0x10);
  if (piVar3 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar3 + 0x10))();
    if (iVar2 != 0) goto LAB_00414894;
  }
  piVar3 = (int *)FUN_004295fe();
  iVar2 = (**(code **)(*piVar3 + 0x10))();
LAB_00414894:
  FUN_004158a0(*in_ECX + (iVar1 - iVar4) * 2,iVar4,iVar2);
  return param_1;
}

