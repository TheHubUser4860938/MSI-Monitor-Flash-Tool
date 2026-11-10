// rea decompile_all
// name: FUN_0040cdf0
// address: 0x40cdf0
// body: available
// range: 0x40cdf0-0x40ce98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040cdf0(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  undefined4 extraout_ECX;
  int iVar3;
  int iVar4;
  uint local_8;
  
  iVar2 = FUN_0040d320(param_1);
  local_8 = local_8 & 0xffffff00;
  FUN_0040e220(iVar2,extraout_ECX,local_8,extraout_ECX);
  iVar1 = in_ECX[1];
  iVar4 = *in_ECX;
  iVar3 = iVar1 - iVar4;
  if (iVar4 != 0) {
    for (; iVar4 != iVar1; iVar4 = iVar4 + 0x18) {
      FUN_004033e0();
    }
    FUN_0040cd90(*in_ECX,(in_ECX[2] - *in_ECX) / 0x18);
  }
  in_ECX[2] = iVar2 + param_1 * 0x18;
  in_ECX[1] = iVar2 + (iVar3 / 0x18) * 0x18;
  *in_ECX = iVar2;
  return;
}

