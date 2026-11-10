// rea decompile_all
// name: CMFCRibbonBaseElement::OnKey
// address: 0x100ffc8b
// body: available
// range: 0x100ffc8b-0x100ffdad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCRibbonBaseElement::OnKey(int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCRibbonBaseElement::OnKey(CMFCRibbonBaseElement *this,int param_1)

{
  code *pcVar1;
  BOOL BVar2;
  CMFCRibbonPanel *this_00;
  int iVar3;
  CMFCRibbonBar *pCVar4;
  CFrameWnd *pCVar5;
  CMFCRibbonPanelMenu *pCVar6;
  CMFCRibbonBaseElement *pCVar7;
  
  if (*(int *)(this + 0xd4) == 0) {
    BVar2 = IsRectEmpty((RECT *)(this + 0x74));
    if (BVar2 == 0) {
      iVar3 = NotifyCommand(this,1);
      return iVar3;
    }
    pcVar1 = *(code **)(*(int *)this + 0x130);
    guard_check_icall();
    this_00 = (CMFCRibbonPanel *)(*pcVar1)();
    if ((this_00 != (CMFCRibbonPanel *)0x0) &&
       (iVar3 = CMFCRibbonPanel::IsCollapsed(this_00), iVar3 != 0)) {
      pcVar1 = *(code **)(*(int *)this + 0x138);
      guard_check_icall();
      iVar3 = (*pcVar1)();
      if (iVar3 == 0) {
        iVar3 = NotifyCommand(this,1);
        if (iVar3 != 0) {
          if (*(int *)(this + 0x94) != 0) {
            pCVar4 = GetTopLevelRibbonBar(this);
            pCVar5 = AFXGetParentFrame(*(CWnd **)(this + 0x94));
            pcVar1 = *(code **)(*(int *)pCVar5 + 0x60);
            guard_check_icall();
            (*pcVar1)();
            if ((pCVar4 != (CMFCRibbonBar *)0x0) &&
               (pCVar5 = CWnd::GetTopLevelFrame((CWnd *)pCVar4), pCVar5 != (CFrameWnd *)0x0)) {
              pCVar5 = CWnd::GetTopLevelFrame((CWnd *)pCVar4);
              CWnd::SetFocus((CWnd *)pCVar5);
            }
          }
          return 1;
        }
      }
      else {
        pCVar4 = GetTopLevelRibbonBar(this);
        if (pCVar4 != (CMFCRibbonBar *)0x0) {
          CMFCRibbonBar::HideKeyTips(pCVar4);
        }
        pCVar6 = CMFCRibbonPanel::ShowPopup(this_00,(CMFCRibbonDefaultPanelButton *)0x0);
        if ((pCVar6 != (CMFCRibbonPanelMenu *)0x0) &&
           (pCVar7 = CMFCRibbonPanelMenuBar::FindByOrigin
                               ((CMFCRibbonPanelMenuBar *)(pCVar6 + 0x1178),this),
           pCVar7 != (CMFCRibbonBaseElement *)0x0)) {
          pcVar1 = *(code **)(*(int *)pCVar7 + 0x1dc);
          guard_check_icall(param_1);
          iVar3 = (*pcVar1)();
          return iVar3;
        }
      }
    }
  }
  return 0;
}

