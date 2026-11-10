// rea decompile_all
// name: CMFCPropertyGridCtrl::PreTranslateMessage
// address: 0x10075d2c
// body: available
// range: 0x10075d2c-0x1007650b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCPropertyGridCtrl::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCPropertyGridCtrl::PreTranslateMessage(CMFCPropertyGridCtrl *this,tagMSG *param_1)

{
  uint uVar1;
  code *pcVar2;
  CMFCPropertyGridProperty *this_00;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  POINT pt_03;
  bool bVar3;
  int *piVar4;
  int iVar5;
  AFX_MODULE_STATE *pAVar6;
  undefined4 *puVar7;
  LRESULT LVar8;
  BOOL BVar9;
  LPARAM lParam;
  HWND pHVar10;
  UINT UVar11;
  WPARAM WVar12;
  undefined1 local_4c [4];
  CMFCPropertyGridCtrl *local_48;
  tagPOINT local_44;
  CWaitCursor local_39;
  tagMSG *local_38;
  tagRECT local_34;
  undefined1 local_24 [12];
  int *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x10075d38;
  pHVar10 = (HWND)0x0;
  local_38 = param_1;
  uVar1 = param_1->message;
  local_48 = this;
  if (uVar1 < 0x105) {
    if ((uVar1 == 0x104) ||
       ((0xa0 < uVar1 &&
        ((uVar1 < 0xa3 ||
         ((0xa3 < uVar1 &&
          ((uVar1 < 0xa6 || ((0xa6 < uVar1 && ((uVar1 < 0xa9 || (uVar1 == 0x100)))))))))))))) {
LAB_10075dc3:
      SendMessageW(*(HWND *)(this + 0xa0),0x407,0,(LPARAM)param_1);
      CMFCPropertyGridToolTipCtrl::Hide((CMFCPropertyGridToolTipCtrl *)(this + 0x1d8));
    }
  }
  else if (uVar1 == 0x200) {
    SendMessageW(*(HWND *)(this + 0xa0),0x407,0,(LPARAM)param_1);
    if (param_1->wParam == 0) {
      local_24._8_4_ = 0;
      local_18[0] = (int *)0x0;
      GetCursorPos((LPPOINT)(local_24 + 8));
      ScreenToClient(*(HWND *)(this + 0x20),(LPPOINT)(local_24 + 8));
      TrackToolTip(this,local_24._8_4_,local_18[0]);
    }
  }
  else if ((0x200 < uVar1) &&
          ((uVar1 < 0x203 || ((0x203 < uVar1 && ((uVar1 < 0x206 || (uVar1 - 0x207 < 2))))))))
  goto LAB_10075dc3;
  if (((param_1->message == 0x100) && (param_1->wParam == 9)) &&
     (local_18[0] = *(int **)(this + 0x3d8), local_18[0] != (int *)0x0)) {
    pcVar2 = *(code **)(*local_18[0] + 0xa8);
    guard_check_icall();
    iVar5 = (*pcVar2)();
    param_1 = local_38;
    if (iVar5 != 0) goto LAB_100764cf;
  }
  if ((((param_1->message == 0x104) && ((param_1->wParam == 0x28 || (param_1->wParam == 0x27)))) &&
      (iVar5 = *(int *)(this + 0x3d8), iVar5 != 0)) &&
     ((*(int *)(iVar5 + 100) != 0 && ((*(byte *)(iVar5 + 0x2c) & 2) != 0)))) {
    pcVar2 = *(code **)(*(int *)this + 0x180);
    guard_check_icall(iVar5,0);
    iVar5 = (*pcVar2)();
    param_1 = local_38;
    if (iVar5 == 0) goto LAB_10075f7f;
    pcVar2 = *(code **)(**(int **)(this + 0x3d8) + 0x24);
    guard_check_icall(local_18);
    (*pcVar2)();
    local_8 = 0;
    pAVar6 = AfxGetModuleState();
    CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar6 + 4));
    local_8._0_1_ = 1;
    pcVar2 = *(code **)(**(int **)(this + 0x3d8) + 0x3c);
    guard_check_icall(0xffffffff,0xffffffff);
    (*pcVar2)();
    pcVar2 = *(code **)(**(int **)(this + 0x3d8) + 0x24);
    guard_check_icall(&local_38);
    puVar7 = (undefined4 *)(*pcVar2)();
    local_8._0_1_ = 2;
    iVar5 = FUN_1004a623(*puVar7);
    local_8 = CONCAT31(local_8._1_3_,1);
LAB_10075f34:
    FUN_10034f00();
    if (iVar5 != 0) {
      pcVar2 = *(code **)(*(int *)local_48 + 0x174);
      guard_check_icall(*(int *)(local_48 + 0x3d8));
      (*pcVar2)();
    }
    CWaitCursor::~CWaitCursor(&local_39);
LAB_10075f6f:
    FUN_10034f00();
    goto LAB_100764cf;
  }
