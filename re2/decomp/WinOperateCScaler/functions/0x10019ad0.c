// rea decompile_all
// name: FUN_10019ad0
// address: 0x10019ad0
// body: available
// range: 0x10019ad0-0x10019c19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019ad0(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 ***pppuVar2;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 **local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10195e96;
  local_10 = ExceptionList;
  uVar1 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (undefined4 **)((uint)local_2c[0] & 0xffff0000);
  local_8 = 0;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffff0000;
  local_30 = 7;
  local_14 = uVar1;
  FUN_10015f80(-(uint)(param_2 != 0) & param_2 + 4U,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,1);
  pppuVar2 = (undefined4 ***)FUN_10019250(local_5c,local_44,param_3,uVar1);
  if (local_2c != pppuVar2) {
    if (7 < local_18) {
      FUN_1000fd20(local_2c[0],local_18 + 1);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c[0] = (undefined4 **)((uint)local_2c[0] & 0xffff0000);
    FUN_10015590(pppuVar2);
  }
  if (7 < local_48) {
    FUN_1000fd20(local_5c[0],local_48 + 1);
  }
  local_48 = 7;
  local_5c[0] = local_5c[0] & 0xffff0000;
  local_8 = local_8 & 0xffffff00;
  local_4c = 0;
  if (7 < local_30) {
    FUN_1000fd20(local_44[0],local_30 + 1);
  }
  pppuVar2 = local_2c;
  if (7 < local_18) {
    pppuVar2 = (undefined4 ***)local_2c[0];
  }
  FUN_100195f0(pppuVar2);
  if (7 < local_18) {
    FUN_1000fd20(local_2c[0],local_18 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

