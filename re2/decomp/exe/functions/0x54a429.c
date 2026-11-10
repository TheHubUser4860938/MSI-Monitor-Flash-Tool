// rea decompile_all
// name: CSmartDockingGroupGuidesManager::CSmartDockingGroupGuidesManager
// address: 0x54a429
// body: available
// range: 0x54a429-0x54a4a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CSmartDockingGroupGuidesManager::CSmartDockingGroupGuidesManager(void)
   
   Library: Visual Studio 2015 Release */

CSmartDockingGroupGuidesManager * __thiscall
CSmartDockingGroupGuidesManager::CSmartDockingGroupGuidesManager
          (CSmartDockingGroupGuidesManager *this)

{
  *(undefined ***)this = vftable;
  CSmartDockingGroupGuidesWnd::CSmartDockingGroupGuidesWnd
            ((CSmartDockingGroupGuidesWnd *)(this + 8));
  _eh_vector_constructor_iterator_
            (this + 0xa0,0x318,5,CSmartDockingGroupGuide::CSmartDockingGroupGuide,
             CSmartDockingGroupGuide::~CSmartDockingGroupGuide);
  CMFCToolBarImages::CMFCToolBarImages((CMFCToolBarImages *)(this + 0x1018));
  *(undefined4 *)(this + 0x1134) = 0;
  *(undefined ***)(this + 0x1130) = CRgn::vftable;
  *(undefined4 *)(this + 0x1138) = 0;
  *(undefined4 *)(this + 0x113c) = 0;
  *(undefined4 *)(this + 0x1140) = 0;
  return this;
}

