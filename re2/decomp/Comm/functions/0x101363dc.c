// rea decompile_all
// name: CMFCImageEditorDialog::CMFCImageEditorDialog
// address: 0x101363dc
// body: available
// range: 0x101363dc-0x10136509 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCImageEditorDialog::CMFCImageEditorDialog(class CBitmap *,class CWnd
   *,int)
   
   Library: Visual Studio 2015 Release */

CMFCImageEditorDialog * __thiscall
CMFCImageEditorDialog::CMFCImageEditorDialog
          (CMFCImageEditorDialog *this,CBitmap *param_1,CWnd *param_2,int param_3)

{
  CWnd *pCVar1;
  CMFCToolBar *this_00;
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  ushort local_1e;
  CWnd *local_18;
  CMFCImageEditorDialog *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x101363e8;
  local_14 = this;
  CDialogEx::CDialogEx((CDialogEx *)this,0x3f05,param_2);
  local_8 = 0;
  pCVar1 = (CWnd *)(this + 0xd0);
  *(undefined ***)this = vftable;
  local_18 = pCVar1;
  CWnd::CWnd(pCVar1);
  *(undefined ***)pCVar1 = CStatic::vftable;
  pCVar1 = (CWnd *)(this + 0x150);
  local_8._0_1_ = 1;
  local_18 = pCVar1;
  CWnd::CWnd(pCVar1);
  *(undefined ***)pCVar1 = CStatic::vftable;
  pCVar1 = (CWnd *)(this + 0x1d0);
  local_8._0_1_ = 2;
  local_18 = pCVar1;
  CWnd::CWnd(pCVar1);
  *(undefined ***)pCVar1 = CStatic::vftable;
  local_8._0_1_ = 3;
  CMFCImagePaintArea::CMFCImagePaintArea((CMFCImagePaintArea *)(this + 0x250),this);
  *(CBitmap **)(this + 0x348) = param_1;
  *(undefined4 *)(this + 0x34c) = 0;
  *(undefined4 *)(this + 0x350) = 0;
  *(undefined4 *)(this + 0x358) = 0;
  *(undefined4 *)(this + 0x35c) = 0;
  *(undefined4 *)(this + 0x360) = 0;
  *(undefined4 *)(this + 0x364) = 0;
  local_8._0_1_ = 4;
  *(undefined4 *)(this + 0x368) = 0;
  *(undefined4 *)(this + 0x36c) = 0;
  *(undefined4 *)(this + 0x370) = 0;
  *(undefined4 *)(this + 0x374) = 0;
  CMFCColorBar::CMFCColorBar((CMFCColorBar *)(this + 0x378));
  this_00 = (CMFCToolBar *)(this + 0x11e0);
  local_8 = CONCAT31(local_8._1_3_,5);
  local_18 = (CWnd *)this_00;
  CMFCToolBar::CMFCToolBar(this_00);
  *(undefined ***)this_00 = CMFCImageEditorPaletteBar::vftable;
  GetObjectW(*(HANDLE *)(*(int *)(this + 0x348) + 4),0x18,local_30);
  *(undefined4 *)(this + 0x34c) = local_2c;
  *(undefined4 *)(this + 0x350) = local_28;
  if (param_3 == -1) {
    param_3 = (int)local_1e;
  }
  *(int *)(this + 0x354) = param_3;
  return this;
}

