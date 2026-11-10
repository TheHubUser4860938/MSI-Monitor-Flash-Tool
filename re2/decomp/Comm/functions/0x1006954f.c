// rea decompile_all
// name: CMFCBaseTabCtrl::GetTabWndNoWrapper
// address: 0x1006954f
// body: available
// range: 0x1006954f-0x100695a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CWnd * __thiscall CMFCBaseTabCtrl::GetTabWndNoWrapper(int)const 
   
   Library: Visual Studio 2015 Release */

CWnd * __thiscall CMFCBaseTabCtrl::GetTabWndNoWrapper(CMFCBaseTabCtrl *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  CObject *pCVar3;
  CWnd *pCVar4;
  
  if ((param_1 < 0) || (*(int *)(this + 0xbc) <= param_1)) {
    pCVar4 = (CWnd *)0x0;
  }
  else {
    iVar2 = FUN_10032c6d(param_1);
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePaneAdapter_101d396c,
                                *(CObject **)(iVar2 + 0x20));
    if (pCVar3 == (CObject *)0x0) {
      pCVar4 = *(CWnd **)(iVar2 + 0x20);
    }
    else {
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x3a4);
      guard_check_icall();
      pCVar4 = (CWnd *)(*pcVar1)();
    }
  }
  return pCVar4;
}

