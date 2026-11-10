// rea decompile_all
// name: CMFCOutlookBarTabCtrl::OnCommand
// address: 0x10109400
// body: available
// range: 0x10109400-0x1010949b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCOutlookBarTabCtrl::OnCommand(unsigned int,long)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCOutlookBarTabCtrl::OnCommand(CMFCOutlookBarTabCtrl *this,uint param_1,long param_2)

{
  code *pcVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  CObject *pCVar4;
  int iVar5;
  int iVar6;
  CMFCOutlookBarTabCtrl *this_00;
  undefined4 uVar7;
  
  pHVar2 = GetParent(*(HWND *)(this + 0x20));
  pCVar3 = CWnd::FromHandle(pHVar2);
  pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCOutlookBar_10201670,(CObject *)pCVar3);
  if (pCVar4 == (CObject *)0x0) {
LAB_10109486:
    iVar5 = FUN_1002936b(param_1,param_2);
  }
  else {
    this_00 = this + 0x1010;
    iVar6 = 0;
    iVar5 = 0;
    if (this_00 != (CMFCOutlookBarTabCtrl *)0x0) {
      iVar5 = *(int *)(this + 0x1030);
    }
    if (iVar5 == param_2) {
      uVar7 = 0;
    }
    else {
      this_00 = this + 0x17b8;
      if (this_00 != (CMFCOutlookBarTabCtrl *)0x0) {
        iVar6 = *(int *)(this + 0x17d8);
      }
      if (iVar6 != param_2) goto LAB_10109486;
      uVar7 = 1;
    }
    pcVar1 = *(code **)(*(int *)pCVar4 + 0x3f0);
    guard_check_icall(uVar7);
    (*pcVar1)();
    iVar5 = CWnd::IsWindowEnabled((CWnd *)this_00);
    if (iVar5 == 0) {
      CWnd::SetFocus((CWnd *)this);
    }
    iVar5 = 1;
  }
  return iVar5;
}

