// rea decompile_all
// name: CMFCRibbonQuickAccessToolBar::OnAfterChangeRect
// address: 0x10125514
// body: available
// range: 0x10125514-0x10125646 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonQuickAccessToolBar::OnAfterChangeRect(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonQuickAccessToolBar::OnAfterChangeRect(CMFCRibbonQuickAccessToolBar *this,CDC *param_1)

{
  CMFCRibbonBar *this_00;
  code *pcVar1;
  undefined4 *puVar2;
  CObject *pCVar3;
  int iVar4;
  CMFCVisualManager *pCVar5;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  CMFCRibbonButtonsGroup::OnAfterChangeRect((CMFCRibbonButtonsGroup *)this,param_1);
  RebuildHiddenItems(this);
  *(undefined4 *)(this + 0x490) = *(undefined4 *)(this + 0x74);
  *(undefined4 *)(this + 0x494) = *(undefined4 *)(this + 0x78);
  *(undefined4 *)(this + 0x498) = *(undefined4 *)(this + 0x7c);
  *(undefined4 *)(this + 0x49c) = *(undefined4 *)(this + 0x80);
  if (0 < *(int *)(this + 0x114)) {
    puVar2 = (undefined4 *)FUN_1009f8c7(*(int *)(this + 0x114) + -1);
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonQuickAccessCustomizeBu_101ca818,
                                (CObject *)*puVar2);
    local_18.left = *(LONG *)(pCVar3 + 0x74);
    local_18.top = *(LONG *)(pCVar3 + 0x78);
    local_18.right = *(LONG *)(pCVar3 + 0x7c);
    local_18.bottom = *(LONG *)(pCVar3 + 0x80);
    *(LONG *)(this + 0x498) = local_18.left;
    if (1 < *(int *)(this + 0x114)) {
      this_00 = *(CMFCRibbonBar **)(this + 0x84);
      iVar4 = CMFCRibbonBar::IsQuickAccessToolbarOnTop(this_00);
      if (iVar4 == 0) {
        OffsetRect(&local_18,6,0);
        local_18.bottom = local_18.bottom + 1;
      }
      else {
        if (*(int *)(this_00 + 0x16b8) == 0) {
          pCVar5 = CMFCVisualManager::GetInstance();
          pcVar1 = *(code **)(*(int *)pCVar5 + 0x254);
          guard_check_icall();
          iVar4 = (*pcVar1)();
          OffsetRect(&local_18,iVar4,0);
        }
        pCVar5 = CMFCVisualManager::GetInstance();
        pcVar1 = *(code **)(*(int *)pCVar5 + 600);
        guard_check_icall();
        iVar4 = (*pcVar1)();
        if (0 < iVar4) {
          local_18.top = local_18.top + -2;
          local_18.bottom = local_18.bottom + -1;
        }
      }
    }
    *(LONG *)(pCVar3 + 0x74) = local_18.left;
    *(LONG *)(pCVar3 + 0x78) = local_18.top;
    *(LONG *)(pCVar3 + 0x7c) = local_18.right;
    *(LONG *)(pCVar3 + 0x80) = local_18.bottom;
    pcVar1 = *(code **)(*(int *)pCVar3 + 0x124);
    guard_check_icall(param_1);
    (*pcVar1)();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

