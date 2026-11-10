// rea decompile_all
// name: FUN_10006e90
// address: 0x10006e90
// body: available
// range: 0x10006e90-0x10006f4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006e90(void)

{
  undefined4 uVar1;
  undefined4 in_stack_00000010;
  int in_stack_00000020;
  uint in_stack_00000024;
  undefined4 local_30 [5];
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c0b80;
  local_10 = ExceptionList;
  local_18 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_stack_00000020 != 0) {
    FUN_1000ad40(&DAT_1020e408,2);
  }
  uVar1 = FUN_10006dd0(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_1000ae70(uVar1,0,0xffffffff);
  if (0xf < local_1c) {
    FUN_1000b630(local_30[0],local_1c + 1);
  }
  FUN_100090c0(&stack0x00000010);
  if (0xf < in_stack_00000024) {
    FUN_1000b630(in_stack_00000010,in_stack_00000024 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

