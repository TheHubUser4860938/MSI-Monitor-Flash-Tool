// rea decompile_all
// name: CMFCToolBar::DropDownMenu
// address: 0x10095b6a
// body: available
// range: 0x10095b6a-0x10095be9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCToolBar::DropDownMenu(class CMFCToolBarButton *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCToolBar::DropDownMenu(CMFCToolBar *this,CMFCToolBarButton *param_1)

{
  code *pcVar1;
  CObject *pCVar2;
  int iVar3;
  CMFCToolBar *pCVar4;
  undefined4 uVar5;
  
  if ((param_1 != (CMFCToolBarButton *)0x0) &&
     (pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_1023d9fc,
                                  (CObject *)param_1), pCVar2 != (CObject *)0x0)) {
    uVar5 = 1;
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x20);
    pCVar4 = this;
    guard_check_icall(this,1);
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x70);
      guard_check_icall(pCVar4,uVar5);
      iVar3 = (*pcVar1)();
      if (iVar3 != 0) {
        SendMessageW(*(HWND *)(*(int *)(pCVar2 + 0x8c) + 0x20),0x100,0x24,0);
      }
      SetHot(this,(CMFCToolBarButton *)pCVar2);
      return 1;
    }
  }
  return 0;
}

