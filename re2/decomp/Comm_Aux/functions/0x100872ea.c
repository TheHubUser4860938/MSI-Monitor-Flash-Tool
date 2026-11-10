// rea decompile_all
// name: FUN_100872ea
// address: 0x100872ea
// body: available
// range: 0x100872ea-0x100873ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100872ea(ulong param_1)

{
  long lVar1;
  uint uVar2;
  AFX_GLOBAL_DATA *pAVar3;
  uint uVar4;
  undefined4 unaff_EDI;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  uint uStack_14;
  uint uStack_c;
  
  uVar4 = param_1 >> 0x10 & 0xff;
  uStack_c = param_1 >> 0x10 & 0xff;
  uStack_14 = param_1 & 0xff;
  lVar1 = _labs((param_1 & 0xff) - uVar4);
  if (lVar1 < 0xb) {
    uVar2 = param_1 >> 8 & 0xff;
    lVar1 = _labs((param_1 & 0xff) - uVar2);
    if ((lVar1 < 0xb) && (lVar1 = _labs(uVar4 - uVar2), lVar1 < 0xb)) {
      dVar7 = ((double)uStack_c - 192.0) / 255.0 + 1.0;
      dVar6 = ((double)uVar2 - 192.0) / 255.0 + 1.0;
      uVar5 = (undefined4)((ulonglong)(((double)uStack_14 - 192.0) / 255.0 + 1.0) >> 0x20);
      pAVar3 = GetGlobalData();
      param_1 = CDrawingManager::PixelAlpha
                          (*(ulong *)(pAVar3 + 0x54),(double)CONCAT44(SUB84(dVar6,0),uVar5),
                           (double)CONCAT44(SUB84(dVar7,0),(int)((ulonglong)dVar6 >> 0x20)),
                           (double)CONCAT44(unaff_EDI,(int)((ulonglong)dVar7 >> 0x20)));
    }
  }
  return param_1;
}

