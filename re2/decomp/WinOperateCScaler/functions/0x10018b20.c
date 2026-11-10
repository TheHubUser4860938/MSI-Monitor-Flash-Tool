// rea decompile_all
// name: FUN_10018b20
// address: 0x10018b20
// body: available
// range: 0x10018b20-0x10018c1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10018b20(undefined4 param_1,HMODULE param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_25c [52];
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  WCHAR local_21c [260];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10195d8d;
  local_10 = ExceptionList;
  uVar1 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_228 = param_1;
  local_224 = 0;
  local_14 = uVar1;
  _memset(local_21c,0,0x208);
  FUN_10019660(uVar1);
  local_8 = 0;
  local_224 = 1;
  GetModuleFileNameW(param_2,local_21c,0x104);
  FUN_100198c0(local_21c);
  local_220 = 0x5c;
  iVar2 = FUN_10017b30(&local_220,0xffffffff,1);
  uVar3 = FUN_10019e90(local_25c,iVar2 + 1);
  local_8 = 1;
  FUN_10019720(uVar3);
  FUN_100196a0();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

