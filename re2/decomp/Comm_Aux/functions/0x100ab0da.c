// rea decompile_all
// name: _AFX_MOUSEANCHORWND::SetBitmap
// address: 0x100ab0da
// body: available
// range: 0x100ab0da-0x100ab108 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall _AFX_MOUSEANCHORWND::SetBitmap(unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall _AFX_MOUSEANCHORWND::SetBitmap(_AFX_MOUSEANCHORWND *this,uint param_1)

{
  AFX_MODULE_STATE *pAVar1;
  HCURSOR pHVar2;
  
  pAVar1 = AfxGetModuleState();
  pHVar2 = LoadCursorW(*(HINSTANCE *)(pAVar1 + 0xc),(LPCWSTR)(param_1 & 0xffff));
  *(uint *)(this + 0x9c) = param_1;
  *(HCURSOR *)(this + 0xa0) = pHVar2;
  return;
}

