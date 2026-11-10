// rea decompile_all
// name: CMFCPopupMenu::CMFCPopupMenu
// address: 0x10089526
// body: available
// range: 0x10089526-0x10089691 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCPopupMenu::CMFCPopupMenu(void)
   
   Library: Visual Studio 2015 Release */

CMFCPopupMenu * __thiscall CMFCPopupMenu::CMFCPopupMenu(CMFCPopupMenu *this)

{
  undefined4 uVar1;
  
  CMiniFrameWnd::CMiniFrameWnd((CMiniFrameWnd *)this);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  uVar1 = FUN_1001e20a();
  FUN_1001d224(uVar1);
  *(undefined4 *)(this + 0x154) = 0;
  CMFCPopupMenuBar::CMFCPopupMenuBar((CMFCPopupMenuBar *)(this + 0x160));
  *(undefined4 *)(this + 0xf64) = 0;
  *(undefined4 *)(this + 0xf68) = 0;
  *(undefined4 *)(this + 0xf84) = 0;
  *(undefined4 *)(this + 0xf88) = 0;
  *(undefined4 *)(this + 0xf8c) = 0;
  *(undefined4 *)(this + 0xf90) = 0;
  *(undefined4 *)(this + 0xf94) = 0;
  *(undefined4 *)(this + 0xf98) = 0;
  *(undefined4 *)(this + 0xf9c) = 0;
  *(undefined4 *)(this + 4000) = 0;
  CWnd::CWnd((CWnd *)(this + 0xfb8));
  *(undefined ***)(this + 0xfb8) = CScrollBar::vftable;
  *(undefined4 *)(this + 0x103c) = 0;
  *(undefined ***)(this + 0x1038) = CBitmap::vftable;
  *(undefined4 *)(this + 0x1044) = 0;
  *(undefined ***)(this + 0x1040) = CBitmap::vftable;
  *(undefined4 *)(this + 0x104c) = 0;
  *(undefined ***)(this + 0x1048) = CBitmap::vftable;
  *(undefined4 *)(this + 0x1064) = 0;
  *(undefined ***)(this + 0x1060) = CBitmap::vftable;
  *(undefined4 *)(this + 0x106c) = 0;
  *(undefined ***)(this + 0x1068) = CBitmap::vftable;
  *(undefined4 *)(this + 0x107c) = 0;
  *(undefined4 *)(this + 0x1080) = 0;
  *(undefined4 *)(this + 0x1084) = 0;
  *(undefined4 *)(this + 0x1088) = 0;
  CToolTipCtrl::CToolTipCtrl((CToolTipCtrl *)(this + 0x1090));
  *(undefined4 *)(this + 0x1140) = 0;
  *(undefined4 *)(this + 0x1144) = 0;
  *(undefined4 *)(this + 0x1148) = 0;
  *(undefined4 *)(this + 0x114c) = 0;
  *(undefined4 *)(this + 0x1150) = 0;
  *(undefined4 *)(this + 0x1154) = 0;
  *(undefined4 *)(this + 0x1158) = 0;
  *(undefined4 *)(this + 0x115c) = 0;
  Initialize(this);
  return this;
}

