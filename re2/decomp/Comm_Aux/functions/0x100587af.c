// rea decompile_all
// name: AfxGetModuleThreadState
// address: 0x100587af
// body: available
// range: 0x100587af-0x100587c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    class AFX_MODULE_THREAD_STATE * __stdcall AfxGetModuleThreadState(void)
   
   Library: Visual Studio 2015 Release */

AFX_MODULE_THREAD_STATE * AfxGetModuleThreadState(void)

{
  code *pcVar1;
  AFX_MODULE_THREAD_STATE *pAVar2;
  AFX_MODULE_STATE *pAVar3;
  CNoTrackObject *pCVar4;
  undefined **ppuStack_8;
  
  pAVar3 = AfxGetModuleState();
  ppuStack_8 = (undefined **)0x100587c1;
  pCVar4 = CThreadLocalObject::GetData
                     ((CThreadLocalObject *)(pAVar3 + 0x74),
                      (_func_CNoTrackObject_ptr *)&LAB_100577c4);
  if (pCVar4 != (CNoTrackObject *)0x0) {
    return (AFX_MODULE_THREAD_STATE *)pCVar4;
  }
  ppuStack_8 = &PTR_vftable_102056a8;
  __CxxThrowException_8(&ppuStack_8,&DAT_101f2858);
  pcVar1 = (code *)swi(3);
  pAVar2 = (AFX_MODULE_THREAD_STATE *)(*pcVar1)();
  return pAVar2;
}

