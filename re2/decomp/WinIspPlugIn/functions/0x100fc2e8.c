// rea decompile_all
// name: CMFCDragFrameImpl::MoveDragFrame
// address: 0x100fc2e8
// body: available
// range: 0x100fc2e8-0x100fc778 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CMFCDragFrameImpl::MoveDragFrame(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCDragFrameImpl::MoveDragFrame(CMFCDragFrameImpl *this,int param_1)

{
  CMFCDragFrameImpl *pCVar1;
  code *pcVar2;
  CDockingManager *pCVar3;
  POINT pt;
  bool bVar4;
  CDockablePane *pCVar5;
  CFrameWnd *pCVar6;
  long lVar7;
  BOOL BVar8;
  int iVar9;
  CObject *pCVar10;
  AFX_GLOBAL_DATA *pAVar11;
  int _X;
  RECT *pRVar12;
  int iVar13;
  int local_68;
  long local_64;
  tagPOINT local_60;
  CObject *local_58;
  tagRECT local_54;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x60;
  local_8 = 0x100fc2f4;
  *(undefined4 *)(this + 0x38) = 0;
  if ((*(int *)(this + 0x44) == 0) || (*(int *)(this + 0x48) == 0)) goto LAB_100fc771;
  if (*(int *)(this + 0x50) == 0) {
    pCVar5 = (CDockablePane *)FUN_100491ae(0x368);
    local_8 = 0;
    if (pCVar5 == (CDockablePane *)0x0) {
      pCVar5 = (CDockablePane *)0x0;
    }
    else {
      CDockablePane::CDockablePane(pCVar5);
      *(undefined ***)pCVar5 = CDummyDockablePane::vftable;
    }
    local_8 = 0xffffffff;
    *(CDockablePane **)(this + 0x50) = pCVar5;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    pCVar6 = DAT_102471dc;
    if (DAT_102471dc == (CFrameWnd *)0x0) {
      pCVar6 = CWnd::GetTopLevelFrame(*(CWnd **)(this + 0x44));
    }
    pcVar2 = *(code **)(**(int **)(this + 0x50) + 0x328);
    guard_check_icall(0,&PTR_1020e6b0,pCVar6,&local_44,0,DAT_1023d988,0x40000000,0x20,0xf,0);
    (*pcVar2)();
  }
  iVar13 = DAT_10247e34;
  iVar9 = DAT_10247e30;
  local_60.x = 0;
  local_60.y = 0;
  GetCursorPos(&local_60);
  _X = local_60.x - *(int *)(this + 4);
  local_64 = local_60.y - *(int *)(this + 8);
  lVar7 = _labs(_X);
  if ((((lVar7 < iVar9) && (lVar7 = _labs(local_64), lVar7 < iVar13)) &&
      (BVar8 = IsRectEmpty((RECT *)(this + 0xc)), BVar8 != 0)) && (param_1 == 0)) goto LAB_100fc771;
  *(undefined4 *)(this + 0x30) = 1;
  CDockingManager::LockUpdate(*(CDockingManager **)(this + 0x48),1);
  pRVar12 = (RECT *)(this + 0x1c);
  BVar8 = IsRectEmpty(pRVar12);
  if (BVar8 != 0) {
    pRVar12 = (RECT *)(this + 0xc);
  }
  local_58 = (CObject *)0x0;
  local_54.left = pRVar12->left;
  local_54.top = pRVar12->top;
  local_54.right = pRVar12->right;
  local_54.bottom = pRVar12->bottom;
  pRVar12 = (RECT *)(this + 0xc);
  BVar8 = IsRectEmpty(pRVar12);
  if (BVar8 != 0) {
    iVar9 = FUN_10051e53(&PTR_s_CPaneFrameWnd_1023d8dc);
    if (iVar9 == 0) {
      iVar9 = FUN_10051e53(&PTR_s_CPane_101de9e4);
      if (iVar9 != 0) {
        pCVar10 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_101de9e4,
                                     *(CObject **)(this + 0x44));
        local_58 = pCVar10;
        GetWindowRect(*(HWND *)(*(int *)(this + 0x44) + 0x20),pRVar12);
        pcVar2 = *(code **)(*(int *)pCVar10 + 0x228);
        guard_check_icall(0);
        iVar9 = (*pcVar2)();
        if (iVar9 == 0) {
          *(int *)(this + 0x14) =
               (*(int *)(local_58 + 0x1f0) - *(int *)(local_58 + 0x1e8)) + pRVar12->left;
          *(int *)(this + 0x18) =
               (*(int *)(this + 0x10) - *(int *)(local_58 + 0x1ec)) + *(int *)(local_58 + 500);
        }
        BVar8 = PtInRect(pRVar12,*(POINT *)(this + 4));
        if (BVar8 == 0) {
          OffsetRect(pRVar12,(*(int *)(this + 4) - pRVar12->left) + -5,0);
        }
      }
    }
    else {
      GetWindowRect(*(HWND *)(*(int *)(this + 0x44) + 0x20),pRVar12);
    }
    local_58 = (CObject *)0x1;
  }
  pCVar1 = this + 0x4c;
  pCVar5 = *(CDockablePane **)pCVar1;
  local_68 = 0;
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  SetRectEmpty(&local_24);
  pCVar3 = *(CDockingManager **)(this + 0x48);
  bVar4 = false;
  if (((pCVar3 != (CDockingManager *)0x0) && (iVar9 = *(int *)(pCVar3 + 0x1b8), iVar9 != 0)) &&
     ((*(int *)(iVar9 + 8) != 0 && (*(int *)(iVar9 + 4) != 0)))) {
    bVar4 = true;
  }
  CDockingManager::CalcExpectedDockedRect
            (pCVar3,*(undefined4 *)(this + 0x44),local_60.x,local_60.y,&local_24,&local_68,pCVar1);
  if (((pCVar5 != (CDockablePane *)0x0) && (*(int *)(this + 0x34) != -1)) &&
     ((pCVar5 != *(CDockablePane **)pCVar1 || (local_68 == 0)))) {
    RemoveTabPreDocking(this,pCVar5);
    local_58 = (CObject *)0x1;
  }
  iVar13 = 1;
  iVar9 = FUN_10051e53(&PTR_s_CPaneFrameWnd_1023d8dc);
  if ((iVar9 == 0) && (iVar9 = FUN_10051e53(&PTR_s_CPane_101de9e4), iVar9 != 0)) {
    pCVar10 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_101de9e4,*(CObject **)(this + 0x44));
    pcVar2 = *(code **)(*(int *)pCVar10 + 0x18c);
    guard_check_icall();
    iVar13 = (*pcVar2)();
  }
  if ((*(int *)(this + 0x4c) != 0) && (iVar13 != 0)) {
    pCVar10 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_101eb880,
                                 *(CObject **)(this + 0x4c));
    if (pCVar10 == (CObject *)0x0) goto LAB_100fc65c;
    if (local_68 == 0) goto LAB_100fc692;
    pcVar2 = *(code **)(*(int *)pCVar10 + 0x3a8);
    guard_check_icall();
    iVar9 = (*pcVar2)();
    if (1 < iVar9) {
      pcVar2 = *(code **)(*(int *)pCVar10 + 0x3ac);
      guard_check_icall();
      iVar9 = (*pcVar2)();
      if (iVar9 == 0) goto LAB_100fc61b;
LAB_100fc649:
      PlaceTabPreDocking(this,(CBaseTabbedPane *)pCVar10,(int)local_58);
      goto LAB_100fc771;
    }
