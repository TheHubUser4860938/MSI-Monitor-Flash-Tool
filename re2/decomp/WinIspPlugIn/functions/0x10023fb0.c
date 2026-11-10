// rea decompile_all
// name: FUN_10023fb0
// address: 0x10023fb0
// body: available
// range: 0x10023fb0-0x100241c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1002409a) */
/* WARNING: Removing unreachable block (ram,0x100240a0) */
/* WARNING: Removing unreachable block (ram,0x100241bc) */
/* WARNING: Removing unreachable block (ram,0x100240d3) */
/* WARNING: Removing unreachable block (ram,0x100241b2) */
/* WARNING: Removing unreachable block (ram,0x100240e1) */
/* WARNING: Removing unreachable block (ram,0x100240fd) */
/* WARNING: Removing unreachable block (ram,0x10024132) */

void FUN_10023fb0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 in_ECX;
  int iVar5;
  char *pcVar6;
  undefined4 extraout_ECX;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  uint in_stack_00000034;
  int local_54;
  int local_4c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c2338;
  local_10 = ExceptionList;
  uVar2 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 2;
  pcVar3 = (char *)FUN_100486d0(uVar2);
  if (*pcVar3 == '\0') {
    iVar5 = 0;
  }
  else {
    pcVar6 = pcVar3;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar5 = (int)pcVar6 - (int)(pcVar3 + 1);
  }
  FUN_1000aa60(pcVar3,iVar5);
  uVar4 = FUN_100409e0(&DAT_10213934,extraout_ECX);
  FUN_1002c000(uVar4);
  if (local_54 != 0) {
    FUN_1002d300(local_54,in_ECX);
    FUN_1002c430(local_54,(local_4c - local_54) / 0x18);
  }
  if (0xf < in_stack_00000034) {
    FUN_1000b630(in_stack_00000020,in_stack_00000034 + 1);
  }
  if (7 < in_stack_0000001c) {
    FUN_1000b5d0(param_2,in_stack_0000001c + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}

