// rea decompile_all
// name: FUN_10122ee5
// address: 0x10122ee5
// body: available
// range: 0x10122ee5-0x10122ff4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10122ff0 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10122ee5(int *param_1,undefined4 param_2,int *param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  CMFCVisualManager *pCVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  undefined1 local_c [8];
  
  if (*(int *)(in_ECX + 0xfc) == 0) {
    if ((*(int *)(*(int *)(in_ECX + 0x2c) + -0xc) == 0) &&
       (((iVar2 = FUN_10048ace(0x4279), iVar2 == 0 ||
         (iVar2 = FUN_10034d90(iVar2,0x4279), iVar2 == 0)) ||
        (*(int *)(*(int *)(in_ECX + 0x2c) + -0xc) == 0)))) {
                    /* WARNING: Subroutine does not return */
      FUN_1004886a();
    }
    if (*(int **)(in_ECX + 0xf8) != (int *)0x0) {
      pcVar1 = *(code **)(**(int **)(in_ECX + 0xf8) + 0x168);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      if (iVar2 == 0) {
        *param_1 = 0;
        param_1[1] = 0;
        return;
      }
    }
    pCVar3 = CMFCVisualManager::GetInstance();
    pcVar1 = *(code **)(*(int *)pCVar3 + 0x2e8);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if ((DAT_1020e508 == 0) || (DAT_102104fc != 0)) {
      iVar7 = 1;
    }
    else {
      iVar7 = 2;
    }
    if (param_4 == 0) {
      iVar5 = FUN_100afca7(local_c);
      iVar6 = *param_3;
      param_1[1] = *(int *)(iVar5 + 4) * iVar7 + iVar2 * 2;
    }
    else {
      iVar5 = param_3[1];
      piVar4 = (int *)FUN_100afca7(local_c);
      iVar6 = *piVar4 * iVar7 + iVar2 * 2;
      param_1[1] = iVar5;
    }
    *param_1 = iVar6;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

