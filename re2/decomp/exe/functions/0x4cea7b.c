// rea decompile_all
// name: CMFCPopupMenu::StartResize
// address: 0x4cea7b
// body: available
// range: 0x4cea7b-0x4cee03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCPopupMenu::StartResize(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCPopupMenu::StartResize(CMFCPopupMenu *this)

{
  code *pcVar1;
  CMFCShadowWnd *this_00;
  BOOL BVar2;
  HWND pHVar3;
  int iVar4;
  CWnd *pCVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  CMFCPopupMenu *pCVar13;
  tagMSG local_64;
  tagMSG local_48;
  undefined4 local_2c;
  HWND local_28;
  int local_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if (this == (CMFCPopupMenu *)0x0) {
    local_28 = (HWND)0x0;
  }
  else {
    local_28 = *(HWND *)(this + 0x20);
  }
  while (BVar2 = PeekMessageW(&local_64,(HWND)0x0,0xf,0xf,0), BVar2 != 0) {
    BVar2 = GetMessageW(&local_64,(HWND)0x0,0xf,0xf);
    if (BVar2 == 0) goto LAB_004cedf3;
    DispatchMessageW(&local_64);
  }
  pHVar3 = GetCapture();
  if (pHVar3 == (HWND)0x0) {
    pHVar3 = SetCapture(*(HWND *)(this + 0x20));
    CWnd::FromHandle(pHVar3);
    local_2c = 0;
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_18);
    *(undefined4 *)(this + 0x1130) = 1;
    pcVar1 = *(code **)(*(int *)this + 0x1c8);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    *(undefined4 *)(iVar4 + 0xd8c) = 1;
    iVar4 = *(int *)(this + 0x105c);
    *(undefined4 *)(this + 0x105c) = 0;
    pCVar5 = *(CWnd **)(this + 0x1070);
    local_1c = iVar4;
    if ((pCVar5 != (CWnd *)0x0) && (*(int *)(pCVar5 + 0x20) != 0)) {
      CWnd::ShowWindow(pCVar5,0);
    }
    local_24 = 0;
    pcVar1 = *(code **)(*(int *)this + 0x20c);
    guard_check_icall();
    local_20 = (*pcVar1)();
    iVar8 = local_20;
    while( true ) {
      pHVar3 = GetCapture();
      pCVar5 = CWnd::FromHandle(pHVar3);
      if (pCVar5 != (CWnd *)this) break;
      BVar2 = GetMessageW(&local_48,(HWND)0x0,0,0);
      if (BVar2 == 0) {
        AfxPostQuitMessage(local_48.wParam);
        break;
      }
      if (local_48.message == 0x200) {
        local_24 = 1;
        uVar6 = CWnd::GetExStyle((CWnd *)this);
        if ((uVar6 & 0x400000) == 0) {
          iVar7 = local_48.pt.x - local_18.left;
        }
        else {
          iVar7 = local_18.right - local_48.pt.x;
        }
        iVar4 = iVar7 + iVar8 * 2 + iVar4;
        if (*(int *)(this + 0x1138) == 0) {
          iVar8 = local_48.pt.y - local_18.top;
        }
        else {
          iVar8 = local_18.bottom - local_48.pt.y;
        }
        iVar7 = *(int *)(this + 0x1144);
        iVar12 = iVar7;
        if (iVar7 <= iVar8) {
          if (*(int *)(this + 0x1138) == 0) {
            iVar12 = local_48.pt.y - local_18.top;
          }
          else {
            iVar12 = local_18.bottom - local_48.pt.y;
          }
        }
        iVar9 = *(int *)(this + 0x1140);
        if (iVar9 < 1) {
          iVar9 = (local_18.right - local_18.left) - local_1c;
        }
        else if (iVar9 <= iVar4) {
          iVar9 = iVar4;
        }
        if ((iVar9 != *(int *)(this + 0x1148)) ||
           (iVar8 = local_20, iVar4 = local_1c, iVar12 != *(int *)(this + 0x114c))) {
          *(int *)(this + 0x1148) = iVar9;
          *(int *)(this + 0x114c) = iVar12;
          if ((*(int *)(this + 0x1138) != 0) && (iVar7 < iVar12)) {
            iVar4 = *(int *)(this + 0x115c);
            iVar8 = *(int *)(this + 0x1154);
            pcVar1 = *(code **)(*(int *)this + 0x20c);
            guard_check_icall();
            iVar7 = (*pcVar1)();
            *(LONG *)(this + 0x13c) = ((local_48.pt.y - (iVar4 - iVar8)) - iVar7) + -1;
          }
          pcVar1 = *(code **)(*(int *)this + 0x178);
          guard_check_icall(1);
          (*pcVar1)();
          pcVar1 = *(code **)(*(int *)this + 0x1c8);
          guard_check_icall();
          piVar10 = (int *)(*pcVar1)();
          pcVar1 = *(code **)(*piVar10 + 0x3e4);
          guard_check_icall();
          (*pcVar1)();
          pCVar13 = this + 0xfb8;
          if ((pCVar13 != (CMFCPopupMenu *)0x0) && (*(int *)(this + 0xfd8) != 0)) {
            uVar11 = GetScrollPos(*(HWND *)(this + 0xfd8),2);
            OnVScroll(this,5,uVar11,(CScrollBar *)pCVar13);
          }
          RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x581);
          UpdateBottomWindows(this,0);
          *(undefined4 *)(this + 0x1134) = 1;
          iVar8 = local_20;
          iVar4 = local_1c;
        }
      }
      else {
        if (local_48.message == 0x202) {
          *(int *)(this + 0x105c) = iVar4;
          local_2c = 1;
          if (local_24 != 0) {
            if (((CGdiObject *)(this + 0x1060) != (CGdiObject *)0x0) &&
               (*(int *)(this + 0x1064) != 0)) {
              CGdiObject::DeleteObject((CGdiObject *)(this + 0x1060));
            }
            if (((CGdiObject *)(this + 0x1068) != (CGdiObject *)0x0) &&
               (*(int *)(this + 0x106c) != 0)) {
              CGdiObject::DeleteObject((CGdiObject *)(this + 0x1068));
            }
            pcVar1 = *(code **)(*(int *)this + 0x178);
            guard_check_icall(1);
            (*pcVar1)();
            UpdateBottomWindows(this,0);
            this_00 = *(CMFCShadowWnd **)(this + 0x1070);
            if ((this_00 != (CMFCShadowWnd *)0x0) && (*(int *)(this_00 + 0x20) != 0)) {
              CMFCShadowWnd::Repos(this_00);
            }
            CWnd::ShowWindow((CWnd *)this,4);
          }
          break;
        }
        DispatchMessageW(&local_48);
      }
    }
    ReleaseCapture();
    BVar2 = IsWindow(local_28);
    if (BVar2 != 0) {
      *(undefined4 *)(this + 0x1130) = 0;
      pcVar1 = *(code **)(*(int *)this + 0x1c8);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      *(undefined4 *)(iVar4 + 0xd8c) = 0;
    }
  }
LAB_004cedf3:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

