// rea decompile_all
// name: ___acrt_locale_free_time
// address: 0x101bce1d
// body: available
// range: 0x101bce1d-0x101bcf00 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___acrt_locale_free_time
   
   Library: Visual Studio 2015 Release */

void ___acrt_locale_free_time(void **param_1)

{
  if (param_1 != (void **)0x0) {
    free_crt_array_internal(param_1,7);
    free_crt_array_internal(param_1 + 7,7);
    free_crt_array_internal(param_1 + 0xe,0xc);
    free_crt_array_internal(param_1 + 0x1a,0xc);
    free_crt_array_internal(param_1 + 0x26,2);
    FID_conflict__free(param_1[0x28]);
    FID_conflict__free(param_1[0x29]);
    FID_conflict__free(param_1[0x2a]);
    free_crt_array_internal(param_1 + 0x2d,7);
    free_crt_array_internal(param_1 + 0x34,7);
    free_crt_array_internal(param_1 + 0x3b,0xc);
    free_crt_array_internal(param_1 + 0x47,0xc);
    free_crt_array_internal(param_1 + 0x53,2);
    FID_conflict__free(param_1[0x55]);
    FID_conflict__free(param_1[0x56]);
    FID_conflict__free(param_1[0x57]);
    FID_conflict__free(param_1[0x58]);
  }
  return;
}

