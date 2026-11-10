// rea decompile_all
// name: COleStreamFile::Abort
// address: 0x10169c3e
// body: available
// range: 0x10169c3e-0x10169c6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10169c67 to 0x10034ea0 FUN_10034ea0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  FUN_10034ea0();
  return;
}

