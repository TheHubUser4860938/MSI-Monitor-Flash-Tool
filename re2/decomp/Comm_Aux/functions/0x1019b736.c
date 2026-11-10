// rea decompile_all
// name: setSBCS
// address: 0x1019b736
// body: available
// range: 0x1019b736-0x1019b79a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __cdecl setSBCS(struct __crt_multibyte_data *)
   
   Library: Visual Studio 2015 Release */

void __cdecl setSBCS(__crt_multibyte_data *param_1)

{
  int iVar1;
  __crt_multibyte_data *p_Var2;
  
  p_Var2 = param_1 + 0x18;
  _memset(p_Var2,0,0x101);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  iVar1 = 0x101;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  do {
    *p_Var2 = p_Var2[(int)&DAT_10206b00 - (int)param_1];
    p_Var2 = p_Var2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  p_Var2 = param_1 + 0x119;
  iVar1 = 0x100;
  do {
    *p_Var2 = p_Var2[(int)&DAT_10206b00 - (int)param_1];
    p_Var2 = p_Var2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