LAB_100fc61b:
    pcVar2 = *(code **)(*(int *)pCVar10 + 0x3a8);
    guard_check_icall();
    iVar9 = (*pcVar2)();
    if (0 < iVar9) {
      pcVar2 = *(code **)(*(int *)pCVar10 + 0x3ac);
      guard_check_icall();
      iVar9 = (*pcVar2)();
      if (iVar9 == 0) goto LAB_100fc649;
    }
LAB_100fc65c:
    if (local_68 != 0) {
      if (*(int *)(this + 0x34) == -1) {
        if (local_58 == (CObject *)0x0) {
          FUN_100fc13d(0);
        }
        DrawFrameTab(this,*(CDockablePane **)(this + 0x4c),0);
        *(undefined4 *)(this + 0x34) = 1;
      }
      goto LAB_100fc771;
    }
  }
LAB_100fc692:
  OffsetRect((LPRECT)(this + 0xc),_X,local_64);
  *(LONG *)(this + 4) = local_60.x;
  *(LONG *)(this + 0x1c) = local_24.left;
  *(LONG *)(this + 8) = local_60.y;
  *(LONG *)(this + 0x20) = local_24.top;
  *(LONG *)(this + 0x24) = local_24.right;
  *(LONG *)(this + 0x28) = local_24.bottom;
  pRVar12 = (RECT *)(this + 0x1c);
  BVar8 = IsRectEmpty(pRVar12);
  if (BVar8 == 0) {
    pAVar11 = GetGlobalData();
    local_64 = *(long *)(pAVar11 + 0x1b4);
  }
  else {
    pAVar11 = GetGlobalData();
    local_64 = *(long *)(pAVar11 + 0x1b0);
  }
  local_34.left = 0;
  local_34.top = 0;
  local_34.right = 0;
  local_34.bottom = 0;
  BVar8 = IsRectEmpty(pRVar12);
  if (BVar8 != 0) {
    pRVar12 = (RECT *)(this + 0xc);
    pt.y = local_60.y;
    pt.x = local_60.x;
    BVar8 = PtInRect(pRVar12,pt);
    if (BVar8 == 0) {
      OffsetRect(pRVar12,local_60.x - ((*(int *)(this + 0x14) - pRVar12->left) / 2 + pRVar12->left),
                 local_60.y - (*(int *)(this + 0x10) + 5));
    }
  }
  local_34.left = pRVar12->left;
  local_34.top = pRVar12->top;
  local_34.right = pRVar12->right;
  local_34.bottom = pRVar12->bottom;
  if ((!bVar4) || (BVar8 = IsRectEmpty((RECT *)(this + 0x1c)), BVar8 == 0)) {
    lVar7 = local_64;
    DrawDragFrame(this,&local_54,&local_34,(int)local_58,local_64,*(int *)(this + 0x40));
    *(long *)(this + 0x40) = lVar7;
  }
LAB_100fc771:
  FUN_1018015d();
  return;
}

