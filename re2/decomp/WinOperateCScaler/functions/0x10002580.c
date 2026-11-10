// rea decompile_all
// name: FUN_10002580
// address: 0x10002580
// body: available
// range: 0x10002580-0x100028b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1000266c) */
/* WARNING: Removing unreachable block (ram,0x1000263c) */
/* WARNING: Removing unreachable block (ram,0x10002710) */

void FUN_10002580(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  char ****ppppcVar2;
  int iVar3;
  char *pcVar4;
  uint local_90 [2];
  undefined4 uStack_88;
  undefined1 local_68 [20];
  uint local_54;
  undefined1 *local_50;
  undefined1 *local_48;
  uint local_44;
  int local_34;
  uint local_30;
  char ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_101947a6;
  local_10 = ExceptionList;
  local_14 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
  local_30 = 0xf;
  local_34 = 0;
  local_44 = local_44 & 0xffffff00;
  cVar1 = *param_3;
  local_8 = 1;
  uStack_7 = 0;
  pcVar4 = param_3;
  while (cVar1 != '\0') {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  }
  FUN_10003c70();
  if (local_34 == 0) {
    FUN_10003e70();
  }
  else {
    local_50 = (undefined1 *)local_90;
                    /* WARNING: Ignoring partial resolution of indirect */
    local_90[0]._0_1_ = 0;
    FUN_10003b40();
    local_8 = 2;
    if (*param_3 == '\0') {
      iVar3 = 0;
    }
    else {
      pcVar4 = param_3;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      iVar3 = (int)pcVar4 - (int)(param_3 + 1);
    }
    FUN_10003c70(param_3,iVar3);
    _local_8 = CONCAT31(uStack_7,1);
    ppppcVar2 = (char ****)FUN_10014b00(local_68);
    if (local_2c != ppppcVar2) {
      if (0xf < local_18) {
        FUN_10003d70();
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
      FUN_100035d0();
    }
    local_8 = 1;
    if (0xf < local_54) {
      FUN_10003d70();
    }
                    /* WARNING: Ignoring partial resolution of indirect */
    local_90[0]._0_1_ = 0;
    FUN_10003b40();
    iVar3 = FUN_100150d0();
    if (iVar3 == 0) {
      FUN_10003e70();
    }
    else {
      ppppcVar2 = local_2c;
      if (0xf < local_18) {
        ppppcVar2 = (char ****)local_2c[0];
      }
      uStack_88 = 0x10002766;
      _strncpy(param_3,(char *)ppppcVar2,0x104);
      if (param_1 == 1) {
        cVar1 = *param_2;
        pcVar4 = param_2;
        while (cVar1 != '\0') {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        }
        FUN_10003c70();
        if (local_34 == 0) {
          FUN_10003e70();
        }
        else {
          local_48 = (undefined1 *)local_90;
          FUN_10001d90();
          local_8 = 4;
          FUN_10001dc0(param_2);
          local_8 = 1;
          FUN_10014b00(local_68);
          FUN_10001e80();
          FUN_10001e40();
          local_90[0] = local_90[0] & 0xffffff00;
          FUN_10003b40();
          iVar3 = FUN_100150d0();
          if (iVar3 == 0) {
            FUN_10003e70();
          }
          else {
            ppppcVar2 = local_2c;
            if (0xf < local_18) {
              ppppcVar2 = (char ****)local_2c[0];
            }
            uStack_88 = 0x1000284e;
            _strncpy(param_2,(char *)ppppcVar2,0x104);
          }
        }
      }
    }
  }
  if (0xf < local_30) {
    FUN_10003d70();
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = local_44 & 0xffffff00;
  if (0xf < local_18) {
    FUN_10003d70();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

