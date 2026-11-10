// rea decompile_all
// name: FUN_1001fb50
// address: 0x1001fb50
// body: available
// range: 0x1001fb50-0x1001fce8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1001fb50(void)

{
  int iVar1;
  uint in_ECX;
  int iVar2;
  undefined4 uStack_8;
  
  uStack_8 = in_ECX & 0xffffff;
  iVar2 = 5;
  if (in_ECX != 0x4f) {
    return 0;
  }
  iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x1010,3);
  if (((((iVar1 == 0) && (iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x1011,3), iVar1 == 0)) &&
       (iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x1012,3), iVar1 == 0)) &&
      ((iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x1013,3), iVar1 == 0 &&
       (iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0xfe14,0), iVar1 == 0)))) &&
     ((iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x1014,1), iVar1 == 0 &&
      ((iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x6f27,0x23), iVar1 == 0 &&
       (iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x6f27,3), iVar1 == 0)))))) {
    do {
      Sleep(1);
      iVar1 = (**(code **)(*DAT_10249d10 + 0xc0))(0x6f27,(int)&uStack_8 + 3);
      if (iVar1 != 0) {
        return iVar1;
      }
    } while (((uStack_8 & 0x10000000) != 0) && (iVar2 = iVar2 + -1, 0 < iVar2));
    if (iVar2 == 0) {
      return 0xdc0;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x6f27,1);
    if ((iVar1 == 0) && (iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x6f27,0), iVar1 == 0)) {
      iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0xdf,0x80);
    }
  }
  return iVar1;
}

