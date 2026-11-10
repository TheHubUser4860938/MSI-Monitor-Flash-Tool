// rea decompile_all
// name: FUN_1010fc8a
// address: 0x1010fc8a
// body: available
// range: 0x1010fc8a-0x1010fda2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1010fc9e to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1010fd9e to 0x10018780 FUN_10018780 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_1010fc8a(HMENU__ *param_1)

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
  local_8 = 0x1010fc96;
  if (param_1 == (HMENU__ *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1001d023();
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
            uVar4 = FUN_1001e20a();
            FUN_1001d224(uVar4);
            local_8 = 0;
            FID_conflict_GetMenuStringA
                      (hMenu,(UINT)local_14,(LPSTR)0x400,in_stack_ffffffd8,in_stack_ffffffdc);
            if (*(int *)(local_14[0] + -6) < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_10018780(0x80070057);
            }
            if (*local_14[0] != L'\x01') {
              uVar5 = CMenuTearOffManager::GetFreeTearOffID(in_ECX);
              if (uVar5 == 0) {
                ATL::CStringData::Release((CStringData *)(local_14[0] + -8));
                return;
              }
              Build(uVar5,local_14);
              ModifyMenuW(*(HMENU *)(pCVar1 + 4),(UINT)hMenu,0x400,(UINT_PTR)hMenu,local_14[0]);
            }
            local_8 = 0xffffffff;
            ATL::CStringData::Release((CStringData *)(local_14[0] + -8));
          }
          pHVar6 = GetSubMenu(*(HMENU *)(pCVar1 + 4),(int)hMenu);
          pCVar7 = CMenu::FromHandle(pHVar6);
          if (pCVar7 != (CMenu *)0x0) {
            FUN_1010fc8a(*(undefined4 *)(pCVar7 + 4));
          }
        }
        hMenu = (HMENU)((int)&hMenu->unused + 1);
      } while ((int)hMenu < iVar2);
    }
  }
  return;
}

