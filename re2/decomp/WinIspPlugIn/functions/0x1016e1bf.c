// rea decompile_all
// name: CMFCToolBarsListPropertyPage::CMFCToolBarsListPropertyPage
// address: 0x1016e1bf
// body: available
// range: 0x1016e1bf-0x1016e28c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCToolBarsListPropertyPage::CMFCToolBarsListPropertyPage(class CFrameWnd *)
   
   Library: Visual Studio 2015 Release */

CMFCToolBarsListPropertyPage * __thiscall
CMFCToolBarsListPropertyPage::CMFCToolBarsListPropertyPage
          (CMFCToolBarsListPropertyPage *this,CFrameWnd *param_1)

{
  CPropertyPage::CPropertyPage((CPropertyPage *)this,0x3ee9,0,0x38);
  *(undefined ***)this = vftable;
  CWnd::CWnd((CWnd *)(this + 0xc0));
  *(undefined ***)(this + 0xc0) = CButton::vftable;
  CWnd::CWnd((CWnd *)(this + 0x140));
  *(undefined ***)(this + 0x140) = CButton::vftable;
  CWnd::CWnd((CWnd *)(this + 0x1c0));
  *(undefined ***)(this + 0x1c0) = CButton::vftable;
  CWnd::CWnd((CWnd *)(this + 0x240));
  *(undefined ***)(this + 0x240) = CButton::vftable;
  CWnd::CWnd((CWnd *)(this + 0x2c0));
  *(undefined ***)(this + 0x2c0) = CButton::vftable;
  CMFCToolBarsListCheckBox::CMFCToolBarsListCheckBox((CMFCToolBarsListCheckBox *)(this + 0x340));
  *(CFrameWnd **)(this + 0x3ec) = param_1;
  *(undefined4 *)(this + 1000) = 0;
  *(undefined4 *)(this + 0x3e0) = 0;
  *(undefined4 *)(this + 0x3e4) = 0;
  return this;
}

