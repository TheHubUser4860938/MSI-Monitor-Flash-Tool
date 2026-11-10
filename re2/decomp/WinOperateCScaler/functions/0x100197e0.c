// rea decompile_all
// name: FUN_100197e0
// address: 0x100197e0
// body: available
// range: 0x100197e0-0x10019893 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100197e0(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 local_30 [5];
  uint local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10195e00;
  local_10 = ExceptionList;
  local_14 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  if (*(uint *)(in_ECX + 0x18) < 8) {
    puVar1 = (undefined2 *)(in_ECX + 4);
  }
  else {
    puVar1 = *(undefined2 **)(in_ECX + 4);
  }
  *puVar1 = 0;
  FUN_1001baa0(local_14);
  local_8 = 0;
  uVar2 = FUN_1001bc30(local_30,param_1);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_10015f80(uVar2,0,0xffffffff);
  if (7 < local_1c) {
    FUN_1000fd20(local_30[0],local_1c + 1);
  }
  FUN_1001bab0();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

