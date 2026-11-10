// rea decompile_all
// name: WritePWM2SPIWordDev
// address: 0x1000aff0
// body: available
// range: 0x1000aff0-0x1000b0d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int WritePWM2SPIWordDev(short param_1,short param_2,ushort param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
                    /* 0xaff0  159  WritePWM2SPIWordDev */
  iVar1 = 0;
  switch(DAT_101d49a4) {
  case 1:
  case 2:
  case 4:
    return 0xb;
  case 3:
  case 5:
    uVar3 = 0;
    if (param_3 / 0xc != 0) {
      uVar2 = 0;
      do {
        iVar1 = FUN_1000b400(0xc,param_4 + uVar2 * 0x18);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar3 = uVar3 + 1;
        uVar2 = uVar3 & 0xffff;
      } while (uVar2 < param_3 / 0xc);
    }
    if ((uint)param_3 % 0xc != 0) {
      iVar1 = FUN_1000b400((uint)param_3 % 0xc,param_4 + (uVar3 & 0xffff) * 0x18);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    iVar1 = 0;
    if (((param_1 == -1) && (param_2 == -1)) && (param_3 == 0)) {
      iVar1 = FUN_1000b400(0,param_4);
    }
  }
  return iVar1;
}

