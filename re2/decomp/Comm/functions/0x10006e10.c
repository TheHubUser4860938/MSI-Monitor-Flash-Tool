// rea decompile_all
// name: ScalerRun
// address: 0x10006e10
// body: available
// range: 0x10006e10-0x10006eae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 ScalerRun(void)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* 0x6e10  115  ScalerRun */
  uVar2 = 0;
  DAT_101def24 = 0;
  if (DAT_101def10 != (code *)0x0) {
    iVar1 = (*DAT_101def10)();
    if (iVar1 == 8) {
      if (DAT_101dee88 != (code *)0x0) {
        uVar2 = (*DAT_101dee88)(0x44,0,0,0,0);
        return uVar2;
      }
      return 6;
    }
    if ((DAT_101def10 != (code *)0x0) && (iVar1 = (*DAT_101def10)(), iVar1 == 0x11)) {
      return 0;
    }
  }
  switch(DAT_101d49a4) {
  case 1:
  case 3:
  case 5:
    uVar2 = I2CWriteByte(DAT_101d49aa,0x80,0);
    return uVar2;
  case 2:
    I2CWriteByte(DAT_101d49a9,0xee,2);
    return 0;
  case 4:
  case 6:
    break;
  default:
    uVar2 = 8;
  }
  return uVar2;
}

