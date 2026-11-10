// rea decompile_all
// name: FUN_100b8e25
// address: 0x100b8e25
// body: available
// range: 0x100b8e25-0x100b940e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b93e9 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_100b8e25(HMENU__ *param_1,int param_2)

{
  code *pcVar1;
  HMENU hMenu;
  CFrameWnd *pCVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  CMFCPopupMenu *pCVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint *puVar9;
  CCommandManager *pCVar10;
  CObject *pCVar11;
  UINT UVar12;
  CWnd *in_ECX;
  CObject *pCVar13;
  HMENU__ *pHVar14;
  wchar_t *pwVar15;
  undefined4 uVar16;
  int in_stack_fffffe18;
  UINT in_stack_fffffe1c;
  tagMENUITEMINFOW local_1d8;
  HMENU__ *local_1a8;
  uint local_1a4;
  uint local_1a0;
  int local_19c;
  undefined8 local_198;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  WCHAR local_180 [2];
  uint local_17c;
  CMenu *local_178;
  HMENU local_174;
  wchar_t *local_170;
  CMFCToolBarMenuButton local_16c [4];
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  int local_134;
  CMFCToolBarButton local_84 [16];
  undefined4 local_74;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c8;
  local_8 = 0x100b8e34;
  local_1a8 = param_1;
  pcVar1 = *(code **)(*(int *)in_ECX + 0x350);
  guard_check_icall();
  (*pcVar1)();
  *(undefined4 *)(in_ECX + 0xd68) = 1;
  CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(in_ECX + 0xdb4));
  if ((param_1 == (HMENU__ *)0x0) ||
     (local_178 = CMenu::FromHandle(param_1), local_178 == (CMenu *)0x0)) goto LAB_100b9407;
  pCVar2 = DAT_101dc4c4;
  if ((DAT_101dc4c4 == (CFrameWnd *)0x0) &&
     (pCVar2 = CWnd::GetTopLevelFrame(in_ECX), pCVar2 == (CFrameWnd *)0x0)) {
    pCVar2 = (CFrameWnd *)AfxGetMainWnd();
  }
  pCVar13 = (CObject *)0x0;
  if (*(int *)(in_ECX + 0x20) == 0) {
LAB_100b8ef9:
    local_19c = param_2;
  }
  else {
    pHVar3 = GetParent(*(HWND *)(in_ECX + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar3);
    pCVar13 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_101d377c,(CObject *)pCVar4);
    if ((pCVar13 != (CObject *)0x0) && (*(CFrameWnd **)(pCVar13 + 0x134) != (CFrameWnd *)0x0)) {
      pCVar2 = *(CFrameWnd **)(pCVar13 + 0x134);
    }
    if (((DAT_101daf88 == 0) || (pCVar13 == (CObject *)0x0)) ||
       (pCVar5 = CMFCPopupMenu::GetParentPopupMenu((CMFCPopupMenu *)pCVar13),
       pCVar5 == (CMFCPopupMenu *)0x0)) goto LAB_100b8ef9;
    local_19c = 1;
  }
  if (pCVar2 != (CFrameWnd *)0x0) {
    local_17c = 0;
    uVar6 = 0;
    if (((pCVar13 != (CObject *)0x0) && (iVar7 = *(int *)(pCVar13 + 0x158), iVar7 != 0)) &&
       (pCVar13 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_101d3640,
                                     *(CObject **)(iVar7 + 0x6c)), uVar6 = local_17c,
       pCVar13 != (CObject *)0x0)) {
      uVar6 = FUN_1005d1c2(iVar7);
    }
    SendMessageW(*(HWND *)(pCVar2 + 0x20),0x117,(WPARAM)local_1a8,uVar6 & 0xffff);
  }
  iVar7 = GetMenuItemCount(*(HMENU *)(local_178 + 4));
  local_188 = 0;
  local_18c = 1;
  local_184 = 1;
  local_190 = iVar7;
  if (*(int *)(in_ECX + 0xd78) != 0) {
    local_198 = (double)*(int *)(in_ECX + 0xd7c);
    local_184 = FUN_10149490();
    if (local_184 < 1) {
      local_184 = 1;
    }
  }
  local_174 = (HMENU)0x0;
  if (0 < iVar7) {
    do {
      hMenu = local_174;
      local_1a4 = 0;
      uVar8 = FUN_10013071();
      FUN_10003190(uVar8);
      local_8 = 0;
      FID_conflict_GetMenuStringA
                (hMenu,(UINT)&local_170,(LPSTR)0x400,in_stack_fffffe18,in_stack_fffffe1c);
      _memset(&local_1d8,0,0x30);
      local_1d8.cch = 0;
      local_1d8.dwTypeData = (LPWSTR)0x0;
      local_1d8.cbSize = 0x30;
      local_1d8.fMask = 0x37;
      GetMenuItemInfoW(*(HMENU *)(local_178 + 4),(UINT)hMenu,1,&local_1d8);
      UVar12 = local_1d8.wID;
      local_1a0 = local_1d8.wID;
      local_17c = GetMenuState(*(HMENU *)(local_178 + 4),(UINT)local_174,0x400);
      local_198 = (double)CONCAT44(local_1d8.dwItemData,(undefined4)local_198);
      if (local_1d8.fType == 0x800) {
        if (((local_188 == 0) && (local_18c == 0)) &&
           ((local_174 != (HMENU)(local_190 + -1) && (*(int *)(in_ECX + 0xd78) == 0)))) {
          pcVar1 = *(code **)(*(int *)in_ECX + 0x348);
          guard_check_icall(0xffffffff);
          (*pcVar1)();
          local_18c = 0;
          local_188 = 1;
        }
      }
      else {
        pHVar14 = (HMENU__ *)0x0;
        if (local_1d8.hSubMenu != (HMENU__ *)0x0) {
          UVar12 = 0xffffffff;
          local_1a0 = 0xffffffff;
          pHVar14 = local_1d8.hSubMenu;
          if (DAT_101dd278 != (CMenuTearOffManager *)0x0) {
            local_1a4 = CMenuTearOffManager::Parse
                                  (DAT_101dd278,
                                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                    *)&local_170);
          }
        }
        if (((*(int *)(in_ECX + 0xd70) == 0) && (local_19c == 0)) &&
           ((iVar7 = CMFCMenuBar::IsShowAllCommands(), iVar7 == 0 &&
            (iVar7 = CMFCToolBar::IsCommandRarelyUsed(UVar12), iVar7 != 0)))) {
          if (*(int *)(in_ECX + 0xd78) == 0) {
            iVar7 = CMFCToolBar::IsCommandRarelyUsed(UVar12);
            if ((iVar7 != 0) && (iVar7 = CMFCToolBar::IsCommandPermitted(UVar12), iVar7 != 0)) {
              *(undefined4 *)(in_ECX + 0xd68) = 0;
              iVar7 = FUN_10010f20(0x26,0);
              if ((-1 < iVar7) && (iVar7 < *(int *)(local_170 + -6) + -1)) {
                local_180[0] = FUN_10011080(iVar7 + 1);
                local_180[1] = 0;
                CharUpperW(local_180);
                puVar9 = (uint *)FUN_10067d49(local_180[0]);
                *puVar9 = UVar12;
              }
            }
            goto LAB_100b93bb;
          }
LAB_100b9213:
          uVar16 = 0;
          uVar8 = 0;
          iVar7 = 0;
          uVar6 = UVar12;
          pwVar15 = local_170;
          pCVar10 = (CCommandManager *)FUN_100918eb(UVar12,0,local_170,0,0);
          iVar7 = CCommandManager::GetCmdImage(pCVar10,uVar6,iVar7);
          CMFCToolBarButton(UVar12,iVar7,pwVar15,uVar8,uVar16);
          local_8._0_1_ = 1;
          if ((0 < (int)local_174) && ((int)((int)&local_174->unused + 1) % local_184 == 0)) {
            local_74 = 1;
          }
          pcVar1 = *(code **)(*(int *)in_ECX + 0x344);
          guard_check_icall(local_84,0xffffffff);
          iVar7 = (*pcVar1)();
          local_8 = (uint)local_8._1_3_ << 8;
          CMFCToolBarButton::~CMFCToolBarButton(local_84);
        }
        else {
          if (*(int *)(in_ECX + 0xd78) != 0) goto LAB_100b9213;
          CMFCToolBarMenuButton::CMFCToolBarMenuButton(local_16c,UVar12,pHVar14,-1,local_170,0);
          local_160 = 0;
          local_8._0_1_ = 2;
          local_164 = 1;
          pCVar10 = (CCommandManager *)FUN_100918eb();
          local_134 = CCommandManager::GetMenuUserImage(pCVar10,UVar12);
          if (local_134 != -1) {
            local_168 = 1;
          }
          pcVar1 = *(code **)(*(int *)in_ECX + 0x344);
          guard_check_icall(local_16c,0xffffffff);
          iVar7 = (*pcVar1)();
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_100d9fa0();
        }
        if (-1 < iVar7) {
          pCVar13 = (CObject *)FUN_1005f070(iVar7);
          if (pCVar13 == (CObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_10012a3f();
          }
          if (*(int *)(pCVar13 + 4) == 0) {
            uVar6 = *(uint *)(pCVar13 + 0x34);
          }
          else {
            uVar6 = *(uint *)(pCVar13 + 0x38);
          }
          *(uint *)(pCVar13 + 0xc) = ~uVar6 >> 0x1f;
          *(undefined4 *)(pCVar13 + 0x28) = local_198._4_4_;
          if ((((DAT_101dc968 == 0) || (local_1a0 < *(uint *)(DAT_101dc968 + 0x24))) ||
              (*(uint *)(DAT_101dc968 + 0x28) < local_1a0)) && ((local_17c & 3) != 0)) {
            *(uint *)(pCVar13 + 0x24) = *(uint *)(pCVar13 + 0x24) | 0x40000;
          }
          pCVar11 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_101d39fc,
                                       pCVar13);
          local_198 = (double)CONCAT44(pCVar11,(undefined4)local_198);
          if (pCVar11 != (CObject *)0x0) {
            pcVar1 = *(code **)(*(int *)pCVar11 + 0xf8);
            guard_check_icall(local_1a4);
            (*pcVar1)();
          }
          if ((local_17c & 8) != 0) {
            *(uint *)(pCVar13 + 0x24) = *(uint *)(pCVar13 + 0x24) | 0x10000;
          }
          if ((local_1d8.fType & 0x40) != 0) {
            *(uint *)(pCVar13 + 0x24) = *(uint *)(pCVar13 + 0x24) | 0x20000000;
          }
          local_188 = 0;
          local_18c = 0;
        }
      }
LAB_100b93bb:
      local_8 = 0xffffffff;
      FUN_10003460();
      local_174 = (HMENU)((int)&local_174->unused + 1);
    } while ((int)local_174 < local_190);
  }
  UVar12 = GetMenuDefaultItem(local_1a8,0,1);
  *(UINT *)(in_ECX + 0xd48) = UVar12;
LAB_100b9407:
  FUN_101490fe();
  return;
}

