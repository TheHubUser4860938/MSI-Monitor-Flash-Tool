// rea decompile_all
// name: FUN_100191e0
// address: 0x100191e0
// body: available
// range: 0x100191e0-0x10019247 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 * FUN_100191e0(undefined2 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_2 + 0x14) - *(uint *)(param_2 + 0x10) < *(uint *)(param_3 + 0x10)) &&
     (*(uint *)(param_2 + 0x10) <= (uint)(*(int *)(param_3 + 0x14) - *(int *)(param_3 + 0x10)))) {
    uVar1 = FUN_1001b890(0,param_2,0,0xffffffff);
  }
  else {
    uVar1 = FUN_1000f880(param_3,0,0xffffffff);
  }
  *(undefined4 *)(param_1 + 10) = 7;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  FUN_10015590(uVar1);
  return param_1;
}

