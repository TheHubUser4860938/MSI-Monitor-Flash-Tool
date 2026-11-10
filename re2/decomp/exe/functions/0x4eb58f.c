// rea decompile_all
// name: CMFCToolBarsCustomizeDialog::SetupFromMenus
// address: 0x4eb58f
// body: available
// range: 0x4eb58f-0x4eb67c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarsCustomizeDialog::SetupFromMenus(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBarsCustomizeDialog::SetupFromMenus(CMFCToolBarsCustomizeDialog *this)

{
  int *piVar1;
  code *pcVar2;
  AFX_MODULE_STATE *pAVar3;
  CObject *pCVar4;
  CMenu *pCVar5;
  int iVar6;
  CMFCToolBarsCustomizeDialog *local_8;
  
  local_8 = this;
  pAVar3 = AfxGetModuleState();
  piVar1 = *(int **)(*(int *)(pAVar3 + 4) + 0x5c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    guard_check_icall();
    local_8 = (CMFCToolBarsCustomizeDialog *)(*pcVar2)();
    while (local_8 != (CMFCToolBarsCustomizeDialog *)0x0) {
      pcVar2 = *(code **)(*piVar1 + 0x14);
      guard_check_icall(&local_8);
      pCVar4 = (CObject *)(*pcVar2)();
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMultiDocTemplate_005cddb8,pCVar4);
      if ((pCVar4 != (CObject *)0x0) &&
         (pCVar5 = CMenu::FromHandle(*(HMENU__ **)(pCVar4 + 0x88)), pCVar5 != (CMenu *)0x0)) {
        FUN_004ea3da(pCVar5,0,0,0);
      }
    }
    local_8 = (CMFCToolBarsCustomizeDialog *)0x0;
  }
  pCVar5 = CMenu::FromHandle(*(HMENU__ **)(*(int *)(this + 0x154) + 0x88));
  if (pCVar5 == (CMenu *)0x0) {
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_005bad18,
                                *(CObject **)(this + 0x154));
    if (pCVar4 == (CObject *)0x0) {
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_005ba788,
                                  *(CObject **)(this + 0x154));
      if (pCVar4 == (CObject *)0x0) {
        return;
      }
      iVar6 = *(int *)(pCVar4 + 0x1e0);
    }
    else {
      iVar6 = *(int *)(pCVar4 + 0x3fc);
    }
    if (iVar6 == 0) {
      return;
    }
    pCVar5 = CMenu::FromHandle(*(HMENU__ **)(iVar6 + 0xd50));
    if (pCVar5 == (CMenu *)0x0) {
      return;
    }
  }
  FUN_004ea3da(pCVar5,0,0,0);
  return;
}

