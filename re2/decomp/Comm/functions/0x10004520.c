// rea decompile_all
// name: I2CWriteEx
// address: 0x10004520
// body: available
// range: 0x10004520-0x100046dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int I2CWriteEx(undefined4 param_1,uint param_2,ushort param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint local_10;
  
                    /* 0x4520  80  I2CWriteEx */
  uVar1 = (*DAT_101def08)();
  uVar1 = uVar1 & 0xffff;
  if (DAT_101def2c == 1) {
    uVar1 = 0x100;
  }
  if (DAT_101def00 == (code *)0x0) {
    return 6;
  }
  if (param_3 == 0) {
    if (DAT_101def2c == 1) {
      iVar2 = FUN_10003c80(param_2 & 0xff);
      return iVar2;
    }
    iVar2 = (*DAT_101def00)(param_1,param_2,0,0);
    return iVar2;
  }
  iVar2 = (*DAT_101def10)();
  if (iVar2 == 2) {
    uVar1 = (*DAT_101deebc)();
    if ((uVar1 & 2) == 0) {
      uVar1 = 2;
    }
    else {
      uVar1 = (*DAT_101def08)();
      uVar1 = uVar1 & 0xffff;
    }
  }
  uVar4 = 0;
  cVar5 = (char)param_2;
  local_10 = 0;
  if (param_3 / uVar1 != 0) {
    uVar6 = 0;
    do {
      cVar3 = cVar5;
      if (param_5 == 1) {
        cVar3 = (char)local_10 * (char)uVar1 + cVar5;
      }
      if (DAT_101def00 == (code *)0x0) {
        return 6;
      }
      if (DAT_101def2c == 1) {
        iVar2 = FUN_10003c80(cVar3);
      }
      else {
        iVar2 = (*DAT_101def00)(param_1,cVar3,uVar1,uVar6 * uVar1 + param_4);
      }
      if (iVar2 != 0) {
        return iVar2;
      }
      uVar4 = local_10 + 1;
      uVar6 = uVar4 & 0xffff;
      local_10 = uVar4;
    } while (uVar6 < param_3 / uVar1);
  }
  iVar2 = 0;
  if ((uint)param_3 % uVar1 != 0) {
    if (param_5 == 1) {
      cVar5 = (char)uVar4 * (char)uVar1 + cVar5;
    }
    if (DAT_101def00 == (code *)0x0) {
      return 6;
    }
    if (DAT_101def2c == 1) {
      iVar2 = FUN_10003c80(cVar5);
      return iVar2;
    }
    iVar2 = (*DAT_101def00)(param_1,cVar5,(uint)param_3 % uVar1,(uVar4 & 0xffff) * uVar1 + param_4);
  }
  return iVar2;
}

