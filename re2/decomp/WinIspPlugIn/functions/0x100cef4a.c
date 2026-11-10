// rea decompile_all
// name: FUN_100cef4a
// address: 0x100cef4a
// body: available
// range: 0x100cef4a-0x100cf031 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100cef4a(undefined4 param_1,undefined4 param_2,LONG param_3,LONG param_4,LONG param_5,
                 LONG param_6,undefined4 param_7,undefined4 param_8)

{
  double dVar1;
  int iVar2;
  AFX_GLOBAL_DATA *pAVar3;
  CMFCVisualManagerOffice2007 *in_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = CMFCVisualManagerOffice2007::CanDrawImage(in_ECX);
  if ((iVar2 == 0) || (*(int *)(in_ECX + 0x129c) == 0)) {
    CMFCVisualManager::OnDrawRibbonCheckBoxOnList();
  }
  else {
    pAVar3 = GetGlobalData();
    if (*(int *)(pAVar3 + 0x1e8) == 0) {
      dVar1 = 1.0;
    }
    else {
      dVar1 = *(double *)(pAVar3 + 0x1e0);
    }
    if (dVar1 == 1.0) {
      uVar5 = 1;
      uVar4 = 1;
    }
    else {
      InflateRect((LPRECT)&param_3,-5,-5);
      uVar5 = 3;
      uVar4 = 3;
    }
    CMFCToolBarImages::DrawEx
              ((CMFCToolBarImages *)(in_ECX + 0x1298),param_1,param_3,param_4,param_5,param_6,0,
               uVar4,uVar5,0,0,0,0,0xff);
  }
  return;
}

