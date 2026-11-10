// rea decompile_all
// name: FUN_004027a0
// address: 0x4027a0
// body: available
// range: 0x4027a0-0x402856 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004027a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  undefined1 uVar1;
  undefined1 local_2c [24];
  undefined4 *local_14;
  undefined1 local_10;
  uint local_c;
  
  local_c = DAT_0060cff4 ^ (uint)local_2c;
  uVar1 = 0;
  FUN_004044e0(param_3,0,0xffffffff);
  local_14 = (undefined4 *)FUN_00402700(local_2c,param_1,param_2,uVar1);
  if (0xf < (uint)local_14[5]) {
    local_14 = (undefined4 *)*local_14;
  }
  *in_ECX = std::exception::vftable;
  *(undefined8 *)(in_ECX + 1) = 0;
  local_10 = 1;
  ___std_exception_copy(&local_14,in_ECX + 1);
  *in_ECX = std::runtime_error::vftable;
  FUN_004033e0();
  in_ECX[3] = param_1;
  in_ECX[4] = param_2;
  *in_ECX = std::_System_error::vftable;
  __security_check_cookie(local_c ^ (uint)local_2c);
  return;
}

