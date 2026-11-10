// rea decompile_all
// name: FUN_004498bf
// address: 0x4498bf
// body: available
// range: 0x4498bf-0x449914 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_004498bf(double param_1)

{
  float10 fVar1;
  float10 fVar2;
  double local_c;
  
  fVar2 = (float10)0;
  fVar1 = (float10)param_1;
  local_c = param_1;
  if (fVar1 < fVar2) {
    fVar1 = -fVar1;
    local_c = (double)fVar1;
  }
  if (fVar1 < (float10)3.0) {
    fVar1 = (float10)FUN_0044e86a((double)(fVar1 / (float10)3.0));
    fVar2 = (float10)FUN_0044e86a(local_c);
    fVar2 = fVar2 * (float10)(double)fVar1;
  }
  return fVar2;
}

