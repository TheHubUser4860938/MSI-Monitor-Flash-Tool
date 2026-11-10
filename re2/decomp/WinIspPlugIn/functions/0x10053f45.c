// rea decompile_all
// name: FUN_10053f45
// address: 0x10053f45
// body: available
// range: 0x10053f45-0x10054041 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005403d to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10053f45(undefined4 param_1,undefined4 param_2,wchar_t *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  code *pcVar1;
  int iVar2;
  AFX_MODULE_STATE *pAVar3;
  int iVar4;
  int *in_ECX;
  bool bVar5;
  undefined4 *puVar6;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  wchar_t *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_3 != (wchar_t *)0x0) {
    iVar2 = AfxIsValidString(param_3,-1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1004a383();
    }
  }
  local_8 = param_1;
  local_c = param_2;
  local_14 = param_4;
  local_18 = param_5;
  local_1c = param_6;
  local_20 = param_7;
  local_24 = param_8;
  local_28 = param_9;
  local_10 = param_3;
  local_2c = param_10;
  pAVar3 = AfxGetModuleState();
  puVar6 = &local_34;
  local_30 = *(undefined4 *)(pAVar3 + 8);
  local_34 = param_11;
  pcVar1 = *(code **)(*in_ECX + 100);
  guard_check_icall(puVar6);
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    pcVar1 = *(code **)(*in_ECX + 0x120);
    guard_check_icall(puVar6);
    (*pcVar1)();
    bVar5 = false;
  }
  else {
    FUN_10052dbd(in_ECX);
    iVar2 = FID_conflict__IsolationAwareCreateWindowExW_48
                      (local_8,local_c,local_10,local_14,local_18,local_1c,local_20,local_24,
                       local_28,local_2c,local_30,local_34);
    iVar4 = FUN_1005310a();
    if (iVar4 == 0) {
      pcVar1 = *(code **)(*in_ECX + 0x120);
      guard_check_icall();
      (*pcVar1)();
    }
    bVar5 = iVar2 != 0;
  }
  return bVar5;
}

