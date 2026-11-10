// rea decompile_all
// name: FUN_10039250
// address: 0x10039250
// body: available
// range: 0x10039250-0x10039338 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10039291 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10039250(void)

{
  LPCWSTR pWVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  LPCWSTR pWVar4;
  int local_18;
  LPCWSTR local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a0998;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10053dc1();
  piVar2 = (int *)FUN_10048e90();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_100351a0();
  }
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  pWVar4 = (LPCWSTR)(iVar3 + 0x10);
  local_8 = 0;
  local_14 = pWVar4;
  FUN_10034a50(in_ECX + 0x2dc);
  iVar3 = FUN_100339a0();
  if (iVar3 == 0) {
    AfxMessageBox(L"Input illegal",0,0);
  }
  else {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this,(wchar_t *)&local_14,L"0x%s");
    pWVar4 = local_14;
    StrToIntExW(local_14,1,&local_18);
    DAT_1021ae8c = local_18;
  }
  local_8 = 0xffffffff;
  LOCK();
  pWVar1 = pWVar4 + -2;
  iVar3 = *(int *)pWVar1;
  *(int *)pWVar1 = *(int *)pWVar1 + -1;
  UNLOCK();
  if (iVar3 == 1 || iVar3 + -1 < 0) {
    (**(code **)(**(int **)(pWVar4 + -8) + 4))();
  }
  ExceptionList = local_10;
  return;
}

