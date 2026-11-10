// rea decompile_all
// name: FUN_10047f60
// address: 0x10047f60
// body: available
// range: 0x10047f60-0x10048050 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10047f60(void)

{
  int in_ECX;
  int in_EDX;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c40f8;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = 7;
  local_44[0] = local_44[0] & 0xffff0000;
  local_34 = 0;
  FUN_10046260(-(uint)(in_EDX != 0) & in_EDX + 4U,0,0xffffffff);
  local_8 = 0;
  local_2c = (uint)local_2c._2_2_ << 0x10;
  local_18 = 7;
  local_1c = 0;
  FUN_10046260(-(uint)(in_ECX != 0) & in_ECX + 4U,0,0xffffffff);
  FUN_10009010(local_44);
  if (7 < local_18) {
    FUN_1000b5d0(local_2c,local_18 + 1);
  }
  local_18 = 7;
  local_2c = local_2c & 0xffff0000;
  local_1c = 0;
  if (7 < local_30) {
    FUN_1000b5d0(local_44[0],local_30 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

