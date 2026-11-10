// rea decompile_all
// name: CMFCRibbonColorButton::OnClickPaletteSubItem
// address: 0x1010856d
// body: available
// range: 0x1010856d-0x10108634 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCRibbonColorButton::OnClickPaletteSubItem(class
   CMFCRibbonButton *,class CMFCRibbonPanelMenuBar *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCRibbonColorButton::OnClickPaletteSubItem
          (CMFCRibbonColorButton *this,CMFCRibbonButton *param_1,CMFCRibbonPanelMenuBar *param_2)

{
  code *pcVar1;
  CMFCRibbonBar *pCVar2;
  int iVar3;
  CMFCRibbonColorButton *this_00;
  HPALETTE__ *pHVar4;
  CMFCColorDialog local_a04 [228];
  ulong local_920;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x9f4;
  local_8 = 0x1010857c;
  if ((*(int *)(param_1 + 0x8c) == *(int *)(this + 0x3ec)) && (*(int *)(this + 0x3ec) != 0)) {
    this_00 = this;
    if (*(CMFCRibbonColorButton **)(this + 0x8c) != (CMFCRibbonColorButton *)0x0) {
      this_00 = *(CMFCRibbonColorButton **)(this + 0x8c);
    }
    pcVar1 = *(code **)(*(int *)this + 0x198);
    guard_check_icall();
    (*pcVar1)();
    pHVar4 = (HPALETTE__ *)0x0;
    pCVar2 = CMFCRibbonBaseElement::GetTopLevelRibbonBar((CMFCRibbonBaseElement *)this);
    CMFCColorDialog::CMFCColorDialog(local_a04,*(ulong *)(this + 0x378),0,(CWnd *)pCVar2,pHVar4);
    local_8 = 0;
    iVar3 = FUN_10022d40();
    if (iVar3 == 1) {
      UpdateColor(this_00,local_920);
      CMFCRibbonBaseElement::NotifyCommand((CMFCRibbonBaseElement *)this_00,0);
    }
    CMFCColorDialog::~CMFCColorDialog(local_a04);
  }
  else if ((*(int *)(param_1 + 0x8c) == *(int *)(this + 0x3f0)) && (*(int *)(this + 0x3f0) != 0)) {
    UpdateColor(this,0xffffffff);
    CMFCRibbonBaseElement::NotifyCommand((CMFCRibbonBaseElement *)this,1);
  }
  iVar3 = FUN_101490fe();
  return iVar3;
}

