// rea decompile_all
// name: CMFCBaseTabCtrl::OnMouseMove
// address: 0x1006a698
// body: available
// range: 0x1006a698-0x1006a996 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCBaseTabCtrl::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCBaseTabCtrl::OnMouseMove(CMFCBaseTabCtrl *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  code *pcVar1;
  POINT pt;
  POINT Point;
  BOOL BVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  int iVar5;
  int iVar6;
  tagPOINT local_20;
  int local_18 [5];
  
  local_18[4] = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  FUN_1001d029();
  iVar6 = *(int *)(this + 0x114);
  iVar5 = *(int *)(this + 0x1f8);
  pt.y = param_4;
  pt.x = param_3;
  BVar2 = PtInRect((RECT *)(this + 0x200),pt);
  *(BOOL *)(this + 0x1f8) = BVar2;
  if (iVar5 != BVar2) {
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)(this + 0x200),(HRGN)0x0,0x105);
  }
  if (((-1 < *(int *)(this + 0x114)) && (*(int *)(this + 0x118) < 0)) &&
     (*(int *)(this + 0x158) == 0)) {
    local_20.x = param_3;
    local_20.y = param_4;
    ClientToScreen(*(HWND *)(this + 0x20),&local_20);
    Point.y = local_20.y;
    Point.x = local_20.x;
    pHVar3 = WindowFromPoint(Point);
    pCVar4 = CWnd::FromHandle(pHVar3);
    if ((pCVar4 != (CWnd *)0x0) && (*(int *)(pCVar4 + 0x20) != *(int *)(this + 0x20))) {
      ReleaseCapture();
      *(undefined4 *)(this + 0x114) = 0xffffffff;
      InvalidateTab(this,iVar6);
      goto LAB_1006a984;
    }
  }
  pcVar1 = *(code **)(*(int *)this + 0x218);
  guard_check_icall(&param_3);
  iVar5 = (*pcVar1)();
  *(int *)(this + 0x114) = iVar5;
  if ((-1 < *(int *)(this + 0x118)) && (iVar5 != *(int *)(this + 0x118))) {
    *(undefined4 *)(this + 0x114) = 0xffffffff;
  }
  if (*(int *)(this + 0x114) != iVar6) {
    if (*(int *)(this + 0x88) == 0) {
      pcVar1 = *(code **)(*(int *)this + 0x284);
      guard_check_icall();
      iVar5 = (*pcVar1)();
      if (iVar5 == 0) goto LAB_1006a817;
    }
    if (iVar6 < 0) {
      if (-1 < *(int *)(this + 0x114)) {
        pHVar3 = SetCapture(*(HWND *)(this + 0x20));
        CWnd::FromHandle(pHVar3);
      }
    }
    else if ((*(int *)(this + 0x114) < 0) && (*(int *)(this + 0x118) < 0)) {
      *(undefined4 *)(this + 0x1f8) = 0;
      *(undefined4 *)(this + 0x1fc) = 0;
      if (*(int *)(this + 0x158) == 0) {
        ReleaseCapture();
      }
    }
    InvalidateTab(this,*(int *)(this + 0x114));
    InvalidateTab(this,iVar6);
  }
LAB_1006a817:
  if (*(int *)(this + 0x158) != 0) {
    iVar6 = *(int *)(this + 0xbc);
    pcVar1 = *(code **)(*(int *)this + 0x164);
    guard_check_icall(param_3,param_4);
    iVar5 = (*pcVar1)();
    if (((iVar5 == 0) || (iVar6 < 2)) || (*(int *)(this + 0x128) == 0)) {
      pcVar1 = *(code **)(*(int *)this + 0x164);
      guard_check_icall(param_3,param_4);
      iVar5 = (*pcVar1)();
      if (iVar5 == 0) {
        pcVar1 = *(code **)(*(int *)this + 0x1a0);
        guard_check_icall(1,0xffffffff,0);
        iVar5 = (*pcVar1)();
        if ((iVar5 != 0) && (2 < iVar6)) {
          *(undefined4 *)(this + 0x158) = 0;
        }
      }
    }
    else {
      local_18[0] = 0;
      local_18[1] = 0;
      local_18[2] = 0;
      local_18[3] = 0;
      pcVar1 = *(code **)(*(int *)this + 0x218);
      guard_check_icall(&param_3);
      iVar6 = (*pcVar1)();
      if ((iVar6 != *(int *)(this + 0xc0)) && (iVar6 != -1)) {
        pcVar1 = *(code **)(*(int *)this + 0x260);
        guard_check_icall(iVar6,*(int *)(this + 0xc0));
        (*pcVar1)();
        pcVar1 = *(code **)(*(int *)this + 0x184);
        guard_check_icall();
        (*pcVar1)();
        pcVar1 = *(code **)(*(int *)this + 0x214);
        guard_check_icall(iVar6);
        (*pcVar1)();
        pcVar1 = *(code **)(*(int *)this + 0x218);
        guard_check_icall(&param_3);
        iVar5 = (*pcVar1)();
        if (iVar5 != iVar6) {
          pcVar1 = *(code **)(*(int *)this + 0x1b8);
          guard_check_icall(iVar6,local_18);
          (*pcVar1)();
          local_20.y = param_4;
          local_20.x = *(int *)(this + 0x164) + local_18[0];
          ClientToScreen(*(HWND *)(this + 0x20),&local_20);
          SetCursorPos(local_20.x,local_20.y);
        }
      }
    }
  }
LAB_1006a984:
  __security_check_cookie(local_18[4] ^ (uint)&stack0xfffffffc);
  return;
}

