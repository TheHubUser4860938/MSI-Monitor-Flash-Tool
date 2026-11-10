// rea decompile_all
// name: FUN_10120fba
// address: 0x10120fba
// body: available
// range: 0x10120fba-0x101214e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10120ff6 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_10120fba(int param_1,int param_2,int param_3,int param_4)

{
  wchar_t *pwVar1;
  int iVar2;
  UINT UVar3;
  undefined4 uVar4;
  size_t sVar5;
  CMenu *pCVar6;
  int iVar7;
  int *piVar8;
  HMENU pHVar9;
  HMENU__ *pHVar10;
  CObject *pCVar11;
  uint uVar12;
  CMenu *pCVar13;
  int iVar14;
  int in_stack_fffffe3c;
  UINT in_stack_fffffe40;
  undefined1 local_1ac [8];
  int local_1a4;
  int local_1a0;
  int local_19c;
  undefined4 local_198;
  int local_194;
  int local_190;
  wchar_t *local_18c;
  int local_188;
  HMENU local_184;
  CMenu *local_180;
  int local_17c;
  uint local_178;
  wchar_t *local_174;
  int local_170;
  CMFCToolBarMenuButton local_16c [232];
  CMFCToolBarButton local_84 [44];
  undefined1 local_58 [80];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1a4;
  local_8 = 0x10120fc9;
  local_188 = param_3;
  uVar12 = 0;
  local_190 = param_1;
  local_1a0 = param_4;
  local_178 = 0;
  if (param_1 != 0) {
    local_1a4 = 0;
    iVar2 = GetMenuItemCount(*(HMENU *)(param_1 + 4));
    local_184 = (HMENU)0x0;
    if (0 < iVar2) {
      do {
        UVar3 = GetMenuItemID(*(HMENU *)(local_190 + 4),(int)local_184);
        uVar4 = FUN_10048e90();
        FUN_10034c30(uVar4);
        local_8 = 0;
        FID_conflict_GetMenuStringA
                  (local_184,(UINT)&local_174,(LPSTR)0x400,in_stack_fffffe3c,in_stack_fffffe40);
        if (*(int *)(local_170 + 0x160) == 0) {
          FUN_10037b90(0x26);
        }
        iVar14 = local_170;
        if (UVar3 != 0) {
          if (UVar3 == 0xffffffff) {
            pHVar9 = GetSubMenu(*(HMENU *)(local_190 + 4),(int)local_184);
            local_180 = CMenu::FromHandle(pHVar9);
            local_18c = (wchar_t *)0x0;
            if (DAT_102107e8 != (CMenuTearOffManager *)0x0) {
              local_18c = (wchar_t *)
                          CMenuTearOffManager::Parse
                                    (DAT_102107e8,
                                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                      *)&local_174);
            }
            local_194 = FUN_100349e0(local_174 + -8);
            local_194 = local_194 + 0x10;
            local_8 = CONCAT31(local_8._1_3_,1);
            FUN_10037b90(0x26);
            if (local_188 != 0) {
              FUN_100352a0(local_188);
            }
            iVar14 = local_194;
            if (*(int *)(local_170 + 0x158) == 0) {
              FUN_10120fba(local_180,param_2,0,0);
            }
            else {
              if (param_2 != 0) {
                if (local_180 == (CMenu *)0x0) {
                  pHVar10 = (HMENU__ *)0x0;
                }
                else {
                  pHVar10 = *(HMENU__ **)(local_180 + 4);
                }
                CMFCToolBarMenuButton::CMFCToolBarMenuButton
                          (local_16c,0xffffffff,pHVar10,-1,local_174,0);
                local_8._0_1_ = 2;
                CMFCToolBarMenuButton::SetTearOff(local_16c,(uint)local_18c);
                AddButton(iVar14,local_16c,0xffffffff);
                local_8 = CONCAT31(local_8._1_3_,1);
                FUN_10110190();
              }
              uVar4 = FUN_10048e90();
              FUN_10034c30(uVar4);
              local_8 = CONCAT31(local_8._1_3_,3);
              if (local_1a0 != 0) {
                FUN_100352a0(local_1a0);
              }
              FUN_10034490(local_174,*(undefined4 *)(local_174 + -6));
              FUN_10120fba(local_180,param_2,iVar14,local_198);
              FUN_10034f00();
            }
            FUN_10034f00();
            iVar14 = local_170;
          }
          else {
            if ((param_2 != 0) && (UVar3 - 0xe130 < 0x10)) {
              local_1a4 = 1;
            }
            if (((local_188 == 0) || (DAT_1020fed8 == 0)) ||
               (*(UINT *)(DAT_1020fed8 + 0x20) != UVar3)) {
              CMFCToolBarButton(UVar3,0xffffffff,local_174,0,0);
              local_8._0_1_ = 4;
              if (local_1a0 != 0) {
                uVar4 = FUN_100352e0(local_1a0);
                local_8._0_1_ = 5;
                FUN_10033d60(&local_17c,uVar4,local_58);
                local_8 = CONCAT31(local_8._1_3_,7);
                FUN_10034f00();
                local_18c = (wchar_t *)FUN_10035050(*(int *)(local_17c + -0xc) + 1);
                if ((local_18c != (wchar_t *)0x0) &&
                   (sVar5 = _wcslen(local_18c), pwVar1 = local_18c, 1 < sVar5)) {
                  pCVar13 = (CMenu *)0x0;
                  pCVar6 = (CMenu *)(sVar5 - 1);
                  local_180 = pCVar6;
                  if (pCVar6 != (CMenu *)0x0) {
                    do {
                      if (pwVar1[(int)pCVar13] == L' ') {
                        CharUpperBuffW(pwVar1 + (int)(pCVar13 + 1),1);
                        pCVar6 = local_180;
                      }
                      pCVar13 = pCVar13 + 1;
                      uVar12 = local_178;
                    } while (pCVar13 < pCVar6);
                  }
                }
                ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer
                          ((CSimpleStringT<wchar_t,0> *)&local_17c,-1);
                FUN_10037b90(0x20);
                uVar4 = FUN_100770bf(local_1ac,&DAT_101ba534);
                local_8._0_1_ = 8;
                FUN_10034940(uVar4);
                FUN_10034f00();
                local_8._0_1_ = 4;
                FUN_10034f00();
              }
              iVar14 = local_170;
              if (local_188 == 0) {
                iVar7 = FUN_100349e0(*(int *)(local_170 + 0x150) + -0x10);
                local_19c = iVar7 + 0x10;
                piVar8 = &local_19c;
                local_8 = CONCAT31(local_8._1_3_,9);
                uVar12 = uVar12 | 1;
              }
              else {
                piVar8 = (int *)FUN_100352e0(local_188);
                uVar12 = uVar12 | 2;
                local_8 = 10;
                iVar14 = local_170;
              }
              local_178 = uVar12;
              AddButton(*piVar8,local_84,0xffffffff);
              if ((uVar12 & 2) != 0) {
                local_178 = uVar12 & 0xfffffffd;
                FUN_10034f00();
                uVar12 = local_178;
              }
              if ((uVar12 & 1) != 0) {
                local_178 = uVar12 & 0xfffffffe;
                FUN_10034f00();
              }
              CMFCToolBarButton::~CMFCToolBarButton(local_84);
            }
            else {
              FUN_101214e2(local_188);
            }
          }
        }
        local_8 = 0xffffffff;
        FUN_10034f00();
        iVar7 = local_188;
        local_184 = (HMENU)((int)&local_184->unused + 1);
        uVar12 = local_178;
      } while ((int)local_184 < iVar2);
      if (((local_1a4 != 0) && (local_188 != 0)) &&
         ((pCVar11 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_101c56b8,
                                        *(CObject **)(iVar14 + 0x154)), pCVar11 != (CObject *)0x0 &&
          ((*(int *)(pCVar11 + 0x130) != 0 && (*(int *)(pCVar11 + 0x140) != 0)))))) {
        uVar4 = CMFCToolBarButton(*(int *)(pCVar11 + 0x130),0xffffffff,
                                  *(undefined4 *)(pCVar11 + 0x128),0,0);
        local_8 = 0xb;
        AddButton(iVar7,uVar4,0xffffffff);
        CMFCToolBarButton::~CMFCToolBarButton(local_84);
      }
    }
    FUN_1017f5f4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1004886a();
}

