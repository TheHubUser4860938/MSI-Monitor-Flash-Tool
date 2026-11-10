// rea decompile_all
// name: OnRequestPositionChange
// address: 0x530de0
// body: available
// range: 0x530de0-0x530e10 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x530e08 to 0x530fc4 COleServerDoc::RequestPositionChange (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: virtual void __thiscall COleDocIPFrameWnd::OnRequestPositionChange(struct tagRECT
   const *)
    protected: virtual void __thiscall COleIPFrameWnd::OnRequestPositionChange(struct tagRECT const
   *)
   
   Library: Visual Studio 2015 Release */

void OnRequestPositionChange(tagRECT *param_1)

{
  code *pcVar1;
  COleServerDoc *this;
  int *in_ECX;
  
  pcVar1 = *(code **)(*in_ECX + 0x16c);
  guard_check_icall();
  this = (COleServerDoc *)(*pcVar1)();
  if (*(int *)(this + 0x15c) == 0) {
    COleServerDoc::RequestPositionChange(this,param_1);
    return;
  }
  return;
}

