// rea decompile_all
// name: CCmdTarget::GetEntryCount
// address: 0x10164c77
// body: available
// range: 0x10164c77-0x10164ca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: static unsigned int __stdcall CCmdTarget::GetEntryCount(struct AFX_DISPMAP const *)
   
   Library: Visual Studio 2015 Release */

uint CCmdTarget::GetEntryCount(AFX_DISPMAP *param_1)

{
  int iVar1;
  
  if (**(int **)(param_1 + 8) == -1) {
    for (iVar1 = *(int *)(param_1 + 4); *(int *)(iVar1 + 0x18) != -1; iVar1 = iVar1 + 0x20) {
    }
    **(int **)(param_1 + 8) = iVar1 - *(int *)(param_1 + 4) >> 5;
  }
  return **(uint **)(param_1 + 8);
}

