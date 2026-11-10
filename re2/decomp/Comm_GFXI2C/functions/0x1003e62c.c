// rea decompile_all
// name: AfxFindMessageEntry
// address: 0x1003e62c
// body: available
// range: 0x1003e62c-0x1003e66d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    struct AFX_MSGMAP_ENTRY const * __stdcall AfxFindMessageEntry(struct AFX_MSGMAP_ENTRY const
   *,unsigned int,unsigned int,unsigned int)
   
   Library: Visual Studio 2008 Release */

AFX_MSGMAP_ENTRY *
AfxFindMessageEntry(AFX_MSGMAP_ENTRY *param_1,uint param_2,uint param_3,uint param_4)

{
  while( true ) {
    if (*(int *)(param_1 + 0x10) == 0) {
      return (AFX_MSGMAP_ENTRY *)0x0;
    }
    if ((((param_2 == *(uint *)param_1) && (param_3 == *(uint *)(param_1 + 4))) &&
        (*(uint *)(param_1 + 8) <= param_4)) && (param_4 <= *(uint *)(param_1 + 0xc))) break;
    param_1 = param_1 + 0x18;
  }
  return param_1;
}

