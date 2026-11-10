// rea decompile_all
// name: CMFCBaseTabCtrl::OnLButtonUp
// address: 0x1006a385
// body: available
// range: 0x1006a385-0x1006a697 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCBaseTabCtrl::OnLButtonUp(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCBaseTabCtrl::OnLButtonUp(CMFCBaseTabCtrl *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  code *pcVar1;
  int iVar2;
  POINT pt;
  BOOL BVar3;
  int iVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  CFrameWnd *pCVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  RECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x1fc) != 0) {
    *(undefined4 *)(this + 0x1fc) = 0;
    *(undefined4 *)(this + 0x1f8) = 0;
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)(this + 0x200),(HRGN)0x0,0x105);
    pt.y = param_4;
    pt.x = param_3;
    BVar3 = PtInRect((RECT *)(this + 0x200),pt);
    if (BVar3 != 0) {
      pcVar1 = *(code **)(*(int *)this + 0x210);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      if (iVar4 != 0) {
        SendMessageW(*(HWND *)(iVar4 + 0x20),0x10,0,0);
      }
      goto LAB_1006a685;
    }
  }
  if (*(int *)(this + 0xc4) != *(int *)(this + 0xc0)) {
    pHVar5 = GetParent(*(HWND *)(this + 0x20));
    pCVar6 = CWnd::FromHandle(pHVar5);
    SendMessageW(*(HWND *)(pCVar6 + 0x20),DAT_101db990,*(WPARAM *)(this + 0xc4),
                 *(LPARAM *)(this + 0xc0));
    iVar4 = FUN_10019d4f(&PTR_s_CBaseTabbedPane_10194790);
    if (((iVar4 != 0) || (iVar4 = FUN_10019d4f(&PTR_s_CMDIClientAreaWnd_1019a7a4), iVar4 != 0)) &&
       (pCVar7 = AFXGetParentFrame(pCVar6), pCVar7 != (CFrameWnd *)0x0)) {
      SendMessageW(*(HWND *)(pCVar7 + 0x20),DAT_101db990,*(WPARAM *)(this + 0xc4),
                   *(LPARAM *)(this + 0xc0));
    }
  }
  if (*(int *)(this + 0x158) != 0) {
    *(undefined4 *)(this + 0x158) = 0;
    ReleaseCapture();
    pcVar1 = *(code **)(*(int *)this + 0x2cc);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    if (iVar4 == 0) {
      *(undefined4 *)(this + 0x118) = 0xffffffff;
      *(undefined4 *)(this + 0x114) = 0xffffffff;
    }
  }
  pcVar1 = *(code **)(*(int *)this + 0x2cc);
  guard_check_icall();
  iVar4 = (*pcVar1)();
  if (iVar4 != 0) {
    iVar4 = *(int *)(this + 0x114);
    iVar2 = *(int *)(this + 0xc0);
    if (((iVar4 == *(int *)(this + 0x118)) && (-1 < iVar4)) && (iVar4 != iVar2)) {
      *(undefined4 *)(this + 0x24c) = 0;
      *(int *)(this + 0x1e4) = iVar2;
      *(undefined4 *)(this + 0x1f0) = 1;
      pcVar1 = *(code **)(*(int *)this + 0x214);
      iVar10 = iVar4;
      guard_check_icall(iVar4);
      iVar8 = (*pcVar1)();
      if (iVar8 == 0) {
        pcVar1 = *(code **)(*(int *)this + 0x288);
        *(undefined4 *)(this + 0x1f0) = 0;
        *(undefined4 *)(this + 0x24c) = 0;
        *(undefined4 *)(this + 0x118) = 0xffffffff;
        guard_check_icall(iVar10);
        iVar4 = (*pcVar1)();
        if (iVar4 == 0) {
          *(undefined4 *)(this + 0x114) = 0xffffffff;
        }
        ReleaseCapture();
        goto LAB_1006a685;
      }
      pcVar1 = *(code **)(*(int *)this + 0x270);
      guard_check_icall(*(undefined4 *)(this + 0xc0));
      (*pcVar1)();
      *(undefined4 *)(this + 0x1f0) = 0;
      *(undefined4 *)(this + 0x24c) = 0;
    }
    iVar10 = *(int *)(this + 0x114);
    iVar8 = *(int *)(this + 0x118);
    *(undefined4 *)(this + 0x118) = 0xffffffff;
    pcVar1 = *(code **)(*(int *)this + 0x288);
    guard_check_icall();
    iVar9 = (*pcVar1)();
    if (iVar9 == 0) {
      *(undefined4 *)(this + 0x114) = 0xffffffff;
    }
    ReleaseCapture();
    if ((iVar2 != iVar4) && (InvalidateTab(this,iVar10), iVar8 != iVar10)) {
      InvalidateTab(this,iVar8);
    }
  }
  pcVar1 = *(code **)(*(int *)this + 0x288);
  guard_check_icall();
  iVar4 = (*pcVar1)();
  if (iVar4 != 0) {
    local_18.left = 0;
    pcVar1 = *(code **)(*(int *)this + 0x168);
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    guard_check_icall(&local_18,&local_28);
    (*pcVar1)();
    BVar3 = IsRectEmpty(&local_18);
    if (BVar3 == 0) {
      InvalidateRect(*(HWND *)(this + 0x20),&local_18,0);
    }
    BVar3 = IsRectEmpty(&local_28);
    if (BVar3 == 0) {
      InvalidateRect(*(HWND *)(this + 0x20),&local_28,0);
    }
    UpdateWindow(*(HWND *)(this + 0x20));
  }
  FUN_1001d029();
LAB_1006a685:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

