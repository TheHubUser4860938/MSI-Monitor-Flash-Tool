// rea decompile_all
// name: FUN_10003060
// address: 0x10003060
// body: available
// range: 0x10003060-0x10003367 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10003105) */
/* WARNING: Removing unreachable block (ram,0x10003138) */
/* WARNING: Removing unreachable block (ram,0x100031e0) */

void FUN_10003060(int *param_1)

{
  int *piVar1;
  char *******pppppppcVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_74 [8];
  undefined4 uStack_6c;
  undefined1 local_4c [20];
  uint local_38;
  int local_34;
  undefined1 *local_30;
  char ******local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10194896;
  local_10 = ExceptionList;
  local_14 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (char ******)((uint)local_2c[0] & 0xffffff00);
  local_8 = 0;
  if (*param_1 == 1) {
    if ((param_1[1] == 1) && (param_1[2] == 1)) {
      FUN_10003e70();
      goto LAB_10003290;
    }
  }
  else if ((*param_1 == 2) && (param_1[1] == 2)) {
    FUN_10003e70();
    goto LAB_10003290;
  }
  local_30 = local_74;
  FUN_10003b40();
  local_8._0_1_ = 1;
  piVar1 = param_1 + 5;
  if ((char)*piVar1 == '\0') {
    iVar3 = 0;
  }
  else {
    local_34 = (int)param_1 + 0x15;
    piVar4 = piVar1;
    do {
      iVar3 = *piVar4;
      piVar4 = (int *)((int)piVar4 + 1);
    } while ((char)iVar3 != '\0');
    iVar3 = (int)piVar4 - local_34;
  }
  FUN_10003c70(piVar1,iVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  pppppppcVar2 = (char *******)FUN_10014b00(local_4c);
  if (local_2c != pppppppcVar2) {
    if (0xf < local_18) {
      FUN_10003d70();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (char ******)((uint)local_2c[0] & 0xffffff00);
    FUN_100035d0();
  }
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_38) {
    FUN_10003d70();
  }
  FUN_10003b40();
  iVar3 = FUN_100150d0();
  if ((iVar3 == 0) && ((param_1[1] != 2 || (param_1[3] != 1)))) {
    FUN_10003e70();
  }
  else {
    pppppppcVar2 = local_2c;
    if (0xf < local_18) {
      pppppppcVar2 = (char *******)local_2c[0];
    }
    uStack_6c = 0x10003243;
    _strncpy((char *)(param_1 + 5),(char *)pppppppcVar2,0x104);
    FUN_10001dc0();
    iVar3 = FUN_10002d80();
    if (iVar3 != 0) {
      if (param_1[1] == 1) {
        if (param_1[2] == 1) {
          FUN_10001f00();
          goto LAB_10003290;
        }
        if (param_1[2] == 2) {
          FUN_10001dc0();
          FUN_10002c80();
          goto LAB_10003290;
        }
        if (param_1[2] == 3) {
          uStack_6c = 0x10003310;
          FUN_10002260();
          goto LAB_10003290;
        }
        if (param_1[2] == 4) {
          uStack_6c = 0x10003337;
          FUN_10002580();
          goto LAB_10003290;
        }
      }
      if (param_1[1] == 2) {
        FUN_100028c0();
      }
    }
  }
LAB_10003290:
  if (0xf < local_18) {
    FUN_10003d70();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

