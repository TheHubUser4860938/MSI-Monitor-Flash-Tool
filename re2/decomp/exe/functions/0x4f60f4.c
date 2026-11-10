// rea decompile_all
// name: FUN_004f60f4
// address: 0x4f60f4
// body: available
// range: 0x4f60f4-0x4f61bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4f61b7 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


HMENU__ * FUN_004f60f4(void)

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
    FUN_00429127();
  }
  pHVar1 = (HMENU__ *)FUN_0048c8ba();
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

