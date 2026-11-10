// rea decompile_all
// name: FUN_10002d80
// address: 0x10002d80
// body: available
// range: 0x10002d80-0x10003058 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10002f66) */
/* WARNING: Removing unreachable block (ram,0x10002e33) */
/* WARNING: Removing unreachable block (ram,0x10002e63) */
/* WARNING: Removing unreachable block (ram,0x10002f96) */

void FUN_10002d80(int param_1)

{
  char cVar1;
  char *pcVar2;
  char ****ppppcVar3;
  int iVar4;
  uint in_stack_0000001c;
  char *in_stack_00000020;
  uint local_70 [2];
  undefined4 uStack_68;
  undefined1 local_4c [20];
  uint local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  char ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_10194856;
  local_10 = ExceptionList;
  local_14 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
  cVar1 = *in_stack_00000020;
  local_8 = 1;
  uStack_7 = 0;
  pcVar2 = in_stack_00000020;
  while (cVar1 != '\0') {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  }
  FUN_10003c70();
  if (param_1 == 2) {
    if (local_1c == 0) {
      FUN_10003e70();
      goto LAB_10002ffe;
    }
    local_34 = (undefined1 *)local_70;
                    /* WARNING: Ignoring partial resolution of indirect */
    local_70[0]._0_1_ = 0;
    FUN_10003b40();
    local_8 = 2;
    FUN_10003b40(local_2c,0,0xffffffff);
    _local_8 = CONCAT31(uStack_7,1);
    ppppcVar3 = (char ****)FUN_10014b00(local_4c);
    if (local_2c != ppppcVar3) {
      if (0xf < local_18) {
        FUN_10003d70();
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
      FUN_100035d0();
    }
    local_8 = 1;
    if (0xf < local_38) {
      FUN_10003d70();
    }
    local_70[0] = local_70[0] & 0xffffff00;
    FUN_10003b40();
    iVar4 = FUN_100150d0();
    if (iVar4 != 0) goto LAB_10002fcd;
  }
  else if (param_1 == 1) {
    if (local_1c == 0) {
      uStack_68 = 0x10002f45;
      FUN_10001c90();
    }
    else {
      local_30 = (undefined1 *)local_70;
                    /* WARNING: Ignoring partial resolution of indirect */
      local_70[0]._0_1_ = 0;
      FUN_10003b40();
      local_8 = 4;
      FUN_10003b40(local_2c,0,0xffffffff);
      local_8 = 1;
      FUN_10014b00(local_4c);
    }
    FUN_10001e80();
    FUN_10001e40();
LAB_10002fcd:
    ppppcVar3 = local_2c;
    if (0xf < local_18) {
      ppppcVar3 = (char ****)local_2c[0];
    }
    uStack_68 = 0x10002fe4;
    _strncpy(in_stack_00000020,(char *)ppppcVar3,0x104);
    goto LAB_10002ffe;
  }
  FUN_10003e70();
LAB_10002ffe:
  if (0xf < local_18) {
    FUN_10003d70();
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
  if (0xf < in_stack_0000001c) {
    FUN_10003d70();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

