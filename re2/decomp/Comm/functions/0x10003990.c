// rea decompile_all
// name: FUN_10003990
// address: 0x10003990
// body: available
// range: 0x10003990-0x10003c7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10003990(uint param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  uint3 in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int in_EDX;
  char cVar2;
  undefined4 uStack_8;
  
  if (DAT_101def2c == 1) {
    DAT_101def28 = 1;
    DAT_101def2c = 0;
  }
  uStack_8 = (uint)in_ECX;
  iVar1 = ReadMcuReg(0xf2,(int)&uStack_8 + 3);
  if (iVar1 == 0) {
    iVar1 = WriteMcuReg(0xf2,uStack_8._3_1_ & 0x7f);
    if (iVar1 == 0) {
      uStack_8._3_1_ = 0;
      iVar1 = ReadMcuReg(0x55,(int)&uStack_8 + 3);
      if (((iVar1 == 0) && (iVar1 = WriteMcuReg(0x55,uStack_8._3_1_ | 0x80), iVar1 == 0)) &&
         (iVar1 = FUN_10003920(0x20,extraout_ECX), iVar1 == 0)) {
        if (in_EDX == 0) {
          iVar1 = WriteMcuRegBit(0x57,0xfc,0);
          if ((iVar1 != 0) || (iVar1 = WriteMcuRegBit(0x58,0xe7,0), iVar1 != 0)) goto LAB_10003b24;
          iVar1 = WriteMcuReg(0x5e,(byte)in_ECX | 1);
        }
        else {
          if (in_EDX == 1) {
            iVar1 = WriteMcuRegBit(0x57,0xfc,1);
            if (((iVar1 != 0) || (iVar1 = WriteMcuRegBit(0x58,0xef,8), iVar1 != 0)) ||
               (iVar1 = WriteMcuReg(0x5e), iVar1 != 0)) goto LAB_10003b24;
            iVar1 = WriteMcuReg(0x5e,param_1);
          }
          else {
            if (in_EDX != 2) {
              return 0x11;
            }
            iVar1 = WriteMcuRegBit(0x57,0xfc,2);
            if ((((iVar1 != 0) || (iVar1 = WriteMcuRegBit(0x58,0xef,8), iVar1 != 0)) ||
                (iVar1 = WriteMcuReg(0x5e), iVar1 != 0)) ||
               (iVar1 = WriteMcuReg(0x5e,param_1 >> 8), iVar1 != 0)) goto LAB_10003b24;
            iVar1 = WriteMcuReg(0x5e,param_1);
          }
          if (iVar1 != 0) goto LAB_10003b24;
          iVar1 = WriteMcuReg(0x5e,(byte)in_ECX | 1);
        }
        if (iVar1 == 0) {
          cVar2 = '\x01';
          if (param_2 != '\0') {
            cVar2 = param_2;
          }
          iVar1 = WriteMcuRegBit(0x55,0xc1,(cVar2 + -1) * '\x02');
          if ((iVar1 == 0) && (iVar1 = WriteMcuRegBit(0x55,0xbf,0x40), iVar1 == 0)) {
            iVar1 = FUN_10003920(2,extraout_ECX_00);
            if (iVar1 != 0) {
              if (iVar1 == 3) {
                WriteMcuRegBit(0x55,0x7f,0);
                WriteMcuRegBit(0x55,0x7f,0x80);
              }
              if (DAT_101def28 == 1) {
                DAT_101def2c = 1;
                DAT_101def28 = 0;
              }
              return iVar1;
            }
            iVar1 = ReadMcuRegs(0x5e,cVar2,param_3,0);
            if ((iVar1 == 0) && (iVar1 = WriteMcuRegBit(0x5d,0xf8,7), iVar1 == 0)) {
              if (DAT_101def28 == 1) {
                DAT_101def2c = 1;
                DAT_101def28 = 0;
              }
              return 0;
            }
          }
        }
      }
    }
  }
LAB_10003b24:
  if (DAT_101def28 != 1) {
    return iVar1;
  }
  DAT_101def2c = 1;
  DAT_101def28 = 0;
  return iVar1;
}

