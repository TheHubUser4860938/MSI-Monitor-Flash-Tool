// rea decompile_all
// name: FUN_1004483b
// address: 0x1004483b
// body: available
// range: 0x1004483b-0x10044872 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __thiscall
FUN_1004483b(void *this,int *param_1,int param_2,int param_3,LPCWSTR param_4,int param_5,int param_6
            ,INT *param_7,int param_8)

{
  LONG LVar1;
  
  LVar1 = TabbedTextOutW(*(HDC *)((int)this + 4),param_2,param_3,param_4,param_5,param_6,param_7,
                         param_8);
  param_1[1] = (int)(short)((uint)LVar1 >> 0x10);
  *param_1 = (int)(short)LVar1;
  return param_1;
}

