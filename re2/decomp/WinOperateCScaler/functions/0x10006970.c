// rea decompile_all
// name: FUN_10006970
// address: 0x10006970
// body: available
// range: 0x10006970-0x10006a28 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006970(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  undefined1 uVar1;
  undefined4 local_28 [5];
  uint local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  uVar1 = 0;
  local_c = in_ECX;
  FUN_10003b40(param_3,0,0xffffffff);
  local_10 = (undefined4 *)FUN_1000f100(local_28,param_1,param_2,uVar1);
  if (0xf < (uint)local_10[5]) {
    local_10 = (undefined4 *)*local_10;
  }
  *in_ECX = std::exception::vftable;
  *(undefined8 *)(in_ECX + 1) = 0;
  local_c = (undefined4 *)CONCAT31(local_c._1_3_,1);
  ___std_exception_copy(&local_10,in_ECX + 1);
  *in_ECX = std::runtime_error::vftable;
  if (0xf < local_14) {
    FUN_10003d70(local_28[0],local_14 + 1);
  }
  in_ECX[3] = param_1;
  in_ECX[4] = param_2;
  *in_ECX = std::_System_error::vftable;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

