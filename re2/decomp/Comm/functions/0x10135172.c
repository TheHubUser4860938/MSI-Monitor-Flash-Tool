// rea decompile_all
// name: CMFCImagePaintArea::CMFCImagePaintArea
// address: 0x10135172
// body: available
// range: 0x10135172-0x10135271 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10135201 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCImagePaintArea::CMFCImagePaintArea(class CMFCImageEditorDialog *)
   
   Library: Visual Studio 2015 Release */

CMFCImagePaintArea * __thiscall
CMFCImagePaintArea::CMFCImagePaintArea(CMFCImagePaintArea *this,CMFCImageEditorDialog *param_1)

{
  HDC pHVar1;
  HPEN pHVar2;
  
  CWnd::CWnd((CWnd *)this);
  *(undefined ***)this = vftable;
  ((LPRECT)(this + 0x80))->left = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  CDC::CDC((CDC *)(this + 0x94));
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined ***)(this + 0xd0) = CPen::vftable;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined ***)(this + 0xd8) = CPen::vftable;
  ((LPRECT)(this + 0xe0))->left = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  if (param_1 == (CMFCImageEditorDialog *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10012a3f();
  }
  *(CMFCImageEditorDialog **)(this + 0xf0) = param_1;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  SetRectEmpty((LPRECT)(this + 0x80));
  pHVar1 = CreateCompatibleDC((HDC)0x0);
  CDC::Attach((CDC *)(this + 0x94),pHVar1);
  *(undefined4 *)(this + 0xf4) = 0;
  SetRectEmpty((LPRECT)(this + 0xe0));
  pHVar2 = CreatePen(0,1,*(COLORREF *)(this + 0x90));
  CMenu::Attach((CMenu *)(this + 0xd0),(HMENU__ *)pHVar2);
  return this;
}

