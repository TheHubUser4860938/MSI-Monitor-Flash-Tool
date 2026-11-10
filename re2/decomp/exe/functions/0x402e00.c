// rea decompile_all
// name: FUN_00402e00
// address: 0x402e00
// body: available
// range: 0x402e00-0x402e5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00402e00(byte param_1)

{
  undefined4 *in_ECX;
  undefined4 *puVar1;
  
  *in_ECX = CCpRsString::vftable;
  FUN_004033e0();
  puVar1 = in_ECX + 1;
  if (7 < (uint)in_ECX[6]) {
    FUN_004053c0(*puVar1,in_ECX[6] + 1);
  }
  in_ECX[6] = 7;
  in_ECX[5] = 0;
  if (7 < (uint)in_ECX[6]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined2 *)puVar1 = 0;
  if ((param_1 & 1) != 0) {
    FUN_0055b3de();
  }
  return;
}

