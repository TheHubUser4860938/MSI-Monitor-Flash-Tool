// rea decompile_all
// name: FUN_100216a0
// address: 0x100216a0
// body: available
// range: 0x100216a0-0x10021706 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10021702 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100216a0(int param_1,WPARAM param_2,LPARAM param_3)

{
  code *pcVar1;
  AFX_MODULE_STATE *pAVar2;
  AFX_MODULE_THREAD_STATE *pAVar3;
  CNoTrackObject *pCVar4;
  
  pAVar2 = AfxGetModuleState();
  if ((pAVar2[0x14] == (AFX_MODULE_STATE)0x0) && (-1 < param_1)) {
    pAVar3 = AfxGetModuleThreadState();
    if (*(int **)(pAVar3 + 4) != (int *)0x0) {
      pcVar1 = *(code **)(**(int **)(pAVar3 + 4) + 0x70);
      guard_check_icall(param_1,param_3);
      (*pcVar1)();
      return;
    }
  }
  pCVar4 = CThreadLocalObject::GetData
                     ((CThreadLocalObject *)&DAT_1020761c,(_func_CNoTrackObject_ptr *)&LAB_1001d071)
  ;
  if (pCVar4 != (CNoTrackObject *)0x0) {
    CallNextHookEx(*(HHOOK *)(pCVar4 + 0x2c),param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1001d023();
}

