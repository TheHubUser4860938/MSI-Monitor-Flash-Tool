// rea decompile_all
// name: ___acrt_locale_free_numeric
// address: 0x5944c7
// body: available
// range: 0x5944c7-0x59452f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___acrt_locale_free_numeric
   
   Library: Visual Studio 2015 Release */

void ___acrt_locale_free_numeric(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_0060d0a8) {
      FID_conflict__free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_0060d0ac) {
      FID_conflict__free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_0060d0b0) {
      FID_conflict__free((undefined *)param_1[2]);
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_0060d0d8) {
      FID_conflict__free((undefined *)param_1[0xc]);
    }
    if ((undefined *)param_1[0xd] != PTR_DAT_0060d0dc) {
      FID_conflict__free((undefined *)param_1[0xd]);
    }
  }
  return;
}

