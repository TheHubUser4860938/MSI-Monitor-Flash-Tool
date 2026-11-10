// rea decompile_all
// name: CPane::CPane
// address: 0x1004a2f7
// body: available
// range: 0x1004a2f7-0x1004a452 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: __thiscall CPane::CPane(void)
   
   Library: Visual Studio 2015 Release */

CPane * __thiscall CPane::CPane(CPane *this)

{
  CBasePane::CBasePane((CBasePane *)this);
  *(undefined ***)this = vftable;
  this[0x110] = (CPane)0x0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  ((LPRECT)(this + 0x150))->left = 0;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  this[0x170] = (CPane)0x0;
  *(undefined4 *)(this + 0x180) = 0;
  CMFCDragFrameImpl::CMFCDragFrameImpl((CMFCDragFrameImpl *)(this + 0x18c));
  CRecentDockSiteInfo::CRecentDockSiteInfo((CRecentDockSiteInfo *)(this + 0x1e4),this);
  ((LPRECT)(this + 0x298))->left = 0;
  *(undefined4 *)(this + 0x29c) = 0;
  *(undefined4 *)(this + 0x2a0) = 0;
  *(undefined4 *)(this + 0x2a4) = 0;
  *(undefined4 *)(this + 300) = 6;
  *(undefined4 *)(this + 0x128) = 6;
  *(undefined4 *)(this + 0x138) = 2;
  *(undefined4 *)(this + 0x134) = 2;
  *(undefined4 *)(this + 0x130) = 2;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x13c) = 0x7fff;
  this[0x172] = (CPane)0x0;
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  SetRectEmpty((LPRECT)(this + 0x298));
  *(undefined ***)(this + 0x188) = &PTR_s_CPaneFrameWnd_101d38dc;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x2ac) = 0;
  *(undefined4 *)(this + 0x2b0) = 0;
  *(undefined4 *)(this + 0x2a8) = 0;
  SetRectEmpty((LPRECT)(this + 0x150));
  *(undefined4 *)(this + 0x114) = 1;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined4 *)(this + 0x118) = 1;
  *(undefined4 *)(this + 0x11c) = 1;
  *(undefined4 *)(this + 0x164) = 1;
  *(undefined4 *)(this + 0x160) = 1;
  return this;
}

