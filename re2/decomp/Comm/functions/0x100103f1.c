// rea decompile_all
// name: Catch_All@100103f1
// address: 0x100103f1
// body: available
// range: 0x100103f1-0x10010429 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10010429 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Catch_All_100103f1(void)

{
  code *pcVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x14);
  if (7 < (uint)puVar2[5]) {
    FUN_1000fe70(*puVar2,puVar2[5] + 1);
  }
  puVar2[5] = 7;
  puVar2[4] = 0;
  if (7 < (uint)puVar2[5]) {
    puVar2 = (undefined4 *)*puVar2;
  }
  *(undefined2 *)puVar2 = 0;
  __CxxThrowException_8(0,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

