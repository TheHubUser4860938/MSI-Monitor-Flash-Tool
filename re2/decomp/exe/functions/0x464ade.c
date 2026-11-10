// rea decompile_all
// name: FUN_00464ade
// address: 0x464ade
// body: available
// range: 0x464ade-0x464bf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00464ade(double param_1,double param_2,double param_3)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  undefined4 local_8;
  
  fVar5 = (float10)param_3;
  if ((float10)0 == fVar5) {
    uVar2 = FUN_0055bd20();
    uVar2 = uVar2 & 0xff;
    uVar3 = uVar2;
    uVar4 = uVar2;
    goto LAB_00464bda;
  }
  fVar6 = (float10)param_2;
  if (fVar6 < (float10)0.5 == (fVar6 == (float10)0.5)) {
    if ((float10)1 != fVar6) {
      fVar5 = (fVar6 + fVar5) - fVar6 * fVar5;
      goto LAB_00464b47;
    }
    local_8 = (float)param_2;
  }
  else {
    fVar5 = fVar6 * fVar5 + fVar6;
LAB_00464b47:
    local_8 = (float)fVar5;
  }
  fVar1 = (float)((fVar6 + fVar6) - (float10)local_8);
  uVar3 = FUN_00465188(fVar1,local_8,(float)((float10)param_1 + (float10)120.0));
  uVar3 = uVar3 & 0xff;
  uVar4 = FUN_00465188(fVar1,local_8,(float)param_1);
  uVar4 = uVar4 & 0xff;
  uVar2 = FUN_00465188(fVar1,local_8,(float)((float10)param_1 - (float10)120.0));
  uVar2 = uVar2 & 0xff;
LAB_00464bda:
  return (uVar2 << 8 | uVar4) << 8 | uVar3;
}

