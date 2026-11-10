// rea decompile_all
// name: DDCCIRead
// address: 0x100072c0
// body: available
// range: 0x100072c0-0x10007479 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DDCCIRead(undefined4 param_1,undefined4 param_2,byte param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  undefined4 local_114;
  int local_110;
  byte local_109;
  byte local_108 [256];
  uint local_8;
  
                    /* 0x72c0  21  DDCCIRead */
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  _memset(local_108,0,0x100);
  bVar4 = 0x50;
  local_109 = 0x50;
  if ((DAT_101def10 != (code *)0x0) && (iVar2 = (*DAT_101def10)(), iVar2 == 8)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  pcVar1 = DAT_101def10;
  _memset(local_108,0,0x100);
  if ((pcVar1 != (code *)0x0) && (iVar2 = (*pcVar1)(), iVar2 == 0x13)) {
    local_114 = 1;
    local_110 = 0;
    if (DAT_101dedd0 == (code *)0x0) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar2 = (*DAT_101dedd0)(&local_114,&local_110);
    if (iVar2 != 0) goto LAB_10007469;
    if (local_110 == 0) {
      I2CReadEx(param_1,param_2,param_3 - 1,local_108 + 1,0);
      local_108[0] = (byte)param_1;
      bVar4 = local_109;
      goto LAB_100073f9;
    }
  }
  I2CReadEx(param_1,param_2,param_3,local_108,0);
  if (local_108[0] == (byte)param_1) {
LAB_100073f9:
    iVar2 = 0;
    uVar3 = local_108[1] & 0x7f;
    if (uVar3 != 0xfffffffe) {
      do {
        bVar4 = bVar4 ^ local_108[iVar2];
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uVar3 + 2));
    }
    if (bVar4 != local_108[uVar3 + 2]) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (uVar3 + 3 != 0) {
      FUN_1014c320(param_4,local_108,uVar3 + 3);
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_10007469:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

