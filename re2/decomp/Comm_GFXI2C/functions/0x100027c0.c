// rea decompile_all
// name: FUN_100027c0
// address: 0x100027c0
// body: available
// range: 0x100027c0-0x10002894 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10002803 to 0x10002610 FUN_10002610 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_100027c0(CWinApp *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10058878;
  local_c = ExceptionList;
  uVar2 = DAT_10064168 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  CWinApp::InitInstance(param_1);
  piVar3 = (int *)FUN_10038f10();
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10002610((undefined4 *)0x80004005);
  }
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0xc))(uVar2);
  uStack_4 = 0;
  *(undefined2 *)(param_1 + 0x108) = 0;
  DAT_100655e0 = 1;
  DAT_100655dc = 1;
  DAT_100696f8 = 0;
  DAT_100655e8 = 1;
  DAT_100655e4 = 1;
  if (DAT_10069700 == 0) {
    FUN_100038a0();
  }
  uStack_4 = 0xffffffff;
  piVar3 = puVar4 + 3;
  LOCK();
  iVar1 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar1 == 1 || iVar1 + -1 < 0) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  ExceptionList = local_c;
  return 1;
}

