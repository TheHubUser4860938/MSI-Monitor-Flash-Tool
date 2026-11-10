// rea decompile_all
// name: FUN_1009b621
// address: 0x1009b621
// body: available
// range: 0x1009b621-0x1009b7cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1009b621(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xc30) = param_5;
  *(undefined4 *)(in_ECX + 0xc14) = param_2;
  *(undefined4 *)(in_ECX + 0xc18) = param_3;
  *(undefined4 *)(in_ECX + 0xc1c) = param_4;
  *(undefined4 *)(in_ECX + 0xc24) = param_2;
  *(undefined4 *)(in_ECX + 0xc2c) = param_4;
  *(undefined4 *)(in_ECX + 0xc10) = param_1;
  *(undefined4 *)(in_ECX + 0xc20) = param_1;
  *(undefined4 *)(in_ECX + 0xc28) = param_3;
  *(undefined4 *)(in_ECX + 0x310) = param_4;
  *(undefined4 *)(in_ECX + 0x30c) = param_3;
  *(undefined4 *)(in_ECX + 0x99c) = *(undefined4 *)(in_ECX + 0xc18);
  *(undefined4 *)(in_ECX + 0x9a0) = *(undefined4 *)(in_ECX + 0xc1c);
  *(undefined4 *)(in_ECX + 0x424) = *(undefined4 *)(in_ECX + 0xc18);
  *(undefined4 *)(in_ECX + 0x428) = *(undefined4 *)(in_ECX + 0xc1c);
  *(undefined4 *)(in_ECX + 0x53c) = *(undefined4 *)(in_ECX + 0xc18);
  *(undefined4 *)(in_ECX + 0x540) = *(undefined4 *)(in_ECX + 0xc1c);
  *(undefined4 *)(in_ECX + 0xab4) = *(undefined4 *)(in_ECX + 0xc18);
  *(undefined4 *)(in_ECX + 0xab8) = *(undefined4 *)(in_ECX + 0xc1c);
  uVar1 = FUN_1017f8a0();
  uVar2 = FUN_1017f8a0();
  *(undefined4 *)(in_ECX + 0x654) = uVar1;
  *(undefined4 *)(in_ECX + 0x658) = uVar2;
  *(undefined4 *)(in_ECX + 0x76c) = uVar1;
  *(undefined4 *)(in_ECX + 0x770) = uVar2;
  *(undefined4 *)(in_ECX + 0x884) = uVar1;
  *(undefined4 *)(in_ECX + 0x888) = uVar2;
  if (DAT_1020e508 != 0) {
    uVar1 = FUN_1017f8a0();
    *(undefined4 *)(in_ECX + 0xc20) = uVar1;
    uVar1 = FUN_1017f8a0();
    *(undefined4 *)(in_ECX + 0xc24) = uVar1;
    uVar1 = FUN_1017f8a0();
    *(undefined4 *)(in_ECX + 0xc28) = uVar1;
    uVar1 = FUN_1017f8a0();
    *(undefined4 *)(in_ECX + 0xc2c) = uVar1;
  }
  return;
}

