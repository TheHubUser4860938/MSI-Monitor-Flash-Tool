// rea decompile_all
// name: FUN_1000fcb0
// address: 0x1000fcb0
// body: available
// range: 0x1000fcb0-0x1000fd1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1000fcb0(byte *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  while (uVar1 = param_3 - 4, 3 < param_3) {
    if (*(int *)param_1 != *(int *)param_2) goto LAB_1000fce6;
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
    param_3 = uVar1;
  }
  if (uVar1 != 0xfffffffc) {
LAB_1000fce6:
    bVar2 = *param_1 < *param_2;
    if ((*param_1 != *param_2) ||
       ((uVar1 != 0xfffffffd &&
        ((bVar2 = param_1[1] < param_2[1], param_1[1] != param_2[1] ||
         ((uVar1 != 0xfffffffe &&
          ((bVar2 = param_1[2] < param_2[2], param_1[2] != param_2[2] ||
           ((uVar1 != 0xffffffff && (bVar2 = param_1[3] < param_2[3], param_1[3] != param_2[3]))))))
         )))))) {
      return -(uint)bVar2 | 1;
    }
  }
  return 0;
}

