// rea decompile_all
// name: FUN_100c04a1
// address: 0x100c04a1
// body: available
// range: 0x100c04a1-0x100c05ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c05a8 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100c04a1(int param_1,CMenu *param_2)

{
  void *ho;
  AFX_GLOBAL_DATA *pAVar1;
  BYTE *pBVar2;
  int iVar3;
  HPALETTE pHVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  CMenu *pCVar8;
  int iVar9;
  LOGPALETTE local_1a0 [51];
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  pCVar8 = param_2;
  iVar9 = param_1;
  if ((param_2 != (CMenu *)0x0) && (*(int *)(param_2 + 4) != 0)) {
    ho = CGdiObject::Detach((CGdiObject *)param_2);
    DeleteObject(ho);
    if (*(int *)(param_2 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1004a383();
    }
  }
  pAVar1 = GetGlobalData();
  uVar5 = extraout_EDX;
  if ((*(int *)(pAVar1 + 0x1ac) == 8) && (iVar7 = *(int *)(param_1 + 8), iVar7 != 0)) {
    if (100 < iVar7) {
      iVar7 = 100;
    }
    local_1a0[0].palNumEntries = (WORD)iVar7;
    iVar6 = 0;
    local_1a0[0].palVersion = 0x300;
    if (0 < iVar7) {
      do {
        param_2 = pCVar8;
        pBVar2 = (BYTE *)FUN_100efaed(iVar6);
        local_1a0[0].palPalEntry[iVar6].peRed = *pBVar2;
        iVar3 = FUN_100efaed(iVar6);
        local_1a0[0].palPalEntry[iVar6].peGreen = *(BYTE *)(iVar3 + 1);
        iVar3 = FUN_100efaed(iVar6);
        local_1a0[0].palPalEntry[iVar6].peBlue = *(BYTE *)(iVar3 + 2);
        local_1a0[0].palPalEntry[iVar6].peFlags = '\0';
        iVar6 = iVar6 + 1;
        pCVar8 = param_2;
      } while (iVar6 < iVar7);
    }
    pHVar4 = CreatePalette(local_1a0);
    CMenu::Attach(param_2,(HMENU__ *)pHVar4);
    uVar5 = extraout_EDX_00;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,uVar5,pCVar8,iVar9);
  return;
}

