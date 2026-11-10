// rea decompile_all
// name: CMFCPropertyGridCtrl::CMFCPropertyGridCtrl
// address: 0x10072488
// body: available
// range: 0x10072488-0x100726bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCPropertyGridCtrl::CMFCPropertyGridCtrl(void)
   
   Library: Visual Studio 2015 Release */

CMFCPropertyGridCtrl * __thiscall
CMFCPropertyGridCtrl::CMFCPropertyGridCtrl(CMFCPropertyGridCtrl *this)

{
  undefined4 uVar1;
  
  CWnd::CWnd((CWnd *)this);
  *(undefined ***)this = vftable;
  CToolTipCtrl::CToolTipCtrl((CToolTipCtrl *)(this + 0x80));
  CMFCHeaderCtrl::CMFCHeaderCtrl((CMFCHeaderCtrl *)(this + 0x120));
  CMFCPropertyGridToolTipCtrl::CMFCPropertyGridToolTipCtrl
            ((CMFCPropertyGridToolTipCtrl *)(this + 0x1d8));
  CWnd::CWnd((CWnd *)(this + 0x278));
  *(undefined ***)(this + 0x278) = CScrollBar::vftable;
  uVar1 = FUN_10048e90();
  FUN_10034c30(uVar1);
  uVar1 = FUN_10048e90();
  FUN_10034c30(uVar1);
  *(undefined ***)(this + 800) = CFont::vftable;
  *(undefined4 *)(this + 0x324) = 0;
  ((LPRECT)(this + 0x328))->left = 0;
  *(undefined4 *)(this + 0x32c) = 0;
  *(undefined4 *)(this + 0x330) = 0;
  *(undefined4 *)(this + 0x334) = 0;
  ((LPRECT)(this + 0x368))->left = 0;
  *(undefined4 *)(this + 0x36c) = 0;
  *(undefined4 *)(this + 0x370) = 0;
  *(undefined4 *)(this + 0x374) = 0;
  ((LPRECT)(this + 0x378))->left = 0;
  *(undefined4 *)(this + 0x37c) = 0;
  *(undefined4 *)(this + 0x380) = 0;
  *(undefined4 *)(this + 900) = 0;
  CList<CMFCPropertyGridProperty*,CMFCPropertyGridProperty*>::
  CList<CMFCPropertyGridProperty*,CMFCPropertyGridProperty*>
            ((CList<CMFCPropertyGridProperty*,CMFCPropertyGridProperty*> *)(this + 0x3a0),10);
  CList<CMFCPropertyGridProperty*,CMFCPropertyGridProperty*>::
  CList<CMFCPropertyGridProperty*,CMFCPropertyGridProperty*>
            ((CList<CMFCPropertyGridProperty*,CMFCPropertyGridProperty*> *)(this + 0x3bc),10);
  *(undefined4 *)(this + 0x400) = 0;
  *(undefined ***)(this + 0x3fc) = CBrush::vftable;
  *(undefined4 *)(this + 0x338) = 0xffffffff;
  *(undefined4 *)(this + 0x31c) = 0;
  *(undefined4 *)(this + 0x344) = 0;
  *(undefined4 *)(this + 0x348) = 0;
  *(undefined4 *)(this + 0x2f8) = 1;
  *(undefined4 *)(this + 0x2fc) = 0;
  *(undefined4 *)(this + 0x33c) = 3;
  *(undefined4 *)(this + 0x304) = 0;
  *(undefined4 *)(this + 0x308) = 0;
  SetRectEmpty((LPRECT)(this + 0x328));
  *(undefined4 *)(this + 0x358) = 0;
  SetRectEmpty((LPRECT)(this + 0x368));
  SetRectEmpty((LPRECT)(this + 0x378));
  *(undefined4 *)(this + 0x300) = 1;
  *(undefined4 *)(this + 0x354) = 0;
  *(undefined4 *)(this + 0x350) = 0;
  *(undefined4 *)(this + 0x35c) = 0;
  *(undefined4 *)(this + 0x360) = 0;
  *(undefined4 *)(this + 0x364) = 0;
  *(undefined4 *)(this + 0x3d8) = 0;
  *(undefined4 *)(this + 0x390) = 0;
  *(undefined4 *)(this + 0x340) = 0;
  *(undefined4 *)(this + 0x388) = 0;
  *(undefined4 *)(this + 0x38c) = 0;
  FUN_100352a0(L"True");
  FUN_100352a0(L"False");
  *(undefined2 *)(this + 0x318) = 0x2c;
  *(undefined4 *)(this + 0x394) = 0;
  *(undefined4 *)(this + 0x398) = 1;
  *(undefined4 *)(this + 0x3e0) = 0xffffffff;
  *(undefined4 *)(this + 0x3e4) = 0xffffffff;
  *(undefined4 *)(this + 1000) = 0xffffffff;
  *(undefined4 *)(this + 0x3ec) = 0xffffffff;
  *(undefined4 *)(this + 0x3f0) = 0xffffffff;
  *(undefined4 *)(this + 0x3f4) = 0xffffffff;
  *(undefined4 *)(this + 0x3f8) = 0xffffffff;
  *(undefined4 *)(this + 0x39c) = 1;
  *(undefined4 *)(this + 0x30c) = 0;
  *(undefined4 *)(this + 0x404) = 0;
  this[0x24] = (CMFCPropertyGridCtrl)0x1;
  return this;
}

