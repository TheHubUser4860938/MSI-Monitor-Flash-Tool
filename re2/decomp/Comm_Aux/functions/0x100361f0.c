// rea decompile_all
// name: FUN_100361f0
// address: 0x100361f0
// body: available
// range: 0x100361f0-0x100362d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100361f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  undefined4 local_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  uStack_28 = 0;
  local_2c = 0x24;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  iStack_24 = (uint)(DAT_1021ae78 != 0) * 2 + 1;
  uStack_20 = param_1;
  uStack_1c = param_3;
  FUN_10181570(&uStack_18,param_2,param_3);
  iVar1 = (**(code **)(in_ECX + 0x14))
                    (*(undefined4 *)(in_ECX + 0x2c),*(undefined4 *)(in_ECX + 0x34),&local_2c);
  if (iVar1 == 0) {
    if (DAT_1021ae54 != 0) {
      FUN_10036880(0,local_2c,uStack_28,iStack_24,uStack_20,uStack_1c,uStack_18,uStack_14,uStack_10,
                   uStack_c);
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (DAT_1021ae54 != 0) {
    FUN_10036880(iVar1,local_2c,uStack_28,iStack_24,uStack_20,uStack_1c,uStack_18,uStack_14,
                 uStack_10,uStack_c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

