// rea decompile_all
// name: CBaseTabbedPane::FindBarByTabNumber
// address: 0x4fa53a
// body: available
// range: 0x4fa53a-0x4fa5ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CWnd * __thiscall CBaseTabbedPane::FindBarByTabNumber(int,int)
   
   Library: Visual Studio 2015 Release */

CWnd * __thiscall CBaseTabbedPane::FindBarByTabNumber(CBaseTabbedPane *this,int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  CObject *pCVar3;
  CWnd *pCVar4;
  
  if (-1 < param_1) {
    pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x1ac);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (param_1 < iVar2) {
      pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x1b0);
      guard_check_icall(param_1);
      pCVar3 = (CObject *)(*pcVar1)();
      if (param_2 == 0) {
        return (CWnd *)pCVar3;
      }
      iVar2 = FUN_0043970d(&PTR_s_CDockablePaneAdapter_0060ca28);
      if (iVar2 == 0) {
        return (CWnd *)pCVar3;
      }
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePaneAdapter_0060ca28,pCVar3);
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x3a4);
      guard_check_icall();
      pCVar4 = (CWnd *)(*pcVar1)();
      return pCVar4;
    }
  }
  return (CWnd *)0x0;
}

