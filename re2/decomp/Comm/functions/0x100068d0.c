// rea decompile_all
// name: ReadWordSysDevice
// address: 0x100068d0
// body: available
// range: 0x100068d0-0x10006ae2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int ReadWordSysDevice(byte param_1,uint param_2,byte param_3,int param_4,int param_5)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ushort uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  char local_14 [4];
  char local_10 [4];
  undefined1 local_c [4];
  byte local_8 [4];
  
                    /* 0x68d0  110  ReadWordSysDevice */
  iVar7 = 0;
  if ((DAT_101def10 != (code *)0x0) && (iVar3 = (*DAT_101def10)(), iVar3 == 8)) {
    uVar4 = 0x600;
    if (param_5 != 1) {
      uVar4 = 0x200;
    }
    if (DAT_101dee8c == (code *)0x0) {
      return 6;
    }
    iVar7 = (*DAT_101dee8c)(4,param_1 | uVar4,param_2,param_3,param_4);
    return iVar7;
  }
  if (param_3 != 0) {
    uVar6 = (uint)param_3 << 8;
    while( true ) {
      local_8[0] = param_1;
      if (DAT_101def00 == (code *)0x0) break;
      if (DAT_101def2c == 1) {
        iVar7 = I2CMasterWrite(DAT_101d49aa,2,1,local_8);
      }
      else {
        iVar7 = (*DAT_101def00)(DAT_101d49aa,2,1,local_8);
      }
      if (iVar7 != 0) {
        return iVar7;
      }
      local_c[0] = (undefined1)((param_2 & 0xffff) + (uVar6 & 0xff) >> 8);
      if (DAT_101def00 == (code *)0x0) break;
      if (DAT_101def2c == 1) {
        iVar7 = I2CMasterWrite(DAT_101d49aa,5,1,local_c);
      }
      else {
        iVar7 = (*DAT_101def00)(DAT_101d49aa,5,1,local_c);
      }
      if (iVar7 != 0) {
        return iVar7;
      }
      cVar2 = (char)param_2 + (char)uVar6;
      if (param_5 != 1) {
        if (DAT_101def00 != (code *)0x0) {
          local_14[0] = cVar2;
          if (DAT_101def2c != 1) {
            pcVar9 = local_14;
            uVar8 = 0x44;
            goto LAB_10006a7c;
          }
          iVar7 = I2CMasterWrite(DAT_101d49aa,0x44,1,local_14);
          goto LAB_10006a7e;
        }
        break;
      }
      if (DAT_101def00 == (code *)0x0) break;
      local_10[0] = cVar2;
      if (DAT_101def2c == 1) {
        iVar7 = I2CMasterWrite(DAT_101d49aa,0x45,1,local_10);
      }
      else {
        pcVar9 = local_10;
        uVar8 = 0x45;
LAB_10006a7c:
        iVar7 = (*DAT_101def00)(DAT_101d49aa,uVar8,1,pcVar9);
      }
LAB_10006a7e:
      if (iVar7 != 0) {
        return iVar7;
      }
      if (DAT_101deefc == (code *)0x0) break;
      if (DAT_101def2c == 1) {
        iVar7 = FUN_10003990();
      }
      else {
        iVar7 = (*DAT_101deefc)(DAT_101d49aa,8,1,param_4 + (uVar6 & 0xff));
      }
      if (iVar7 != 0) {
        return iVar7;
      }
      bVar5 = (char)uVar6 + 1;
      uVar1 = uVar6 >> 8;
      uVar6 = CONCAT31((int3)(uVar6 >> 8),bVar5);
      if ((byte)uVar1 <= bVar5) {
        return 0;
      }
    }
    iVar7 = 6;
  }
  return iVar7;
}

