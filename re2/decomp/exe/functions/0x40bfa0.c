// rea decompile_all
// name: FUN_0040bfa0
// address: 0x40bfa0
// body: available
// range: 0x40bfa0-0x40c079 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040bfa0(ushort *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *in_ECX;
  int iVar5;
  int iVar6;
  ushort *local_8;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(in_ECX + 8);
  if ((uVar1 == 0) || (uVar1 < param_3)) {
    return -1;
  }
  iVar6 = uVar1 + (1 - param_3);
  local_8 = in_ECX;
  if (7 < *(uint *)(in_ECX + 10)) {
    local_8 = *(ushort **)in_ECX;
  }
  do {
    if (iVar6 != 0) {
      puVar4 = local_8;
      iVar5 = iVar6;
      do {
        if (*puVar4 == *param_1) goto LAB_0040c00f;
        puVar4 = puVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    puVar4 = (ushort *)0x0;
LAB_0040c00f:
    puVar2 = puVar4;
    uVar1 = param_3;
    puVar3 = param_1;
    if (puVar4 == (ushort *)0x0) {
      return -1;
    }
    while( true ) {
      if (uVar1 == 0) goto LAB_0040c033;
      if (*puVar2 != *puVar3) break;
      puVar2 = puVar2 + 1;
      uVar1 = uVar1 - 1;
      puVar3 = puVar3 + 1;
    }
    if ((-(uint)(*puVar2 < *puVar3) & 0xfffffffe) == 0xffffffff) {
LAB_0040c033:
      if (7 < *(uint *)(in_ECX + 10)) {
        in_ECX = *(ushort **)in_ECX;
      }
      return (int)puVar4 - (int)in_ECX >> 1;
    }
    iVar6 = iVar6 + (-1 - ((int)puVar4 - (int)local_8 >> 1));
    local_8 = puVar4 + 1;
  } while( true );
}

