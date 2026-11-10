// rea decompile_all
// name: CMFCToolBarButtonsListButton::CMFCToolBarButtonsListButton
// address: 0x1016a587
// body: available
// range: 0x1016a587-0x1016a60c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCToolBarButtonsListButton::CMFCToolBarButtonsListButton(void)
   
   Library: Visual Studio 2015 Release */

CMFCToolBarButtonsListButton * __thiscall
CMFCToolBarButtonsListButton::CMFCToolBarButtonsListButton(CMFCToolBarButtonsListButton *this)

{
  CWnd::CWnd((CWnd *)this);
  *(undefined ***)this = vftable;
  CObList::CObList((CObList *)(this + 0x80),10);
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  CWnd::CWnd((CWnd *)(this + 0xa8));
  *(undefined ***)(this + 0xa8) = CScrollBar::vftable;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  return this;
}

