// rea decompile_all
// name: CMFCTabCtrl::RecalcLayout
// address: 0x10072d5e
// body: available
// range: 0x10072d5e-0x100733a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCTabCtrl::RecalcLayout(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCTabCtrl::RecalcLayout(CMFCTabCtrl *this)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CMFCVisualManager *pCVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  HWND pHVar9;
  CWnd *pCVar10;
  RECT *lpRect;
  uint uVar11;
  LPRECT ptVar12;
  int local_60;
  tagRECT local_58;
  tagRECT local_48;
  tagRECT local_38;
  RECT local_28;
  tagPOINT local_18;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  if ((this == (CMFCTabCtrl *)0x0) || (*(int *)(this + 0x20) == 0)) goto LAB_10073394;
  pcVar1 = *(code **)(*(int *)this + 0x17c);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  pcVar1 = *(code **)(*(int *)this + 0x248);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  pcVar1 = *(code **)(*(int *)this + 0x1a4);
  guard_check_icall();
  iVar4 = (*pcVar1)();
  if (((*(int *)(this + 300) == 0) || (1 < iVar4)) &&
     ((*(int *)(this + 0x284) == 0 || (iVar4 != 0)))) {
    local_60 = 0;
  }
  else {
    local_60 = 1;
  }
  local_58.left = 0;
  local_58.top = 0;
  local_58.right = 0;
  local_58.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_58);
  if (*(int *)(this + 0x29f8) == 1) {
    *(LONG *)(this + 0x2fc) = local_58.left;
    *(LONG *)(this + 0x300) = local_58.top;
    *(LONG *)(this + 0x304) = local_58.right;
    *(LONG *)(this + 0x308) = local_58.bottom;
    *(LONG *)(this + 0x2fc) = local_58.right + -5;
    local_58.right = local_58.right + -6;
  }
  else if (*(int *)(this + 0x29f8) == 2) {
    *(LONG *)(this + 0x2fc) = local_58.left;
    *(LONG *)(this + 0x300) = local_58.top;
    *(LONG *)(this + 0x304) = local_58.right;
    *(LONG *)(this + 0x308) = local_58.bottom;
    *(LONG *)(this + 0x300) = local_58.bottom + -5;
    local_58.bottom = local_58.bottom + -6;
  }
  else {
    SetRectEmpty((LPRECT)(this + 0x2fc));
  }
  *(LONG *)(this + 0x2dc) = local_58.left;
  *(LONG *)(this + 0x2e0) = local_58.top;
  *(LONG *)(this + 0x2e4) = local_58.right;
  *(LONG *)(this + 0x2e8) = local_58.bottom;
  InflateRect((LPRECT)(this + 0x2dc),-2,0);
  uVar11 = 0;
  local_c = 0;
  local_28.bottom = 0;
  if (*(int *)(this + 0x264) != 0) {
    pCVar5 = CMFCVisualManager::GetInstance();
    pcVar1 = *(code **)(*(int *)pCVar5 + 0x140);
    guard_check_icall(&local_28.right);
    piVar6 = (int *)(*pcVar1)();
    piVar7 = (int *)FUN_100796e6(&local_10);
    local_c = *piVar7 + 4 + *piVar6;
    if (*(int *)(this + 0x250) == 0) {
      iVar4 = local_c + 2;
      local_c = iVar2 + -4;
      if (iVar4 <= iVar2 + -4) {
        local_c = iVar4;
      }
    }
    iVar4 = *(int *)(this + 0x2a08);
    if ((*(int *)(this + 0x268) == 0) || (*(int *)(this + 0x28c) != 0)) {
      iVar4 = iVar4 + -1;
    }
    if (*(int *)(this + 0x290) != 0) {
      iVar4 = iVar4 + -1;
    }
    local_28.bottom = 3;
    uVar11 = ~-(uint)(local_60 != 0) & (local_c + 3) * iVar4;
  }
  ptVar12 = (LPRECT)(this + 0x2dc);
  if (*(int *)(this + 0x250) == 0) {
    if (*(int *)(this + 0x90) == 0) {
      *(int *)(this + 0x2e0) = *(int *)(this + 0x2e8) - iVar2;
    }
    else {
      *(int *)(this + 0x2e8) = *(int *)(this + 0x2e0) + iVar2;
    }
    if (*(int *)(this + 0x264) != 0) {
      *(uint *)(this + 0x2e4) = *(int *)(this + 0x2e4) - uVar11;
      if ((((*(int *)(this + 0x254) != 0) || (*(int *)(this + 600) != 0)) ||
          (*(int *)(this + 0x25c) != 0)) && (*(int *)(this + 0x290) == 0)) {
        OffsetRect(ptVar12,local_c,0);
      }
      iVar8 = *(int *)(this + 0x2e4) + 1;
      iVar2 = (*(int *)(this + 0x2e8) + *(int *)(this + 0x2e0)) / 2 - local_c / 2;
      iVar4 = local_c;
      goto LAB_10073091;
    }
  }
  else {
    if (*(int *)(this + 0x90) == 0) {
      if (1 < iVar3) {
        *(int *)(this + 0x2e8) = *(int *)(this + 0x2e8) + (1 - iVar3);
      }
      *(int *)(this + 0x2e0) = *(int *)(this + 0x2e8) - iVar2;
    }
    else {
      if (1 < iVar3) {
        *(int *)(this + 0x2e0) = *(int *)(this + 0x2e0) + iVar3 + -1;
      }
      *(int *)(this + 0x2e8) = *(int *)(this + 0x2e0) + iVar2;
    }
    ptVar12->left = ptVar12->left + uVar11 + 1;
    iVar2 = ptVar12->left;
    *(int *)(this + 0x2e4) = *(int *)(this + 0x2e4) + -1;
    if (*(int *)(this + 0x2e4) < iVar2) {
      if (iVar3 < 1) {
        ptVar12->left = local_58.left;
        iVar2 = local_58.right;
      }
      else {
        ptVar12->left = local_58.left + 1 + iVar3;
        iVar2 = (local_58.right - iVar3) + -1;
      }
      *(int *)(this + 0x2e4) = iVar2;
    }
    iVar8 = *(int *)(this + 0x2e8) - *(int *)(this + 0x2e0);
    if (local_58.bottom - local_58.top < (*(int *)(this + 0x2e8) - *(int *)(this + 0x2e0)) + iVar3)
    {
      iVar8 = 0;
      ptVar12->left = 0;
      *(undefined4 *)(this + 0x2e4) = 0;
    }
    iVar2 = *(int *)(this + 0x2e0);
    iVar4 = 0;
    if (iVar8 != 0) {
      iVar4 = (iVar8 - local_c) / 2;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      iVar2 = iVar2 + iVar4;
      iVar4 = local_c;
    }
    iVar8 = local_58.left + 1 + iVar3;
LAB_10073091:
    FUN_100733a3(iVar8,iVar2,local_c,iVar4,local_60,local_28.bottom);
  }
  *(LONG *)(this + 0x2ec) = local_58.left;
  *(LONG *)(this + 0x2f0) = local_58.top;
  *(LONG *)(this + 0x2f4) = local_58.right;
  *(LONG *)(this + 0x2f8) = local_58.bottom;
  iVar2 = GetSystemMetrics(2);
  ptVar12 = (LPRECT)(this + 0x2ec);
  *(int *)(this + 0x2a0) = *(int *)(this + 0x2e4) - iVar2;
  if (0 < iVar3) {
    InflateRect(ptVar12,-1 - iVar3,-1 - iVar3);
    if (*(int *)(this + 0x29f8) == 1) {
      *(int *)(this + 0x2f4) = *(int *)(this + 0x2f4) + iVar3 + 2;
    }
    else if (*(int *)(this + 0x29f8) == 2) {
      *(int *)(this + 0x2f8) = *(int *)(this + 0x2f8) + iVar3 + 2;
    }
  }
  if (*(int *)(this + 0x250) == 0) {
    if (*(int *)(this + 0x90) == 0) {
      *(int *)(this + 0x2f8) = *(int *)(this + 0x2e0) - iVar3;
    }
    else {
      *(int *)(this + 0x2f0) = *(int *)(this + 0x2e8) + iVar3;
    }
  }
  else if (*(int *)(this + 0x90) == 0) {
    *(undefined4 *)(this + 0x2f8) = *(undefined4 *)(this + 0x2e0);
    if (iVar3 == 0) {
      *(int *)(this + 0x2f0) = *(int *)(this + 0x2f0) + 1;
LAB_1007313c:
      ptVar12->left = ptVar12->left + 1;
    }
  }
  else {
    *(int *)(this + 0x2f0) = *(int *)(this + 0x2e8) + iVar3;
    if (iVar3 == 0) {
      *(int *)(this + 0x2f8) = *(int *)(this + 0x2f8) + -1;
      goto LAB_1007313c;
    }
  }
  if ((*(int *)(this + 0x274) != 0) && (local_28.bottom = 0, 0 < *(int *)(this + 0xbc))) {
    do {
      piVar6 = (int *)FUN_100d7168(local_28.bottom);
      iVar2 = *piVar6;
      if ((*(int *)(iVar2 + 0x34) != 0) &&
         ((iVar4 = *(int *)(iVar2 + 0x20), iVar4 != 0 && (*(int *)(iVar4 + 0x20) != 0)))) {
        local_18.x = *(LONG *)(this + 0x2ec);
        local_18.y = *(LONG *)(this + 0x2f0);
        local_10 = *(int *)(this + 0x2f4);
        local_c = *(int *)(this + 0x2f8);
        pHVar9 = GetParent(*(HWND *)(iVar4 + 0x20));
        pCVar10 = CWnd::FromHandle(pHVar9);
        if ((pCVar10 != (CWnd *)0x0) &&
           ((pHVar9 = *(HWND *)(pCVar10 + 0x20), pHVar9 != (HWND)0x0 &&
            (pHVar9 != *(HWND *)(this + 0x20))))) {
          MapWindowPoints(*(HWND *)(this + 0x20),pHVar9,&local_18,2);
        }
        CWnd::SetWindowPos(*(CWnd **)(iVar2 + 0x20),(CWnd *)0x0,local_18.x,local_18.y,
                           local_10 - local_18.x,local_c - local_18.y,0x14);
      }
      local_28.bottom = local_28.bottom + 1;
    } while (local_28.bottom < *(int *)(this + 0xbc));
  }
  pcVar1 = *(code **)(*(int *)this + 0x2e4);
  guard_check_icall();
  (*pcVar1)();
  pcVar1 = *(code **)(*(int *)this + 0x2dc);
  guard_check_icall();
  (*pcVar1)();
  if ((*(int *)(this + 0x294) == 0) && (*(int *)(this + 0xb0) == *(int *)(this + 0x9c))) {
    FUN_100ca1db(0,0xffffffff);
    pcVar1 = *(code **)(*(int *)this + 0x2dc);
    guard_check_icall();
    (*pcVar1)();
  }
  pcVar1 = *(code **)(*(int *)this + 0x2e0);
  guard_check_icall();
  (*pcVar1)();
  local_38.left = local_58.left;
  local_38.top = local_58.top;
  local_38.right = local_58.right;
  local_38.bottom = local_58.bottom;
  if (iVar3 == 0) {
    if (*(int *)(this + 0x90) == 0) {
      local_38.bottom = *(int *)(this + 0x2e0) + 1;
    }
    else {
      local_38.top = *(int *)(this + 0x2e8) + -1;
    }
LAB_10073333:
    lpRect = &local_38;
  }
  else {
    if (*(int *)(this + 0x250) == 0) {
      if (*(int *)(this + 0x90) == 0) {
        local_38.bottom = *(LONG *)(this + 0x2e0);
      }
      else {
        local_38.top = *(LONG *)(this + 0x2e8);
      }
    }
    if (*(int *)(this + 0x270) == 0) {
      InflateRect(&local_38,-1,-1);
      goto LAB_10073333;
    }
    local_28.left = local_58.left;
    local_28.top = local_38.top;
    local_28.right = local_58.right;
    local_28.bottom = local_38.bottom;
    if (*(int *)(this + 0x250) != 0) {
      if (*(int *)(this + 0x90) == 0) {
        local_28.bottom = *(int *)(this + 0x2e0) + 1;
      }
      else {
        local_28.top = *(int *)(this + 0x2e8) + -1;
      }
    }
    lpRect = &local_28;
  }
  InvalidateRect(*(HWND *)(this + 0x20),lpRect,1);
  local_48.left = 0;
  local_48.top = 0;
  local_48.right = 0;
  local_48.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_48);
  if (*(int *)(this + 0x90) == 0) {
    local_48.top = *(LONG *)(this + 0x2f0);
  }
  else {
    local_48.bottom = *(LONG *)(this + 0x2f8);
  }
  InvalidateRect(*(HWND *)(this + 0x20),&local_48,1);
  UpdateWindow(*(HWND *)(this + 0x20));
LAB_10073394:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

