// rea decompile_all
// name: FUN_1000d8f0
// address: 0x1000d8f0
// body: available
// range: 0x1000d8f0-0x1000d9a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d8f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  undefined1 uVar1;
  undefined4 *local_2c;
  undefined1 local_28;
  undefined1 local_24 [24];
  uint local_c;
  
  local_c = DAT_101d3fec ^ (uint)&local_2c;
  uVar1 = 0;
  FUN_1000f5c0(param_3,0,0xffffffff);
  local_2c = (undefined4 *)FUN_1000d840(local_24,param_1,param_2,uVar1);
  if (0xf < (uint)local_2c[5]) {
    local_2c = (undefined4 *)*local_2c;
  }
  *in_ECX = std::exception::vftable;
  *(undefined8 *)(in_ECX + 1) = 0;
  local_28 = 1;
  ___std_exception_copy(&local_2c,in_ECX + 1);
  *in_ECX = std::runtime_error::vftable;
  FUN_1000e140();
  in_ECX[3] = param_1;
  in_ECX[4] = param_2;
  *in_ECX = std::_System_error::vftable;
  __security_check_cookie(local_c ^ (uint)&local_2c);
  return;
}

