// rea decompile_all
// name: WriteSysDevice
// address: 0x10006700
// body: available
// range: 0x10006700-0x100068c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int WriteSysDevice(byte param_1,byte param_2,byte param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  ushort uVar3;
  byte bVar4;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  char local_14 [4];
  char local_10 [4];
  undefined1 local_c [4];
  byte local_8 [4];
  uint uVar5;
  
                    /* 0x6700  169  WriteSysDevice */
  iVar6 = 0;
  if ((DAT_101def10 != (code *)0x0) && (iVar2 = (*DAT_101def10)(), iVar2 == 8)) {
    uVar3 = 0x500;
    if (param_5 != 1) {
      uVar3 = 0x100;
    }
    if (DAT_101dee88 == (code *)0x0) {
      return 6;
    }
    iVar6 = (*DAT_101dee88)(3,param_1 | uVar3,param_2,param_3,param_4);
    return iVar6;
  }
  if (param_3 != 0) {
    uVar5 = (uint)param_2 << 8;
    while (local_8[0] = param_1, DAT_101def00 != (code *)0x0) {
      if (DAT_101def2c == 1) {
        iVar6 = I2CMasterWrite(DAT_101d49aa,2,1,local_8);
      }
      else {
        iVar6 = (*DAT_101def00)(DAT_101d49aa,2,1,local_8);
      }
      if (iVar6 != 0) {
        return iVar6;
      }
      local_c[0] = *(undefined1 *)((uVar5 & 0xff) + param_4);
      if (DAT_101def00 == (code *)0x0) break;
      if (DAT_101def2c == 1) {
        iVar6 = I2CMasterWrite(DAT_101d49aa,3,1,local_c);
      }
      else {
        iVar6 = (*DAT_101def00)(DAT_101d49aa,3,1,local_c);
      }
      if (iVar6 != 0) {
        return iVar6;
      }
      cVar1 = (char)uVar5 + (char)(uVar5 >> 8);
      if (param_5 != 1) {
        if (DAT_101def00 != (code *)0x0) {
          local_14[0] = cVar1;
          if (DAT_101def2c != 1) {
            pcVar8 = local_14;
            uVar7 = 4;
            goto LAB_1000689a;
          }
          iVar6 = I2CMasterWrite(DAT_101d49aa,4,1,local_14);
          goto LAB_1000689c;
        }
        break;
      }
      if (DAT_101def00 == (code *)0x0) break;
      local_10[0] = cVar1;
      if (DAT_101def2c == 1) {
        iVar6 = I2CMasterWrite(DAT_101d49aa,0xf,1,local_10);
      }
      else {
        pcVar8 = local_10;
        uVar7 = 0xf;
LAB_1000689a:
        iVar6 = (*DAT_101def00)(DAT_101d49aa,uVar7,1,pcVar8);
      }
LAB_1000689c:
      if (iVar6 != 0) {
        return iVar6;
      }
      bVar4 = (char)uVar5 + 1;
      uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar4);
      if (param_3 <= bVar4) {
        return 0;
      }
    }
    iVar6 = 6;
  }
  return iVar6;
}

