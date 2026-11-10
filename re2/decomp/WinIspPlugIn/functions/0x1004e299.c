// rea decompile_all
// name: FUN_1004e299
// address: 0x1004e299
// body: available
// range: 0x1004e299-0x1004e30b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004e30a to 0x1004e32b FUN_1004e32b (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_1004e299(HINSTANCE__ *param_1)

{
  code *pcVar1;
  AFX_MODULE_THREAD_STATE *pAVar2;
  
  FUN_10050a07();
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
        FUN_1004e32b();
        return;
      }
    }
  }
  if (DAT_102435c8 != (CThreadSlotData *)0x0) {
    CThreadSlotData::DeleteValues(DAT_102435c8,param_1,0);
  }
  return;
}

