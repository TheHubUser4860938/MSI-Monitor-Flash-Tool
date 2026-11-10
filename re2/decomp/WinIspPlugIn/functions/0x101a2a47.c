// rea decompile_all
// name: reset_buffers<>
// address: 0x101a2a47
// body: available
// range: 0x101a2a47-0x101a2a7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    void __cdecl reset_buffers<wchar_t,class <lambda_5d7deeb7b0e1acdaf1399616a4c940bf> >(struct
   `anonymous namespace'::component_buffers<wchar_t> * const,class
   <lambda_5d7deeb7b0e1acdaf1399616a4c940bf>)
    void __cdecl reset_buffers<wchar_t,class <lambda_b1695639fcc80704960aa67b3ee55b9c> >(struct
   `anonymous namespace'::component_buffers<wchar_t> * const,class
   <lambda_b1695639fcc80704960aa67b3ee55b9c>)
   
   Library: Visual Studio 2015 Release */

void reset_buffers<>(undefined4 *param_1)

{
  if ((undefined2 *)*param_1 != (undefined2 *)0x0) {
    *(undefined2 *)*param_1 = 0;
  }
  if ((undefined2 *)param_1[2] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[2] = 0;
  }
  if ((undefined2 *)param_1[4] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[4] = 0;
  }
  if ((undefined2 *)param_1[6] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[6] = 0;
  }
  return;
}

