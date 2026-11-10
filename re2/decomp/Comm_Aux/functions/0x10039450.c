// rea decompile_all
// name: FUN_10039450
// address: 0x10039450
// body: available
// range: 0x10039450-0x100395ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003948a to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10039450(void)

{
  int *piVar1;
  LPCWSTR pWVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  BOOL BVar6;
  int in_ECX;
  LPCWSTR pszString;
  int local_20;
  int local_1c;
  int local_18;
  LPCWSTR local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a0a00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar4 = (int *)FUN_10048e90(DAT_10206460 ^ (uint)&stack0xfffffffc);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_100351a0(0x80004005);
  }
  piVar5 = (int *)(**(code **)(*piVar4 + 0xc))();
  local_8 = 0;
  local_18 = 0;
  local_14 = (LPCWSTR)(piVar5 + 4);
  FUN_10053dc1(1);
  piVar4 = (int *)FUN_10039650(&local_20,&DAT_101e3edc,in_ECX + 0x244);
  local_8._0_1_ = 1;
  iVar3 = *piVar4;
  piVar4 = (int *)(iVar3 + -0x10);
  pszString = (LPCWSTR)(piVar5 + 4);
  if (piVar4 != piVar5) {
    piVar1 = piVar5 + 3;
    if ((piVar5[3] < 0) || (*piVar4 != *piVar5)) {
      FUN_100351f0(iVar3,*(undefined4 *)(iVar3 + -0xc));
      pszString = local_14;
    }
    else {
      local_1c = FUN_100349e0(piVar4);
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1 || iVar3 + -1 < 0) {
        (**(code **)(*(int *)*piVar5 + 4))(piVar5);
      }
      local_14 = (LPCWSTR)(local_1c + 0x10);
      pszString = local_14;
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  LOCK();
  piVar4 = (int *)(local_20 + -4);
  iVar3 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar3 == 1 || iVar3 + -1 < 0) {
    (**(code **)(**(int **)(local_20 + -0x10) + 4))((undefined4 *)(local_20 + -0x10));
  }
  BVar6 = StrToIntExW(pszString,1,&local_18);
  if (BVar6 == 0) {
    AfxMessageBox(L"input extra slave address invalid!",0,0);
  }
  else if (local_18 < 0x100) {
    DAT_1021ae50 = (undefined1)local_18;
  }
  else {
    AfxMessageBox(L"input extra slave address invalid!",0,0);
  }
  local_8 = 0xffffffff;
  LOCK();
  pWVar2 = pszString + -2;
  iVar3 = *(int *)pWVar2;
  *(int *)pWVar2 = *(int *)pWVar2 + -1;
  UNLOCK();
  if (iVar3 == 1 || iVar3 + -1 < 0) {
    (**(code **)(**(int **)(pszString + -8) + 4))(pszString + -8);
  }
  ExceptionList = local_10;
  return;
}

