// rea decompile_all
// name: FUN_1009d48d
// address: 0x1009d48d
// body: available
// range: 0x1009d48d-0x1009d651 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d48d(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  double dVar1;
  undefined8 uVar2;
  CMFCToolBarImages *pCVar3;
  undefined4 uVar4;
  AFX_GLOBAL_DATA *pAVar5;
  
  DAT_1023d5d8 = param_1;
  DAT_1023d5dc = param_2;
  DAT_1023d5e4 = param_4;
  DAT_1023d5f8 = param_1;
  DAT_1023d5fc = param_2;
  DAT_1023d604 = param_4;
  DAT_10245df8 = param_4;
  _DAT_10245f10 = param_4;
  _DAT_10246140 = param_4;
  DAT_1023d5e0 = param_3;
  DAT_1023d600 = param_3;
  DAT_10245df4 = param_3;
  _DAT_10245f0c = param_3;
  _DAT_1024613c = param_3;
  uVar4 = FUN_101804f0();
  _DAT_10246370 = FUN_101804f0();
  _DAT_1024636c = uVar4;
  _DAT_10246484 = uVar4;
  _DAT_10246488 = _DAT_10246370;
  _DAT_1024659c = uVar4;
  _DAT_102465a0 = _DAT_10246370;
  if (DAT_10245cb0 != 0) {
    DAT_1023d5f8 = FUN_101804f0();
    DAT_1023d5fc = FUN_101804f0();
    DAT_1023d600 = uVar4;
    DAT_1023d604 = FUN_101804f0();
  }
  if ((DAT_10245c98 != (CMFCToolBarImages *)0x0) && (*(double *)(DAT_10245c98 + 0xb8) == 1.0)) {
    pAVar5 = GetGlobalData();
    pCVar3 = DAT_10245c98;
    uVar4 = DAT_1023d5e4;
    if (*(int *)(pAVar5 + 0x1e8) == 0) {
      dVar1 = 1.0;
    }
    else {
      dVar1 = *(double *)(pAVar5 + 0x1e0);
    }
    if (dVar1 == 1.0) {
      *(undefined4 *)(DAT_10245c98 + 0x54) = DAT_1023d5e0;
      *(undefined4 *)(pCVar3 + 0x58) = uVar4;
    }
    else {
      pAVar5 = GetGlobalData();
      CMFCToolBarImages::SetTransparentColor(DAT_10245c98,*(ulong *)(pAVar5 + 0x1c));
      pAVar5 = GetGlobalData();
      if (*(int *)(pAVar5 + 0x1e8) == 0) {
        uVar2 = 0x3ff0000000000000;
      }
      else {
        uVar2 = *(undefined8 *)(pAVar5 + 0x1e0);
      }
      FUN_10089b58(uVar2);
    }
  }
  return;
}

