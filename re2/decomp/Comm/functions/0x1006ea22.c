// rea decompile_all
// name: CMFCTabCtrl::CMFCTabCtrl
// address: 0x1006ea22
// body: available
// range: 0x1006ea22-0x1006ec89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCTabCtrl::CMFCTabCtrl(void)
   
   Library: Visual Studio 2015 Release */

CMFCTabCtrl * __thiscall CMFCTabCtrl::CMFCTabCtrl(CMFCTabCtrl *this)

{
  CMFCBaseTabCtrl::CMFCBaseTabCtrl((CMFCBaseTabCtrl *)this);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 700) = 0;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2c4) = 0;
  *(undefined4 *)(this + 0x2c8) = 0;
  *(undefined4 *)(this + 0x2cc) = 0;
  *(undefined4 *)(this + 0x2d0) = 0;
  *(undefined4 *)(this + 0x2d4) = 0;
  *(undefined4 *)(this + 0x2d8) = 0;
  ((LPRECT)(this + 0x2dc))->left = 0;
  *(undefined4 *)(this + 0x2e0) = 0;
  *(undefined4 *)(this + 0x2e4) = 0;
  *(undefined4 *)(this + 0x2e8) = 0;
  ((LPRECT)(this + 0x2ec))->left = 0;
  *(undefined4 *)(this + 0x2f0) = 0;
  *(undefined4 *)(this + 0x2f4) = 0;
  *(undefined4 *)(this + 0x2f8) = 0;
  *(undefined4 *)(this + 0x2fc) = 0;
  *(undefined4 *)(this + 0x300) = 0;
  *(undefined4 *)(this + 0x304) = 0;
  *(undefined4 *)(this + 0x308) = 0;
  *(undefined4 *)(this + 0x30c) = 0;
  *(undefined4 *)(this + 0x310) = 0;
  *(undefined4 *)(this + 0x314) = 0;
  *(undefined4 *)(this + 0x318) = 0;
  *(undefined4 *)(this + 0x31c) = 0;
  *(undefined4 *)(this + 800) = 0;
  *(undefined4 *)(this + 0x324) = 0;
  *(undefined4 *)(this + 0x328) = 0;
  CWnd::CWnd((CWnd *)(this + 0x330));
  *(undefined ***)(this + 0x330) = CScrollBar::vftable;
  CMFCButton::CMFCButton((CMFCButton *)(this + 0x3b0));
  *(undefined ***)(this + 0x3b0) = CMFCTabButton::vftable;
  CMFCButton::CMFCButton((CMFCButton *)(this + 0xb58));
  *(undefined ***)(this + 0xb58) = CMFCTabButton::vftable;
  CMFCButton::CMFCButton((CMFCButton *)(this + 0x1300));
  *(undefined ***)(this + 0x1300) = CMFCTabButton::vftable;
  CMFCButton::CMFCButton((CMFCButton *)(this + 0x1aa8));
  *(undefined ***)(this + 0x1aa8) = CMFCTabButton::vftable;
  CMFCButton::CMFCButton((CMFCButton *)(this + 0x2250));
  *(undefined ***)(this + 0x2250) = CMFCTabButton::vftable;
  CList<HWND__*,HWND__*>::CList<HWND__*,HWND__*>((CList<HWND__*,HWND__*> *)(this + 0x29fc),10);
  *(undefined4 *)(this + 0xc0) = 0xffffffff;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0x250) = 0;
  *(undefined4 *)(this + 0x254) = 0;
  *(undefined4 *)(this + 600) = 0;
  *(undefined4 *)(this + 0x25c) = 0;
  *(undefined4 *)(this + 0x264) = 0;
  *(undefined4 *)(this + 0x268) = 0;
  *(undefined4 *)(this + 0x260) = 0;
  SetRectEmpty((LPRECT)(this + 0x2dc));
  SetRectEmpty((LPRECT)(this + 0x2ec));
  *(undefined4 *)(this + 0x2a4) = 0;
  *(undefined4 *)(this + 0x2b0) = 0;
  *(undefined4 *)(this + 0x2a8) = 0;
  *(undefined4 *)(this + 0x2ac) = 0;
  *(undefined4 *)(this + 0x2b4) = 0;
  *(undefined4 *)(this + 0x2a0) = 0;
  SetRectEmpty((LPRECT)(this + 700));
  *(undefined4 *)(this + 0x26c) = 0;
  *(undefined4 *)(this + 0x278) = 0;
  *(undefined4 *)(this + 0x270) = 1;
  *(undefined4 *)(this + 0x120) = 1;
  *(undefined4 *)(this + 0x274) = 1;
  *(undefined4 *)(this + 0x11c) = 1;
  *(undefined4 *)(this + 0x280) = 1;
  *(undefined4 *)(this + 0x27c) = 0;
  *(undefined4 *)(this + 0x284) = 0;
  *(undefined4 *)(this + 0x288) = 0;
  *(undefined4 *)(this + 0x290) = 0;
  *(undefined4 *)(this + 0x28c) = 0;
  *(undefined4 *)(this + 0x294) = 0;
  *(undefined4 *)(this + 0x2b8) = 0;
  *(undefined4 *)(this + 0x29f8) = 0;
  SetRectEmpty((LPRECT)(this + 0x2fc));
  SetRectEmpty((LPRECT)(this + 0x30c));
  SetRectEmpty((LPRECT)(this + 0x31c));
  *(undefined4 *)(this + 0x29c) = 0;
  *(undefined4 *)(this + 0x298) = 0;
  return this;
}

