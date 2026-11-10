// rea decompile_all
// name: FUN_10015430
// address: 0x10015430
// body: available
// range: 0x10015430-0x10015585 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015430(char *param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  uint in_stack_00000018;
  long *in_stack_0000001c;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  char *local_30;
  uint local_2c;
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  plVar2 = in_stack_0000001c;
  puStack_c = &LAB_10195a76;
  local_10 = ExceptionList;
  local_14 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  local_8 = 1;
  pcVar5 = (char *)&param_1;
  if (0xf < in_stack_00000018) {
    pcVar5 = param_1;
  }
  *in_stack_0000001c = -1;
  lVar3 = _strtol(pcVar5,&local_30,0);
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (*local_30 == '\0') {
    iVar4 = 0;
  }
  else {
    pcVar5 = local_30;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar4 = (int)pcVar5 - (int)(local_30 + 1);
  }
  FUN_10003c70(local_30,iVar4);
  if (0xf < local_18) {
    FUN_10003d70(local_2c,local_18 + 1);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  FUN_100035d0(local_48);
  if (0xf < local_34) {
    FUN_10003d70(local_48[0],local_34 + 1);
  }
  if (local_1c == 0) {
    *plVar2 = lVar3;
  }
  if (0xf < local_18) {
    FUN_10003d70(local_2c,local_18 + 1);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  if (0xf < in_stack_00000018) {
    FUN_10003d70(param_1,in_stack_00000018 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

