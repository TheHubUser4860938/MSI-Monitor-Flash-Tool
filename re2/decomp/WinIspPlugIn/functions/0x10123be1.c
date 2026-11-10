// rea decompile_all
// name: CMFCCustomizeButton::InvokeCommand
// address: 0x10123be1
// body: available
// range: 0x10123be1-0x10123cc4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCCustomizeButton::InvokeCommand(class CMFCPopupMenuBar *,class
   CMFCToolBarButton const *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCCustomizeButton::InvokeCommand
          (CMFCCustomizeButton *this,CMFCPopupMenuBar *param_1,CMFCToolBarButton *param_2)

{
  int *piVar1;
  uint wParam;
  code *pcVar2;
  int iVar3;
  __POSITION *p_Var4;
  CWnd *pCVar5;
  int *piVar6;
  
  if ((*(int *)(this + 0xf8) != 0) && (iVar3 = FUN_1009455c(param_2), -1 < iVar3)) {
    if ((0 < *(int *)(this + 0x11c)) &&
       ((*(byte *)(*(int *)(*(int *)(this + 0x114) + 8) + 0x24) & 1) != 0)) {
      iVar3 = iVar3 + 1;
    }
    p_Var4 = CObList::FindIndex((CObList *)(this + 0x110),iVar3);
    if (p_Var4 != (__POSITION *)0x0) {
      piVar1 = *(int **)(p_Var4 + 8);
      wParam = piVar1[8];
      pcVar2 = *(code **)(**(int **)(this + 0xf8) + 1000);
      piVar6 = piVar1;
      guard_check_icall(piVar1);
      iVar3 = (*pcVar2)();
      if (((iVar3 == 0) && (wParam != 0)) && (wParam != 0xffffffff)) {
        CMFCToolBar::AddCommandUsage(wParam);
        pcVar2 = *(code **)(*piVar1 + 0x24);
        guard_check_icall(piVar6);
        iVar3 = (*pcVar2)();
        if ((iVar3 == 0) &&
           ((DAT_10247680 == (CUserToolsManager *)0x0 ||
            (iVar3 = CUserToolsManager::InvokeTool(DAT_10247680,wParam), iVar3 == 0)))) {
          pCVar5 = CWnd::GetOwner(*(CWnd **)(this + 0xf8));
          PostMessageW(*(HWND *)(pCVar5 + 0x20),0x111,wParam,0);
        }
      }
      return 1;
    }
  }
  return 0;
}

