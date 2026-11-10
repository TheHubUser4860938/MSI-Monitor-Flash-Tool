// rea decompile_all
// name: CMFCPopupMenu::~CMFCPopupMenu
// address: 0x4c96d2
// body: available
// range: 0x4c96d2-0x4c97da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall CMFCPopupMenu::~CMFCPopupMenu(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCPopupMenu::~CMFCPopupMenu(CMFCPopupMenu *this)

{
  uint uVar1;
  BOOL BVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0059cae0;
  local_10 = ExceptionList;
  uVar1 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  if (*(CMFCRibbonBaseElement **)(this + 0x116c) != (CMFCRibbonBaseElement *)0x0) {
    CMFCRibbonBaseElement::SetDroppedDown
              (*(CMFCRibbonBaseElement **)(this + 0x116c),(CMFCPopupMenu *)0x0);
  }
  if ((*(int *)(this + 0xf38) != 0) && (*(HMENU *)(this + 0xf34) != (HMENU)0x0)) {
    DestroyMenu(*(HMENU *)(this + 0xf34));
  }
  if (*(HWND *)(this + 0x1170) != (HWND)0x0) {
    BVar2 = IsWindow(*(HWND *)(this + 0x1170));
    if (BVar2 != 0) {
      SendMessageW(*(HWND *)(this + 0x1170),0x10,0,0);
    }
  }
  CToolTipCtrl::~CToolTipCtrl((CToolTipCtrl *)(this + 0x1090));
  *(undefined ***)(this + 0x1068) = CBitmap::vftable;
  FUN_0040ee80(uVar1);
  *(undefined ***)(this + 0x1060) = CBitmap::vftable;
  FUN_0040ee80();
  *(undefined ***)(this + 0x1048) = CBitmap::vftable;
  FUN_0040ee80();
  *(undefined ***)(this + 0x1040) = CBitmap::vftable;
  FUN_0040ee80();
  *(undefined ***)(this + 0x1038) = CBitmap::vftable;
  FUN_0040ee80();
  CScrollBar::~CScrollBar((CScrollBar *)(this + 0xfb8));
  CMFCPopupMenuBar::~CMFCPopupMenuBar((CMFCPopupMenuBar *)(this + 0x160));
  FUN_0040efa0();
  CMiniFrameWnd::~CMiniFrameWnd((CMiniFrameWnd *)this);
  ExceptionList = local_10;
  return;
}

