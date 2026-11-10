// rea decompile_all
// name: CBasePane::GetParentTabWnd
// address: 0x4de287
// body: available
// range: 0x4de287-0x4de318 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CMFCBaseTabCtrl * __thiscall CBasePane::GetParentTabWnd(struct HWND__ * &)const 
   
   Library: Visual Studio 2015 Release */

CMFCBaseTabCtrl * __thiscall CBasePane::GetParentTabWnd(CBasePane *this,HWND__ **param_1)

{
  code *pcVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  CObject *pCVar4;
  CMFCBaseTabCtrl *pCVar5;
  CObject *pCVar6;
  
  pCVar6 = (CObject *)(this + 0x20);
  pHVar2 = GetParent(*(HWND *)pCVar6);
  pCVar3 = CWnd::FromHandle(pHVar2);
  pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePaneAdapter_0060ca28,
                              (CObject *)pCVar3);
  if (pCVar4 != (CObject *)0x0) {
    pCVar6 = pCVar4 + 0x20;
  }
  *param_1 = *(HWND__ **)pCVar6;
  pHVar2 = GetParent(*(HWND *)pCVar6);
  pCVar3 = CWnd::FromHandle(pHVar2);
  pCVar5 = (CMFCBaseTabCtrl *)
           AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCBaseTabCtrl_005b93c4,(CObject *)pCVar3);
  if (pCVar5 == (CMFCBaseTabCtrl *)0x0) {
    pHVar2 = GetParent(*(HWND *)pCVar6);
    pCVar3 = CWnd::FromHandle(pHVar2);
    pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_005c7aa4,(CObject *)pCVar3);
    if (pCVar6 != (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)pCVar6 + 0x3a0);
      guard_check_icall();
      pCVar5 = (CMFCBaseTabCtrl *)(*pcVar1)();
    }
  }
  return pCVar5;
}

