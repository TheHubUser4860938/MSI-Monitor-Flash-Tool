// rea decompile_all
// name: CMFCToolBarsOptionsPropertyPage::CMFCToolBarsOptionsPropertyPage
// address: 0x10145b6c
// body: available
// range: 0x10145b6c-0x10145c83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCToolBarsOptionsPropertyPage::CMFCToolBarsOptionsPropertyPage(int)
   
   Library: Visual Studio 2015 Release */

CMFCToolBarsOptionsPropertyPage * __thiscall
CMFCToolBarsOptionsPropertyPage::CMFCToolBarsOptionsPropertyPage
          (CMFCToolBarsOptionsPropertyPage *this,int param_1)

{
  CPropertyPage::CPropertyPage((CPropertyPage *)this,0x3f09,0,0x38);
  *(undefined ***)this = vftable;
  CWnd::CWnd((CWnd *)(this + 0xc0));
  *(undefined ***)(this + 0xc0) = CButton::vftable;
  CWnd::CWnd((CWnd *)(this + 0x140));
  *(undefined ***)(this + 0x140) = CButton::vftable;
  CWnd::CWnd((CWnd *)(this + 0x1c0));
  *(undefined ***)(this + 0x1c0) = CButton::vftable;
  CWnd::CWnd((CWnd *)(this + 0x240));
  *(undefined ***)(this + 0x240) = CStatic::vftable;
  CWnd::CWnd((CWnd *)(this + 0x2c0));
  *(undefined ***)(this + 0x2c0) = CStatic::vftable;
  CWnd::CWnd((CWnd *)(this + 0x340));
  *(undefined ***)(this + 0x340) = CButton::vftable;
  CWnd::CWnd((CWnd *)(this + 0x3c0));
  *(undefined ***)(this + 0x3c0) = CButton::vftable;
  *(int *)(this + 0x454) = param_1;
  *(undefined4 *)(this + 0x440) = DAT_102015bc;
  *(undefined4 *)(this + 0x444) = DAT_102015c0;
  *(undefined4 *)(this + 0x448) = DAT_10201ad4;
  *(undefined4 *)(this + 0x44c) = DAT_10201ad8;
  *(undefined4 *)(this + 0x450) = DAT_10209cf8;
  return this;
}

