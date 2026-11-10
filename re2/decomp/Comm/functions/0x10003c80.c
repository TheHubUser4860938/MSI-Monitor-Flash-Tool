// rea decompile_all
// name: FUN_10003c80
// address: 0x10003c80
// body: available
// range: 0x10003c80-0x100041a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10003c80(uint param_1,uint param_2,undefined1 *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint extraout_ECX_01;
  uint uVar6;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  int in_EDX;
  char cVar7;
  byte bVar8;
  char cVar10;
  uint uVar9;
  uint local_c;
  byte local_5;
  
  if (DAT_101def2c == 1) {
    DAT_101def28 = 1;
    DAT_101def2c = 0;
  }
  local_5 = 0;
  iVar3 = ReadMcuReg(0xf2,&local_5);
  if ((iVar3 != 0) || (iVar3 = WriteMcuReg(0xf2,local_5 & 0x7f), iVar3 != 0)) {
LAB_10003ce0:
    if (DAT_101def28 != 1) {
      return iVar3;
    }
    DAT_101def2c = 1;
    DAT_101def28 = 0;
    return iVar3;
  }
  local_5 = 0;
  iVar3 = ReadMcuReg(0x55,&local_5);
  if ((iVar3 != 0) ||
     ((iVar3 = WriteMcuReg(0x55,local_5 | 0x80), iVar3 != 0 ||
      (iVar3 = FUN_10003920(0x20,extraout_ECX), iVar3 != 0)))) goto LAB_10003ce0;
  local_5 = 0;
  iVar3 = ReadMcuReg(0x57,&local_5);
  if ((iVar3 != 0) ||
     ((iVar3 = WriteMcuReg(0x57,local_5 & 0xfc), iVar3 != 0 ||
      (iVar3 = WriteMcuRegBit(0x58,0xe7,0), iVar3 != 0)))) goto LAB_10003ce0;
  iVar3 = FUN_10003920(0x20,extraout_ECX_00);
  if (iVar3 != 0) {
    if (iVar3 == 3) {
      WriteMcuRegBit(0x55,0x7f,0);
      WriteMcuRegBit(0x55,0x7f,0x80);
    }
    if (DAT_101def28 == 1) {
      DAT_101def2c = 1;
      DAT_101def28 = 0;
    }
    return iVar3;
  }
  iVar3 = WriteMcuReg(0x5e,in_ECX);
  if ((iVar3 != 0) || (iVar3 = WriteMcuRegBit(0x55,0xc1,0), iVar3 != 0)) goto LAB_100040f8;
  uVar5 = (ushort)param_2;
  bVar1 = (ushort)param_2 < 0x11;
  if (bVar1) {
    local_c = param_2 & 0xff;
    if ((char)param_2 == '\0') {
      local_c = 1;
    }
  }
  else {
    local_c = 0x10;
  }
  cVar7 = (char)local_c;
  if (in_EDX == 0) {
    cVar10 = cVar7 + -1;
  }
  else if (in_EDX == 1) {
    iVar3 = WriteMcuReg(0x5e,param_1);
    cVar10 = cVar7;
    if (iVar3 != 0) goto LAB_100040f8;
  }
  else {
    if (in_EDX != 2) {
      if (DAT_101def28 == 1) {
        DAT_101def2c = 1;
        DAT_101def28 = 0;
      }
      return 0x11;
    }
    iVar3 = WriteMcuReg(0x5e,param_1 >> 8);
    if ((iVar3 != 0) || (iVar3 = WriteMcuReg(0x5e,param_1), iVar3 != 0)) goto LAB_100040f8;
    cVar10 = cVar7 + '\x01';
  }
  uVar9 = (uint)CONCAT11(cVar10 * '\x02',cVar7);
  if (uVar5 < 0x11) {
    iVar3 = WriteMcuRegs(0x5e,local_c,param_3);
    if (iVar3 != 0) goto LAB_100040f8;
    iVar3 = WriteMcuReg(0x55,cVar10 * '\x02' + -0x40);
    uVar6 = extraout_ECX_01;
LAB_100040f0:
    if (iVar3 != 0) goto LAB_100040f8;
  }
  else {
    iVar3 = WriteMcuRegBit(0x55,0xfe,0);
    if ((iVar3 != 0) || (iVar3 = WriteMcuRegBit(0x57,0xbf,0x40), iVar3 != 0)) goto LAB_100040f8;
    local_5 = 0;
    bVar4 = ((param_2 & 0xf) != 0) + (char)(param_2 >> 4);
    uVar6 = (uint)bVar4;
    if (bVar4 != 0) {
      do {
        iVar3 = FUN_10003920(0x20,uVar6);
        if (iVar3 != 0) {
          if (iVar3 == 3) {
            WriteMcuRegBit(0x55,0x7f,0);
            WriteMcuRegBit(0x55,0x7f,0x80);
          }
          if (DAT_101def28 == 1) {
            DAT_101def2c = 1;
            DAT_101def28 = 0;
          }
          return iVar3;
        }
        uVar9 = uVar9 & 0xffffff00;
        bVar2 = (byte)local_c;
        if (bVar2 != 0) {
          do {
            iVar3 = WriteMcuReg(0x5e,*param_3);
            if (iVar3 != 0) goto LAB_100040f8;
            bVar8 = (char)uVar9 + 1;
            uVar9 = CONCAT31((int3)(uVar9 >> 8),bVar8);
            param_3 = param_3 + 1;
          } while (bVar8 < bVar2);
        }
        uVar9 = CONCAT31((int3)(uVar9 >> 8),local_5);
        if (local_5 != 0) {
          uVar5 = CONCAT11(bVar2 - 1,local_5) & 0x1fff;
          uVar9 = (uint)CONCAT11((char)(uVar5 >> 8) * '\x02',(char)uVar5);
        }
        iVar3 = WriteMcuReg(0x55,(char)(uVar9 >> 8) + -0x40);
        if (iVar3 != 0) goto LAB_100040f8;
        uVar5 = (ushort)param_2 - (short)local_c;
        bVar2 = (byte)uVar5;
        param_2 = (uint)uVar5;
        if (0x10 < uVar5) {
          bVar2 = 0x10;
        }
        local_c = (uint)bVar2;
        uVar6 = bVar4 - 1;
        if ((uVar9 & 0xff) == uVar6) {
          iVar3 = WriteMcuRegBit(0x57,0xbf,0);
          if (iVar3 != 0) goto LAB_100040f8;
          iVar3 = WriteMcuRegBit(0x5d,0xe7,0x18);
          uVar6 = extraout_ECX_04;
          goto LAB_100040f0;
        }
        if (((char)uVar9 != '\0') &&
           (iVar3 = WriteMcuRegBit(0x5d,0xe7,0x18), uVar6 = extraout_ECX_02, iVar3 != 0))
        goto LAB_100040f8;
        iVar3 = FUN_10003920(8,uVar6);
        if (iVar3 != 0) {
          if (iVar3 == 3) {
            WriteMcuRegBit(0x55,0x7f,0);
            WriteMcuRegBit(0x55,0x7f,0x80);
          }
          if (DAT_101def28 != 1) {
            return iVar3;
          }
          DAT_101def2c = 1;
          DAT_101def28 = 0;
          return iVar3;
        }
        local_5 = (char)uVar9 + 1;
        uVar9 = CONCAT31((int3)(uVar9 >> 8),local_5);
        uVar6 = extraout_ECX_03;
      } while (local_5 < bVar4);
    }
  }
  iVar3 = FUN_10003920(1,uVar6);
  if (iVar3 != 0) {
    if (iVar3 == 3) {
      WriteMcuRegBit(0x55,0x7f,0);
      WriteMcuRegBit(0x55,0x7f,0x80);
    }
    if (DAT_101def28 == 1) {
      DAT_101def2c = 1;
      DAT_101def28 = 0;
    }
    return iVar3;
  }
  iVar3 = WriteMcuRegBit(0x5d,0xf8,7);
  if (iVar3 == 0) {
    if (DAT_101def28 == 1) {
      DAT_101def2c = 1;
      DAT_101def28 = 0;
    }
    return 0;
  }
LAB_100040f8:
  if (DAT_101def28 != 1) {
    return iVar3;
  }
  DAT_101def2c = 1;
  DAT_101def28 = 0;
  return iVar3;
}

