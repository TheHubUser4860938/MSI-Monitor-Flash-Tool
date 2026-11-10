// rea decompile_all
// name: FUN_10066117
// address: 0x10066117
// body: available
// range: 0x10066117-0x100662db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10066117(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  double dVar1;
  undefined8 uVar2;
  CMFCToolBarImages *pCVar3;
  undefined4 uVar4;
  AFX_GLOBAL_DATA *pAVar5;
  
  DAT_101d35d8 = param_1;
  DAT_101d35dc = param_2;
  DAT_101d35e4 = param_4;
  DAT_101d35f8 = param_1;
  DAT_101d35fc = param_2;
  DAT_101d3604 = param_4;
  DAT_101db0e0 = param_4;
  _DAT_101db1f8 = param_4;
  _DAT_101db428 = param_4;
  DAT_101d35e0 = param_3;
  DAT_101d3600 = param_3;
  DAT_101db0dc = param_3;
  _DAT_101db1f4 = param_3;
  _DAT_101db424 = param_3;
  uVar4 = FUN_10149490();
  _DAT_101db658 = FUN_10149490();
  _DAT_101db654 = uVar4;
  _DAT_101db76c = uVar4;
  _DAT_101db770 = _DAT_101db658;
  _DAT_101db884 = uVar4;
  _DAT_101db888 = _DAT_101db658;
  if (DAT_101daf98 != 0) {
    DAT_101d35f8 = FUN_10149490();
    DAT_101d35fc = FUN_10149490();
    DAT_101d3600 = uVar4;
    DAT_101d3604 = FUN_10149490();
  }
  if ((DAT_101daf80 != (CMFCToolBarImages *)0x0) && (*(double *)(DAT_101daf80 + 0xb8) == 1.0)) {
    pAVar5 = GetGlobalData();
    pCVar3 = DAT_101daf80;
    uVar4 = DAT_101d35e4;
    if (*(int *)(pAVar5 + 0x1e8) == 0) {
      dVar1 = 1.0;
    }
    else {
      dVar1 = *(double *)(pAVar5 + 0x1e0);
    }
    if (dVar1 == 1.0) {
      *(undefined4 *)(DAT_101daf80 + 0x54) = DAT_101d35e0;
      *(undefined4 *)(pCVar3 + 0x58) = uVar4;
    }
    else {
      pAVar5 = GetGlobalData();
      CMFCToolBarImages::SetTransparentColor(DAT_101daf80,*(ulong *)(pAVar5 + 0x1c));
      pAVar5 = GetGlobalData();
      if (*(int *)(pAVar5 + 0x1e8) == 0) {
        uVar2 = 0x3ff0000000000000;
      }
      else {
        uVar2 = *(undefined8 *)(pAVar5 + 0x1e0);
      }
      FUN_10052724(uVar2);
    }
  }
  return;
}

