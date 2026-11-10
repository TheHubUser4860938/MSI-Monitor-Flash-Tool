// rea decompile_all
// name: FUN_100468f0
// address: 0x100468f0
// body: available
// range: 0x100468f0-0x100469db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_100468f0(char *param_1)

{
  char cVar1;
  undefined1 *in_ECX;
  int iVar2;
  char *pcVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  uint in_stack_00000018;
  undefined4 uVar5;
  char local_1014 [4096];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c4008;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar5 = 0;
  local_8 = 0;
  _memset(local_1014,0,0x1000);
  pcVar3 = (char *)&param_1;
  if (0xf < in_stack_00000018) {
    pcVar3 = param_1;
  }
  __fullpath(local_1014,pcVar3,0x1000);
  *(undefined4 *)(in_ECX + 0x14) = 0xf;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *in_ECX = 0;
  if (local_1014[0] == '\0') {
    iVar2 = 0;
  }
  else {
    pcVar3 = local_1014;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar2 = (int)pcVar3 - (int)(local_1014 + 1);
  }
  FUN_1000aa60(local_1014,iVar2);
  uVar4 = extraout_EDX;
  if (0xf < in_stack_00000018) {
    FUN_1000b630(param_1,in_stack_00000018 + 1);
    uVar4 = extraout_EDX_00;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc,uVar4,uVar5);
  return;
}

