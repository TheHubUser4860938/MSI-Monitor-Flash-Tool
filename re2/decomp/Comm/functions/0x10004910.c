// rea decompile_all
// name: I2CCurrentReadEx
// address: 0x10004910
// body: available
// range: 0x10004910-0x10004a16 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int I2CCurrentReadEx(undefined4 param_1,ushort param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
                    /* 0x4910  55  I2CCurrentReadEx */
  uVar1 = (*DAT_101def08)();
  uVar1 = uVar1 & 0xffff;
  if (DAT_101deef4 == (code *)0x0) {
    return 6;
  }
  local_8 = 0;
  uVar3 = (uint)param_2 % uVar1;
  pcVar2 = DAT_101deef4;
  iVar5 = param_3;
  if (param_2 / uVar1 == 0) {
    local_8 = 0;
  }
  else {
    do {
      if (pcVar2 == (code *)0x0) {
        return 6;
      }
      if (DAT_101def2c == 1) {
        if (uVar1 < 0x19) {
          iVar4 = FUN_10003990(0,uVar1,iVar5);
          pcVar2 = DAT_101deef4;
        }
        else {
          iVar4 = 0x10;
        }
      }
      else {
        iVar4 = (*pcVar2)(param_1,uVar1,iVar5);
        pcVar2 = DAT_101deef4;
      }
      if (iVar4 != 0) {
        return iVar4;
      }
      iVar5 = iVar5 + uVar1;
      local_8 = local_8 + 1;
    } while (local_8 < (int)(param_2 / uVar1));
  }
  iVar5 = 0;
  if (uVar3 != 0) {
    param_3 = uVar1 * local_8 + param_3;
    if (pcVar2 == (code *)0x0) {
      return 6;
    }
    if (DAT_101def2c == 1) {
      if (0x18 < uVar3) {
        return 0x10;
      }
      iVar5 = FUN_10003990(0,uVar3,param_3);
      return iVar5;
    }
    iVar5 = (*pcVar2)(param_1,uVar3,param_3);
  }
  return iVar5;
}

