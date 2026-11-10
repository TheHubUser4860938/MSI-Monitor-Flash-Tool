// rea decompile_all
// name: FUN_10008ca0
// address: 0x10008ca0
// body: available
// range: 0x10008ca0-0x10008ea8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10008d3a) */
/* WARNING: Removing unreachable block (ram,0x10008d85) */

void FUN_10008ca0(int param_1,int *param_2)

{
  int iVar1;
  wchar_t ****_Source;
  wchar_t ***local_60 [5];
  uint local_4c;
  uint local_30;
  undefined4 local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10194e88;
  local_10 = ExceptionList;
  local_14 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0;
  FUN_10019660();
  local_1c = 0xf;
  local_20 = 0;
  local_30 = local_30 & 0xffffff00;
  local_8 = 1;
  if ((*(int *)(param_1 + 0x1a0) == 0) && (*(int *)(param_1 + 0x1b8) == 0)) goto LAB_10008e5d;
  FUN_10003b40(param_1 + 400,0,0xffffffff);
  iVar1 = FUN_10015430();
  if (iVar1 == 0) goto LAB_10008e5d;
  *param_2 = local_18;
  FUN_10003b40(param_1 + 0x1a8,0,0xffffffff);
  iVar1 = FUN_10015430();
  if ((iVar1 == 0) || (local_18 == 0)) goto LAB_10008e5d;
  param_2[1] = local_18;
  if ((*(uint *)(param_1 + 0x1d0) == 0) || (*(uint *)(param_1 + 0x1d0) < 5)) {
LAB_10008e00:
    FUN_10004720();
  }
  else {
    FUN_10004720();
    FUN_10011650();
    iVar1 = FUN_1000fc00();
    FUN_10001e40();
    if (iVar1 != 0) goto LAB_10008e00;
  }
  FUN_1001bc30();
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_100198a0();
  FUN_10006d90();
  _Source = local_60;
  if (7 < local_4c) {
    _Source = (wchar_t ****)local_60[0];
  }
  _wcsncpy((wchar_t *)(param_2 + 2),(wchar_t *)_Source,0x104);
LAB_10008e5d:
  if (0xf < local_1c) {
    FUN_10003d70();
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = local_30 & 0xffffff00;
  FUN_100196a0();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

