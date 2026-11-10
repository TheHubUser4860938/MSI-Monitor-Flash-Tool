// rea decompile_all
// name: DDCCIWrite
// address: 0x100071c0
// body: available
// range: 0x100071c0-0x100072b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DDCCIWrite(undefined4 param_1,undefined4 param_2,byte param_3,undefined4 param_4)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  byte local_10c [260];
  uint local_8;
  
                    /* 0x71c0  22  DDCCIWrite */
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  _memset(local_10c,0,0x104);
  if ((DAT_101def10 != (code *)0x0) && (iVar2 = (*DAT_101def10)(), iVar2 == 8)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  _memset(local_10c,0,0x104);
  local_10c[0] = (byte)param_1;
  local_10c[1] = (char)param_2;
  uVar3 = (uint)param_3;
  local_10c[2] = param_3 | 0x80;
  if (param_3 != 0) {
    FUN_1014c320(local_10c + 3,param_4,uVar3);
  }
  iVar2 = 0;
  if (uVar3 != 0xfffffffd) {
    do {
      pbVar1 = local_10c + iVar2;
      iVar2 = iVar2 + 1;
      local_10c[uVar3 + 3] = local_10c[uVar3 + 3] ^ *pbVar1;
    } while (iVar2 < (int)(uVar3 + 3));
  }
  I2CWriteEx(param_1,param_2,param_3 + 2,local_10c + 2,0);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

