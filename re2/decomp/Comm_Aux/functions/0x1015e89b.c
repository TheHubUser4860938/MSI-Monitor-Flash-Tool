// rea decompile_all
// name: CPaneContainerManager::CheckAndRemoveNonValidPane
// address: 0x1015e89b
// body: available
// range: 0x1015e89b-0x1015e91b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CPaneContainerManager::CheckAndRemoveNonValidPane(class CWnd *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CPaneContainerManager::CheckAndRemoveNonValidPane(CPaneContainerManager *this,CWnd *param_1)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  CObject *pCVar4;
  __POSITION *p_Var5;
  
  if (param_1 != (CWnd *)0x0) {
    iVar2 = CWnd::GetDlgCtrlID(param_1);
    BVar3 = IsWindow(*(HWND *)(param_1 + 0x20));
    if ((BVar3 != 0) && (iVar2 != -1)) {
      return 1;
    }
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_101c7908,(CObject *)param_1)
    ;
    if (pCVar4 != (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)pCVar4 + 0x3a4);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      if (0 < iVar2) {
        return 1;
      }
    }
  }
  p_Var5 = CObList::Find((CObList *)(this + 4),(CObject *)param_1,(__POSITION *)0x0);
  if (p_Var5 != (__POSITION *)0x0) {
    FUN_10063c9c(p_Var5);
  }
  return 0;
}

