// rea decompile_all
// name: FUN_100b39ad
// address: 0x100b39ad
// body: available
// range: 0x100b39ad-0x100b3b00 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100b39ad(uint param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (double)(param_1 & 0xff) / 255.0;
  dVar5 = (double)(param_1 >> 8 & 0xff) / 255.0;
  dVar4 = (double)(param_1 >> 0x10 & 0xff) / 255.0;
  dVar6 = dVar4;
  if (dVar5 < dVar4) {
    dVar6 = dVar5;
  }
  dVar2 = dVar1;
  if ((dVar6 <= dVar1) && (dVar2 = dVar4, dVar5 < dVar4)) {
    dVar2 = dVar5;
  }
  dVar6 = dVar4;
  if (dVar4 < dVar5) {
    dVar6 = dVar5;
  }
  dVar3 = dVar1;
  if ((dVar1 <= dVar6) && (dVar3 = dVar4, dVar4 < dVar5)) {
    dVar3 = dVar5;
  }
  *param_4 = dVar3;
  dVar2 = dVar3 - dVar2;
  if (dVar3 == 0.0) {
    *param_3 = 0.0;
    *param_2 = -1.0;
  }
  else {
    *param_3 = dVar2 / dVar3;
    if (dVar2 == 0.0) {
      dVar2 = 1.0;
    }
    else if (dVar1 == dVar3) {
      dVar2 = (dVar5 - dVar4) / dVar2;
    }
    else if (dVar3 == dVar5) {
      dVar2 = (dVar4 - dVar1) / dVar2 + 2.0;
    }
    else {
      dVar2 = (dVar1 - dVar5) / dVar2 + 4.0;
    }
    *param_2 = dVar2;
    dVar1 = *param_2 * 60.0;
    *param_2 = dVar1;
    if (dVar1 < 0.0) {
      *param_2 = dVar1 + 360.0;
    }
  }
  return;
}

