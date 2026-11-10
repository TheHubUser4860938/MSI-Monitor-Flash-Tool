// rea decompile_all
// name: OnCreateControlBars
// address: 0x100ebba4
// body: available
// range: 0x100ebba4-0x100ebc3e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual int __thiscall COleDocIPFrameWndEx::OnCreateControlBars(class CFrameWnd
   *,class CFrameWnd *)
    protected: virtual int __thiscall COleIPFrameWndEx::OnCreateControlBars(class CFrameWnd *,class
   CFrameWnd *)
   
   Library: Visual Studio 2015 Release */

undefined4 OnCreateControlBars(CObject *param_1)

{
  code *pcVar1;
  CObject *pCVar2;
  COleCntrFrameWndEx *this;
  HWND__ *pHVar3;
  COleIPFrameWnd *in_ECX;
  CWnd *this_00;
  
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleCntrFrameWndEx_101eb17c,param_1);
  if (pCVar2 == (CObject *)0x0) {
    this = (COleCntrFrameWndEx *)FUN_100491ae(0x318);
    this_00 = (CWnd *)0x0;
    if (this != (COleCntrFrameWndEx *)0x0) {
      this_00 = (CWnd *)COleCntrFrameWndEx::COleCntrFrameWndEx(this,in_ECX);
    }
    pHVar3 = CWnd::Detach(*(CWnd **)(in_ECX + 0x140));
    if (*(int **)(in_ECX + 0x140) != (int *)0x0) {
      pcVar1 = *(code **)(**(int **)(in_ECX + 0x140) + 4);
      guard_check_icall(1);
      (*pcVar1)();
    }
    *(CWnd **)(in_ECX + 0x140) = this_00;
    CWnd::Attach(this_00,pHVar3);
    CDockingManager::Create((CDockingManager *)(this_00 + 0x128),(CFrameWnd *)this_00);
  }
  return 1;
}

