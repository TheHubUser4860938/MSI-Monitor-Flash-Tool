// rea decompile_all
// name: FUN_10036e10
// address: 0x10036e10
// body: available
// range: 0x10036e10-0x10036e66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


BOOL __cdecl
FUN_10036e10(LPCWSTR param_1,LPWSTR param_2,LPSECURITY_ATTRIBUTES param_3,
            LPSECURITY_ATTRIBUTES param_4,BOOL param_5,DWORD param_6,LPVOID param_7,LPCWSTR param_8,
            LPSTARTUPINFOW param_9,int param_10,LPPROCESS_INFORMATION param_11)

{
  int iVar1;
  BOOL BVar2;
  
  SetLastError(0);
  iVar1 = FUN_10036e70(param_1,param_2,param_10);
  if (iVar1 == 0) {
    BVar2 = 0;
  }
  else {
    BVar2 = CreateProcessW(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           param_11);
  }
  return BVar2;
}

