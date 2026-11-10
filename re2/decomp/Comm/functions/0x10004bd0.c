// rea decompile_all
// name: I2CWordReadEx
// address: 0x10004bd0
// body: available
// range: 0x10004bd0-0x10004d0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int I2CWordReadEx(undefined4 param_1,uint param_2,ushort param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
                    /* 0x4bd0  75  I2CWordReadEx */
  uVar1 = (*DAT_101def08)();
  uVar1 = uVar1 & 0xffff;
  if (DAT_101deeec == (code *)0x0) {
    return 6;
  }
  uVar5 = (uint)param_3 % uVar1;
  iVar7 = 0;
  pcVar4 = DAT_101deeec;
  iVar3 = param_4;
  if (param_3 / uVar1 != 0) {
    do {
      uVar2 = param_2;
      if (param_5 == 1) {
        uVar2 = iVar7 * uVar1 + param_2;
      }
      if (pcVar4 == (code *)0x0) {
        return 6;
      }
      if (DAT_101def2c == 1) {
        if (uVar1 < 0x19) {
          iVar6 = FUN_10003990(uVar2 & 0xffff,uVar1,iVar3);
          pcVar4 = DAT_101deeec;
        }
        else {
          iVar6 = 0x10;
        }
      }
      else {
        iVar6 = (*pcVar4)(param_1,uVar2 & 0xffff,uVar1,iVar3);
        pcVar4 = DAT_101deeec;
      }
      if (iVar6 != 0) {
        return iVar6;
      }
      iVar7 = iVar7 + 1;
      iVar3 = iVar3 + uVar1;
    } while (iVar7 < (int)(param_3 / uVar1));
  }
  iVar3 = 0;
  if (uVar5 != 0) {
    if (param_5 == 1) {
      param_2 = iVar7 * uVar1 + param_2;
    }
    param_4 = uVar1 * iVar7 + param_4;
    if (pcVar4 == (code *)0x0) {
      return 6;
    }
    if (DAT_101def2c == 1) {
      if (0x18 < uVar5) {
        return 0x10;
      }
      iVar3 = FUN_10003990(param_2 & 0xffff,uVar5,param_4);
      return iVar3;
    }
    iVar3 = (*pcVar4)(param_1,param_2 & 0xffff,uVar5,param_4);
  }
  return iVar3;
}

