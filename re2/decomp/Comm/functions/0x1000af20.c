// rea decompile_all
// name: ReadPWM2SPIWordDev
// address: 0x1000af20
// body: available
// range: 0x1000af20-0x1000afce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int ReadPWM2SPIWordDev(undefined4 param_1,undefined4 param_2,ushort param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
                    /* 0xaf20  103  ReadPWM2SPIWordDev */
  iVar3 = 0;
  switch(DAT_101d49a4) {
  case 1:
  case 2:
  case 4:
    return 0xb;
  case 3:
  case 5:
    uVar2 = 0;
    if (param_3 / 0xc != 0) {
      uVar1 = 0;
      do {
        iVar3 = FUN_1000b0f0(0xc,param_4 + uVar1 * 0x18);
        if (iVar3 != 0) {
          return iVar3;
        }
        uVar2 = uVar2 + 1;
        uVar1 = uVar2 & 0xffff;
      } while (uVar1 < param_3 / 0xc);
    }
    iVar3 = 0;
    if ((uint)param_3 % 0xc != 0) {
      iVar3 = FUN_1000b0f0((uint)param_3 % 0xc,param_4 + (uVar2 & 0xffff) * 0x18);
    }
  }
  return iVar3;
}

