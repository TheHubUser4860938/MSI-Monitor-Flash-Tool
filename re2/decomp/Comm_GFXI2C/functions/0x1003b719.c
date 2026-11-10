// rea decompile_all
// name: FUN_1003b719
// address: 0x1003b719
// body: available
// range: 0x1003b719-0x1003b831 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003b82d to 0x1003b8df FUN_1003b8df (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_1003b719(undefined4 *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  
  *param_1 = CWinApp::vftable;
  if ((int *)param_1[0x16] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x16] + 4))(1);
  }
  if ((int *)param_1[0x22] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x22] + 0x18))(1);
  }
  pAVar1 = AfxGetModuleState();
  if (pAVar1[0x14] == (AFX_MODULE_STATE)0x0) {
    if (DAT_10066d38 != (int *)0x0) {
      (**(code **)(*DAT_10066d38 + 4))(1);
      DAT_10066d38 = (int *)0x0;
    }
    if (DAT_10066d34 != (int *)0x0) {
      (**(code **)(*DAT_10066d34 + 4))(1);
      DAT_10066d34 = (int *)0x0;
    }
  }
  if ((void *)param_1[0x1c] != (void *)0x0) {
    AfxGlobalFree((void *)param_1[0x1c]);
  }
  if ((void *)param_1[0x1d] != (void *)0x0) {
    AfxGlobalFree((void *)param_1[0x1d]);
  }
  if (*(ATOM *)(param_1 + 0x24) != 0) {
    GlobalDeleteAtom(*(ATOM *)(param_1 + 0x24));
  }
  if (*(ATOM *)((int)param_1 + 0x92) != 0) {
    GlobalDeleteAtom(*(ATOM *)((int)param_1 + 0x92));
  }
  if ((int *)param_1[0x23] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x23] + 4))(1);
  }
  pAVar1 = AfxGetModuleState();
  if (*(int *)(pAVar1 + 0x10) == param_1[0x14]) {
    *(undefined4 *)(pAVar1 + 0x10) = 0;
  }
  if (*(undefined4 **)(pAVar1 + 4) == param_1) {
    *(undefined4 *)(pAVar1 + 4) = 0;
  }
  _free((void *)param_1[0x14]);
  _free((void *)param_1[0x15]);
  _free((void *)param_1[0x18]);
  _free((void *)param_1[0x19]);
  _free((void *)param_1[0x1a]);
  param_1[0xb] = 0;
  FUN_1003b8df();
  return;
}

