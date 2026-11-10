// rea decompile_all
// name: AfxWinTerm
// address: 0x1005abaf
// body: available
// range: 0x1005abaf-0x1005ac3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __stdcall AfxWinTerm(void)
   
   Library: Visual Studio 2015 Release */

void AfxWinTerm(void)

{
  code *pcVar1;
  AFX_MODULE_STATE *pAVar2;
  AFX_MODULE_THREAD_STATE *pAVar3;
  int iVar4;
  _AFX_THREAD_STATE *p_Var5;
  
  AfxUnregisterWndClasses();
  pAVar2 = AfxGetModuleState();
  if ((*(int *)(pAVar2 + 4) != 0) &&
     (pcVar1 = *(code **)(*(int *)(pAVar2 + 4) + 0x3c), pcVar1 != (code *)0x0)) {
    guard_check_icall(1,0);
    (*pcVar1)();
  }
  pAVar3 = AfxGetModuleThreadState();
  if (*(int **)(pAVar3 + 0x3c) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(pAVar3 + 0x3c) + 0x16c);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    if (iVar4 != 0) {
      *(undefined4 *)(pAVar3 + 0x3c) = 0;
    }
  }
  p_Var5 = AfxGetThreadState();
  pAVar2 = AfxGetModuleState();
  if (pAVar2[0x14] == (AFX_MODULE_STATE)0x0) {
    if (*(int *)(p_Var5 + 0x2c) != 0) {
      UnhookWindowsHookEx(*(HHOOK *)(p_Var5 + 0x2c));
      *(undefined4 *)(p_Var5 + 0x2c) = 0;
    }
    if (*(int *)(p_Var5 + 0x28) != 0) {
      UnhookWindowsHookEx(*(HHOOK *)(p_Var5 + 0x28));
      *(undefined4 *)(p_Var5 + 0x28) = 0;
    }
  }
  return;
}

