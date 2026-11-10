// rea decompile_all
// name: FUN_10123856
// address: 0x10123856
// body: available
// range: 0x10123856-0x10123a30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10123a2c to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_10123856(HINSTANCE param_1)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  AFX_MODULE_STATE *pAVar4;
  CObject *pCVar5;
  HMENU pHVar6;
  UINT UVar7;
  undefined4 uVar8;
  CMenu *pCVar9;
  int in_ECX;
  undefined4 uVar10;
  LPCSTR in_stack_ffffffc0;
  undefined **local_30;
  HMENU local_2c;
  CMFCToolBarButton *local_28;
  int local_24;
  int local_20;
  CObject *local_1c;
  undefined4 local_18;
  int local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x10123862;
  iVar1 = *(int *)(in_ECX + 0xc64);
  while (iVar1 != 0) {
    piVar3 = (int *)FUN_10069e9a();
    if (piVar3 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar3 + 4);
      guard_check_icall(1);
      (*pcVar2)();
    }
    iVar1 = *(int *)(in_ECX + 0xc64);
  }
  pAVar4 = AfxGetModuleState();
  pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CWinAppEx_101c1080,*(CObject **)(pAVar4 + 4));
  if ((pCVar5 != (CObject *)0x0) && (*(int *)(pCVar5 + 0x10c) != 0)) {
    local_2c = (HMENU)0x0;
    local_30 = CMenu::vftable;
    local_8 = 0;
    pHVar6 = FID_conflict_LoadMenuA(param_1,in_stack_ffffffc0);
    if (pHVar6 != (HMENU)0x0) {
      local_20 = GetMenuItemCount(local_2c);
      local_14 = 0;
      if (0 < local_20) {
        do {
          UVar7 = GetMenuItemID(local_2c,local_14);
          uVar8 = FUN_10048e90();
          FUN_10034c30(uVar8);
          uVar8 = local_18;
          local_8._0_1_ = 2;
          if (UVar7 == 0) {
            local_28 = (CMFCToolBarButton *)FUN_10047eb4(0x70);
            local_8._0_1_ = 3;
            if (local_28 == (CMFCToolBarButton *)0x0) {
              pCVar5 = (CObject *)0x0;
            }
            else {
              pCVar5 = (CObject *)CMFCToolBarButton::CMFCToolBarButton(local_28);
            }
            local_8._0_1_ = 2;
            if (pCVar5 == (CObject *)0x0) {
LAB_10123a2c:
                    /* WARNING: Subroutine does not return */
              FUN_1004886a();
            }
            *(undefined4 *)(pCVar5 + 0x24) = 1;
LAB_101239e5:
            local_8._0_1_ = 2;
          }
          else {
            if (UVar7 != 0xffffffff) {
              local_24 = FUN_10047eb4(0x70);
              local_8._0_1_ = 4;
              if (local_24 == 0) {
                pCVar5 = (CObject *)0x0;
              }
              else {
                pCVar5 = (CObject *)CMFCToolBarButton(UVar7,0xffffffff,uVar8,0,0);
              }
              goto LAB_101239e5;
            }
            pHVar6 = GetSubMenu(local_2c,local_14);
            pCVar9 = CMenu::FromHandle(pHVar6);
            if (pCVar9 == (CMenu *)0x0) goto LAB_10123a2c;
            local_1c = (CObject *)FUN_1004e514();
            if (pCVar9 == (CMenu *)0x0) {
              uVar10 = 0;
            }
            else {
              uVar10 = *(undefined4 *)(pCVar9 + 4);
            }
            Initialize(0,uVar10,0xffffffff,uVar8,0);
            pCVar5 = local_1c;
          }
          CObList::AddTail((CObList *)(in_ECX + 0xc58),pCVar5);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_10034f00();
          local_14 = local_14 + 1;
        } while (local_14 < local_20);
      }
      local_8 = 5;
      local_30 = CMenu::vftable;
      CMenu::DestroyMenu((CMenu *)&local_30);
      return 1;
    }
    local_8 = 1;
    local_30 = CMenu::vftable;
    CMenu::DestroyMenu((CMenu *)&local_30);
  }
  return 0;
}

