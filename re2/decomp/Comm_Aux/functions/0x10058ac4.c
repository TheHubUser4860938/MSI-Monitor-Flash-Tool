// rea decompile_all
// name: AfxIsIdleMessage
// address: 0x10058ac4
// body: available
// range: 0x10058ac4-0x10058af2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10058aee to 0x10058970 AfxInternalIsIdleMessage (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl AfxIsIdleMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __cdecl AfxIsIdleMessage(tagMSG *param_1)

{
  code *pcVar1;
  AFX_MODULE_THREAD_STATE *pAVar2;
  int iVar3;
  
  pAVar2 = AfxGetModuleThreadState();
  if (*(int **)(pAVar2 + 4) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(pAVar2 + 4) + 100);
    guard_check_icall(param_1);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  iVar3 = AfxInternalIsIdleMessage(param_1);
  return iVar3;
}

