// rea decompile_all
// name: CDockingManager::AutoHidePane
// address: 0x100b6b21
// body: available
// range: 0x100b6b21-0x100b6cb0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CMFCAutoHideBar * __thiscall CDockingManager::AutoHidePane(class CDockablePane
   *,class CMFCAutoHideBar *)
   
   Library: Visual Studio 2015 Release */

CMFCAutoHideBar * __thiscall
CDockingManager::AutoHidePane(CDockingManager *this,CDockablePane *param_1,CMFCAutoHideBar *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  CObject *pCVar3;
  CObject *pCVar4;
  int iVar5;
  CPaneDivider *pCVar6;
  ulong uVar7;
  CMFCAutoHideBar *pCVar8;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  pcVar1 = *(code **)(*(int *)param_1 + 0x194);
  guard_check_icall();
  uVar2 = (*pcVar1)();
  pcVar1 = *(code **)(*(int *)this + 0x28);
  guard_check_icall(uVar2,0);
  pCVar3 = (CObject *)(*pcVar1)();
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CAutoHideDockSite_101cc7e8,pCVar3);
  if (pCVar3 != (CObject *)0x0) {
    pCVar8 = param_2;
    if (param_2 == (CMFCAutoHideBar *)0x0) {
      pCVar4 = (CObject *)FUN_1002505f();
      pCVar8 = (CMFCAutoHideBar *)
               AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCAutoHideBar_101cbc8c,pCVar4);
      local_18 = 0;
      pcVar1 = *(code **)(*(int *)pCVar8 + 0x2c8);
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      guard_check_icall(0,0x50000000,&local_18,*(undefined4 *)(this + 0xe4),1,0,0);
      iVar5 = (*pcVar1)();
      if (iVar5 == 0) {
        pcVar1 = *(code **)(*(int *)pCVar8 + 4);
        guard_check_icall(1);
        (*pcVar1)();
        goto LAB_100b6c9e;
      }
    }
    pcVar1 = *(code **)(*(int *)pCVar8 + 0x1ec);
    guard_check_icall(0xf000);
    (*pcVar1)();
    pCVar6 = CDockablePane::GetDefaultPaneDivider(param_1);
    FUN_1012ca55(param_1,uVar2);
    if (param_2 == (CMFCAutoHideBar *)0x0) {
      uVar7 = CWnd::GetExStyle((CWnd *)pCVar3);
      if ((uVar7 & 0x10000000) == 0) {
        CWnd::ShowWindow((CWnd *)pCVar3,5);
      }
      pcVar1 = *(code **)(*(int *)pCVar8 + 0x1f8);
      guard_check_icall(pCVar3,0,4);
      (*pcVar1)();
    }
    pcVar1 = *(code **)(*(int *)this + 0x38);
    guard_check_icall(0);
    (*pcVar1)();
    AddPane(this,(CBasePane *)pCVar6,1,1,0);
    AlignAutoHidePane(this,pCVar6,1);
    BringWindowToTop(*(HWND *)(param_1 + 0x20));
    BringWindowToTop(*(HWND *)(pCVar6 + 0x20));
  }
LAB_100b6c9e:
  pCVar8 = (CMFCAutoHideBar *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar8;
}

