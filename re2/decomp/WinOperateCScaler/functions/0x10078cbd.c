// rea decompile_all
// name: FUN_10078cbd
// address: 0x10078cbd
// body: available
// range: 0x10078cbd-0x10078d6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10078d6a to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10078cbd(int param_1,CObList *param_2)

{
  code *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  CObject *pCVar5;
  undefined4 in_ECX;
  int local_8;
  
  while (*(int *)(param_2 + 0xc) != 0) {
    piVar2 = (int *)FUN_100350dd();
    if (piVar2 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar2 + 4);
      guard_check_icall(1);
      (*pcVar1)();
    }
  }
  local_8 = *(int *)(param_1 + 4);
  while( true ) {
    if (local_8 == 0) {
      return;
    }
    puVar3 = (undefined4 *)FUN_1006a9f1(&local_8);
    pcVar1 = *(code **)*puVar3;
    guard_check_icall();
    iVar4 = (*pcVar1)();
    if (iVar4 == 0) break;
    pCVar5 = (CObject *)FUN_1002505f();
    pcVar1 = *(code **)(*(int *)pCVar5 + 0x14);
    guard_check_icall(puVar3);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)pCVar5 + 0x28);
    guard_check_icall(in_ECX);
    (*pcVar1)();
    CObList::AddTail(param_2,pCVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1001d023();
}

