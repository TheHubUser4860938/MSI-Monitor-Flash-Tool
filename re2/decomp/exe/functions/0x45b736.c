// rea decompile_all
// name: CMFCToolBar::get_accChild
// address: 0x45b736
// body: available
// range: 0x45b736-0x45b7a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual long __thiscall CMFCToolBar::get_accChild(struct tagVARIANT,struct IDispatch
   * *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CMFCToolBar::get_accChild
          (CMFCToolBar *this,short param_2,undefined4 param_3,int param_4,undefined4 param_5,
          void **param_6)

{
  int iVar1;
  long lVar2;
  CMFCToolBarButton *pCVar3;
  CObject *pCVar4;
  HRESULT HVar5;
  HWND hwnd;
  
  if (param_6 == (void **)0x0) {
    lVar2 = -0x7ff8ffa9;
  }
  else {
    hwnd = (HWND)0x0;
    *param_6 = (void *)0x0;
    if ((param_2 == 3) && (param_4 != 0)) {
      pCVar3 = AccGetButtonByChildId(this,param_4);
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_0060c6d0,
                                  (CObject *)pCVar3);
      if ((pCVar4 != (CObject *)0x0) &&
         ((iVar1 = *(int *)(pCVar4 + 0x8c), iVar1 != 0 && (*(int *)(iVar1 + 0x20) != 0)))) {
        if (iVar1 != 0) {
          hwnd = *(HWND *)(iVar1 + 0x20);
        }
        HVar5 = AccessibleObjectFromWindow(hwnd,0xfffffffc,(IID *)&DAT_005dba20,param_6);
        return HVar5;
      }
    }
    lVar2 = 1;
  }
  return lVar2;
}

