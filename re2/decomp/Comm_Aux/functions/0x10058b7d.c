// rea decompile_all
// name: FUN_10058b7d
// address: 0x10058b7d
// body: available
// range: 0x10058b7d-0x10058bef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10058bee to 0x10058c0f FUN_10058c0f (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_10058b7d(HINSTANCE__ *param_1)

{
  code *pcVar1;
  AFX_MODULE_THREAD_STATE *pAVar2;
  
  FUN_1005adfe();
  AfxUnlockTempMaps(-1);
  if (param_1 == (HINSTANCE__ *)0x0) {
    pAVar2 = AfxGetModuleThreadState();
    if (pAVar2 != (AFX_MODULE_THREAD_STATE *)0x0) {
      if (*(int **)(pAVar2 + 0x3c) != (int *)0x0) {
        pcVar1 = *(code **)(**(int **)(pAVar2 + 0x3c) + 0x60);
        guard_check_icall();
        (*pcVar1)();
        if (*(int **)(pAVar2 + 0x3c) != (int *)0x0) {
          pcVar1 = *(code **)(**(int **)(pAVar2 + 0x3c) + 4);
          guard_check_icall(1);
          (*pcVar1)();
        }
        *(undefined4 *)(pAVar2 + 0x3c) = 0;
        FUN_10058c0f();
        return;
      }
    }
  }
  if (DAT_1020d91c != (CThreadSlotData *)0x0) {
    CThreadSlotData::DeleteValues(DAT_1020d91c,param_1,0);
  }
  return;
}

