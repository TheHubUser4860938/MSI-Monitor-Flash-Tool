// rea decompile_all
// name: FUN_1009b987
// address: 0x1009b987
// body: available
// range: 0x1009b987-0x1009bb4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009b987(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  double dVar1;
  undefined8 uVar2;
  CMFCToolBarImages *pCVar3;
  undefined4 uVar4;
  AFX_GLOBAL_DATA *pAVar5;
  
  DAT_10205a48 = param_1;
  DAT_10205a4c = param_2;
  DAT_10205a54 = param_4;
  DAT_10205a68 = param_1;
  DAT_10205a6c = param_2;
  DAT_10205a74 = param_4;
  DAT_1020e650 = param_4;
  _DAT_1020e768 = param_4;
  _DAT_1020e998 = param_4;
  DAT_10205a50 = param_3;
  DAT_10205a70 = param_3;
  DAT_1020e64c = param_3;
  _DAT_1020e764 = param_3;
  _DAT_1020e994 = param_3;
  uVar4 = FUN_1017f8a0();
  _DAT_1020ebc8 = FUN_1017f8a0();
  _DAT_1020ebc4 = uVar4;
  _DAT_1020ecdc = uVar4;
  _DAT_1020ece0 = _DAT_1020ebc8;
  _DAT_1020edf4 = uVar4;
  _DAT_1020edf8 = _DAT_1020ebc8;
  if (DAT_1020e508 != 0) {
    DAT_10205a68 = FUN_1017f8a0();
    DAT_10205a6c = FUN_1017f8a0();
    DAT_10205a70 = uVar4;
    DAT_10205a74 = FUN_1017f8a0();
  }
  if ((DAT_1020e4f0 != (CMFCToolBarImages *)0x0) && (*(double *)(DAT_1020e4f0 + 0xb8) == 1.0)) {
    pAVar5 = GetGlobalData();
    pCVar3 = DAT_1020e4f0;
    uVar4 = DAT_10205a54;
    if (*(int *)(pAVar5 + 0x1e8) == 0) {
      dVar1 = 1.0;
    }
    else {
      dVar1 = *(double *)(pAVar5 + 0x1e0);
    }
    if (dVar1 == 1.0) {
      *(undefined4 *)(DAT_1020e4f0 + 0x54) = DAT_10205a50;
      *(undefined4 *)(pCVar3 + 0x58) = uVar4;
    }
    else {
      pAVar5 = GetGlobalData();
      CMFCToolBarImages::SetTransparentColor(DAT_1020e4f0,*(ulong *)(pAVar5 + 0x1c));
      pAVar5 = GetGlobalData();
      if (*(int *)(pAVar5 + 0x1e8) == 0) {
        uVar2 = 0x3ff0000000000000;
      }
      else {
        uVar2 = *(undefined8 *)(pAVar5 + 0x1e0);
      }
      FUN_10088069(uVar2);
    }
  }
  return;
}

