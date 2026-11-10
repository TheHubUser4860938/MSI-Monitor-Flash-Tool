// rea decompile_all
// name: CMFCPopupMenu::InitMenuBar
// address: 0x1008b381
// body: available
// range: 0x1008b381-0x1008b99b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1008b3c2 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCPopupMenu::InitMenuBar(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCPopupMenu::InitMenuBar(CMFCPopupMenu *this)

{
  wchar_t *pwVar1;
  CMFCToolBar *pCVar2;
  BOOL BVar3;
  int iVar4;
  AFX_MODULE_STATE *pAVar5;
  int *piVar6;
  size_t sVar7;
  undefined4 uVar8;
  int iVar9;
  CCommandManager *this_00;
  uint uVar10;
  CFrameWnd *pCVar11;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_01;
  code *pcVar12;
  wchar_t *pwVar13;
  bool bVar14;
  int local_324;
  wchar_t *local_320;
  wchar_t *local_31c;
  int local_318;
  wchar_t *local_314;
  uint local_310;
  int *local_30c;
  int local_308;
  CMFCToolBarMenuButton local_304 [232];
  WCHAR local_21c [266];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x31c;
  local_8 = 0x1008b390;
  pcVar12 = *(code **)(*(int *)this + 0x1c8);
  guard_check_icall();
  pCVar2 = (CMFCToolBar *)(*pcVar12)();
  if (*(HMENU *)(this + 0xf34) != (HMENU)0x0) {
    BVar3 = IsMenu(*(HMENU *)(this + 0xf34));
    if (BVar3 == 0) goto LAB_1008b3c2;
    if ((*(int *)(this + 0x158) != 0) ||
       (iVar4 = CMenuHash::LoadMenuBar
                          ((CMenuHash *)&DAT_1020b388,*(HMENU__ **)(this + 0xf34),pCVar2),
       iVar4 == 0)) {
      iVar4 = CMFCMenuBar::IsShowAllCommands();
      if (iVar4 == 0) {
        bVar14 = *(int *)(this + 0x158) == 0;
        pcVar12 = *(code **)(*(int *)pCVar2 + 0x438);
      }
      else {
        bVar14 = true;
        pcVar12 = *(code **)(*(int *)pCVar2 + 0x438);
      }
      guard_check_icall(*(undefined4 *)(this + 0xf34),bVar14);
      iVar4 = (*pcVar12)();
      if (iVar4 == 0) goto LAB_1008b996;
    }
  }
  pAVar5 = AfxGetModuleState();
  local_320 = *(wchar_t **)(*(int *)(pAVar5 + 4) + 0x8c);
  if ((local_320 != (wchar_t *)0x0) && (DAT_10209cf0 == 0)) {
    local_314 = *(wchar_t **)(pCVar2 + 0xc40);
    local_308 = 0;
    local_310 = 0;
    while( true ) {
      pwVar13 = local_314;
      if (local_314 == (wchar_t *)0x0) goto LAB_1008b6b3;
      piVar6 = (int *)FUN_100972dc(&local_314);
      piVar6 = (int *)*piVar6;
      if (piVar6 == (int *)0x0) goto LAB_1008b3c2;
      if ((piVar6[8] == 0xe110) && (iVar4 = FUN_10030ace(L"Recent File"), iVar4 == 0)) break;
      local_310 = piVar6[9] & 1;
      local_308 = local_308 + 1;
    }
    FUN_10039ef3(pwVar13);
    pcVar12 = *(code **)(*piVar6 + 4);
    guard_check_icall(1);
    (*pcVar12)();
    GetCurrentDirectoryW(0x104,local_21c);
    sVar7 = _wcslen(local_21c);
    local_21c[sVar7] = L'\\';
    iVar4 = sVar7 + 1;
    if (0x207 < (uint)(iVar4 * 2)) {
      ___report_rangecheckfailure();
      goto LAB_1008b87f;
    }
    local_21c[iVar4] = L'\0';
    local_30c = (int *)0x0;
    local_318 = 0;
    pwVar13 = local_320;
    if (*(int *)(local_320 + 2) < 1) goto LAB_1008b65f;
    do {
      uVar8 = FUN_1001e20a();
      FUN_1001d224(uVar8);
      iVar9 = *(int *)pwVar13;
      local_8 = 0;
      guard_check_icall(&local_324,local_30c,local_21c,iVar4,1);
      iVar9 = (**(code **)(iVar9 + 0xc))();
      if (iVar9 != 0) {
        uVar8 = FUN_1001e20a();
        FUN_1001d224(uVar8);
        local_318 = local_318 + 1;
        local_8._0_1_ = 1;
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (this_01,(wchar_t *)&local_31c,L"&%d %Ts",local_318,local_324);
        pwVar13 = local_31c;
        uVar8 = CMFCToolBarMenuButton::CMFCToolBarMenuButton
                          (local_304,(uint)(local_30c + 0x3844),(HMENU__ *)0x0,-1,local_31c,0);
        pcVar12 = *(code **)(*(int *)pCVar2 + 0x344);
        local_8 = CONCAT31(local_8._1_3_,2);
        guard_check_icall(uVar8,local_308);
        (*pcVar12)();
        local_308 = local_308 + 1;
        FUN_100e52a7();
        ATL::CStringData::Release((CStringData *)(pwVar13 + -8));
        pwVar13 = local_320;
      }
      local_8 = 0xffffffff;
      ATL::CStringData::Release((CStringData *)(local_324 + -0x10));
      local_30c = (int *)((int)local_30c + 1);
    } while ((int)local_30c < *(int *)(pwVar13 + 2));
    if (local_318 == 0) {
LAB_1008b65f:
      pwVar13 = local_314;
      if ((local_310 != 0) && (local_314 != (wchar_t *)0x0)) {
        piVar6 = (int *)FUN_100972dc(&local_314);
        piVar6 = (int *)*piVar6;
        if (piVar6 == (int *)0x0) {
LAB_1008b3c2:
                    /* WARNING: Subroutine does not return */
          FUN_1001d023();
        }
        if ((*(byte *)(piVar6 + 9) & 1) != 0) {
          FUN_10039ef3(pwVar13);
          pcVar12 = *(code **)(*piVar6 + 4);
          guard_check_icall(1);
          (*pcVar12)();
        }
      }
    }
  }
LAB_1008b6b3:
  pwVar13 = local_320;
  if ((DAT_1020b6c8 != 0) && (DAT_10209cf0 == 0)) {
    local_314 = *(wchar_t **)(pCVar2 + 0xc40);
    iVar4 = 0;
    local_310 = 0;
    piVar6 = (int *)0x0;
    local_308 = 0;
    pwVar1 = local_314;
    while (local_320 = pwVar1, local_320 != (wchar_t *)0x0) {
      local_30c = (int *)FUN_100972dc(&local_314);
      local_30c = (int *)*local_30c;
      if (local_30c == (int *)0x0) goto LAB_1008b3c2;
      local_31c = local_314;
      if (*(int *)(DAT_1020b6c8 + 0x20) == local_30c[8]) {
        local_318 = DAT_1020b6c8 + 4;
        if ((DAT_1020b0ec == 0) || (*(int *)(DAT_1020b6c8 + 0x10) != 0)) {
          FUN_10039ef3(local_320);
          pcVar12 = *(code **)(*local_30c + 4);
          guard_check_icall(1);
          (*pcVar12)();
          iVar4 = local_308;
        }
        if (local_310 == 0) {
          if (((iVar4 == 0) && (*(int *)(local_318 + 0xc) != 0)) && (*(int *)(pCVar2 + 0xc48) != 0))
          {
            pcVar12 = *(code **)(*(int *)pCVar2 + 0x348);
            guard_check_icall(piVar6);
            (*pcVar12)();
            piVar6 = (int *)((int)piVar6 + 1);
          }
          local_310 = *(uint *)(local_318 + 4);
          while (local_310 != 0) {
            iVar4 = FUN_1006a9f1(&local_310);
            iVar9 = 1;
            uVar10 = *(uint *)(iVar4 + 0x10);
            this_00 = (CCommandManager *)FUN_1009cb85();
            uVar10 = CCommandManager::GetCmdImage(this_00,uVar10,iVar9);
            uVar8 = CMFCToolBarMenuButton::CMFCToolBarMenuButton
                              (local_304,*(uint *)(iVar4 + 0x10),(HMENU__ *)0x0,
                               -(uint)(uVar10 != 0xffffffff) & uVar10,*(wchar_t **)(iVar4 + 4),
                               (uint)(uVar10 != 0xffffffff));
            local_8 = 3;
            pcVar12 = *(code **)(*(int *)pCVar2 + 0x344);
            guard_check_icall(uVar8,piVar6);
            (*pcVar12)();
            local_8 = 0xffffffff;
            piVar6 = (int *)((int)piVar6 + 1);
            FUN_100e52a7();
          }
          if (local_31c != (wchar_t *)0x0) {
            pcVar12 = *(code **)(*(int *)pCVar2 + 0x348);
            guard_check_icall(piVar6);
            iVar4 = (*pcVar12)();
            piVar6 = (int *)((int)piVar6 + 1);
            if (iVar4 < 0) {
LAB_1008b87f:
              local_308 = 0;
            }
            else {
              local_308 = 1;
            }
          }
          local_310 = 1;
          iVar4 = local_308;
        }
      }
      else if ((*(byte *)(local_30c + 9) & 1) == 0) {
        iVar4 = 0;
        local_308 = iVar4;
      }
      else {
        if (iVar4 != 0) {
          FUN_10039ef3(local_320);
          pcVar12 = *(code **)(*local_30c + 4);
          guard_check_icall(1);
          (*pcVar12)();
        }
        iVar4 = 1;
        local_308 = iVar4;
      }
      piVar6 = (int *)((int)piVar6 + 1);
      pwVar1 = local_31c;
      pwVar13 = local_320;
    }
  }
  local_320 = pwVar13;
  pcVar12 = *(code **)(*(int *)pCVar2 + 0x3c4);
  guard_check_icall();
  pCVar11 = (CFrameWnd *)(*pcVar12)();
  if (pCVar11 == (CFrameWnd *)0x0) {
LAB_1008b928:
    pCVar11 = AFXGetParentFrame((CWnd *)this);
  }
  else {
    pcVar12 = *(code **)(*(int *)pCVar11 + 0x150);
    guard_check_icall();
    iVar4 = (*pcVar12)();
    if (iVar4 == 0) goto LAB_1008b928;
  }
  if (pCVar11 != (CFrameWnd *)0x0) {
    pcVar12 = *(code **)(*(int *)pCVar2 + 0x244);
    guard_check_icall(pCVar11,0);
    (*pcVar12)();
  }
  pCVar11 = DAT_1020b224;
  if (DAT_1020b224 == (CFrameWnd *)0x0) {
    pCVar11 = CWnd::GetTopLevelFrame((CWnd *)this);
  }
  iVar4 = ActivatePopupMenu(pCVar11,this);
  if (iVar4 != 0) {
    pcVar12 = *(code **)(*(int *)this + 0x178);
    guard_check_icall(1);
    (*pcVar12)();
  }
LAB_1008b996:
  iVar4 = FUN_10154478();
  return iVar4;
}

