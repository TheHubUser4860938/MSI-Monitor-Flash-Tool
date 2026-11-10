// rea decompile_all
// name: CMFCRibbonColorButton::UpdateColor
// address: 0x1013fde6
// body: available
// range: 0x1013fde6-0x1013fefa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CMFCRibbonColorButton::UpdateColor(unsigned long)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonColorButton::UpdateColor(CMFCRibbonColorButton *this,ulong param_1)

{
  code *pcVar1;
  CMFCRibbonBar *this_00;
  undefined4 *puVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  CObject *pCVar5;
  CFrameWnd *pCVar6;
  int iVar7;
  undefined **local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  CObject *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x1013fdf2;
  if (*(ulong *)(this + 0x378) != param_1) {
    *(ulong *)(this + 0x378) = param_1;
    this_00 = CMFCRibbonBaseElement::GetTopLevelRibbonBar((CMFCRibbonBaseElement *)this);
    iVar7 = 0;
    if (this_00 != (CMFCRibbonBar *)0x0) {
      local_28 = CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::vftable;
      local_24 = 0;
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      local_8 = 0;
      CMFCRibbonBar::GetElementsByID
                (this_00,*(uint *)(this + 0xa4),
                 (CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)&local_28);
      if (0 < local_20) {
        do {
          puVar2 = (undefined4 *)FUN_100efaed(iVar7);
          local_14 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonColorButton_101f4710,
                                        (CObject *)*puVar2);
          if ((local_14 != (CObject *)0x0) && (local_14 != (CObject *)this)) {
            *(ulong *)(local_14 + 0x378) = param_1;
            pcVar1 = *(code **)(*(int *)local_14 + 0x1b8);
            guard_check_icall();
            (*pcVar1)();
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_20);
      }
      local_8 = 0xffffffff;
      CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::
      ~CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>
                ((CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)&local_28);
    }
    iVar7 = *(int *)(this + 0x94);
    if (iVar7 == 0) {
      pcVar1 = *(code **)(*(int *)this + 0x1b8);
      guard_check_icall();
      (*pcVar1)();
    }
    else {
      if (*(int *)(iVar7 + 0xde8) != 0) {
        pHVar3 = GetParent(*(HWND *)(iVar7 + 0x20));
        pCVar4 = CWnd::FromHandle(pHVar3);
        pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonMiniToolBar_101f3918,
                                    (CObject *)pCVar4);
        if (pCVar5 != (CObject *)0x0) {
          return;
        }
      }
      pCVar6 = AFXGetParentFrame(*(CWnd **)(this + 0x94));
      PostMessageW(*(HWND *)(pCVar6 + 0x20),0x10,0,0);
    }
  }
  return;
}

