// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnFillRibbonQuickAccessToolBarPopup
// address: 0x4bbfb0
// body: available
// range: 0x4bbfb0-0x4bc061 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall
   CMFCVisualManagerOffice2007::OnFillRibbonQuickAccessToolBarPopup(class CDC *,class
   CMFCRibbonPanelMenuBar *,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnFillRibbonQuickAccessToolBarPopup
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,undefined4 param_2,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  CDrawingManager local_1c [8];
  CMFCVisualManagerOffice2007 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x4bbfbc;
  local_14 = this;
  iVar1 = CanDrawImage(this);
  if (iVar1 == 0) {
    CMFCVisualManager::OnFillRibbonQuickAccessToolBarPopup
              ((CMFCVisualManager *)this,param_1,param_2,param_4,param_5,param_6,param_7);
  }
  else if (*(int *)(this + 0x8554) == 0) {
    CDrawingManager::CDrawingManager(local_1c,param_1);
    local_8 = 0;
    CDrawingManager::FillGradient
              (local_1c,param_4,param_5,param_6,param_7,*(undefined4 *)(this + 0x15c),
               *(undefined4 *)(this + 0x160),1,0,0);
    FUN_00461ef9();
  }
  else {
    iVar1 = *(int *)(this + 0x84c0);
    guard_check_icall(param_1,param_4,param_5,param_6,param_7,0,0xff);
    (**(code **)(iVar1 + 0x1c))();
  }
  return;
}

