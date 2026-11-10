// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnDrawHeaderCtrlBorder
// address: 0x10148c39
// body: available
// range: 0x10148c39-0x10148c7c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10148c44 to 0x1008b4bc CMFCVisualManager::OnDrawHeaderCtrlBorder (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2003::OnDrawHeaderCtrlBorder(class
   CMFCHeaderCtrl *,class CDC *,class CRect &,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2003::OnDrawHeaderCtrlBorder
          (CMFCVisualManagerOffice2003 *this,CMFCHeaderCtrl *param_1,CDC *param_2,CRect *param_3,
          int param_4,int param_5)

{
  int iStateId;
  HDC hdc;
  
  if (*(HTHEME *)(this + 0x20) != (HTHEME)0x0) {
    iStateId = 1;
    if (param_4 == 0) {
      if (param_5 != 0) {
        iStateId = 2;
      }
    }
    else {
      iStateId = 3;
    }
    hdc = (HDC)0x0;
    if (param_2 != (CDC *)0x0) {
      hdc = *(HDC *)(param_2 + 4);
    }
    DrawThemeBackground(*(HTHEME *)(this + 0x20),hdc,1,iStateId,(LPCRECT)param_3,(LPCRECT)0x0);
    return;
  }
  CMFCVisualManager::OnDrawHeaderCtrlBorder
            ((CMFCVisualManager *)this,param_1,param_2,param_3,param_4,param_5);
  return;
}

