// rea decompile_all
// name: ReadMcuReg
// address: 0x10005390
// body: available
// range: 0x10005390-0x100054af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000545e to 0x1000bd10 FUN_1000bd10 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int ReadMcuReg(uint param_1,undefined4 param_2)

{
  int iVar1;
  
                    /* 0x5390  99  ReadMcuReg */
  if ((DAT_101def10 != (code *)0x0) && (iVar1 = (*DAT_101def10)(), iVar1 == 8)) {
    if (DAT_101dee8c == (code *)0x0) {
      return 6;
    }
    iVar1 = (*DAT_101dee8c)(2,param_1 | 0xff00,0,1,param_2);
    return iVar1;
  }
  switch(DAT_101d49a4) {
  case 1:
  case 3:
    iVar1 = I2CWriteByte(DAT_101d49aa,1,0xff);
    if ((iVar1 == 0) && (iVar1 = I2CWriteByte(DAT_101d49aa,0x3a,param_1), iVar1 == 0)) {
      iVar1 = I2CRead(DAT_101d49aa,8,1,param_2);
      return iVar1;
    }
    break;
  case 2:
    iVar1 = I2CRead(DAT_101d49a9,param_1,1,param_2);
    return iVar1;
  case 4:
    iVar1 = FUN_1000bd10();
    return iVar1;
  case 5:
    iVar1 = FUN_100082e0(param_2,0);
    return iVar1;
  case 6:
    if (DAT_101dee1c == (code *)0x0) {
      return 6;
    }
    iVar1 = (*DAT_101dee1c)(param_1 & 0xffff | 0xff00,1,param_2,0);
    return iVar1;
  default:
    iVar1 = 8;
  }
  return iVar1;
}

