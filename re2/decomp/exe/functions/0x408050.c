// rea decompile_all
// name: FUN_00408050
// address: 0x408050
// body: available
// range: 0x408050-0x408145 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00408050(char *param_1)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  long *in_ECX;
  int iVar4;
  char *pcVar5;
  int in_EDX;
  uint in_stack_00000018;
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  char *local_30;
  undefined1 local_2c;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0059c3d0;
  local_10 = ExceptionList;
  uVar2 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = 0;
  local_8 = 1;
  pcVar5 = (char *)&param_1;
  if (0xf < in_stack_00000018) {
    pcVar5 = param_1;
  }
  *in_ECX = -1;
  local_14 = uVar2;
  lVar3 = _strtol(pcVar5,&local_30,in_EDX);
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = 0;
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
  FUN_004043e0(local_30,iVar4);
  FUN_00403450(local_48);
  FUN_004033e0(uVar2);
  if (local_1c == 0) {
    *in_ECX = lVar3;
  }
  FUN_004033e0(uVar2);
  FUN_004033e0();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

