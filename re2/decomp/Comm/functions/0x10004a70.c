// rea decompile_all
// name: I2CWordWriteEx
// address: 0x10004a70
// body: available
// range: 0x10004a70-0x10004bcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int I2CWordWriteEx(undefined4 param_1,uint param_2,ushort param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
                    /* 0x4a70  77  I2CWordWriteEx */
  uVar1 = (*DAT_101def08)();
  uVar1 = uVar1 & 0xffff;
  if (DAT_101deef0 == (code *)0x0) {
    return 6;
  }
  if (param_3 == 0) {
    if (DAT_101def2c == 1) {
      iVar2 = FUN_10003c80();
      return iVar2;
    }
    iVar2 = (*DAT_101deef0)(param_1,param_2,0,0);
    return iVar2;
  }
  uVar3 = param_3 / uVar1;
  uVar6 = (uint)param_3 % uVar1;
  iVar7 = 0;
  iVar2 = param_4;
  if (uVar3 != 0) {
    do {
      uVar4 = param_2;
      if (param_5 == 1) {
        uVar4 = iVar7 * uVar1 + param_2;
      }
      if (DAT_101deef0 == (code *)0x0) {
        return 6;
      }
      if (DAT_101def2c == 1) {
        iVar5 = FUN_10003c80();
      }
      else {
        iVar5 = (*DAT_101deef0)(param_1,uVar4 & 0xffff,uVar1,iVar2);
      }
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + uVar1;
    } while (iVar7 < (int)uVar3);
  }
  iVar2 = 0;
  if (uVar6 != 0) {
    if (param_5 == 1) {
      param_2 = iVar7 * uVar1 + param_2;
    }
    if (DAT_101deef0 == (code *)0x0) {
      return 6;
    }
    if (DAT_101def2c == 1) {
      iVar2 = FUN_10003c80();
      return iVar2;
    }
    iVar2 = (*DAT_101deef0)(param_1,param_2 & 0xffff,uVar6,uVar1 * iVar7 + param_4);
  }
  return iVar2;
}

