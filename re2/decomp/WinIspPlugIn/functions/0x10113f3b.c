// rea decompile_all
// name: CMFCShowAllButton::OnClick
// address: 0x10113f3b
// body: available
// range: 0x10113f3b-0x10113fa1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCShowAllButton::OnClick(class CWnd *,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCShowAllButton::OnClick(CMFCShowAllButton *this,CWnd *param_1,int param_2)

{
  CObject *pCVar1;
  int iVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  
  pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenuBar_1023d928,
                              *(CObject **)(this + 0x6c));
  if (pCVar1 == (CObject *)0x0) {
LAB_10113f54:
    iVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      pHVar3 = GetParent(*(HWND *)(pCVar1 + 0x20));
      pCVar4 = CWnd::FromHandle(pHVar3);
      pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_1023d77c,(CObject *)pCVar4);
      if (pCVar1 == (CObject *)0x0) goto LAB_10113f54;
      CMFCPopupMenu::ShowAllCommands((CMFCPopupMenu *)pCVar1);
    }
    else if (DAT_1023dad0 != 0) {
      CMFCPopupMenuBar::StartPopupMenuTimer
                ((CMFCPopupMenuBar *)pCVar1,(CMFCToolBarMenuButton *)this,2);
    }
    iVar2 = 1;
  }
  return iVar2;
}

