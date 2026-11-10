// rea decompile_all
// name: FUN_10057bdc
// address: 0x10057bdc
// body: available
// range: 0x10057bdc-0x10057c52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10057c4e to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


CMenu * FUN_10057bdc(int param_1,UINT param_2)

{
  int iVar1;
  HMENU pHVar2;
  CMenu *pCVar3;
  UINT UVar4;
  int nPos;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004a383();
  }
  iVar1 = GetMenuItemCount(*(HMENU *)(param_1 + 4));
  nPos = 0;
  if (0 < iVar1) {
    do {
      pHVar2 = GetSubMenu(*(HMENU *)(param_1 + 4),nPos);
      pCVar3 = CMenu::FromHandle(pHVar2);
      if (pCVar3 == (CMenu *)0x0) {
        UVar4 = GetMenuItemID(*(HMENU *)(param_1 + 4),nPos);
        if (UVar4 == param_2) goto LAB_10057c44;
      }
      else {
        if (*(UINT *)(pCVar3 + 4) == param_2) {
LAB_10057c44:
          pCVar3 = CMenu::FromHandlePermanent(*(HMENU__ **)(param_1 + 4));
          return pCVar3;
        }
        pCVar3 = (CMenu *)FUN_10057bdc(pCVar3,param_2);
        if (pCVar3 != (CMenu *)0x0) {
          return pCVar3;
        }
      }
      nPos = nPos + 1;
    } while (nPos < iVar1);
  }
  return (CMenu *)0x0;
}

