// rea decompile_all
// name: FUN_10040f0b
// address: 0x10040f0b
// body: available
// range: 0x10040f0b-0x10040fbe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10040f38 to 0x10038e31 FUN_10038e31 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10040fbd to 0x10040fe8 FUN_10040fe8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4
FUN_10040f0b(CWnd *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  CWnd *pCVar1;
  CNoTrackObject *pCVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  CNoTrackObject *pCVar6;
  undefined4 *puVar7;
  undefined4 local_48 [7];
  tagRECT local_2c;
  CNoTrackObject *local_1c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  local_8 = 0x10040f17;
  pCVar2 = CThreadLocalObject::GetData
                     ((CThreadLocalObject *)&DAT_10066d70,(_func_CNoTrackObject_ptr *)&LAB_10038e4d)
  ;
  iVar5 = param_3;
  pCVar1 = param_1;
  local_1c = pCVar2;
  if (pCVar2 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10038e31();
  }
  pCVar6 = pCVar2 + 0x58;
  puVar7 = local_48;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *(undefined4 *)pCVar6;
    pCVar6 = pCVar6 + 4;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)(pCVar2 + 0x58) = param_2;
  *(undefined4 *)(pCVar2 + 0x60) = param_4;
  *(int *)(pCVar2 + 0x5c) = param_3;
  *(undefined4 *)(pCVar2 + 100) = param_5;
  local_8 = 0;
  if ((param_3 == 2) && (*(int *)(param_1 + 0x4c) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x60))(0);
  }
  param_1 = (CWnd *)0x0;
  if (iVar5 == 0x110) {
    FUN_1003ef42(pCVar1,&local_2c,(ulong *)&param_1);
  }
  param_5 = (**(code **)(*(int *)pCVar1 + 0x110))(iVar5,param_4,param_5);
  if (iVar5 == 0x110) {
    _AfxPostInitDialog(pCVar1,&local_2c,(ulong)param_1);
    uVar3 = FUN_10040fe8();
    return uVar3;
  }
  puVar7 = local_48;
  pCVar2 = pCVar2 + 0x58;
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar2 = *puVar7;
    puVar7 = puVar7 + 1;
    pCVar2 = pCVar2 + 4;
  }
  return param_5;
}

