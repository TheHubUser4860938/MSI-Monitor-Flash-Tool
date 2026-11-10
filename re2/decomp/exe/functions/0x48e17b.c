// rea decompile_all
// name: CMFCToolBarMenuButton::OnCalculateSize
// address: 0x48e17b
// body: available
// range: 0x48e17b-0x48e47c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual struct tagSIZE __thiscall CMFCToolBarMenuButton::OnCalculateSize(class CDC
   *,class CSize const &,int)
   
   Library: Visual Studio 2015 Release */

tagSIZE __thiscall
CMFCToolBarMenuButton::OnCalculateSize
          (CMFCToolBarMenuButton *this,CDC *param_1,CSize *param_2,int param_3)

{
  code *pcVar1;
  AFX_GLOBAL_DATA *pAVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  CWnd *pCVar6;
  HWND pHVar7;
  CObject *pCVar8;
  undefined4 *puVar9;
  CMFCVisualManager *pCVar10;
  CDC *in_EDX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  CFrameWnd *pCVar11;
  tagSIZE tVar12;
  undefined8 uVar13;
  int in_stack_00000010;
  undefined1 local_30 [4];
  CObject *local_2c;
  undefined1 local_28 [4];
  int local_24;
  undefined1 local_20 [4];
  CFrameWnd *local_1c;
  CDC local_18 [4];
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x48e187;
  pCVar11 = (CFrameWnd *)0x0;
  *(int *)(this + 0xa0) = in_stack_00000010;
  if (*(int *)(this + 0x50) == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    local_24 = 0;
    if ((*(int *)(this + 0x90) != 0) || (*(int *)(this + 0x94) != 0)) {
      if (*(int *)(this + 0x94) == 0) {
        if (in_stack_00000010 == 0) {
          iVar4 = FUN_0045bc7e(local_28);
          local_24 = *(int *)(iVar4 + 4);
        }
        else {
          piVar3 = (int *)FUN_0045bc7e(local_30);
          local_24 = *piVar3;
        }
        if (DAT_00614ee0 != 0) {
          local_24 = local_24 * 2;
        }
      }
      else if (in_stack_00000010 == 0) {
        pAVar2 = GetGlobalData();
        local_24 = *(int *)(pAVar2 + 0x1cc);
      }
      else {
        pAVar2 = GetGlobalData();
        local_24 = *(int *)(pAVar2 + 0x1d4);
      }
      local_24 = local_24 + -2;
    }
    if (((DAT_00616884 != 0) && (*(int *)(this + 0x94) != 0)) &&
       ((*(uint *)(this + 0x20) < 0xf000 || (0xf1ef < *(uint *)(this + 0x20))))) {
      iVar4 = FUN_004148c0(9,0);
      if (-1 < iVar4) {
        uVar5 = FUN_004147d0(&local_2c,iVar4);
        local_8 = 0;
        FUN_00415f50(uVar5);
        local_8 = 0xffffffff;
        FUN_0040efa0();
      }
      uVar5 = FUN_004295fe();
      FUN_0040eb30(uVar5);
      local_8 = 1;
      if (*(CWnd **)(this + 0x6c) == (CWnd *)0x0) {
        pCVar6 = AfxGetMainWnd();
        local_1c = (CFrameWnd *)
                   AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_005c363c,(CObject *)pCVar6);
LAB_0048e2bb:
        if (local_1c != (CFrameWnd *)0x0) goto LAB_0048e2bf;
      }
      else {
        local_1c = DAT_0061620c;
        if (DAT_0061620c == (CFrameWnd *)0x0) {
          local_1c = CWnd::GetTopLevelFrame(*(CWnd **)(this + 0x6c));
          goto LAB_0048e2bb;
        }
LAB_0048e2bf:
        pCVar11 = local_1c;
        iVar4 = CKeyboardManager::FindDefaultAccelerator
                          (*(uint *)(this + 0x20),
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           local_14,local_1c,1);
        if (iVar4 == 0) {
          iVar4 = 0;
          pcVar1 = *(code **)(*(int *)pCVar11 + 0x170);
          guard_check_icall();
          pCVar11 = (CFrameWnd *)(*pcVar1)();
          iVar4 = CKeyboardManager::FindDefaultAccelerator
                            (*(uint *)(this + 0x20),
                             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             local_14,pCVar11,iVar4);
          if (iVar4 == 0) goto LAB_0048e311;
        }
        FUN_004153a0(9);
        FUN_004157a0(local_14[0],*(undefined4 *)(local_14[0] + -0xc));
      }
LAB_0048e311:
      local_8 = 0xffffffff;
      FUN_0040efa0();
    }
    local_2c = (CObject *)0x0;
    if (*(int *)(this + 0x20) == -2) {
      iVar4 = *(int *)param_2;
      pAVar2 = GetGlobalData();
      guard_check_icall(pAVar2 + 300);
      local_2c = (CObject *)(**(code **)(iVar4 + 0x28))();
    }
    tVar12 = CMFCToolBarButton::OnCalculateSize((CMFCToolBarButton *)this,local_18,param_2,param_3);
    local_1c = *(CFrameWnd **)tVar12.cx;
    local_14[0] = ((int *)tVar12.cx)[1];
    if (local_2c != (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)param_2 + 0x28);
      guard_check_icall(local_2c);
      (*pcVar1)();
    }
    iVar4 = local_14[0];
    local_2c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenuBar_0060c6b4,
                                  *(CObject **)(this + 0x6c));
    uVar13 = CONCAT44(extraout_EDX,iVar4);
    if (local_2c != (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)local_2c + 0x354);
      guard_check_icall();
      uVar13 = (*pcVar1)();
      iVar4 = (int)uVar13;
      local_14[0] = iVar4;
      if (*(int *)(local_2c + 0xd80) != 0) {
        pHVar7 = GetParent(*(HWND *)(local_2c + 0x20));
        pCVar6 = CWnd::FromHandle(pHVar7);
        pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCDropDownListBox_005cbde8,
                                    (CObject *)pCVar6);
        uVar13 = CONCAT44(extraout_EDX_00,iVar4);
        if (pCVar8 != (CObject *)0x0) {
          pcVar1 = *(code **)(*(int *)pCVar8 + 0x218);
          guard_check_icall(local_20,param_2,this,local_1c,local_14[0]);
          puVar9 = (undefined4 *)(*pcVar1)();
          *(undefined4 *)param_1 = *puVar9;
          *(undefined4 *)(param_1 + 4) = puVar9[1];
          in_EDX = param_1;
          goto LAB_0048e475;
        }
      }
    }
    in_EDX = (CDC *)((ulonglong)uVar13 >> 0x20);
    iVar4 = (int)uVar13;
    if (in_stack_00000010 == 0) {
      iVar4 = iVar4 + local_24;
      pCVar11 = local_1c;
      local_14[0] = iVar4;
    }
    else {
      pCVar11 = (CFrameWnd *)((int)local_1c + local_24);
    }
    if ((*(int *)(this + 0x94) == 0) ||
       (pCVar11 = (CFrameWnd *)((int)pCVar11 + *(int *)param_3 + 6), *(int *)(this + 0x94) == 0)) {
      pCVar10 = CMFCVisualManager::GetInstance();
      pcVar1 = *(code **)(*(int *)pCVar10 + 0x2dc);
      guard_check_icall();
      uVar13 = (*pcVar1)();
      in_EDX = (CDC *)((ulonglong)uVar13 >> 0x20);
      if (in_stack_00000010 == 0) {
        iVar4 = local_14[0] + (int)uVar13 * 2;
      }
      else {
        pCVar11 = (CFrameWnd *)((int)pCVar11 + (int)uVar13 * 2);
        iVar4 = local_14[0];
      }
    }
    *(int *)(param_1 + 4) = iVar4;
  }
  *(CFrameWnd **)param_1 = pCVar11;
LAB_0048e475:
  tVar12.cy = (LONG)in_EDX;
  tVar12.cx = (LONG)param_1;
  return tVar12;
}

