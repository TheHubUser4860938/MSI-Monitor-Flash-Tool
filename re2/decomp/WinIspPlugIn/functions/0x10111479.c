// rea decompile_all
// name: FUN_10111479
// address: 0x10111479
// body: available
// range: 0x10111479-0x10111695 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10111656 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

HMENU__ * FUN_10111479(void)

{
  code *pcVar1;
  HMENU pHVar2;
  int iVar3;
  int *piVar4;
  BOOL BVar5;
  UINT_PTR UVar6;
  HMENU__ *hMenu;
  int in_ECX;
  uint uFlags;
  undefined **local_28;
  HMENU local_24;
  int local_20;
  UINT_PTR local_1c;
  int local_18;
  LPCWSTR local_14 [3];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  if ((((*(int *)(in_ECX + 0x7c) != 0) || (*(int *)(in_ECX + 0x20) == -1)) ||
      (*(int *)(in_ECX + 0x20) == 0)) || (*(int *)(in_ECX + 0xa8) != 0)) {
    local_24 = (HMENU)0x0;
    local_28 = CMenu::vftable;
    local_8 = 0;
    pHVar2 = CreatePopupMenu();
    iVar3 = CMenu::Attach((CMenu *)&local_28,pHVar2);
    if (iVar3 != 0) {
      local_18 = *(int *)(in_ECX + 0x74);
      local_1c = 0xffffffff;
      if (local_18 != 0) {
        local_20 = in_ECX + 0x70;
        do {
          piVar4 = (int *)FUN_10096856(&local_18);
          if (piVar4 == (int *)0x0) {
LAB_10111656:
                    /* WARNING: Subroutine does not return */
            FUN_1004a383();
          }
          uFlags = (uint)piVar4[9] >> 0x17 & 0x40;
          if ((piVar4[9] & 0x40000U) != 0) {
            uFlags = uFlags | 2;
          }
          if ((piVar4[9] & 0x10000U) != 0) {
            uFlags = uFlags | 8;
          }
          if (piVar4[0x2b] != 0) {
            uFlags = uFlags | 0x200;
          }
          pcVar1 = *(code **)(*piVar4 + 0xf4);
          guard_check_icall();
          iVar3 = (*pcVar1)();
          if (iVar3 != 0) {
            uFlags = uFlags | 0x20;
          }
          UVar6 = piVar4[8];
          if (UVar6 != 0) {
            if (UVar6 == 0xffffffff) {
              pcVar1 = *(code **)(*piVar4 + 0xd4);
              guard_check_icall();
              UVar6 = (*pcVar1)();
              if (UVar6 == 0) goto LAB_10111656;
              iVar3 = FUN_10047580(piVar4[0xb] + -0x10);
              local_14[0] = (LPCWSTR)(iVar3 + 0x10);
              local_8 = CONCAT31(local_8._1_3_,2);
              if ((piVar4[0x2f] != 0) && (DAT_10247f90 != 0)) {
                Build(piVar4[0x2f],local_14);
              }
              iVar3 = AppendMenuW(local_24,uFlags | 0x10,UVar6,local_14[0]);
              if (iVar3 == 0) {
                GetLastError();
              }
              local_8 = local_8 & 0xffffff00;
              FUN_100476d0();
              goto LAB_10111640;
            }
            if (piVar4[0x26] != 0) {
              local_1c = UVar6;
            }
            BVar5 = AppendMenuW(local_24,uFlags,UVar6,(LPCWSTR)piVar4[0xb]);
            if (BVar5 != 0) goto LAB_10111648;
            GetLastError();
LAB_1011158e:
            local_8 = 3;
            goto LAB_101114d3;
          }
          BVar5 = AppendMenuW(local_24,0x800,0,(LPCWSTR)0x0);
          if (BVar5 == 0) {
            GetLastError();
            iVar3 = 0;
LAB_10111640:
            if (iVar3 == 0) goto LAB_1011158e;
          }
LAB_10111648:
        } while (local_18 != 0);
      }
      UVar6 = local_1c;
      hMenu = CMenu::Detach((CMenu *)&local_28);
      if (UVar6 != 0xffffffff) {
        SetMenuDefaultItem(hMenu,UVar6,0);
      }
      local_8 = 4;
      local_28 = CMenu::vftable;
      CMenu::DestroyMenu((CMenu *)&local_28);
      return hMenu;
    }
    local_8 = 1;
LAB_101114d3:
    local_28 = CMenu::vftable;
    CMenu::DestroyMenu((CMenu *)&local_28);
  }
  return (HMENU__ *)0x0;
}

