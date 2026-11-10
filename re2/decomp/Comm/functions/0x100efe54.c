// rea decompile_all
// name: FUN_100efe54
// address: 0x100efe54
// body: available
// range: 0x100efe54-0x100eff1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100eff17 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


HMENU__ * FUN_100efe54(void)

{
  HMENU__ *pHVar1;
  CMenu *pCVar2;
  CMenu *pCVar3;
  int iVar4;
  UINT UVar5;
  UINT uIDCheckItem;
  int in_ECX;
  UINT uId;
  
  uId = 0;
  if (*(int *)(in_ECX + 0xec) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10012a3f();
  }
  pHVar1 = (HMENU__ *)FUN_100da3fc();
  if (pHVar1 != (HMENU__ *)0x0) {
    pCVar2 = CMenu::FromHandle(pHVar1);
    pCVar3 = CMenu::FromHandle(*(HMENU__ **)(in_ECX + 0xec));
    iVar4 = GetMenuItemCount(*(HMENU *)(pCVar3 + 4));
    if (0 < iVar4) {
      do {
        UVar5 = GetMenuState(*(HMENU *)(pCVar3 + 4),uId,0x400);
        uIDCheckItem = GetMenuItemID(*(HMENU *)(pCVar3 + 4),uId);
        if ((UVar5 & 8) != 0) {
          CheckMenuItem(*(HMENU *)(pCVar2 + 4),uIDCheckItem,8);
        }
        if ((UVar5 & 2) != 0) {
          EnableMenuItem(*(HMENU *)(pCVar2 + 4),uIDCheckItem,2);
        }
        if ((UVar5 & 1) != 0) {
          EnableMenuItem(*(HMENU *)(pCVar2 + 4),uIDCheckItem,1);
        }
        uId = uId + 1;
      } while ((int)uId < iVar4);
    }
  }
  return pHVar1;
}

