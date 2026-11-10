// rea decompile_all
// name: _AfxMsgFilterHook
// address: 0x1003cea5
// body: available
// range: 0x1003cea5-0x1003cf08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003ceef to 0x10038e31 FUN_10038e31 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    long __stdcall _AfxMsgFilterHook(int,unsigned int,long)
   
   Library: Visual Studio 2008 Release */

long _AfxMsgFilterHook(int param_1,uint param_2,long param_3)

{
  AFX_MODULE_STATE *pAVar1;
  AFX_MODULE_THREAD_STATE *pAVar2;
  long lVar3;
  CNoTrackObject *pCVar4;
  LRESULT LVar5;
  
  pAVar1 = AfxGetModuleState();
  if ((pAVar1[0x14] == (AFX_MODULE_STATE)0x0) && ((-1 < param_1 || (param_1 == 0x8001)))) {
    pAVar2 = AfxGetModuleThreadState();
    if (*(int **)(pAVar2 + 4) != (int *)0x0) {
      lVar3 = (**(code **)(**(int **)(pAVar2 + 4) + 0x70))(param_1,param_3);
      return lVar3;
    }
  }
  pCVar4 = CThreadLocalObject::GetData
                     ((CThreadLocalObject *)&DAT_10066d70,(_func_CNoTrackObject_ptr *)&LAB_10038e4d)
  ;
  if (pCVar4 != (CNoTrackObject *)0x0) {
    LVar5 = CallNextHookEx(*(HHOOK *)(pCVar4 + 0x2c),param_1,param_2,param_3);
    return LVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10038e31();
}

