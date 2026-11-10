// rea decompile_all
// name: FUN_1005731d
// address: 0x1005731d
// body: available
// range: 0x1005731d-0x100574fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100574f6 to 0x100575bb FUN_100575bb (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005731d(void)

{
  code *pcVar1;
  AFX_MODULE_STATE *pAVar2;
  CWinApp *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101a1f74;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)in_ECX = CWinApp::vftable;
  local_8 = 1;
  CWinApp::ReleaseTaskBarRefs(in_ECX);
  if (*(int *)(in_ECX + 0xbc) != 0) {
    CoUninitialize();
    *(undefined4 *)(in_ECX + 0xbc) = 0;
  }
  if (*(int **)(in_ECX + 0x5c) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(in_ECX + 0x5c) + 4);
    guard_check_icall(1);
    (*pcVar1)();
  }
  if (*(int **)(in_ECX + 0x8c) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(in_ECX + 0x8c) + 0x1c);
    guard_check_icall(1);
    (*pcVar1)();
  }
  if (*(int **)(in_ECX + 0x90) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(in_ECX + 0x90) + 4);
    guard_check_icall(1);
    (*pcVar1)();
  }
  pAVar2 = AfxGetModuleState();
  if (pAVar2[0x14] == (AFX_MODULE_STATE)0x0) {
    if (DAT_1020d8c4 != (int *)0x0) {
      pcVar1 = *(code **)(*DAT_1020d8c4 + 4);
      guard_check_icall(1);
      (*pcVar1)();
      DAT_1020d8c4 = (int *)0x0;
    }
    if (DAT_1020d8c8 != (int *)0x0) {
      pcVar1 = *(code **)(*DAT_1020d8c8 + 4);
      guard_check_icall(1);
      (*pcVar1)();
      DAT_1020d8c8 = (int *)0x0;
    }
  }
  if (*(int *)(in_ECX + 0x74) != 0) {
    AfxGlobalFree(*(void **)(in_ECX + 0x74));
  }
  if (*(int *)(in_ECX + 0x78) != 0) {
    AfxGlobalFree(*(void **)(in_ECX + 0x78));
  }
  if (*(ATOM *)(in_ECX + 0x98) != 0) {
    GlobalDeleteAtom(*(ATOM *)(in_ECX + 0x98));
  }
  if (*(ATOM *)(in_ECX + 0x9a) != 0) {
    GlobalDeleteAtom(*(ATOM *)(in_ECX + 0x9a));
  }
  if (*(int **)(in_ECX + 0x94) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(in_ECX + 0x94) + 4);
    guard_check_icall(1);
    (*pcVar1)();
  }
  pAVar2 = AfxGetModuleState();
  if (*(int *)(pAVar2 + 0x10) == *(int *)(in_ECX + 0x50)) {
    *(undefined4 *)(pAVar2 + 0x10) = 0;
  }
  if (*(CWinApp **)(pAVar2 + 4) == in_ECX) {
    *(undefined4 *)(pAVar2 + 4) = 0;
  }
  FID_conflict__free(*(void **)(in_ECX + 0x50));
  FID_conflict__free(*(void **)(in_ECX + 0x58));
  FID_conflict__free(*(void **)(in_ECX + 100));
  FID_conflict__free(*(void **)(in_ECX + 0x68));
  FID_conflict__free(*(void **)(in_ECX + 0x6c));
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  FUN_100575bb();
  return;
}

