// rea decompile_all
// name: FUN_100406e0
// address: 0x100406e0
// body: available
// range: 0x100406e0-0x10040835 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100406e0(char *param_1)

{
  char cVar1;
  long lVar2;
  long *in_ECX;
  int iVar3;
  char *pcVar4;
  uint in_stack_00000018;
  char *local_48;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c3ac6;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  local_8 = 1;
  pcVar4 = (char *)&param_1;
  if (0xf < in_stack_00000018) {
    pcVar4 = param_1;
  }
  *in_ECX = -1;
  lVar2 = _strtol(pcVar4,&local_48,0);
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  if (*local_48 == '\0') {
    iVar3 = 0;
  }
  else {
    pcVar4 = local_48;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar3 = (int)pcVar4 - (int)(local_48 + 1);
  }
  FUN_1000aa60(local_48,iVar3);
  if (0xf < local_18) {
    FUN_1000b630(local_2c,local_18 + 1);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  FUN_1000af70(local_44);
  if (0xf < local_30) {
    FUN_1000b630(local_44[0],local_30 + 1);
  }
  if (local_1c == 0) {
    *in_ECX = lVar2;
  }
  if (0xf < local_18) {
    FUN_1000b630(local_2c,local_18 + 1);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  if (0xf < in_stack_00000018) {
    FUN_1000b630(param_1,in_stack_00000018 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

