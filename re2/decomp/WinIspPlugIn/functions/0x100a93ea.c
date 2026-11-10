// rea decompile_all
// name: CMFCTabCtrl::OnMouseMove
// address: 0x100a93ea
// body: available
// range: 0x100a93ea-0x100a9753 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCTabCtrl::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCTabCtrl::OnMouseMove(CMFCTabCtrl *this,WPARAM param_1,int param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  long lVar5;
  LRESULT LVar6;
  CMFCVisualManager *pCVar7;
  undefined4 uVar8;
  int iVar9;
  tagRECT local_28;
  undefined1 local_18 [12];
  int local_c;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x29c) == 0) {
    if (*(int *)(this + 0x26c) == 0) {
      pHVar3 = GetCapture();
      pCVar4 = CWnd::FromHandle(pHVar3);
      if (pCVar4 == (CWnd *)this) {
        pcVar1 = *(code **)(*(int *)this + 0x2f0);
        guard_check_icall();
        iVar2 = (*pcVar1)();
        if ((iVar2 != 0) && (*(int *)(this + 0x158) != 0)) {
          local_18._8_4_ = 0;
          local_c = 0;
          GetCursorPos((LPPOINT)(local_18 + 8));
          local_18._8_4_ = *(int *)(this + 0x15c) - local_18._8_4_;
          local_c = *(int *)(this + 0x160) - local_c;
          iVar2 = GetSystemMetrics(0x44);
          pHVar3 = GetCapture();
          pCVar4 = CWnd::FromHandle(pHVar3);
          if ((pCVar4 == (CWnd *)this) && (*(int *)(this + 0x158) != 0)) {
            lVar5 = _labs(local_18._8_4_);
            if (lVar5 < iVar2) {
              lVar5 = _labs(local_c);
              if (lVar5 < iVar2) goto LAB_100a9741;
            }
          }
          pHVar3 = GetParent(*(HWND *)(this + 0x20));
          pCVar4 = CWnd::FromHandle(pHVar3);
          LVar6 = SendMessageW(*(HWND *)(pCVar4 + 0x20),DAT_10246900,param_1,
                               CONCAT22((undefined2)param_4,(undefined2)param_3));
          if (LVar6 != 0) goto LAB_100a9741;
        }
      }
    }
    else {
      local_c = *(int *)(this + 700);
      iVar9 = *(int *)(this + 0x2a0) - param_3;
      iVar2 = (*(int *)(this + 0x2a0) - *(int *)(this + 0x2dc)) + -5;
      if (iVar9 <= iVar2) {
        iVar2 = iVar9;
      }
      *(int *)(this + 0x2b4) = iVar2;
      iVar9 = GetSystemMetrics(0x15);
      iVar2 = *(int *)(this + 0x2b4);
      if (iVar2 < iVar9 * 2) {
        iVar2 = GetSystemMetrics(0x15);
        iVar2 = iVar2 * 2;
      }
      *(int *)(this + 0x2b4) = iVar2;
      pcVar1 = *(code **)(*(int *)this + 0x2e4);
      guard_check_icall();
      (*pcVar1)();
      iVar2 = *(int *)(this + 700);
      if (local_c < iVar2) {
        local_18._0_4_ = local_c + -0x14;
        local_18._4_4_ = *(undefined4 *)(this + 0x2c0);
        local_c = *(int *)(this + 0x2c8);
        pcVar1 = *(code **)(*(int *)this + 0x248);
        local_18._8_4_ = iVar2;
        guard_check_icall();
        iVar2 = (*pcVar1)();
        InflateRect((LPRECT)local_18,0,iVar2 + 1);
        InvalidateRect(*(HWND *)(this + 0x20),(RECT *)local_18,1);
      }
      local_28.left = *(LONG *)(this + 700);
      local_28.top = *(LONG *)(this + 0x2c0);
      local_28.right = *(LONG *)(this + 0x2c4);
      local_28.bottom = *(LONG *)(this + 0x2c8);
      pcVar1 = *(code **)(*(int *)this + 0x248);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      InflateRect(&local_28,0,iVar2);
      InvalidateRect(*(HWND *)(this + 0x20),&local_28,1);
      UpdateWindow(*(HWND *)(this + 0x20));
      pcVar1 = *(code **)(*(int *)this + 0x2e0);
      guard_check_icall();
      (*pcVar1)();
    }
    if (*(int *)(this + 0x250) == 0) {
      pCVar7 = CMFCVisualManager::GetInstance();
      pcVar1 = *(code **)(*(int *)pCVar7 + 0x118);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      if (iVar2 == 0) {
        if (*(int *)(this + 0x254) != 0) {
          pCVar7 = CMFCVisualManager::GetInstance();
          pcVar1 = *(code **)(*(int *)pCVar7 + 0x114);
          guard_check_icall();
          uVar8 = (*pcVar1)();
          *(undefined4 *)(this + 0x88) = uVar8;
        }
      }
      else {
        *(undefined4 *)(this + 0x88) = 1;
      }
    }
    CMFCBaseTabCtrl::OnMouseMove((CMFCBaseTabCtrl *)this,param_1,param_3,param_4);
  }
  else {
    local_18._0_4_ = *(undefined4 *)(this + 0x30c);
    local_18._4_4_ = *(undefined4 *)(this + 0x310);
    local_18._8_4_ = *(undefined4 *)(this + 0x314);
    local_c = *(int *)(this + 0x318);
    ClientToScreen(*(HWND *)(this + 0x20),(LPPOINT)&param_3);
    if (*(int *)(this + 0x29f8) == 1) {
      iVar9 = local_18._8_4_ - local_18._0_4_;
      local_18._0_4_ = param_3 - iVar9 / 2;
      iVar2 = *(int *)(this + 0x31c);
      if ((int)local_18._0_4_ < iVar2) {
        local_18._0_4_ = iVar2;
        local_18._8_4_ = iVar2 + iVar9;
      }
      else {
        iVar2 = *(int *)(this + 0x324);
        local_18._8_4_ = local_18._0_4_ + iVar9;
        if (iVar2 < local_18._0_4_ + iVar9) {
          local_18._0_4_ = iVar2 - iVar9;
          local_18._8_4_ = iVar2;
        }
      }
    }
    else if (*(int *)(this + 0x29f8) == 2) {
      iVar9 = local_c - local_18._4_4_;
      local_18._4_4_ = param_4 - iVar9 / 2;
      iVar2 = *(int *)(this + 800);
      if ((int)local_18._4_4_ < iVar2) {
        local_18._4_4_ = iVar2;
        local_c = iVar2 + iVar9;
      }
      else {
        iVar2 = *(int *)(this + 0x328);
        local_c = local_18._4_4_ + iVar9;
        if (iVar2 < local_18._4_4_ + iVar9) {
          local_18._4_4_ = iVar2 - iVar9;
          local_c = iVar2;
        }
      }
    }
    pcVar1 = *(code **)(*(int *)this + 0x2fc);
    guard_check_icall(local_18,this + 0x30c);
    (*pcVar1)();
    *(undefined4 *)(this + 0x30c) = local_18._0_4_;
    *(undefined4 *)(this + 0x310) = local_18._4_4_;
    *(undefined4 *)(this + 0x314) = local_18._8_4_;
    *(int *)(this + 0x318) = local_c;
  }
LAB_100a9741:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

