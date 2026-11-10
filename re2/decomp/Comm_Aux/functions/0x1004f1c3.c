// rea decompile_all
// name: FUN_1004f1c3
// address: 0x1004f1c3
// body: available
// range: 0x1004f1c3-0x1004f2a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004f1ed to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1004f2a1 to 0x1004f2ca FUN_1004f2ca (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch_GS replaced with injection: EH_prolog3 */

void FUN_1004f1c3(CWnd *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
                 )

{
  code *pcVar1;
  CWnd *pCVar2;
  int *piVar3;
  CNoTrackObject *pCVar4;
  int iVar5;
  CNoTrackObject *pCVar6;
  undefined4 *puVar7;
  undefined4 local_54 [8];
  CNoTrackObject *local_34;
  CWnd *local_30;
  int *local_2c;
  tagRECT local_28 [2];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x1004f1cf;
  local_30 = param_1;
  pCVar4 = CThreadLocalObject::GetData
                     ((CThreadLocalObject *)&DAT_1020d8d4,(_func_CNoTrackObject_ptr *)&LAB_100488b8)
  ;
  local_34 = pCVar4;
  if (pCVar4 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  pCVar6 = pCVar4 + 0x58;
  puVar7 = local_54;
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *(undefined4 *)pCVar6;
    pCVar6 = pCVar6 + 4;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)(pCVar4 + 0x58) = param_2;
  *(undefined4 *)(pCVar4 + 0x60) = param_4;
  *(int *)(pCVar4 + 0x5c) = param_3;
  *(undefined4 *)(pCVar4 + 100) = param_5;
  local_8 = 0;
  if (param_3 == 2) {
    local_2c = *(int **)(local_30 + 0x70);
    if (local_2c != (int *)0x0) {
      pcVar1 = *(code **)(*local_2c + 0x60);
      guard_check_icall(0);
      (*pcVar1)();
    }
  }
  pCVar2 = local_30;
  local_28[0].left = 0;
  local_28[0].top = 0;
  local_28[0].right = 0;
  local_28[0].bottom = 0;
  local_2c = (int *)0x0;
  if (param_3 == 0x110) {
    _AfxPreInitDialog(local_30,local_28,(ulong *)&local_2c);
  }
  piVar3 = local_2c;
  pcVar1 = *(code **)(*(int *)pCVar2 + 0x114);
  guard_check_icall(param_3,param_4,param_5);
  local_2c = (int *)(*pcVar1)();
  if (param_3 == 0x110) {
    _AfxPostInitDialog(local_30,local_28,(ulong)piVar3);
    FUN_1004f2ca(param_4,param_5);
    return;
  }
  puVar7 = local_54;
  pCVar4 = pCVar4 + 0x58;
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar4 = *puVar7;
    puVar7 = puVar7 + 1;
    pCVar4 = pCVar4 + 4;
  }
  FUN_1017f605();
  return;
}

