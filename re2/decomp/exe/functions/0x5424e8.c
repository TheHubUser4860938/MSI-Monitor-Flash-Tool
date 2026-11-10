// rea decompile_all
// name: COleStreamFile::Abort
// address: 0x5424e8
// body: available
// range: 0x5424e8-0x542515 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x542511 to 0x415d60 FUN_00415d60 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall COleStreamFile::Abort(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall COleStreamFile::Abort(COleStreamFile *this)

{
  _func_5021 *p_Var1;
  IID *unaff_ESI;
  void **unaff_EDI;
  IUnknown *This;
  
  This = *(IUnknown **)(this + 0x14);
  if (This != (IUnknown *)0x0) {
    p_Var1 = This->lpVtbl[3].QueryInterface;
    guard_check_icall();
    (*p_Var1)(This,unaff_ESI,unaff_EDI);
    _AfxRelease((IUnknown **)(this + 0x14));
  }
  FUN_00415d60();
  return;
}

