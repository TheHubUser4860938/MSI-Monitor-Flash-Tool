// rea decompile_all
// name: FUN_100038a0
// address: 0x100038a0
// body: available
// range: 0x100038a0-0x100039d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100038d9 to 0x10002610 FUN_10002610 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100038a0(void)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  CSimpleStringT<char,0> *pCVar7;
  wchar_t *unaff_EDI;
  wchar_t *pwStack_14;
  int iStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_10058848;
  local_c = ExceptionList;
  uVar3 = DAT_10064168 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  piVar4 = (int *)FUN_10038f10();
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10002610((undefined4 *)0x80004005);
  }
  iVar5 = (**(code **)(*piVar4 + 0xc))(uVar3);
  pwStack_14 = (wchar_t *)(iVar5 + 0x10);
  iStack_4 = 0;
  puVar6 = (undefined4 *)FUN_10003740();
  iStack_4._0_1_ = 1;
  FID_conflict_operator_(&pwStack_14,puVar6);
  iStack_4._0_1_ = 0;
  piVar4 = (int *)(iStack_10 + -4);
  LOCK();
  iVar5 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)(iStack_10 + -0x10) + 4))((undefined4 *)(iStack_10 + -0x10));
  }
  pCVar7 = FUN_10003b10((CSimpleStringT<char,0> *)&iStack_10,(int *)&pwStack_14,L"Setting.ini");
  iStack_4._0_1_ = 2;
  FID_conflict_operator_(&pwStack_14,(undefined4 *)pCVar7);
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  piVar4 = (int *)(iStack_10 + -4);
  LOCK();
  iVar5 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)(iStack_10 + -0x10) + 4))((undefined4 *)(iStack_10 + -0x10));
  }
  pwVar2 = pwStack_14;
  if (*(uint *)(pwStack_14 + -6) < 0x104) {
    _wcscpy_s(unaff_EDI,0x104,pwStack_14);
  }
  else {
    *unaff_EDI = L'\0';
  }
  pwVar1 = pwVar2 + -8;
  iStack_4 = 0xffffffff;
  pwVar2 = pwVar2 + -2;
  LOCK();
  iVar5 = *(int *)pwVar2;
  *(int *)pwVar2 = *(int *)pwVar2 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)pwVar1 + 4))(pwVar1);
  }
  ExceptionList = local_c;
  return;
}

