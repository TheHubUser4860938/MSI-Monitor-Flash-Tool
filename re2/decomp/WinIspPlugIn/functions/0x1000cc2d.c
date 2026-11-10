// rea decompile_all
// name: Catch_All@1000cc2d
// address: 0x1000cc2d
// body: available
// range: 0x1000cc2d-0x1000cc6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Catch_All_1000cc2d(void)

{
  void *_Memory;
  undefined4 *puVar1;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  FUN_1000ccb0(*(undefined4 *)(unaff_EBP + 0x14));
  __CxxThrowException_8(0,0);
  _Memory = *(void **)(unaff_EBP + 0x14);
  FUN_10048130();
  FID_conflict__free(_Memory);
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *puVar1 = unaff_ESI;
  *(undefined1 *)(puVar1 + 1) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

