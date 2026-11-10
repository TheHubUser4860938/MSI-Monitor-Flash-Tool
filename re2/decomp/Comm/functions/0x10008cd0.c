// rea decompile_all
// name: FUN_10008cd0
// address: 0x10008cd0
// body: available
// range: 0x10008cd0-0x10008e26 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10008cd0(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint in_ECX;
  ushort in_DX;
  ushort uVar3;
  undefined4 uVar4;
  
  if (6 < in_DX) {
    return 0x14;
  }
  iVar2 = WriteRegEx(0xfde9,in_ECX + 0x42000000 < 0x10000);
  if (iVar2 == 0) {
    if (param_2 == 1) {
      uVar4 = 0x80;
    }
    else {
      uVar4 = 0x84;
    }
    iVar2 = WriteRegEx(0xfde5,uVar4);
    if (iVar2 == 0) {
      iVar2 = WriteRegEx(0xfdd0,in_ECX >> 0x18);
      if ((((iVar2 == 0) && (iVar2 = WriteRegEx(0xfdd1,in_ECX >> 0x10), iVar2 == 0)) &&
          (iVar2 = WriteRegEx(0xfdd2,in_ECX >> 8), iVar2 == 0)) &&
         (iVar2 = WriteRegEx(0xfdd3), iVar2 == 0)) {
        uVar3 = 0;
        if (in_DX != 0) {
          do {
            puVar1 = (undefined1 *)(param_1 + (uint)uVar3 * 4);
            iVar2 = WriteRegEx(0xfdd4,puVar1[3]);
            if (iVar2 != 0) {
              return iVar2;
            }
            iVar2 = WriteRegEx(0xfdd5,puVar1[2]);
            if (iVar2 != 0) {
              return iVar2;
            }
            iVar2 = WriteRegEx(0xfdd6,puVar1[1]);
            if (iVar2 != 0) {
              return iVar2;
            }
            iVar2 = WriteRegEx(0xfdd7,*puVar1);
            if (iVar2 != 0) {
              return iVar2;
            }
            iVar2 = WriteRegEx(0xfde6,1);
            if (iVar2 != 0) {
              return iVar2;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < in_DX);
        }
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}

