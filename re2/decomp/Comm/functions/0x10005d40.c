// rea decompile_all
// name: ReadRegEx
// address: 0x10005d40
// body: available
// range: 0x10005d40-0x10005f2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int ReadRegEx(uint param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  
                    /* 0x5d40  106  ReadRegEx */
  if ((DAT_101def10 != (code *)0x0) && (iVar1 = (*DAT_101def10)(), iVar1 == 8)) {
    if (DAT_101dee8c == (code *)0x0) {
      return 6;
    }
    iVar1 = (*DAT_101dee8c)(2,param_1,0,1,param_2);
    return iVar1;
  }
  cVar2 = (char)(param_1 >> 8);
  switch(DAT_101d49a4) {
  case 1:
  case 2:
    if (cVar2 != -1) {
      if ((DAT_101def24 == 0) || (cVar2 != DAT_101def22)) {
        iVar1 = WriteReg(0x9f,cVar2);
        if (iVar1 != 0) {
          return iVar1;
        }
        DAT_101def24 = 1;
      }
      iVar1 = ReadReg(param_1,param_2);
      return iVar1;
    }
    if (DAT_101deefc != (code *)0x0) {
      if (DAT_101def2c == 1) {
        iVar1 = FUN_10003990(param_1 & 0xff);
        return iVar1;
      }
      iVar1 = (*DAT_101deefc)(DAT_101d49a9,param_1,1,param_2);
      return iVar1;
    }
    break;
  case 3:
    iVar1 = I2CWriteByte(DAT_101d49aa,1,cVar2);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = I2CWriteByte(DAT_101d49aa,0x3a,param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (DAT_101deefc == (code *)0x0) {
      DAT_101def22 = cVar2;
      return 6;
    }
    if (DAT_101def2c == 1) {
      iVar1 = FUN_10003990();
      DAT_101def22 = cVar2;
      return iVar1;
    }
    iVar1 = (*DAT_101deefc)(DAT_101d49aa,8,1,param_2);
    DAT_101def22 = cVar2;
    return iVar1;
  case 4:
    iVar1 = FUN_1000bd10();
    return iVar1;
  case 5:
    iVar1 = FUN_100082e0(param_2,0);
    return iVar1;
  case 6:
    if (DAT_101dee1c != (code *)0x0) {
      iVar1 = (*DAT_101dee1c)(param_1 & 0xffff,1,param_2,0);
      return iVar1;
    }
    break;
  default:
    return 8;
  }
  return 6;
}

