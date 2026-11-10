// rea decompile_all
// name: FUN_101048da
// address: 0x101048da
// body: available
// range: 0x101048da-0x101049f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101048ee to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x101049ee to 0x10003680 FUN_10003680 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_101048da(HMENU__ *param_1)

{
  CMenu *pCVar1;
  int iVar2;
  UINT UVar3;
  undefined4 uVar4;
  uint uVar5;
  HMENU pHVar6;
  CMenu *pCVar7;
  CMenuTearOffManager *in_ECX;
  HMENU hMenu;
  int in_stack_ffffffd8;
  UINT in_stack_ffffffdc;
  LPCWSTR local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x101048e6;
  if (param_1 == (HMENU__ *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10012a3f();
  }
  pCVar1 = CMenu::FromHandle(param_1);
  if (pCVar1 != (CMenu *)0x0) {
    iVar2 = GetMenuItemCount(*(HMENU *)(pCVar1 + 4));
    hMenu = (HMENU)0x0;
    if (0 < iVar2) {
      do {
        UVar3 = GetMenuItemID(*(HMENU *)(pCVar1 + 4),(int)hMenu);
        if (UVar3 == 0xffffffff) {
          UVar3 = GetMenuState(*(HMENU *)(pCVar1 + 4),(UINT)hMenu,0x400);
          if ((UVar3 & 0x20) != 0) {
            uVar4 = FUN_10013071();
            FUN_10003190(uVar4);
            local_8 = 0;
            FID_conflict_GetMenuStringA
                      (hMenu,(UINT)local_14,(LPSTR)0x400,in_stack_ffffffd8,in_stack_ffffffdc);
            if (*(int *)(local_14[0] + -6) < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_10003680(0x80070057);
            }
            if (*local_14[0] != L'\x01') {
              uVar5 = CMenuTearOffManager::GetFreeTearOffID(in_ECX);
              if (uVar5 == 0) {
                FUN_10003460();
                return;
              }
              Build(uVar5,local_14);
              ModifyMenuW(*(HMENU *)(pCVar1 + 4),(UINT)hMenu,0x400,(UINT_PTR)hMenu,local_14[0]);
            }
            local_8 = 0xffffffff;
            FUN_10003460();
          }
          pHVar6 = GetSubMenu(*(HMENU *)(pCVar1 + 4),(int)hMenu);
          pCVar7 = CMenu::FromHandle(pHVar6);
          if (pCVar7 != (CMenu *)0x0) {
            FUN_101048da(*(undefined4 *)(pCVar7 + 4));
          }
        }
        hMenu = (HMENU)((int)&hMenu->unused + 1);
      } while ((int)hMenu < iVar2);
    }
  }
  return;
}

