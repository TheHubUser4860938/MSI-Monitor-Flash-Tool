// rea decompile_all
// name: FUN_1000fa80
// address: 0x1000fa80
// body: available
// range: 0x1000fa80-0x1000fb03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000fa80(int *param_1)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = (**(code **)(*param_1 + 0xc))();
  if (cVar1 != '\0') {
    *(undefined4 *)(in_ECX + 0x38) = 0;
    return;
  }
  *(int **)(in_ECX + 0x38) = param_1;
  *(int *)(in_ECX + 0xc) = in_ECX + 4;
  *(undefined4 **)(in_ECX + 0x10) = (undefined4 *)(in_ECX + 8);
  *(int *)(in_ECX + 0x1c) = in_ECX + 0x14;
  *(int *)(in_ECX + 0x20) = in_ECX + 0x18;
  *(int *)(in_ECX + 0x2c) = in_ECX + 0x24;
  *(int *)(in_ECX + 0x30) = in_ECX + 0x28;
  *(undefined4 *)(in_ECX + 8) = 0;
  **(undefined4 **)(in_ECX + 0x20) = 0;
  **(undefined4 **)(in_ECX + 0x30) = 0;
  **(undefined4 **)(in_ECX + 0xc) = 0;
  **(undefined4 **)(in_ECX + 0x1c) = 0;
  **(undefined4 **)(in_ECX + 0x2c) = 0;
  return;
}

