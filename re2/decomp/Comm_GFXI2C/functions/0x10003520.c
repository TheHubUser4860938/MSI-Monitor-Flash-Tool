// rea decompile_all
// name: FUN_10003520
// address: 0x10003520
// body: available
// range: 0x10003520-0x1000366c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10003558 to 0x10002610 FUN_10002610 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10003520(void)

{
  LPCWSTR pWVar1;
  LPCWSTR pWVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  LPCWSTR pWStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10058578;
  local_c = ExceptionList;
  uVar3 = DAT_10064168 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  piVar4 = (int *)FUN_10038f10();
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10002610((undefined4 *)0x80004005);
  }
  iVar5 = (**(code **)(*piVar4 + 0xc))(uVar3);
  pWStack_10 = (LPCWSTR)(iVar5 + 0x10);
  uStack_4 = 0;
  FUN_100023c0(&pWStack_10,L"%d");
  WritePrivateProfileStringW(L"Comm_GFXI2C",L"GFX_DetctType",pWStack_10,&DAT_10069700);
  FUN_100023c0(&pWStack_10,L"%d");
  WritePrivateProfileStringW(L"Comm_GFXI2C",L"GFX_GraphicsType",pWStack_10,&DAT_10069700);
  FUN_100023c0(&pWStack_10,L"%d");
  WritePrivateProfileStringW(L"Comm_GFXI2C",L"GFX_MultiMonitorSel",pWStack_10,&DAT_10069700);
  FUN_100023c0(&pWStack_10,L"%d");
  pWVar2 = pWStack_10;
  WritePrivateProfileStringW(L"Comm_GFXI2C",L"GFX_MultiRTMonitorSel",pWStack_10,&DAT_10069700);
  pWVar1 = pWVar2 + -8;
  uStack_4 = 0xffffffff;
  pWVar2 = pWVar2 + -2;
  LOCK();
  iVar5 = *(int *)pWVar2;
  *(int *)pWVar2 = *(int *)pWVar2 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)pWVar1 + 4))(pWVar1);
  }
  ExceptionList = local_c;
  return;
}

