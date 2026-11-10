// rea decompile_all
// name: CMFCToolBarsKeyboardPropertyPage::CMFCToolBarsKeyboardPropertyPage
// address: 0x101396fb
// body: available
// range: 0x101396fb-0x1013989a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCToolBarsKeyboardPropertyPage::CMFCToolBarsKeyboardPropertyPage(class
   CFrameWnd *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarsKeyboardPropertyPage::CMFCToolBarsKeyboardPropertyPage
          (CMFCToolBarsKeyboardPropertyPage *this,CFrameWnd *param_1,int param_2)

{
  undefined4 uVar1;
  
  CPropertyPage::CPropertyPage((CPropertyPage *)this,0x3f08,0,0x38);
  *(undefined ***)this = vftable;
  CWnd::CWnd((CWnd *)(this + 0xc0));
  *(undefined ***)(this + 0xc0) = CStatic::vftable;
  CMFCAcceleratorKeyAssignCtrl::CMFCAcceleratorKeyAssignCtrl
            ((CMFCAcceleratorKeyAssignCtrl *)(this + 0x140));
  CWnd::CWnd((CWnd *)(this + 0x1d8));
  *(undefined ***)(this + 0x1d8) = CComboBox::vftable;
  CWnd::CWnd((CWnd *)(this + 600));
  *(undefined ***)(this + 600) = CStatic::vftable;
  CWnd::CWnd((CWnd *)(this + 0x2d8));
  *(undefined ***)(this + 0x2d8) = CButton::vftable;
  CWnd::CWnd((CWnd *)(this + 0x358));
  *(undefined ***)(this + 0x358) = CListBox::vftable;
  CWnd::CWnd((CWnd *)(this + 0x3d8));
  *(undefined ***)(this + 0x3d8) = CListBox::vftable;
  CWnd::CWnd((CWnd *)(this + 0x458));
  *(undefined ***)(this + 0x458) = CComboBox::vftable;
  CWnd::CWnd((CWnd *)(this + 0x4d8));
  *(undefined ***)(this + 0x4d8) = CButton::vftable;
  uVar1 = FUN_10013071();
  FUN_10003190(uVar1);
  uVar1 = FUN_10013071();
  FUN_10003190(uVar1);
  *(int *)(this + 0x570) = param_2;
  *(CFrameWnd **)(this + 0x57c) = param_1;
  uVar1 = FUN_10013071();
  FUN_10003190(uVar1);
  FUN_10003780(&DAT_101b5ebc);
  FUN_10003780(&DAT_101b5ebc);
  *(undefined4 *)(this + 0x560) = 0;
  *(undefined4 *)(this + 0x564) = 0;
  *(undefined4 *)(this + 0x56c) = 0;
  *(undefined4 *)(this + 0x574) = 0;
  *(undefined4 *)(this + 0x578) = 0;
  *(undefined4 *)(this + 0x568) = 0;
  return;
}

