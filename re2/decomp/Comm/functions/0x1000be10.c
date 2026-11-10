// rea decompile_all
// name: FUN_1000be10
// address: 0x1000be10
// body: available
// range: 0x1000be10-0x1000bfdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1000be10(void)

{
  int iVar1;
  uint local_14;
  undefined2 local_10 [2];
  undefined1 local_c [4];
  byte local_8 [4];
  
  local_14 = local_14 & 0xffffff00;
  local_10[0] = 0x815a;
  iVar1 = I2CWrite(DAT_101d49a9,0x6f,2,local_10);
  if (iVar1 == 0) {
    local_14 = local_14 & 0xffffff00;
    if (DAT_101deefc == (code *)0x0) {
      return 6;
    }
    if (DAT_101def2c == 1) {
      iVar1 = FUN_10003990(0xd0,1,&local_14);
    }
    else {
      iVar1 = (*DAT_101deefc)(DAT_101d49a9,0xd0,1,&local_14);
    }
    if (iVar1 == 0) {
      local_8[0] = (byte)local_14 | 0x1c;
      local_14 = local_14 | 0x1c;
      if (DAT_101def00 != (code *)0x0) {
        if (DAT_101def2c == 1) {
          I2CMasterWrite();
        }
        else {
          (*DAT_101def00)(DAT_101d49a9,0xd0,1,local_8);
        }
      }
      if (DAT_101def00 == (code *)0x0) {
        return 6;
      }
      if (DAT_101def2c == 1) {
        iVar1 = I2CMasterWrite();
      }
      else {
        iVar1 = (*DAT_101def00)(DAT_101d49a9,0xd5,1,local_c);
      }
      if (((iVar1 == 0) && (iVar1 = I2CWriteByte(DAT_101d49a9,0xd6), iVar1 == 0)) &&
         (iVar1 = I2CWriteByte(DAT_101d49a9,0xd7), iVar1 == 0)) {
        local_14 = local_14 & 0xffffff00;
        if (DAT_101deefc == (code *)0x0) {
          return 6;
        }
        if (DAT_101def2c == 1) {
          iVar1 = FUN_10003990(0xd0,1,&local_14);
        }
        else {
          iVar1 = (*DAT_101deefc)(DAT_101d49a9,0xd0,1,&local_14);
        }
        if (iVar1 == 0) {
          local_14 = local_14 & 0xfffffffb;
          iVar1 = I2CWriteByte(DAT_101d49a9,0xd0,local_14);
        }
      }
    }
  }
  return iVar1;
}

