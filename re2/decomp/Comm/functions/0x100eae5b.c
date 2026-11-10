// rea decompile_all
// name: FUN_100eae5b
// address: 0x100eae5b
// body: available
// range: 0x100eae5b-0x100eb382 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100eae97 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_100eae5b(int param_1,int param_2,wchar_t *param_3,int param_4)

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
  CMFCToolBarButton *pCVar12;
  uint uVar13;
  CMenu *pCVar14;
  CMFCToolBarsCustomizeDialog *pCVar15;
  int in_stack_fffffe3c;
  UINT in_stack_fffffe40;
  undefined1 local_1ac [8];
  int local_1a4;
  int local_1a0;
  int local_19c;
  undefined4 local_198;
  wchar_t *local_194;
  int local_190;
  wchar_t *local_18c;
  wchar_t *local_188;
  HMENU local_184;
  CMenu *local_180;
  int local_17c;
  uint local_178;
  wchar_t *local_174;
  CMFCToolBarsCustomizeDialog *local_170;
  CMFCToolBarMenuButton local_16c [232];
  CMFCToolBarButton local_84 [44];
  undefined1 local_58 [80];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1a4;
  local_8 = 0x100eae6a;
  local_188 = param_3;
  uVar13 = 0;
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
        uVar4 = FUN_10013071();
        FUN_10003190(uVar4);
        local_8 = 0;
        FID_conflict_GetMenuStringA
                  (local_184,(UINT)&local_174,(LPSTR)0x400,in_stack_fffffe3c,in_stack_fffffe40);
        if (*(int *)(local_170 + 0x160) == 0) {
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_174,L'&');
        }
        pCVar15 = local_170;
        if (UVar3 != 0) {
          if (UVar3 == 0xffffffff) {
            pHVar9 = GetSubMenu(*(HMENU *)(local_190 + 4),(int)local_184);
            local_180 = CMenu::FromHandle(pHVar9);
            local_18c = (wchar_t *)0x0;
            if (DAT_101dd278 != (CMenuTearOffManager *)0x0) {
              local_18c = (wchar_t *)
                          CMenuTearOffManager::Parse
                                    (DAT_101dd278,
                                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                      *)&local_174);
            }
            iVar7 = FUN_10003060(local_174 + -8);
            local_194 = (wchar_t *)(iVar7 + 0x10);
            local_8 = CONCAT31(local_8._1_3_,1);
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
                      ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_194,L'&');
            if (local_188 != (wchar_t *)0x0) {
              FUN_10003780(local_188);
            }
            pCVar15 = local_170;
            pwVar1 = local_194;
            if (*(int *)(local_170 + 0x158) == 0) {
              FUN_100eae5b(local_180,param_2,0,0);
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
                CMFCToolBarsCustomizeDialog::AddButton
                          (pCVar15,pwVar1,(CMFCToolBarButton *)local_16c,-1);
                local_8 = CONCAT31(local_8._1_3_,1);
                FUN_100d9fa0();
              }
              uVar4 = FUN_10013071();
              FUN_10003190(uVar4);
              local_8 = CONCAT31(local_8._1_3_,3);
              if (local_1a0 != 0) {
                FUN_10003780(local_1a0);
              }
              FUN_100123a8(local_174,*(undefined4 *)(local_174 + -6));
              FUN_100eae5b(local_180,param_2,pwVar1,local_198);
              FUN_10003460();
            }
            FUN_10003460();
            pCVar15 = local_170;
          }
          else {
            if ((param_2 != 0) && (UVar3 - 0xe130 < 0x10)) {
              local_1a4 = 1;
            }
            if (((local_188 == (wchar_t *)0x0) || (DAT_101dc968 == 0)) ||
               (*(UINT *)(DAT_101dc968 + 0x20) != UVar3)) {
              CMFCToolBarButton(UVar3,0xffffffff,local_174,0,0);
              local_8._0_1_ = 4;
              if (local_1a0 != 0) {
                uVar4 = FUN_100037c0(local_1a0);
                local_8._0_1_ = 5;
                ATL__operator_(&local_17c,uVar4,local_58);
                local_8 = CONCAT31(local_8._1_3_,7);
                FUN_10003460();
                local_18c = (wchar_t *)FUN_100035b0(*(int *)(local_17c + -0xc) + 1);
                if ((local_18c != (wchar_t *)0x0) &&
                   (sVar5 = _wcslen(local_18c), pwVar1 = local_18c, 1 < sVar5)) {
                  pCVar14 = (CMenu *)0x0;
                  pCVar6 = (CMenu *)(sVar5 - 1);
                  local_180 = pCVar6;
                  if (pCVar6 != (CMenu *)0x0) {
                    do {
                      if (pwVar1[(int)pCVar14] == L' ') {
                        CharUpperBuffW(pwVar1 + (int)(pCVar14 + 1),1);
                        pCVar6 = local_180;
                      }
                      pCVar14 = pCVar14 + 1;
                      uVar13 = local_178;
                    } while (pCVar14 < pCVar6);
                  }
                }
                ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer
                          ((CSimpleStringT<wchar_t,0> *)&local_17c,-1);
                ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
                          ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_17c,L' ');
                uVar4 = FUN_100412db(local_1ac,&DAT_1018743c);
                local_8._0_1_ = 8;
                FUN_100030d0(uVar4);
                FUN_10003460();
                local_8._0_1_ = 4;
                FUN_10003460();
              }
              pCVar15 = local_170;
              if (local_188 == (wchar_t *)0x0) {
                iVar7 = FUN_10003060(*(int *)(local_170 + 0x150) + -0x10);
                local_19c = iVar7 + 0x10;
                piVar8 = &local_19c;
                local_8 = CONCAT31(local_8._1_3_,9);
                uVar13 = uVar13 | 1;
              }
              else {
                piVar8 = (int *)FUN_100037c0(local_188);
                uVar13 = uVar13 | 2;
                local_8 = 10;
                pCVar15 = local_170;
              }
              local_178 = uVar13;
              CMFCToolBarsCustomizeDialog::AddButton(pCVar15,(wchar_t *)*piVar8,local_84,-1);
              if ((uVar13 & 2) != 0) {
                local_178 = uVar13 & 0xfffffffd;
                FUN_10003460();
                uVar13 = local_178;
              }
              if ((uVar13 & 1) != 0) {
                local_178 = uVar13 & 0xfffffffe;
                FUN_10003460();
              }
              CMFCToolBarButton::~CMFCToolBarButton(local_84);
            }
            else {
              FUN_100eb383(local_188);
            }
          }
        }
        local_8 = 0xffffffff;
        FUN_10003460();
        pwVar1 = local_188;
        local_184 = (HMENU)((int)&local_184->unused + 1);
        uVar13 = local_178;
      } while ((int)local_184 < iVar2);
      if (((local_1a4 != 0) && (local_188 != (wchar_t *)0x0)) &&
         ((pCVar11 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10192540,
                                        *(CObject **)(pCVar15 + 0x154)), pCVar11 != (CObject *)0x0
          && ((*(int *)(pCVar11 + 0x130) != 0 && (*(int *)(pCVar11 + 0x140) != 0)))))) {
        pCVar12 = (CMFCToolBarButton *)
                  CMFCToolBarButton(*(int *)(pCVar11 + 0x130),0xffffffff,
                                    *(undefined4 *)(pCVar11 + 0x128),0,0);
        local_8 = 0xb;
        CMFCToolBarsCustomizeDialog::AddButton(pCVar15,pwVar1,pCVar12,-1);
        CMFCToolBarButton::~CMFCToolBarButton(local_84);
      }
    }
    FUN_101490fe();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012a3f();
}

