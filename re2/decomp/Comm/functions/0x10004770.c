// rea decompile_all
// name: I2CReadEx
// address: 0x10004770
// body: available
// range: 0x10004770-0x1000490b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int I2CReadEx(undefined4 param_1,char param_2,ushort param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  int local_c;
  
                    /* 0x4770  71  I2CReadEx */
  uVar1 = (*DAT_101def08)();
  uVar1 = uVar1 & 0xffff;
  if (DAT_101deefc == (code *)0x0) {
    return 6;
  }
  if (DAT_101def2c == 1) {
    uVar1 = 0x18;
  }
  iVar2 = (*DAT_101def10)();
  if (iVar2 == 2) {
    uVar1 = (*DAT_101deebc)();
    if ((uVar1 & 8) == 0) {
      uVar1 = 2;
    }
    else {
      uVar1 = (*DAT_101def08)();
      uVar1 = uVar1 & 0xffff;
    }
  }
  uVar4 = (uint)param_3 % uVar1;
  local_c = 0;
  pcVar5 = DAT_101deefc;
  iVar2 = param_4;
  if (param_3 / uVar1 != 0) {
    do {
      cVar3 = param_2;
      if (param_5 == 1) {
        cVar3 = (char)uVar1 * (char)local_c + param_2;
      }
      if (pcVar5 == (code *)0x0) {
        return 6;
      }
      if (DAT_101def2c == 1) {
        if ((ushort)uVar1 < 0x19) {
          iVar6 = FUN_10003990(cVar3,uVar1,iVar2);
          pcVar5 = DAT_101deefc;
        }
        else {
          iVar6 = 0x10;
        }
      }
      else {
        iVar6 = (*pcVar5)(param_1,cVar3,uVar1,iVar2);
        pcVar5 = DAT_101deefc;
      }
      if (iVar6 != 0) {
        return iVar6;
      }
      local_c = local_c + 1;
      iVar2 = iVar2 + uVar1;
    } while (local_c < (int)(param_3 / uVar1));
  }
  iVar2 = 0;
  if (uVar4 != 0) {
    if (param_5 == 1) {
      param_2 = (char)uVar1 * (char)local_c + param_2;
    }
    param_4 = uVar1 * local_c + param_4;
    if (pcVar5 == (code *)0x0) {
      return 6;
    }
    if (DAT_101def2c == 1) {
      if (0x18 < uVar4) {
        return 0x10;
      }
      iVar2 = FUN_10003990(param_2,uVar4,param_4);
      return iVar2;
    }
    iVar2 = (*pcVar5)(param_1,param_2,uVar4,param_4);
  }
  return iVar2;
}

