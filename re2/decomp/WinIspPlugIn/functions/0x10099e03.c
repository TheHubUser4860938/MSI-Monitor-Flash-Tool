// rea decompile_all
// name: CMFCToolBar::OnMouseMove
// address: 0x10099e03
// body: available
// range: 0x10099e03-0x1009a286 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009a102 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCToolBar::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBar::OnMouseMove(CMFCToolBar *this,undefined4 param_1,int param_3,int param_4)

{
  CSize *this_00;
  code *pcVar1;
  bool bVar2;
  AFX_GLOBAL_DATA *pAVar3;
  int iVar4;
  long lVar5;
  HWND pHVar6;
  CWnd *pCVar7;
  int iVar8;
  CObject *pCVar9;
  uint uVar10;
  CMFCToolBarMenuButton *pCVar11;
  UINT uElapse;
  CClientDC local_50 [20];
  tagTRACKMOUSEEVENT local_3c;
  int local_2c;
  CMFCToolBarMenuButton *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x10099e0f;
  if (*(int *)(this + 0x174) == 0) {
    if ((DAT_10245ca8 != 0) && (*(int *)(this + 0xb78) == 0)) {
      if (*(int *)(this + 0xba4) != 0) {
        if (4 < param_3 - *(int *)(*(int *)(this + 0xd0c) + 0x54)) {
          CClientDC::CClientDC(local_50,(CWnd *)this);
          local_8 = 0;
          local_24.left = ((tagRECT *)(this + 0xcdc))->left;
          local_24.top = *(LONG *)(this + 0xce0);
          local_24.right = *(LONG *)(this + 0xce4);
          local_24.bottom = *(LONG *)(this + 0xce8);
          *(int *)(this + 0xce4) = param_3;
          CDC::DrawDragRect((CDC *)local_50,(tagRECT *)(this + 0xcdc),(tagSIZE)0x200000002,&local_24
                            ,(tagSIZE)0x200000002,(CBrush *)0x0,(CBrush *)0x0);
          local_8 = 0xffffffff;
          CClientDC::~CClientDC(local_50);
        }
        pAVar3 = GetGlobalData();
        SetCursor(*(HCURSOR *)(pAVar3 + 0xf0));
      }
      goto LAB_1009a27f;
    }
    this_00 = (CSize *)(this + 0xcfc);
    iVar4 = CSize::operator!=(this_00,(tagSIZE)0xffffffffffffffff);
    if (((iVar4 != 0) && (lVar5 = _labs(*(int *)this_00 - param_3), lVar5 < 1)) &&
       (lVar5 = _labs(*(int *)(this + 0xd00) - param_4), lVar5 < 1)) {
      *(int *)this_00 = param_3;
      *(int *)(this + 0xd00) = param_4;
      goto LAB_1009a27f;
    }
    iVar4 = *(int *)(this + 0xbf0);
    *(int *)(this + 0xd00) = param_4;
    *(int *)this_00 = param_3;
    pcVar1 = *(code **)(*(int *)this + 0x390);
    guard_check_icall(param_3,param_4);
    local_2c = (*pcVar1)();
    *(int *)(this + 0xbf0) = local_2c;
    if ((*(int *)(this + 0xb94) != 0) && (local_2c == -1)) {
      pHVar6 = GetFocus();
      pCVar7 = CWnd::FromHandle(pHVar6);
      if (pCVar7 != (CWnd *)this) goto LAB_10099f51;
LAB_10099f46:
      *(int *)(this + 0xbf0) = iVar4;
      goto LAB_1009a27f;
    }
LAB_10099f51:
    local_28 = GetDroppedDownMenu(this,(int *)0x0);
    if (local_28 != (CMFCToolBarMenuButton *)0x0) {
      pcVar1 = *(code **)(*(int *)local_28 + 0xec);
      guard_check_icall();
      iVar8 = (*pcVar1)();
      if (iVar8 != 0) goto LAB_10099f46;
    }
    if (*(int *)(this + 0xbf0) == -1) {
      local_28 = (CMFCToolBarMenuButton *)0x0;
    }
    else {
      local_28 = (CMFCToolBarMenuButton *)FUN_1009640a(*(int *)(this + 0xbf0));
      if (local_28 != (CMFCToolBarMenuButton *)0x0) {
        if (((byte)local_28[0x24] & 1) == 0) {
          if ((*(uint *)(local_28 + 0x24) & 0x40000) != 0) {
            pcVar1 = *(code **)(*(int *)this + 0x3ec);
            guard_check_icall();
            iVar8 = (*pcVar1)();
            if (iVar8 == 0) goto LAB_10099fbf;
          }
        }
        else {
LAB_10099fbf:
          *(undefined4 *)(this + 0xbf0) = 0xffffffff;
        }
      }
    }
    if (((*(int *)(this + 0xbac) != 0) && (*(int *)(this + 0xbf0) == -1)) &&
       (pAVar3 = GetGlobalData(), *(int *)(pAVar3 + 0x19c) != 0)) {
      pcVar1 = *(code **)(*(int *)this + 0x390);
      guard_check_icall(param_3,param_4);
      iVar8 = (*pcVar1)();
      if ((iVar8 != -1) && (iVar8 != *(int *)(this + 0xc0c))) {
        *(int *)(this + 0xc0c) = iVar8;
        SetTimer(*(HWND *)(this + 0x20),0xec07,500,(TIMERPROC)0x0);
      }
    }
    if (*(int *)(this + 0xba8) == 0) {
      local_3c.hwndTrack = *(HWND *)(this + 0x20);
      *(undefined4 *)(this + 0xba8) = 1;
      local_3c.cbSize = 0x10;
      local_3c.dwFlags = 2;
      DAT_10245c9c = this;
      TrackMouseEvent(&local_3c);
    }
    if (iVar4 != local_2c) {
      if ((local_2c == -1) ||
         (((*(int *)(this + 0xbac) == 0 && (local_2c != *(int *)(this + 0xbec))) &&
          (*(int *)(this + 0xbec) != -1)))) {
        if (((*(int *)(this + 0xbec) == -1) || ((*(int *)(this + 0xbac) != 0 && (local_2c == -1))))
           && (DAT_10245ca0 == 0)) {
          pCVar7 = CWnd::GetOwner((CWnd *)this);
          SendMessageW(*(HWND *)(pCVar7 + 0x20),0x362,0xe001,0);
        }
      }
      else if (local_28 != (CMFCToolBarMenuButton *)0x0) {
        pcVar1 = *(code **)(*(int *)this + 0x418);
        guard_check_icall(*(undefined4 *)(local_28 + 0x20));
        (*pcVar1)();
      }
    }
    if (iVar4 != *(int *)(this + 0xbf0)) {
      local_28 = (CMFCToolBarMenuButton *)0x0;
      if (*(int *)(this + 0xbec) != -1) {
        iVar8 = FUN_1009640a(*(int *)(this + 0xbec));
        if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1004a383();
        }
        uVar10 = *(uint *)(iVar8 + 0x24) & 0xfffdffff;
        if (*(int *)(this + 0xbf0) == *(int *)(this + 0xbec)) {
          uVar10 = uVar10 | 0x20000;
        }
        if (uVar10 != *(uint *)(iVar8 + 0x24)) {
          pcVar1 = *(code **)(*(int *)this + 0x374);
          guard_check_icall(*(int *)(this + 0xbec),uVar10);
          (*pcVar1)();
          local_28 = (CMFCToolBarMenuButton *)0x1;
        }
      }
      pCVar11 = local_28;
      if ((((*(int *)(this + 0xbac) != 0) || (*(int *)(this + 0xbec) == -1)) ||
          (iVar4 == *(int *)(this + 0xbec))) && (iVar4 != -1)) {
        InvalidateButton(this,iVar4);
        pCVar11 = (CMFCToolBarMenuButton *)0x1;
      }
      if ((((*(int *)(this + 0xbac) != 0) || (*(int *)(this + 0xbec) == -1)) ||
          (*(int *)(this + 0xbf0) == *(int *)(this + 0xbec))) && (*(int *)(this + 0xbf0) != -1)) {
        InvalidateButton(this,*(int *)(this + 0xbf0));
        local_28 = (CMFCToolBarMenuButton *)0x1;
        pAVar3 = GetGlobalData();
        pCVar11 = local_28;
        if ((*(int *)(pAVar3 + 0x19c) != 0) && (*(int *)(this + 0xbac) != 0)) {
          bVar2 = false;
          pCVar9 = (CObject *)FUN_1009640a(*(undefined4 *)(this + 0xbf0));
          pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_1023d9fc,pCVar9)
          ;
          if ((pCVar9 != (CObject *)0x0) && (*(int *)(pCVar9 + 0x90) != 0)) {
            bVar2 = true;
          }
          pcVar1 = *(code **)(*(int *)this + 0x390);
          guard_check_icall(param_3,param_4);
          iVar4 = (*pcVar1)();
          pCVar11 = local_28;
          if (iVar4 != *(int *)(this + 0xc0c)) {
            *(int *)(this + 0xc0c) = iVar4;
            KillTimer(*(HWND *)(this + 0x20),0xec07);
            if (bVar2) {
              uElapse = 0x514;
            }
            else {
              uElapse = 500;
            }
            SetTimer(*(HWND *)(this + 0x20),0xec07,uElapse,(TIMERPROC)0x0);
            pCVar11 = local_28;
          }
        }
      }
      pcVar1 = *(code **)(*(int *)this + 0x3b0);
      guard_check_icall(*(undefined4 *)(this + 0xbf0));
      (*pcVar1)();
      if (pCVar11 != (CMFCToolBarMenuButton *)0x0) {
        UpdateWindow(*(HWND *)(this + 0x20));
      }
    }
  }
  CPane::OnMouseMove((CPane *)this,param_1,param_3,param_4);
LAB_1009a27f:
  FUN_1018015d();
  return;
}

