// rea decompile_all
// name: CMFCMenuBar::OnLButtonDblClk
// address: 0x100f9d67
// body: available
// range: 0x100f9d67-0x100f9e96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCMenuBar::OnLButtonDblClk(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCMenuBar::OnLButtonDblClk
          (CMFCMenuBar *this,undefined4 param_1,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  CObject *pCVar3;
  int iVar4;
  bool bVar5;
  
  pcVar1 = *(code **)(*(int *)this + 0x390);
  guard_check_icall(param_3,param_4);
  iVar2 = (*pcVar1)();
  bVar5 = false;
  if (-1 < iVar2) {
    pCVar3 = (CObject *)FUN_1006a5a5(iVar2);
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarSystemMenuButton_10201b18,pCVar3)
    ;
    bVar5 = pCVar3 != (CObject *)0x0;
  }
  CMFCToolBar::OnLButtonDblClk((CMFCToolBar *)this,param_1,param_3,param_4);
  if (((!bVar5) && (iVar2 = IsShowAllCommands(), iVar2 == 0)) && (DAT_10209cf0 == 0)) {
    pcVar1 = *(code **)(*(int *)this + 0x390);
    guard_check_icall(param_3,param_4);
    iVar2 = (*pcVar1)();
    if (-1 < iVar2) {
      pCVar3 = (CObject *)FUN_1006a5a5(iVar2);
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_10201a04,pCVar3);
      if ((pCVar3 != (CObject *)0x0) &&
         (iVar4 = FUN_100250d6(&PTR_s_CMFCToolBarSystemMenuButton_10201b18), iVar4 == 0)) {
        DAT_1020bd84 = 1;
        pcVar1 = *(code **)(*(int *)pCVar3 + 0x58);
        guard_check_icall();
        (*pcVar1)();
        if ((*(uint *)(pCVar3 + 0x24) & 0x40000) == 0) {
          pcVar1 = *(code **)(*(int *)pCVar3 + 0x20);
          guard_check_icall(this,0);
          iVar4 = (*pcVar1)();
          if (iVar4 != 0) {
            pcVar1 = *(code **)(*(int *)this + 0x3b0);
            guard_check_icall(iVar2);
            (*pcVar1)();
            CMFCToolBar::InvalidateButton((CMFCToolBar *)this,iVar2);
            UpdateWindow(*(HWND *)(this + 0x20));
          }
        }
      }
    }
  }
  return;
}

