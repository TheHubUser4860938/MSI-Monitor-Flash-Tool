// rea decompile_all
// name: CPreviewViewEx::OnUpdatePreviewNumPage
// address: 0x10161ec1
// body: available
// range: 0x10161ec1-0x10161ff0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPreviewViewEx::OnUpdatePreviewNumPage(class CCmdUI *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPreviewViewEx::OnUpdatePreviewNumPage(CPreviewViewEx *this,CCmdUI *param_1)

{
  int iVar1;
  code *pcVar2;
  CMFCRibbonBaseElement *pCVar3;
  CObject *pCVar4;
  int iVar5;
  int *piVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  
  FUN_1017df78(param_1);
  if (*(int *)(this + 0x13c) == 0) {
    iVar9 = *(int *)(this + 0x148);
  }
  else {
    iVar9 = *(int *)(this + 0x138);
  }
  if (*(int *)(this + 0xeac) == 0) {
    if ((this != (CPreviewViewEx *)0xfffffe98) && (*(int *)(this + 0x188) != 0)) {
      piVar6 = (int *)FUN_1009640a(*(undefined4 *)(this + 0xebc));
      if (iVar9 == 1) {
        uVar8 = *(undefined4 *)(this + 0xeb8);
      }
      else {
        uVar8 = *(undefined4 *)(this + 0xeb4);
      }
      pcVar2 = *(code **)(*piVar6 + 0xc0);
      guard_check_icall(uVar8);
      (*pcVar2)();
      InvalidateRect(*(HWND *)(this + 0x188),(RECT *)(piVar6 + 0x15),1);
    }
  }
  else {
    if (*(int *)(this + 0xeb0) == 0) {
      pCVar3 = CMFCRibbonCategory::FindByID
                         (*(CMFCRibbonCategory **)(*(int *)(this + 0xeac) + 0x7a8),0xe301,1);
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonButton_101ed4dc,
                                  (CObject *)pCVar3);
      *(CObject **)(this + 0xeb0) = pCVar4;
    }
    iVar1 = *(int *)(this + 0xeb0);
    if ((iVar1 != 0) && (iVar5 = 5 - (uint)(iVar9 != 1), *(int *)(iVar1 + 0x148) != iVar5)) {
      *(int *)(iVar1 + 0x148) = iVar5;
      puVar7 = &DAT_101f9528;
      if (iVar9 != 1) {
        puVar7 = &DAT_101f71f8;
      }
      pcVar2 = *(code **)(**(int **)(this + 0xeb0) + 0xb8);
      guard_check_icall(puVar7,0);
      (*pcVar2)();
      pcVar2 = *(code **)(**(int **)(this + 0xeb0) + 0x1b8);
      guard_check_icall();
      (*pcVar2)();
    }
  }
  return;
}

