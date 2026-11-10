// rea decompile_all
// name: FUN_1016e179
// address: 0x1016e179
// body: available
// range: 0x1016e179-0x1016e219 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 (*) [16] FUN_1016e179(undefined1 (*param_1) [16],ushort param_2)

{
  undefined1 *puVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  undefined1 (*pauVar4) [16];
  bool bVar5;
  bool bVar6;
  
  pauVar4 = (undefined1 (*) [16])0x0;
  pauVar2 = param_1;
  if (DAT_1020cffc < 2) {
    do {
      puVar1 = *pauVar2;
      pauVar4 = (undefined1 (*) [16])(*pauVar2 + 2);
      pauVar2 = pauVar4;
    } while (*(short *)puVar1 != 0);
    do {
      pauVar4 = (undefined1 (*) [16])(pauVar4[-1] + 0xe);
      if (pauVar4 == param_1) break;
    } while (*(ushort *)*pauVar4 != param_2);
    if (*(ushort *)*pauVar4 != param_2) {
      pauVar4 = (undefined1 (*) [16])0x0;
    }
  }
  else {
    for (; ((uint)(*param_1 + 1) & 0xe) != 0; param_1 = (undefined1 (*) [16])(*param_1 + 2)) {
      if (*(ushort *)*param_1 == param_2) {
        pauVar4 = param_1;
      }
      if (*(ushort *)*param_1 == 0) {
        return pauVar4;
      }
    }
    bVar5 = param_2 != 0;
    bVar6 = param_2 == 0;
    if (bVar6) {
      bVar5 = true;
      while (iVar3 = pcmpistri(ZEXT416(0xffff0001),*param_1,0x15), !bVar5) {
        param_1 = param_1 + 1;
        bVar5 = param_1 == (undefined1 (*) [16])0x0;
      }
      pauVar4 = (undefined1 (*) [16])(*param_1 + iVar3 * 2);
    }
    else {
      while( true ) {
        iVar3 = pcmpistri(ZEXT216(param_2),*param_1,0x41);
        if (bVar5) {
          pauVar4 = (undefined1 (*) [16])(*param_1 + iVar3 * 2);
        }
        if (bVar6) break;
        bVar5 = (undefined1 (*) [16])0xffffffef < param_1;
        param_1 = param_1 + 1;
        bVar6 = param_1 == (undefined1 (*) [16])0x0;
      }
    }
  }
  return pauVar4;
}

