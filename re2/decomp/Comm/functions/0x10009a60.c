// rea decompile_all
// name: FUN_10009a60
// address: 0x10009a60
// body: available
// range: 0x10009a60-0x10009c55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009a60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint in_ECX;
  ushort in_DX;
  int iVar3;
  int local_24;
  uint local_20;
  byte local_19;
  uint local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 uStack_c;
  undefined2 uStack_b;
  undefined1 uStack_9;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  iVar3 = 600;
  local_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_b = 0;
  uStack_9 = 0;
  iVar1 = WriteRegEx(0x3701,0x82);
  if ((iVar1 == 0) && (in_DX != 0)) {
    local_24 = 0;
    local_20 = in_ECX;
    while( true ) {
      iVar1 = WriteRegEx(0x3704,local_20 >> 0x18);
      if ((((iVar1 != 0) || (iVar1 = WriteRegEx(0x3705,local_20 >> 0x10), iVar1 != 0)) ||
          (iVar1 = WriteRegEx(0x3706,local_20 >> 8), iVar1 != 0)) ||
         (iVar1 = WriteRegEx(0x3707,local_20), iVar1 != 0)) break;
      iVar1 = 0;
      do {
        iVar2 = ReadRegEx(iVar1 + 0x3710,(int)&local_18 + iVar1);
        if (iVar2 != 0) goto LAB_10009c46;
        iVar1 = iVar1 + 1;
      } while (iVar1 < 0x10);
      local_19 = 0;
      iVar1 = ReadRegEx(0x3700,&local_19);
      if ((iVar1 != 0) || (iVar1 = WriteRegEx(0x3700,local_19 & 0x1f | 0xa0), iVar1 != 0)) break;
      for (; 0 < iVar3; iVar3 = iVar3 + -1) {
        local_18 = local_18 & 0xffffff00;
        iVar1 = ReadRegEx(0x3754,&local_18);
        if ((iVar1 != 0) || ((local_18 & 1) != 0)) goto LAB_10009c46;
        Sleep(2);
      }
      iVar1 = 0;
      local_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      uStack_c = 0;
      uStack_b = 0;
      uStack_9 = 0;
      do {
        iVar2 = ReadRegEx(iVar1 + 0x3710,(int)&local_18 + iVar1);
        if (iVar2 != 0) goto LAB_10009c46;
        iVar1 = iVar1 + 1;
      } while (iVar1 < 0x10);
      *(uint *)(param_1 + local_24 * 4) = local_18;
      if (param_2 == 1) {
        local_20 = local_20 + 4;
      }
      local_24 = local_24 + 1;
      if ((int)(uint)in_DX <= local_24) break;
    }
  }
LAB_10009c46:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

