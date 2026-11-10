// rea decompile_all
// name: WriteContinuousMcuReg
// address: 0x10005510
// body: available
// range: 0x10005510-0x100055ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 WriteContinuousMcuReg(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* 0x5510  148  WriteContinuousMcuReg */
  if ((DAT_101def10 != (code *)0x0) && (iVar1 = (*DAT_101def10)(), iVar1 == 8)) {
    if (DAT_101dee88 == (code *)0x0) {
      return 6;
    }
    uVar2 = (*DAT_101dee88)(1,(byte)param_1 | 0xff00,param_4 == 1,param_2,param_3);
    return uVar2;
  }
  switch(DAT_101d49a4) {
  case 1:
  case 3:
  case 4:
  case 5:
    uVar2 = WriteMcuRegs((byte)param_1 | 0xff00,param_2,param_3,param_4);
    return uVar2;
  case 2:
    uVar2 = I2CWriteEx(DAT_101d49a8,param_1,param_2,param_3,param_4);
    return uVar2;
  case 6:
    break;
  default:
    return 0xb;
  }
  if (DAT_101dee18 == (code *)0x0) {
    return 6;
  }
  uVar2 = (*DAT_101dee18)(param_1 & 0xff | 0xff00,param_2,param_3,param_4 == 1);
  return uVar2;
}

