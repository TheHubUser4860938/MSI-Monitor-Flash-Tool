// rea decompile_all
// name: FUN_10003370
// address: 0x10003370
// body: available
// range: 0x10003370-0x100035a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1000344f) */
/* WARNING: Removing unreachable block (ram,0x1000341c) */
/* WARNING: Removing unreachable block (ram,0x100034f3) */

void FUN_10003370(int *param_1)

{
  int *_Dest;
  char ****ppppcVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_78 [8];
  undefined4 uStack_70;
  undefined1 local_50 [20];
  uint local_3c;
  undefined1 *local_38;
  char ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101948d6;
  local_10 = ExceptionList;
  local_14 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
  local_8 = 0;
  if (*param_1 == 1) {
    if ((param_1[1] == 1) && (param_1[2] == 1)) {
      FUN_10003e70();
      goto LAB_10003572;
    }
  }
  else if ((*param_1 == 2) && (param_1[1] == 2)) {
    FUN_10003e70();
    goto LAB_10003572;
  }
  local_38 = local_78;
  FUN_10003b40();
  local_8._0_1_ = 1;
  _Dest = param_1 + 5;
  if ((char)*_Dest == '\0') {
    iVar2 = 0;
  }
  else {
    piVar3 = _Dest;
    do {
      iVar2 = *piVar3;
      piVar3 = (int *)((int)piVar3 + 1);
    } while ((char)iVar2 != '\0');
    iVar2 = (int)piVar3 - ((int)param_1 + 0x15);
  }
  FUN_10003c70(_Dest,iVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  ppppcVar1 = (char ****)FUN_10014b00(local_50);
  if (local_2c != ppppcVar1) {
    if (0xf < local_18) {
      FUN_10003d70();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
    FUN_100035d0();
  }
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_3c) {
    FUN_10003d70();
  }
  FUN_10003b40();
  iVar2 = FUN_100150d0();
  if (iVar2 == 0) {
    FUN_10003e70();
  }
  else {
    ppppcVar1 = local_2c;
    if (0xf < local_18) {
      ppppcVar1 = (char ****)local_2c[0];
    }
    uStack_70 = 0x10003546;
    _strncpy((char *)_Dest,(char *)ppppcVar1,0x104);
    FUN_10001dc0();
    FUN_10002d80();
  }
LAB_10003572:
  if (0xf < local_18) {
    FUN_10003d70();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