LAB_10075f7f:
  if ((((param_1->message == 0x100) && (param_1->wParam == 0xd)) &&
      (this_00 = *(CMFCPropertyGridProperty **)(this + 0x3d8),
      this_00 != (CMFCPropertyGridProperty *)0x0)) &&
     ((*(int *)(this_00 + 0x5c) != 0 && (*(int *)(this_00 + 0x58) == 0)))) {
    CMFCPropertyGridProperty::Expand(this_00,(uint)(*(int *)(this_00 + 0x60) == 0));
    goto LAB_100764cf;
  }
  iVar5 = *(int *)(this + 0x3d8);
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x58) != 0)) && (*(int *)(iVar5 + 100) != 0)) {
    if ((*(int *)(iVar5 + 0xbc) == 0) ||
       (LVar8 = SendMessageW(*(HWND *)(*(int *)(iVar5 + 0xbc) + 0x20),0x157,0,0), LVar8 == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((param_1->message == 0x100) && ((!bVar3 || (param_1->wParam == 0xd)))) {
      WVar12 = param_1->wParam;
      if (WVar12 == 0xd) {
        local_38 = *(tagMSG **)(this + 0x3d8);
        if (local_38[3].hwnd != (HWND)0x0) {
          pcVar2 = (code *)local_38->hwnd[9].unused;
          guard_check_icall(local_18);
          (*pcVar2)();
          local_8 = 3;
          pAVar6 = AfxGetModuleState();
          CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar6 + 4));
          local_8._0_1_ = 4;
          pcVar2 = *(code **)(**(int **)(this + 0x3d8) + 0x3c);
          guard_check_icall(0xffffffff,0xffffffff);
          (*pcVar2)();
          pcVar2 = *(code **)(**(int **)(this + 0x3d8) + 0x24);
          guard_check_icall(&local_38);
          puVar7 = (undefined4 *)(*pcVar2)();
          local_8._0_1_ = 5;
          iVar5 = FUN_1004a623(*puVar7);
          local_8 = CONCAT31(local_8._1_3_,4);
          goto LAB_10075f34;
        }
        if (bVar3) {
          if (local_38[6].time != 0) {
            pHVar10 = *(HWND *)(local_38[6].time + 0x20);
          }
          pcVar2 = (code *)local_38->hwnd[0x12].unused;
          guard_check_icall();
          (*pcVar2)();
          BVar9 = IsWindow(pHVar10);
          if (BVar9 != 0) {
            CWnd::SetFocus(*(CWnd **)(*(int *)(this + 0x3d8) + 0xb8));
          }
        }
        pcVar2 = *(code **)(*(int *)this + 0x188);
        guard_check_icall(1);
        iVar5 = (*pcVar2)();
        if (iVar5 == 0) {
          MessageBeep(0xffffffff);
        }
      }
      else {
        if (WVar12 != 0x1b) {
          if ((WVar12 != 0x26) && (WVar12 != 0x28)) {
            local_18[0] = *(int **)(this + 0x3d8);
            if (local_18[0][0x1a] == 0) {
              pcVar2 = *(code **)(*local_18[0] + 0x54);
              guard_check_icall(WVar12);
              (*pcVar2)();
            }
            else {
              pcVar2 = *(code **)(*(int *)this + 0x1b0);
              guard_check_icall(WVar12);
              (*pcVar2)();
            }
            goto LAB_100764cf;
          }
          local_18[0] = *(int **)(this + 0x3d8);
          if (1 < local_18[0][0x2a]) {
            pcVar2 = *(code **)(*local_18[0] + 0xac);
            guard_check_icall(WVar12 != 0x26);
            (*pcVar2)();
            goto LAB_100764cf;
          }
          if (local_18[0][0x2e] != 0) {
            pHVar10 = *(HWND *)(local_18[0][0x2e] + 0x20);
          }
          BVar9 = IsWindow(pHVar10);
          if (BVar9 == 0) goto LAB_100764cf;
          lParam = param_1->lParam;
          WVar12 = param_1->wParam;
          UVar11 = 0x100;
          iVar5 = *(int *)(*(int *)(this + 0x3d8) + 0xb8);
LAB_100760e1:
          pHVar10 = *(HWND *)(iVar5 + 0x20);
          goto LAB_100760e4;
        }
        pcVar2 = *(code **)(*(int *)this + 0x188);
        guard_check_icall(0);
        (*pcVar2)();
      }
      CWnd::SetFocus((CWnd *)this);
      goto LAB_100764cf;
    }
    if ((param_1->message < 0x200) || (0x20e < param_1->message)) goto LAB_100764cf;
    local_44.x = 0;
    local_44.y = 0;
    GetCursorPos(&local_44);
    ScreenToClient(*(HWND *)(this + 0x20),&local_44);
    if (*(int *)(*(int *)(this + 0x3d8) + 0xc0) != 0) {
      local_24._0_4_ = 0;
      local_24._4_4_ = 0;
      local_24._8_4_ = 0;
      local_18[0] = (int *)0x0;
      GetClientRect(*(HWND *)(*(int *)(*(int *)(this + 0x3d8) + 0xc0) + 0x20),(LPRECT)local_24);
      MapWindowPoints(*(HWND *)(*(int *)(*(int *)(this + 0x3d8) + 0xc0) + 0x20),
                      *(HWND *)(this + 0x20),(LPPOINT)local_24,2);
      pt.y = local_44.y;
      pt.x = local_44.x;
      BVar9 = PtInRect((RECT *)local_24,pt);
      if (BVar9 != 0) {
        if (*(int *)(*(int *)(this + 0x3d8) + 0xc0) != 0) {
          pHVar10 = *(HWND *)(*(int *)(*(int *)(this + 0x3d8) + 0xc0) + 0x20);
        }
        MapWindowPoints(*(HWND *)(this + 0x20),pHVar10,&local_44,1);
        lParam = CONCAT22((undefined2)local_44.y,(undefined2)local_44.x);
        WVar12 = param_1->wParam;
        UVar11 = param_1->message;
        iVar5 = *(int *)(*(int *)(this + 0x3d8) + 0xc0);
        goto LAB_100760e1;
      }
    }
    local_18[0] = *(int **)(*(int *)(this + 0x3d8) + 0xb8);
    if (*(int *)(*(int *)(this + 0x3d8) + 0x68) == 0) {
      HideCaret((HWND)local_18[0][8]);
    }
    local_34.left = 0;
    local_34.top = 0;
    local_34.right = 0;
    local_34.bottom = 0;
    GetClientRect((HWND)local_18[0][8],&local_34);
    MapWindowPoints((HWND)local_18[0][8],*(HWND *)(this + 0x20),(LPPOINT)&local_34,2);
    pt_00.y = local_44.y;
    pt_00.x = local_44.x;
    BVar9 = PtInRect(&local_34,pt_00);
    if ((BVar9 != 0) && (param_1->message == 0x203)) {
      pcVar2 = *(code **)(**(int **)(this + 0x3d8) + 0x44);
      guard_check_icall(local_44.x,local_44.y);
      iVar5 = (*pcVar2)();
      param_1 = local_38;
      if (iVar5 != 0) goto LAB_100764cf;
    }
    pt_01.y = local_44.y;
    pt_01.x = local_44.x;
    BVar9 = PtInRect(&local_34,pt_01);
    if (((BVar9 != 0) && (param_1->message == 0x204)) &&
       (*(int *)(*(int *)(this + 0x3d8) + 0x68) == 0)) goto LAB_100764cf;
    pt_02.y = local_44.y;
    pt_02.x = local_44.x;
    BVar9 = PtInRect(&local_34,pt_02);
    piVar4 = local_18[0];
    if ((BVar9 != 0) ||
       (((UVar11 = param_1->message, UVar11 != 0x201 && (UVar11 != 0xa1)) &&
        ((UVar11 != 0x204 && (UVar11 != 0x207)))))) {
      MapWindowPoints(*(HWND *)(this + 0x20),(HWND)local_18[0][8],&local_44,1);
      lParam = CONCAT22((undefined2)local_44.y,(undefined2)local_44.x);
      WVar12 = param_1->wParam;
      UVar11 = param_1->message;
      pHVar10 = (HWND)piVar4[8];
LAB_100760e4:
      SendMessageW(pHVar10,UVar11,WVar12,lParam);
      goto LAB_100764cf;
    }
    pt_03.y = local_44.y;
    pt_03.x = local_44.x;
    BVar9 = PtInRect((RECT *)(*(int *)(this + 0x3d8) + 0x40),pt_03);
    if (BVar9 != 0) {
      pcVar2 = *(code **)(**(int **)(this + 0x3d8) + 0x24);
      guard_check_icall(&local_38);
      (*pcVar2)();
      local_8 = 6;
      pAVar6 = AfxGetModuleState();
      CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar6 + 4));
      local_8._0_1_ = 7;
      pcVar2 = *(code **)(*(int *)this + 0x184);
      guard_check_icall(local_44.x,local_44.y);
      (*pcVar2)();
      pcVar2 = *(code **)(**(int **)(this + 0x3d8) + 0x24);
      guard_check_icall(local_4c);
      puVar7 = (undefined4 *)(*pcVar2)();
      local_8._0_1_ = 8;
      iVar5 = FUN_1004a623(*puVar7);
      local_8 = CONCAT31(local_8._1_3_,7);
      FUN_10034f00();
      if (iVar5 != 0) {
        pcVar2 = *(code **)(*(int *)local_48 + 0x174);
        guard_check_icall(*(int *)(local_48 + 0x3d8));
        (*pcVar2)();
      }
      CWaitCursor::~CWaitCursor(&local_39);
      goto LAB_10075f6f;
    }
    pcVar2 = *(code **)(*(int *)this + 0x188);
    guard_check_icall(1);
    iVar5 = (*pcVar2)();
    param_1 = local_38;
    if (iVar5 == 0) goto LAB_100764cf;
  }
  CWnd::PreTranslateMessage((CWnd *)this,param_1);
LAB_100764cf:
  iVar5 = FUN_1017f5f4();
  return iVar5;
}

