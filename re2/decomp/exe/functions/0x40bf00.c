// rea decompile_all
// name: FUN_0040bf00
// address: 0x40bf00
// body: available
// range: 0x40bf00-0x40bf9c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0040bf00(ushort *param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint uVar4;
  undefined4 *in_ECX;
  undefined4 *puVar5;
  ushort *puVar6;
  
  uVar4 = in_ECX[4];
  if (param_3 != 0) {
    if (param_3 <= uVar4) {
      puVar5 = in_ECX;
      if (7 < (uint)in_ECX[5]) {
        puVar5 = (undefined4 *)*in_ECX;
      }
      puVar6 = (ushort *)((int)puVar5 + (uVar4 - param_3) * 2);
      uVar1 = *param_1;
      do {
        puVar3 = puVar6;
        uVar4 = param_3;
        puVar2 = param_1;
        if (*puVar6 == uVar1) {
          while( true ) {
            if (uVar4 == 0) goto LAB_0040bf57;
            if (*puVar3 != *puVar2) break;
            puVar3 = puVar3 + 1;
            uVar4 = uVar4 - 1;
            puVar2 = puVar2 + 1;
          }
          if ((-(uint)(*puVar3 < *puVar2) & 0xfffffffe) == 0xffffffff) {
LAB_0040bf57:
            if (7 < (uint)in_ECX[5]) {
              in_ECX = (undefined4 *)*in_ECX;
            }
            return (int)puVar6 - (int)in_ECX >> 1;
          }
        }
        puVar3 = (ushort *)FUN_00403e50();
        if (puVar6 == puVar3) break;
        puVar6 = puVar6 + -1;
      } while( true );
    }
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

