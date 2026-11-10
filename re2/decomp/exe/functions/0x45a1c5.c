// rea decompile_all
// name: FUN_0045a1c5
// address: 0x45a1c5
// body: available
// range: 0x45a1c5-0x45a389 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045a1c5(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  double dVar1;
  undefined8 uVar2;
  CMFCToolBarImages *pCVar3;
  undefined4 uVar4;
  AFX_GLOBAL_DATA *pAVar5;
  
  DAT_0060c518 = param_1;
  DAT_0060c51c = param_2;
  DAT_0060c524 = param_4;
  DAT_0060c538 = param_1;
  DAT_0060c53c = param_2;
  DAT_0060c544 = param_4;
  DAT_00615028 = param_4;
  _DAT_00615140 = param_4;
  _DAT_00615370 = param_4;
  DAT_0060c520 = param_3;
  DAT_0060c540 = param_3;
  DAT_00615024 = param_3;
  _DAT_0061513c = param_3;
  _DAT_0061536c = param_3;
  uVar4 = FUN_0055bce0();
  _DAT_006155a0 = FUN_0055bce0();
  _DAT_0061559c = uVar4;
  _DAT_006156b4 = uVar4;
  _DAT_006156b8 = _DAT_006155a0;
  _DAT_006157cc = uVar4;
  _DAT_006157d0 = _DAT_006155a0;
  if (DAT_00614ee0 != 0) {
    DAT_0060c538 = FUN_0055bce0();
    DAT_0060c53c = FUN_0055bce0();
    DAT_0060c540 = uVar4;
    DAT_0060c544 = FUN_0055bce0();
  }
  if ((DAT_00614ec8 != (CMFCToolBarImages *)0x0) && (*(double *)(DAT_00614ec8 + 0xb8) == 1.0)) {
    pAVar5 = GetGlobalData();
    pCVar3 = DAT_00614ec8;
    uVar4 = DAT_0060c524;
    if (*(int *)(pAVar5 + 0x1e8) == 0) {
      dVar1 = 1.0;
    }
    else {
      dVar1 = *(double *)(pAVar5 + 0x1e0);
    }
    if (dVar1 == 1.0) {
      *(undefined4 *)(DAT_00614ec8 + 0x54) = DAT_0060c520;
      *(undefined4 *)(pCVar3 + 0x58) = uVar4;
    }
    else {
      pAVar5 = GetGlobalData();
      CMFCToolBarImages::SetTransparentColor(DAT_00614ec8,*(ulong *)(pAVar5 + 0x1c));
      pAVar5 = GetGlobalData();
      if (*(int *)(pAVar5 + 0x1e8) == 0) {
        uVar2 = 0x3ff0000000000000;
      }
      else {
        uVar2 = *(undefined8 *)(pAVar5 + 0x1e0);
      }
      FUN_0044e89f(uVar2);
    }
  }
  return;
}

