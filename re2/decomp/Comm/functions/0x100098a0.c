// rea decompile_all
// name: FUN_100098a0
// address: 0x100098a0
// body: available
// range: 0x100098a0-0x10009a5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100098a0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint in_ECX;
  ushort in_DX;
  int iVar5;
  uint local_20;
  undefined2 local_1a;
  byte local_18 [4];
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 uStack_c;
  undefined2 uStack_b;
  undefined1 uStack_9;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_18[0] = 0;
  iVar5 = 600;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_b = 0;
  uStack_9 = 0;
  local_1a = in_DX;
  iVar1 = WriteRegEx(0x3701,0x82);
  if (iVar1 == 0) {
    uVar2 = (uint)local_1a;
    iVar1 = 0;
    local_20 = in_ECX;
    if (uVar2 != 0) {
      while( true ) {
        iVar3 = WriteRegEx(0x3704,local_20 >> 0x18);
        if ((((iVar3 != 0) || (iVar3 = WriteRegEx(0x3705,local_20 >> 0x10), iVar3 != 0)) ||
            (iVar3 = WriteRegEx(0x3706,local_20 >> 8), iVar3 != 0)) ||
           (iVar3 = WriteRegEx(0x3707,local_20), iVar3 != 0)) break;
        local_1a = local_1a & 0xff;
        iVar3 = ReadRegEx(0x3700,(int)&local_1a + 1);
        if (iVar3 != 0) break;
        iVar3 = WriteRegEx(0x3700,local_1a._1_1_ & 0x1f | 0x80);
        if (iVar3 != 0) break;
        uStack_14 = 0;
        uStack_10 = 0;
        uStack_c = 0;
        uStack_b = 0;
        uStack_9 = 0;
        iVar3 = 0;
        local_18[0] = *(byte *)(param_1 + 3 + iVar1 * 4);
        local_18[1] = *(undefined1 *)(param_1 + 2 + iVar1 * 4);
        local_18[2] = *(undefined1 *)(param_1 + 1 + iVar1 * 4);
        local_18[3] = *(undefined1 *)(param_1 + iVar1 * 4);
        do {
          iVar4 = WriteRegEx(iVar1 + 0x3710,local_18[iVar1]);
          if (iVar4 != 0) goto LAB_10009a50;
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0x10);
        for (; 0 < iVar5; iVar5 = iVar5 + -1) {
          local_18[0] = 0;
          iVar3 = ReadRegEx(0x3700,local_18);
          if ((iVar3 != 0) || ((local_18[0] & 0xe0) == 0)) goto LAB_10009a50;
          Sleep(2);
        }
        if (param_2 == 1) {
          local_20 = local_20 + 4;
        }
        iVar1 = iVar1 + 1;
        if ((int)uVar2 <= iVar1) break;
      }
    }
  }
LAB_10009a50:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

