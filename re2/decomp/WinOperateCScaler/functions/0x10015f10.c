// rea decompile_all
// name: FUN_10015f10
// address: 0x10015f10
// body: available
// range: 0x10015f10-0x10015f6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10015f10(ushort *param_1,uint param_2,ushort *param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = param_4;
  if (param_2 < param_4) {
    uVar1 = param_2;
  }
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      if (*param_1 != *param_3) {
        uVar1 = (-(uint)(*param_1 < *param_3) & 0xfffffffe) + 1;
        goto LAB_10015f4b;
      }
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    }
    uVar1 = 0;
  }
LAB_10015f4b:
  if (uVar1 == 0) {
    if (param_2 < param_4) {
      return 0xffffffff;
    }
    uVar1 = (uint)(param_4 < param_2);
  }
  return uVar1;
}

