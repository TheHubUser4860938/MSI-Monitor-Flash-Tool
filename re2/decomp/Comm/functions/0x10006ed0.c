// rea decompile_all
// name: EnterIspMode
// address: 0x10006ed0
// body: available
// range: 0x10006ed0-0x10006faa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int EnterIspMode(ushort param_1)

{
  int iVar1;
  uint3 in_ECX;
  ushort uVar2;
  undefined4 uStack_8;
  
                    /* 0x6ed0  29  EnterIspMode */
  uVar2 = 0;
  uStack_8 = (uint)in_ECX;
  if (DAT_101def10 != (code *)0x0) {
    iVar1 = (*DAT_101def10)();
    if (iVar1 == 8) {
      if (DAT_101dee88 != (code *)0x0) {
        iVar1 = (*DAT_101dee88)(0x44,1,0,0,(int)&uStack_8 + 3);
        return iVar1;
      }
      return 6;
    }
    if ((DAT_101def10 != (code *)0x0) && (iVar1 = (*DAT_101def10)(), iVar1 == 0x11)) {
      return 0;
    }
  }
  DAT_101def24 = 0;
  if (param_1 != 0) {
    do {
      iVar1 = WriteMcuReg(0x6f,0x81);
      if ((iVar1 != 0) || (iVar1 = ReadMcuReg(0x6f,(int)&uStack_8 + 3), iVar1 != 0)) {
        DAT_101d49a0 = 1;
        DAT_101def21 = 0;
        DAT_101def20 = 0;
        return iVar1;
      }
      if ((uStack_8 & 0x80000000) != 0) {
        return 0;
      }
      Sleep(1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_1);
  }
  return 10;
}

