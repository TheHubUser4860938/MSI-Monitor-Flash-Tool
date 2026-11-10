// rea decompile_all
// name: FUN_100af9b9
// address: 0x100af9b9
// body: available
// range: 0x100af9b9-0x100afb74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100af9b9(void)

{
  double dVar1;
  undefined4 uVar2;
  AFX_GLOBAL_DATA *pAVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (DAT_1020f204 == 0) {
    if (DAT_1020f2a4 == 0) {
      uVar2 = 1;
      DAT_1020f204 = 1;
      CMFCToolBarImages::Initialize((CMFCToolBarImages *)&DAT_1020f218);
      CMFCToolBarImages::Initialize((CMFCToolBarImages *)&DAT_1020f330);
      CMFCToolBarImages::Initialize((CMFCToolBarImages *)&DAT_1020f448);
      CMFCToolBarImages::Initialize((CMFCToolBarImages *)&DAT_1020f560);
      CMFCToolBarImages::Initialize((CMFCToolBarImages *)&DAT_1020f678);
      CMFCToolBarImages::Initialize((CMFCToolBarImages *)&DAT_1020f790);
      DAT_1020f26c = 9;
      uVar5 = 0;
      DAT_1020f270 = DAT_1020f26c;
      pAVar3 = GetGlobalData();
      iVar4 = AFX_GLOBAL_DATA::Is32BitIcons(pAVar3);
      iVar4 = CMFCToolBarImages::Load
                        ((CMFCToolBarImages *)&DAT_1020f218,(-(uint)(iVar4 != 0) & 0x3b7) + 0x3f01,
                         (HINSTANCE__ *)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      if (iVar4 == 0) {
        uVar2 = 0;
      }
      else {
        if (DAT_1020e43c != 0) {
          CMFCToolBarImages::Mirror((CMFCToolBarImages *)&DAT_1020f218);
        }
        CMFCToolBarImages::SetTransparentColor((CMFCToolBarImages *)&DAT_1020f218,0xff00ff);
        CMenuImages::CreateCopy((CMFCToolBarImages *)&DAT_1020f448,0x808080);
        CMenuImages::CreateCopy((CMFCToolBarImages *)&DAT_1020f330,0x484848);
        CMenuImages::CreateCopy((CMFCToolBarImages *)&DAT_1020f560,0xc0c0c0);
        CMenuImages::CreateCopy((CMFCToolBarImages *)&DAT_1020f678,0xffffff);
        CMenuImages::CreateCopy((CMFCToolBarImages *)&DAT_1020f790,0);
        if (DAT_1020f2a4 != 0) {
          pAVar3 = GetGlobalData();
          if (*(int *)(pAVar3 + 0x1e8) == 0) {
            dVar1 = 1.0;
          }
          else {
            dVar1 = *(double *)(pAVar3 + 0x1e0);
          }
          if (dVar1 != 1.0) {
            FUN_10088069(dVar1);
            FUN_10088069(dVar1);
            FUN_10088069(dVar1);
            FUN_10088069(dVar1);
            FUN_10088069(dVar1);
            FUN_10088069(dVar1);
          }
        }
      }
      DAT_1020f204 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

