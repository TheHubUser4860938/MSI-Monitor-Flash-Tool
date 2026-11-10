// rea decompile_all
// name: CMFCRibbonPanel::ShowPopup
// address: 0x47a8ed
// body: available
// range: 0x47a8ed-0x47aa53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x47a95c to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: class CMFCRibbonPanelMenu * __thiscall CMFCRibbonPanel::ShowPopup(class
   CMFCRibbonDefaultPanelButton *)
   
   Library: Visual Studio 2015 Release */

CMFCRibbonPanelMenu * __thiscall
CMFCRibbonPanel::ShowPopup(CMFCRibbonPanel *this,CMFCRibbonDefaultPanelButton *param_1)

{
  code *pcVar1;
  CWnd *this_00;
  ulong uVar2;
  CMFCRibbonBar *this_01;
  CFont *pCVar3;
  int iVar4;
  CMFCPopupMenu *this_02;
  LONG LVar5;
  CMFCRibbonPanelMenu *pCVar6;
  CClientDC local_48 [20];
  uint local_34;
  CMFCRibbonPanel *local_30;
  CPen *local_2c;
  CWnd *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  local_8 = 0x47a8f9;
  if (param_1 == (CMFCRibbonDefaultPanelButton *)0x0) {
    param_1 = (CMFCRibbonDefaultPanelButton *)(this + 0x2e0);
  }
  pcVar1 = *(code **)(*(int *)param_1 + 0xa4);
  local_30 = this;
  guard_check_icall();
  this_00 = (CWnd *)(*pcVar1)();
  local_28 = this_00;
  if (this_00 != (CWnd *)0x0) {
    if (*(CMFCRibbonCategory **)(this + 0x108) != (CMFCRibbonCategory *)0x0) {
      CMFCRibbonCategory::EnsureVisible
                (*(CMFCRibbonCategory **)(this + 0x108),(CMFCRibbonButton *)param_1);
    }
    uVar2 = CWnd::GetExStyle(this_00);
    local_34 = uVar2 & 0x400000;
    if (*(int *)(this + 0x4d0) == 0) {
      if (*(int *)(this + 0x108) == 0) {
LAB_0047a95c:
                    /* WARNING: Subroutine does not return */
        FUN_00429127();
      }
      this_01 = CMFCRibbonBaseElement::GetTopLevelRibbonBar((CMFCRibbonBaseElement *)param_1);
      CClientDC::CClientDC(local_48,(CWnd *)this_01);
      local_8 = 0;
      pCVar3 = CWnd::GetFont((CWnd *)this_01);
      local_2c = CDC::SelectObject((CDC *)local_48,(CPen *)pCVar3);
      if (local_2c == (CPen *)0x0) goto LAB_0047a95c;
      iVar4 = CMFCRibbonCategory::GetMaxHeight
                        (*(CMFCRibbonCategory **)(this + 0x108),(CDC *)local_48);
      pcVar1 = *(code **)(*(int *)this + 200);
      guard_check_icall(local_48,iVar4);
      (*pcVar1)();
      CDC::SelectObject((CDC *)local_48,local_2c);
      local_8 = 0xffffffff;
      CClientDC::~CClientDC(local_48);
    }
    local_24.left = *(LONG *)(param_1 + 0x74);
    local_24.top = *(LONG *)(param_1 + 0x78);
    local_24.right = *(LONG *)(param_1 + 0x7c);
    local_24.bottom = *(LONG *)(param_1 + 0x80);
    CWnd::ClientToScreen(local_28,&local_24);
    local_2c = (CPen *)FUN_00416408(0x2040);
    local_8 = 1;
    if (local_2c == (CPen *)0x0) {
      this_02 = (CMFCPopupMenu *)0x0;
    }
    else {
      this_02 = (CMFCPopupMenu *)
                CMFCRibbonPanelMenu::CMFCRibbonPanelMenu((CMFCRibbonPanelMenu *)local_2c,local_30);
    }
    local_8 = 0xffffffff;
    CMFCPopupMenu::SetParentRibbonElement(this_02,(CMFCRibbonBaseElement *)param_1);
    LVar5 = local_24.right;
    if (local_34 == 0) {
      LVar5 = local_24.left;
    }
    pcVar1 = *(code **)(*(int *)this_02 + 0x210);
    guard_check_icall(local_28,LVar5,local_24.bottom,0,0,0);
    (*pcVar1)();
    CMFCRibbonBaseElement::SetDroppedDown((CMFCRibbonBaseElement *)param_1,this_02);
  }
  pCVar6 = (CMFCRibbonPanelMenu *)FUN_0055bae6();
  return pCVar6;
}

