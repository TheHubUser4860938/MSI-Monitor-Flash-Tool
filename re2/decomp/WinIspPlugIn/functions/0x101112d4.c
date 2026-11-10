// rea decompile_all
// name: FUN_101112d4
// address: 0x101112d4
// body: available
// range: 0x101112d4-0x10111478 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_101112d4(HMENU param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  BOOL BVar4;
  CMenu *pCVar5;
  UINT UVar6;
  int iVar7;
  CObject *pCVar8;
  UINT UVar9;
  uint uVar10;
  HMENU pHVar11;
  CMenu *pCVar12;
  undefined4 *in_ECX;
  undefined4 uVar13;
  UINT unaff_ESI;
  int unaff_EDI;
  HMENU local_c;
  
  iVar7 = in_ECX[0x1f];
  while (iVar7 != 0) {
    piVar3 = (int *)FUN_10065bec();
    if (piVar3 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar3 + 4);
      guard_check_icall(1);
      (*pcVar1)();
    }
    iVar7 = in_ECX[0x1f];
  }
  BVar4 = IsMenu(param_1);
  if ((BVar4 != 0) && (pCVar5 = CMenu::FromHandle(param_1), pCVar5 != (CMenu *)0x0)) {
    UVar6 = GetMenuDefaultItem(param_1,0,1);
    iVar7 = GetMenuItemCount(*(HMENU *)(pCVar5 + 4));
    local_c = (HMENU)0x0;
    if (0 < iVar7) {
      do {
        pcVar1 = *(code **)*in_ECX;
        guard_check_icall();
        (*pcVar1)();
        pCVar8 = (CObject *)FUN_10051ddc();
        UVar9 = GetMenuItemID(*(HMENU *)(pCVar5 + 4),(int)local_c);
        *(UINT *)(pCVar8 + 0x20) = UVar9;
        FID_conflict_GetMenuStringA(local_c,(UINT)(pCVar8 + 0x2c),(LPSTR)0x400,unaff_EDI,unaff_ESI);
        if (*(int *)(pCVar8 + 0x20) == -1) {
          if (DAT_10247f90 != (CMenuTearOffManager *)0x0) {
            iVar2 = *(int *)pCVar8;
            uVar10 = CMenuTearOffManager::Parse
                               (DAT_10247f90,
                                (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                 *)(pCVar8 + 0x2c));
            guard_check_icall(uVar10);
            (**(code **)(iVar2 + 0xf8))();
          }
          pHVar11 = GetSubMenu(*(HMENU *)(pCVar5 + 4),(int)local_c);
          pCVar12 = CMenu::FromHandle(pHVar11);
          if (pCVar12 == (CMenu *)0x0) {
            uVar13 = 0;
          }
          else {
            uVar13 = *(undefined4 *)(pCVar12 + 4);
          }
          pcVar1 = *(code **)(*(int *)pCVar8 + 0xd0);
          guard_check_icall(uVar13);
          (*pcVar1)();
        }
        else if (*(UINT *)(pCVar8 + 0x20) == UVar6) {
          *(undefined4 *)(pCVar8 + 0x98) = 1;
        }
        UVar9 = GetMenuState(*(HMENU *)(pCVar5 + 4),(UINT)local_c,0x400);
        if ((UVar9 & 0x40) != 0) {
          *(uint *)(pCVar8 + 0x24) = *(uint *)(pCVar8 + 0x24) | 0x20000000;
        }
        if ((UVar9 & 3) != 0) {
          *(uint *)(pCVar8 + 0x24) = *(uint *)(pCVar8 + 0x24) | 0x40000;
        }
        if ((UVar9 & 8) != 0) {
          *(uint *)(pCVar8 + 0x24) = *(uint *)(pCVar8 + 0x24) | 0x10000;
        }
        if ((UVar9 & 0x200) != 0) {
          *(undefined4 *)(pCVar8 + 0xac) = 1;
        }
        CObList::AddTail((CObList *)(in_ECX + 0x1c),pCVar8);
        local_c = (HMENU)((int)&local_c->unused + 1);
      } while ((int)local_c < iVar7);
    }
  }
  return;
}

