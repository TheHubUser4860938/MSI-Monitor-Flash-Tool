// rea decompile_all
// name: CMFCRibbonPanelMenuBar::CMFCRibbonPanelMenuBar
// address: 0x4ad491
// body: available
// range: 0x4ad491-0x4ad582 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCRibbonPanelMenuBar::CMFCRibbonPanelMenuBar(class CMFCRibbonGallery *)
   
   Library: Visual Studio 2015 Release */

CMFCRibbonPanelMenuBar * __thiscall
CMFCRibbonPanelMenuBar::CMFCRibbonPanelMenuBar
          (CMFCRibbonPanelMenuBar *this,CMFCRibbonGallery *param_1)

{
  CWnd *this_00;
  undefined4 uVar1;
  CMFCRibbonBar *pCVar2;
  CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *pCVar3;
  int iVar4;
  undefined **local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  CWnd *local_18;
  CMFCRibbonPanelMenuBar *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x4ad49d;
  local_14 = this;
  CMFCPopupMenuBar::CMFCPopupMenuBar((CMFCPopupMenuBar *)this);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0xdf8) = 0;
  this_00 = (CWnd *)(this + 0xe20);
  *(undefined4 *)(this + 0xdfc) = 0;
  *(undefined4 *)(this + 0xe00) = 0;
  *(undefined4 *)(this + 0xe04) = 0;
  *(undefined4 *)(this + 0xe08) = 0;
  *(undefined4 *)(this + 0xe0c) = 0;
  *(undefined4 *)(this + 0xe10) = 0;
  *(undefined4 *)(this + 0xe14) = 0;
  local_8 = 0;
  *(undefined4 *)(this + 0xe18) = 0;
  *(undefined4 *)(this + 0xe1c) = 0;
  local_18 = this_00;
  CWnd::CWnd(this_00);
  *(undefined ***)this_00 = CScrollBar::vftable;
  local_8._0_1_ = 1;
  local_18 = (CWnd *)FUN_00416408(0x4f0);
  local_8._0_1_ = 2;
  if (local_18 == (CWnd *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CMFCRibbonPanel::CMFCRibbonPanel((CMFCRibbonPanel *)local_18,param_1);
  }
  *(undefined4 *)(this + 0xea4) = uVar1;
  CommonInit(this);
  local_2c = CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::vftable;
  local_28 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  CMFCRibbonGallery::GetMenuItems
            (param_1,(CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)&local_2c);
  pCVar3 = (CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)&local_2c;
  iVar4 = 0;
  pCVar2 = CMFCRibbonBaseElement::GetTopLevelRibbonBar((CMFCRibbonBaseElement *)param_1);
  AddButtons(this,pCVar2,pCVar3,iVar4);
  CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::
  ~CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>
            ((CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)&local_2c);
  return this;
}

