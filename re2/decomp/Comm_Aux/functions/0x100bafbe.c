// rea decompile_all
// name: FUN_100bafbe
// address: 0x100bafbe
// body: available
// range: 0x100bafbe-0x100bafe6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100bafe2 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100bafbe(void)

{
  AFX_MODULE_STATE *pAVar1;
  CNoTrackObject *pCVar2;
  void *in_ECX;
  
  pAVar1 = AfxGetModuleState();
  pCVar2 = CThreadLocalObject::GetData
                     ((CThreadLocalObject *)(pAVar1 + 0x74),
                      (_func_CNoTrackObject_ptr *)&LAB_100577c4);
  if (pCVar2 != (CNoTrackObject *)0x0) {
    CSimpleList::AddHead((CSimpleList *)(pCVar2 + 8),in_ECX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1004886a();
}

