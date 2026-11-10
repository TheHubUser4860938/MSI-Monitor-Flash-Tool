// rea decompile_all
// name: CMFCToolBarsMenuPropertyPage::CMFCToolBarsMenuPropertyPage
// address: 0x51c99b
// body: available
// range: 0x51c99b-0x51cb76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCToolBarsMenuPropertyPage::CMFCToolBarsMenuPropertyPage(class CFrameWnd
   *,int)
   
   Library: Visual Studio 2015 Release */

CMFCToolBarsMenuPropertyPage * __thiscall
CMFCToolBarsMenuPropertyPage::CMFCToolBarsMenuPropertyPage
          (CMFCToolBarsMenuPropertyPage *this,CFrameWnd *param_1,int param_2)

{
  undefined4 uVar1;
  
  CPropertyPage::CPropertyPage((CPropertyPage *)this,0x3f06,0,0x38);
  *(undefined ***)this = vftable;
  CWnd::CWnd((CWnd *)(this + 0xc0));
  *(undefined ***)(this + 0xc0) = CStatic::vftable;
  CWnd::CWnd((CWnd *)(this + 0x140));
  *(undefined ***)(this + 0x140) = CStatic::vftable;
  CWnd::CWnd((CWnd *)(this + 0x1c0));
  *(undefined ***)(this + 0x1c0) = CStatic::vftable;
  CWnd::CWnd((CWnd *)(this + 0x240));
  *(undefined ***)(this + 0x240) = CStatic::vftable;
  CWnd::CWnd((CWnd *)(this + 0x2c0));
  *(undefined ***)(this + 0x2c0) = CButton::vftable;
  CWnd::CWnd((CWnd *)(this + 0x340));
  *(undefined ***)(this + 0x340) = CButton::vftable;
  CWnd::CWnd((CWnd *)(this + 0x3c0));
  *(undefined ***)(this + 0x3c0) = CButton::vftable;
  CWnd::CWnd((CWnd *)(this + 0x440));
  *(undefined ***)(this + 0x440) = CComboBox::vftable;
  CWnd::CWnd((CWnd *)(this + 0x4c0));
  *(undefined ***)(this + 0x4c0) = CComboBox::vftable;
  CWnd::CWnd((CWnd *)(this + 0x540));
  *(undefined ***)(this + 0x540) = CComboBox::vftable;
  uVar1 = FUN_004295fe();
  FUN_0040eb30(uVar1);
  uVar1 = FUN_004295fe();
  FUN_0040eb30(uVar1);
  uVar1 = FUN_004295fe();
  FUN_0040eb30(uVar1);
  *(CFrameWnd **)(this + 0x5dc) = param_1;
  *(int *)(this + 0x5f0) = param_2;
  FUN_00415ad0(&PTR_005e8934);
  FUN_00415ad0(&PTR_005e8934);
  FUN_00415ad0(&PTR_005e8934);
  *(undefined4 *)(this + 0x5cc) = DAT_00616b28;
  *(undefined4 *)(this + 0x5d0) = DAT_0060c72c;
  *(undefined4 *)(this + 0x5d4) = 0;
  *(undefined4 *)(this + 0x5e0) = 0;
  *(undefined4 *)(this + 0x5e4) = 0;
  *(undefined4 *)(this + 0x5d8) = 0;
  *(undefined4 *)(this + 0x5ec) = 0;
  *(undefined4 *)(this + 0x5e8) = 0;
  return this;
}

