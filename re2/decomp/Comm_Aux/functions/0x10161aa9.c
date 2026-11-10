// rea decompile_all
// name: COleIPFrameWnd::OnDestroy
// address: 0x10161aa9
// body: available
// range: 0x10161aa9-0x10161b08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10161b04 to 0x100bc8f5 CFrameWnd::OnDestroy (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall COleIPFrameWnd::OnDestroy(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall COleIPFrameWnd::OnDestroy(COleIPFrameWnd *this)

{
  code *pcVar1;
  CDocument *this_00;
  
  pcVar1 = *(code **)(*(int *)this + 0x16c);
  guard_check_icall();
  this_00 = (CDocument *)(*pcVar1)();
  if (this_00 != (CDocument *)0x0) {
    CDocument::DisconnectViews(this_00);
    pcVar1 = *(code **)(*(int *)this_00 + 0x84);
    guard_check_icall();
    (*pcVar1)();
  }
  if (*(CFrameWnd **)(this + 0x140) != (CFrameWnd *)0x0) {
    CFrameWnd::DestroyDockBars(*(CFrameWnd **)(this + 0x140));
  }
  if (*(CFrameWnd **)(this + 0x144) != (CFrameWnd *)0x0) {
    CFrameWnd::DestroyDockBars(*(CFrameWnd **)(this + 0x144));
  }
  CFrameWnd::OnDestroy((CFrameWnd *)this);
  return;
}

