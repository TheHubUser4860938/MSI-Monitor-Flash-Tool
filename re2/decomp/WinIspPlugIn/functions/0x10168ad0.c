// rea decompile_all
// name: CMFCRibbonUndoButton::NotifyHighlightListItem
// address: 0x10168ad0
// body: available
// range: 0x10168ad0-0x10168bc2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonUndoButton::NotifyHighlightListItem(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonUndoButton::NotifyHighlightListItem(CMFCRibbonUndoButton *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  CObject *pCVar3;
  CMFCRibbonBaseElement *pCVar4;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10168adc;
  if (*(int *)(this + 0x9c) != 0) {
    *(int *)(this + 0x378) = param_1 + 1;
    this_00 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
              (*(int *)(this + 900) + -0x10);
    local_14[0] = FUN_10047580();
    local_14[0] = local_14[0] + 0x10;
    iVar1 = *(int *)(this + 0x378);
    local_8 = 0;
    if (0 < iVar1) {
      if (iVar1 == 1) {
        FUN_100475f0(this + 0x388);
      }
      else {
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (this_00,(wchar_t *)local_14,*(undefined4 *)(this + 0x38c),iVar1);
      }
    }
    iVar1 = local_14[0];
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonPanelMenu_101f7a74,
                                *(CObject **)(this + 0x9c));
    if (((pCVar3 != (CObject *)0x0) &&
        (*(CMFCRibbonPanel **)(pCVar3 + 0x201c) != (CMFCRibbonPanel *)0x0)) &&
       (pCVar4 = CMFCRibbonPanel::FindByID(*(CMFCRibbonPanel **)(pCVar3 + 0x201c),0),
       pCVar4 != (CMFCRibbonBaseElement *)0x0)) {
      pcVar2 = *(code **)(*(int *)pCVar4 + 0xb4);
      guard_check_icall(iVar1);
      (*pcVar2)();
      pcVar2 = *(code **)(*(int *)pCVar4 + 0x1b8);
      guard_check_icall();
      (*pcVar2)();
    }
    CMFCRibbonGallery::RedrawIcons((CMFCRibbonGallery *)this);
    local_8 = 0xffffffff;
    FUN_100476d0();
  }
  CMFCRibbonBaseElement::NotifyHighlightListItem((CMFCRibbonBaseElement *)this,param_1);
  return;
}

