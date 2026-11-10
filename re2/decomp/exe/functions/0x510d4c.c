// rea decompile_all
// name: CMDIClientAreaWnd::FindTabWndByChild
// address: 0x510d4c
// body: available
// range: 0x510d4c-0x510dbe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CMFCTabCtrl * __thiscall CMDIClientAreaWnd::FindTabWndByChild(struct HWND__ *,int
   &)
   
   Library: Visual Studio 2015 Release */

CMFCTabCtrl * __thiscall
CMDIClientAreaWnd::FindTabWndByChild(CMDIClientAreaWnd *this,HWND__ *param_1,int *param_2)

{
  code *pcVar1;
  CMFCTabCtrl *pCVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_8;
  
  if (param_1 == (HWND__ *)0x0) {
    pCVar2 = (CMFCTabCtrl *)0x0;
  }
  else {
    local_8 = *(int *)(this + 0x2afc);
    do {
      if (local_8 == 0) {
        return (CMFCTabCtrl *)0x0;
      }
      puVar3 = (undefined4 *)FUN_004ead48(&local_8);
      pCVar2 = (CMFCTabCtrl *)
               AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_005c65ac,(CObject *)*puVar3);
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x21c);
      guard_check_icall(param_1);
      iVar4 = (*pcVar1)();
      *param_2 = iVar4;
    } while (iVar4 < 0);
  }
  return pCVar2;
}

