// rea decompile_all
// name: FUN_10036740
// address: 0x10036740
// body: available
// range: 0x10036740-0x10036873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10036740(undefined1 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  int local_2c;
  undefined1 local_28;
  undefined8 local_27;
  undefined4 local_1f;
  undefined2 local_1b;
  undefined1 local_19;
  undefined1 local_18;
  undefined8 local_17;
  undefined4 local_f;
  undefined2 local_b;
  undefined1 local_9;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_18 = param_1;
  uVar1 = 0;
  local_17 = (ulonglong)CONCAT11((char)param_2,(char)((uint)param_2 >> 8));
  if (DAT_1021ae78 != 0) {
    uVar1 = 0x20;
  }
  local_f = 0;
  local_b = 0;
  local_9 = 0;
  local_28 = 0;
  local_27 = 0;
  local_1f = 0;
  local_1b = 0;
  local_19 = 0;
  local_2c = 0;
  (**(code **)(in_ECX + 0x18))
            (*(undefined4 *)(in_ECX + 0x2c),*(undefined4 *)(in_ECX + 0x34),uVar1,0,3,&local_18,
             &local_2c,0);
  uVar1 = 0;
  local_2c = param_4;
  if (DAT_1021ae78 != 0) {
    uVar1 = 0x20;
  }
  iVar2 = (**(code **)(in_ECX + 0x18))
                    (*(undefined4 *)(in_ECX + 0x2c),*(undefined4 *)(in_ECX + 0x34),uVar1,0,1,
                     &local_18,&local_2c,&local_28);
  if (iVar2 == 0) {
    if (DAT_1021ae54 != 0) {
      FUN_10036b60(0,0,&local_28,param_4);
    }
    if (0 < param_4) {
      FUN_10181570(param_3,&local_28,param_4);
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (DAT_1021ae54 != 0) {
    FUN_10036b60(iVar2,0,&local_28,param_4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

