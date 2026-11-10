// rea decompile_all
// name: FUN_10040f20
// address: 0x10040f20
// body: available
// range: 0x10040f20-0x1004108a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10040fd3) */
/* WARNING: Removing unreachable block (ram,0x10041087) */
/* WARNING: Removing unreachable block (ram,0x10041006) */
/* WARNING: Removing unreachable block (ram,0x10041010) */
/* WARNING: Removing unreachable block (ram,0x1004101b) */
/* WARNING: Removing unreachable block (ram,0x1004101f) */
/* WARNING: Removing unreachable block (ram,0x10041030) */

undefined4 FUN_10040f20(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_ECX;
  uint in_stack_00000018;
  int local_34;
  int local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c3c10;
  local_10 = ExceptionList;
  uVar1 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  uVar2 = FUN_100409e0(&DAT_10213934);
  FUN_1002c000(uVar2);
  if (local_34 != 0) {
    FUN_1002d300(local_34,in_ECX,uVar1);
    FUN_1002c430(local_34,(local_2c - local_34) / 0x18);
  }
  if (0xf < in_stack_00000018) {
    FUN_1000b630(param_1,in_stack_00000018 + 1);
  }
  ExceptionList = local_10;
  return 0;
}

