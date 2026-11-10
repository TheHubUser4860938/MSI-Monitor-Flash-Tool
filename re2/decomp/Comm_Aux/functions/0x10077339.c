// rea decompile_all
// name: CMFCPropertyGridCtrl::TrackToolTip
// address: 0x10077339
// body: available
// range: 0x10077339-0x10077657 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCPropertyGridCtrl::TrackToolTip(class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCPropertyGridCtrl::TrackToolTip(CMFCPropertyGridCtrl *this,int param_2,LONG param_3)

{
  code *pcVar1;
  POINT pt;
  CMFCPropertyGridProperty *pCVar2;
  BOOL BVar3;
  HWND pHVar4;
  CMFCPropertyGridProperty *pCVar5;
  long lVar6;
  undefined4 uVar7;
  int *piVar8;
  CFont *pCVar9;
  WPARAM wParam;
  HWND pHVar10;
  uint uVar11;
  int iVar12;
  tagPOINT local_50;
  CMFCPropertyGridProperty *local_48;
  uint local_44;
  int local_40;
  int local_3c;
  char local_35;
  tagRECT local_34;
  tagRECT local_24;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x10077345;
  local_44 = 0;
  if ((*(int *)(this + 0x388) != 0) || (*(int *)(this + 0x38c) != 0)) goto LAB_10077650;
  local_50.x = param_2;
  local_50.y = param_3;
  ClientToScreen(*(HWND *)(this + 0x20),&local_50);
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x1f8),&local_24);
  pt.y = local_50.y;
  pt.x = local_50.x;
  BVar3 = PtInRect(&local_24,pt);
  if ((BVar3 != 0) && (BVar3 = IsWindowVisible(*(HWND *)(this + 0x1f8)), BVar3 != 0))
  goto LAB_10077650;
  BVar3 = IsWindowVisible(*(HWND *)(this + 0x1f8));
  if (BVar3 == 0) {
    SetRectEmpty(&local_24);
  }
  pHVar10 = *(HWND *)(this + 0x20);
  pHVar4 = GetCapture();
  if (pHVar4 == pHVar10) {
    ReleaseCapture();
  }
  pCVar5 = HitTest(this,param_2,param_3,0,0);
  local_48 = pCVar5;
  if ((pCVar5 == (CMFCPropertyGridProperty *)0x0) ||
     (lVar6 = _labs((param_2 - *(int *)(this + 0x358)) - *(int *)(this + 0x328)), lVar6 < 3)) {
    CMFCPropertyGridToolTipCtrl::Deactivate((CMFCPropertyGridToolTipCtrl *)(this + 0x1d8));
    goto LAB_10077650;
  }
  if (*(int *)(pCVar5 + 0x58) != 0) goto LAB_10077650;
  uVar7 = FUN_10048e90();
  FUN_10034c30(uVar7);
  pCVar2 = local_48;
  local_8 = 0;
  local_34.left = *(LONG *)(pCVar5 + 0x30);
  local_34.top = *(LONG *)(pCVar5 + 0x34);
  local_34.right = *(LONG *)(pCVar5 + 0x38);
  local_34.bottom = *(LONG *)(pCVar5 + 0x3c);
  local_3c = 0;
  if (param_2 < *(int *)(this + 0x358) + *(int *)(this + 0x328)) {
    if ((*(int *)(local_48 + 0x5c) == 0) ||
       (local_34.left = local_34.left + *(int *)(this + 0x354), local_34.left < param_2)) {
      iVar12 = 0;
      if (*(int *)(local_48 + 0x70) != 0) {
        uVar11 = local_44;
        if (*(int *)(this + 0x300) == 0) {
LAB_100774c8:
          local_35 = '\x01';
        }
        else {
          pcVar1 = *(code **)(*(int *)local_48 + 0x58);
          guard_check_icall(&local_44);
          piVar8 = (int *)(*pcVar1)();
          uVar11 = 1;
          if (*(int *)(*piVar8 + -0xc) == 0) goto LAB_100774c8;
          local_35 = '\0';
        }
        if ((uVar11 & 1) != 0) {
          FUN_10034f00();
        }
        iVar12 = local_3c;
        if (local_35 != '\0') {
          FUN_10034940(pCVar2 + 0x88);
          iVar12 = local_3c;
        }
      }
      goto LAB_100774f4;
    }
LAB_1007763a:
    CMFCPropertyGridToolTipCtrl::Deactivate((CMFCPropertyGridToolTipCtrl *)(this + 0x1d8));
  }
  else {
    if (*(int *)(local_48 + 0x74) != 0) {
      uVar11 = local_44;
      if (*(int *)(this + 0x300) == 0) {
LAB_10077589:
        local_35 = '\x01';
      }
      else {
        pcVar1 = *(code **)(*(int *)local_48 + 0x5c);
        guard_check_icall(&local_3c);
        piVar8 = (int *)(*pcVar1)();
        uVar11 = 2;
        if (*(int *)(*piVar8 + -0xc) == 0) goto LAB_10077589;
        local_35 = '\0';
      }
      if ((uVar11 & 2) != 0) {
        FUN_10034f00();
      }
      if (local_35 != '\0') {
        pcVar1 = *(code **)(*(int *)pCVar2 + 0x24);
        guard_check_icall(&local_3c);
        uVar7 = (*pcVar1)();
        local_8._0_1_ = 1;
        FUN_10034940(uVar7);
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_10034f00();
      }
    }
    local_34.left = *(int *)(this + 0x328) + 1 + *(int *)(this + 0x358);
    iVar12 = 1;
LAB_100774f4:
    if (*(int *)(local_40 + -0xc) == 0) goto LAB_1007763a;
    CWnd::ClientToScreen((CWnd *)this,&local_34);
    if ((local_24.left != local_34.left) || (local_24.top != local_34.top)) {
      *(undefined4 *)(this + 0x26c) = 4;
      if ((iVar12 == 0) || ((*(int *)(pCVar2 + 0x78) == 0 || (*(int *)(this + 0x30c) == 0)))) {
        pCVar9 = CWnd::GetFont((CWnd *)this);
      }
      else {
        pCVar9 = (CFont *)(this + 800);
      }
      wParam = 0;
      if (pCVar9 != (CFont *)0x0) {
        wParam = *(WPARAM *)(pCVar9 + 4);
      }
      SendMessageW(*(HWND *)(this + 0x1f8),0x30,wParam,1);
      CMFCPropertyGridToolTipCtrl::Track
                ((CMFCPropertyGridToolTipCtrl *)(this + 0x1d8),local_34.left,local_34.top,
                 local_34.right,local_34.bottom,&local_40);
      pHVar10 = SetCapture(*(HWND *)(this + 0x20));
      CWnd::FromHandle(pHVar10);
    }
  }
  FUN_10034f00();
LAB_10077650:
  FUN_1017f5f4();
  return;
}

