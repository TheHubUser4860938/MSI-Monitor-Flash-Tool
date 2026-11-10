// rea decompile_all
// name: CMFCBaseTabCtrl::CMFCBaseTabCtrl
// address: 0x100677ed
// body: available
// range: 0x100677ed-0x100679fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCBaseTabCtrl::CMFCBaseTabCtrl(void)
   
   Library: Visual Studio 2015 Release */

CMFCBaseTabCtrl * __thiscall CMFCBaseTabCtrl::CMFCBaseTabCtrl(CMFCBaseTabCtrl *this)

{
  CWnd::CWnd((CWnd *)this);
  *(undefined ***)this = vftable;
  CPtrArray::CPtrArray((CPtrArray *)(this + 0x94));
  CArray<int,int>::CArray<int,int>((CArray<int,int> *)(this + 0xa8));
  CImageList::CImageList((CImageList *)(this + 200));
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  CMap<HICON__*,HICON__*,int,int>::CMap<HICON__*,HICON__*,int,int>
            ((CMap<HICON__*,HICON__*,int,int> *)(this + 0xdc),10);
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined ***)(this + 0x144) = CBrush::vftable;
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined4 *)(this + 0x160) = 0;
  CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo>::CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo>
            ((CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo> *)(this + 0x168),10);
  COleDropTarget::COleDropTarget((COleDropTarget *)(this + 0x18c));
  *(undefined ***)(this + 0x18c) = CMFCTabDropTarget::vftable;
  *(undefined4 *)(this + 0x1c4) = 0;
  CArray<unsigned_long,unsigned_long>::CArray<unsigned_long,unsigned_long>
            ((CArray<unsigned_long,unsigned_long> *)(this + 0x1c8));
  ((LPRECT)(this + 0x200))->left = 0;
  *(undefined4 *)(this + 0x204) = 0;
  *(undefined4 *)(this + 0x208) = 0;
  *(undefined4 *)(this + 0x20c) = 0;
  CAccessibilityData::CAccessibilityData((CAccessibilityData *)(this + 0x210));
  *(undefined4 *)(this + 0x10c) = 2;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0xc0) = 0xffffffff;
  *(undefined4 *)(this + 0xc4) = 0xffffffff;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0x104) = 0xffffffff;
  *(undefined4 *)(this + 0x108) = 1;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x120) = 1;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x114) = 0xffffffff;
  *(undefined4 *)(this + 0x118) = 0xffffffff;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x128) = 1;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x13c) = 0xffffffff;
  *(undefined4 *)(this + 0x140) = 0xffffffff;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x14c) = 0xffffffff;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1e0) = 1;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x1e4) = 0xffffffff;
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x1ec) = 0;
  *(undefined4 *)(this + 0x24c) = 0;
  *(undefined4 *)(this + 0x1f0) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 500) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x1f8) = 0;
  *(undefined4 *)(this + 0x1fc) = 0;
  SetRectEmpty((LPRECT)(this + 0x200));
  this[0x24] = (CMFCBaseTabCtrl)0x1;
  return this;
}

