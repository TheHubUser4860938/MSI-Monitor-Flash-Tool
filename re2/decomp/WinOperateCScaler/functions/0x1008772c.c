// rea decompile_all
// name: FUN_1008772c
// address: 0x1008772c
// body: available
// range: 0x1008772c-0x10087838 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1008772c(double param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_3 != 0.0) {
    if (param_2 < 0.5 == (param_2 == 0.5)) {
      dVar1 = param_2;
      if (param_2 != 1.0) {
        dVar1 = (param_2 + param_3) - param_2 * param_3;
      }
    }
    else {
      dVar1 = (param_3 + 1.0) * param_2;
    }
    dVar2 = (param_2 + param_2) - dVar1;
    FUN_10087f91(dVar2,dVar1,param_1 + 0.3333333333333333);
    FUN_10087f91(dVar2,dVar1,param_1);
    FUN_10087f91(dVar2,dVar1,param_1 - 0.3333333333333333);
  }
  uVar3 = FUN_10154930();
  uVar4 = FUN_10154930();
  uVar5 = FUN_10154930();
  return uVar5 & 0xff | ((uVar3 & 0xff) << 8 | uVar4 & 0xff) << 8;
}

