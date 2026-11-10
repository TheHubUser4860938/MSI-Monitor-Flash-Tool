// rea decompile_all
// name: CMFCToolBarsToolsPropertyPage::CMFCToolBarsToolsPropertyPage
// address: 0x1016e5b2
// body: available
// range: 0x1016e5b2-0x1016e70c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCToolBarsToolsPropertyPage::CMFCToolBarsToolsPropertyPage(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarsToolsPropertyPage::CMFCToolBarsToolsPropertyPage(CMFCToolBarsToolsPropertyPage *this)

{
  undefined4 uVar1;
  
  CPropertyPage::CPropertyPage((CPropertyPage *)this,0x4220,0,0x38);
  *(undefined ***)this = vftable;
  CMFCMenuButton::CMFCMenuButton((CMFCMenuButton *)(this + 0xc0));
  CMFCMenuButton::CMFCMenuButton((CMFCMenuButton *)(this + 0x888));
  CWnd::CWnd((CWnd *)(this + 0x1050));
  *(undefined ***)(this + 0x1050) = CEdit::vftable;
  CWnd::CWnd((CWnd *)(this + 0x10d0));
  *(undefined ***)(this + 0x10d0) = CEdit::vftable;
  CWnd::CWnd((CWnd *)(this + 0x1150));
  *(undefined ***)(this + 0x1150) = CEdit::vftable;
  CWnd::CWnd((CWnd *)(this + 0x11d0));
  *(undefined ***)(this + 0x11d0) = CButton::vftable;
  CVSToolsListBox::CVSToolsListBox((CVSToolsListBox *)(this + 0x1250),this);
  uVar1 = FUN_10048e90();
  FUN_10034c30(uVar1);
  uVar1 = FUN_10048e90();
  FUN_10034c30(uVar1);
  uVar1 = FUN_10048e90();
  FUN_10034c30(uVar1);
  *(undefined4 *)(this + 0x1468) = 0;
  *(undefined ***)(this + 0x1464) = CMenu::vftable;
  *(undefined4 *)(this + 0x1470) = 0;
  *(undefined ***)(this + 0x146c) = CMenu::vftable;
  FUN_100352a0(&DAT_101e24d0);
  FUN_100352a0(&DAT_101e24d0);
  FUN_100352a0(&DAT_101e24d0);
  *(undefined4 *)(this + 0x145c) = 0;
  *(undefined4 *)(this + 0x1460) = 0;
  return;
}

