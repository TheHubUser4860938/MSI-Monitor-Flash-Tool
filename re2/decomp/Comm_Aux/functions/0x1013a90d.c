// rea decompile_all
// name: FUN_1013a90d
// address: 0x1013a90d
// body: available
// range: 0x1013a90d-0x1013a9fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1013a9fa to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_1013a90d(HMENU__ *param_1)

{
  undefined4 *puVar1;
  CMenu *pCVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  UINT UVar6;
  HMENU pHVar7;
  CMenu *pCVar8;
  CMenuTearOffManager *in_ECX;
  int iVar9;
  HMENU hMenu;
  int iVar10;
  int in_stack_ffffffd8;
  UINT in_stack_ffffffdc;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x1013a919;
  iVar10 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) + 1;
  if (param_1 == (HMENU__ *)0x0) {
    iVar9 = 0;
    puVar1 = (undefined4 *)&LAB_101a669d;
    if (0 < iVar10) {
      do {
        puVar1 = (undefined4 *)FUN_10151a1d(iVar9);
        *puVar1 = 0;
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar10);
    }
  }
  else {
    pCVar2 = CMenu::FromHandle(param_1);
    puVar1 = (undefined4 *)0x0;
    if (pCVar2 != (CMenu *)0x0) {
      puVar3 = (undefined4 *)GetMenuItemCount(*(HMENU *)(pCVar2 + 4));
      hMenu = (HMENU)0x0;
      puVar1 = puVar3;
      if (0 < (int)puVar3) {
        do {
          uVar4 = FUN_10048e90();
          FUN_10034c30(uVar4);
          local_8 = 0;
          FID_conflict_GetMenuStringA
                    (hMenu,(UINT)local_14,(LPSTR)0x400,in_stack_ffffffd8,in_stack_ffffffdc);
          uVar5 = CMenuTearOffManager::Parse(in_ECX,local_14);
          if ((*(uint *)(in_ECX + 4) <= uVar5) && (uVar5 <= *(uint *)(in_ECX + 8))) {
            puVar1 = (undefined4 *)FUN_10151a1d(uVar5 - *(int *)(in_ECX + 4));
            *puVar1 = 0;
          }
          UVar6 = GetMenuItemID(*(HMENU *)(pCVar2 + 4),(int)hMenu);
          if (UVar6 == 0xffffffff) {
            pHVar7 = GetSubMenu(*(HMENU *)(pCVar2 + 4),(int)hMenu);
            pCVar8 = CMenu::FromHandle(pHVar7);
            if (pCVar8 == (CMenu *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_1004886a();
            }
            FUN_1013a90d(*(undefined4 *)(pCVar8 + 4));
          }
          local_8 = 0xffffffff;
          puVar1 = (undefined4 *)FUN_10034f00();
          hMenu = (HMENU)((int)&hMenu->unused + 1);
        } while ((int)hMenu < (int)puVar3);
      }
    }
  }
  return puVar1;
}

