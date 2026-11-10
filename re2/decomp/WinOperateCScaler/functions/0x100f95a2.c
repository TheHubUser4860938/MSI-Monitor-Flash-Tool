// rea decompile_all
// name: FUN_100f95a2
// address: 0x100f95a2
// body: available
// range: 0x100f95a2-0x100f963c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f9638 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100f95a2(HMENU__ *param_1,UINT param_2,UINT param_3)

{
  CMenu *pCVar1;
  int iVar2;
  UINT UVar3;
  HMENU pHVar4;
  CMenu *pCVar5;
  int iVar6;
  UINT unaff_ESI;
  HMENU hMenu;
  int unaff_EDI;
  
  if ((((param_1 != (HMENU__ *)0x0) && (param_2 != 0)) && (param_2 != 0xffffffff)) &&
     (pCVar1 = CMenu::FromHandle(param_1), pCVar1 != (CMenu *)0x0)) {
    iVar2 = GetMenuItemCount(*(HMENU *)(pCVar1 + 4));
    hMenu = (HMENU)0x0;
    if (0 < iVar2) {
      do {
        UVar3 = GetMenuItemID(*(HMENU *)(pCVar1 + 4),(int)hMenu);
        if (UVar3 == param_2) {
          FID_conflict_GetMenuStringA(hMenu,param_3,(LPSTR)0x400,unaff_EDI,unaff_ESI);
          return 1;
        }
        if (UVar3 == 0xffffffff) {
          pHVar4 = GetSubMenu(*(HMENU *)(pCVar1 + 4),(int)hMenu);
          pCVar5 = CMenu::FromHandle(pHVar4);
          if (pCVar5 == (CMenu *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_1001d023();
          }
          iVar6 = FUN_100f95a2(*(undefined4 *)(pCVar5 + 4),param_2,param_3);
          if (iVar6 != 0) {
            return 1;
          }
        }
        hMenu = (HMENU)((int)&hMenu->unused + 1);
      } while ((int)hMenu < iVar2);
    }
  }
  return 0;
}

