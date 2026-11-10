// rea decompile_all
// name: CMDIFrameWndEx::OnContextMenu
// address: 0x100bd8f6
// body: available
// range: 0x100bd8f6-0x100bdb60 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMDIFrameWndEx::OnContextMenu(class CWnd *,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMDIFrameWndEx::OnContextMenu(CMDIFrameWndEx *this,CObject *param_1,LONG param_3,LONG param_4)

{
  POINT Point;
  ushort uVar1;
  int iVar2;
  int iVar3;
  HWND pHVar4;
  CObject *pCVar5;
  ulong uVar6;
  LRESULT LVar7;
  WPARAM wParam;
  code *pcVar8;
  tagPOINT local_24;
  CObject *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_1c = param_1;
  if ((this == (CMDIFrameWndEx *)0xfffffb28) || (*(int *)(this + 0x4f8) == 0)) {
LAB_100bdb49:
    FUN_100283ad();
  }
  else {
    if (DAT_1020b0e4 != 0) goto LAB_100bdb4e;
    iVar2 = GetSystemMetrics(0x17);
    uVar1 = GetAsyncKeyState((iVar2 != 0) + 1);
    if ((uVar1 & 0x8000) != 0) goto LAB_100bdb4e;
    wParam = 0;
    iVar2 = 0;
    if (param_1 != (CObject *)0x0) {
      iVar2 = *(int *)(param_1 + 0x20);
    }
    if (this == (CMDIFrameWndEx *)0xfffffba8) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(this + 0x478);
    }
    if (iVar2 == iVar3) {
      Point.y = param_4;
      Point.x = param_3;
      pHVar4 = WindowFromPoint(Point);
      local_1c = (CObject *)CWnd::FromHandle(pHVar4);
      iVar2 = CMDIClientAreaWnd::IsMemberOfMDITabGroup
                        ((CMDIClientAreaWnd *)(this + 0x458),(CWnd *)local_1c);
      if (iVar2 == 0) {
        if ((DAT_1020b0e4 == 0) && (local_1c == param_1)) {
          if (this != (CMDIFrameWndEx *)0x0) {
            wParam = *(WPARAM *)(this + 0x20);
          }
          LVar7 = SendMessageW(*(HWND *)(this + 0x20),DAT_10209d24,wParam,
                               CONCAT22((undefined2)param_4,(undefined2)param_3));
          if (LVar7 != 0) {
            CDockingManager::OnPaneContextMenu((CDockingManager *)(this + 0x160),param_3,param_4);
          }
        }
        goto LAB_100bdb4e;
      }
      pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_101b54cc,local_1c);
      local_1c = pCVar5;
      if (pCVar5 == (CObject *)0x0) goto LAB_100bdb4e;
      local_24.x = param_3;
      local_24.y = param_4;
      ScreenToClient(*(HWND *)(pCVar5 + 0x20),&local_24);
      pcVar8 = *(code **)(*(int *)pCVar5 + 0x218);
      guard_check_icall(&local_24);
      iVar2 = (*pcVar8)();
      if (iVar2 < 0) goto LAB_100bdb4e;
      pcVar8 = *(code **)(*(int *)local_1c + 0x214);
      guard_check_icall(iVar2);
      (*pcVar8)();
      uVar6 = CMDIClientAreaWnd::GetMDITabsContextMenuAllowedItems
                        ((CMDIClientAreaWnd *)(this + 0x458));
      pcVar8 = *(code **)(*(int *)this + 0x1d0);
    }
    else {
      iVar2 = 0;
      if (param_1 != (CObject *)0x0) {
        iVar2 = *(int *)(param_1 + 0x20);
      }
      if (this == (CMDIFrameWndEx *)0xfffffb28) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(this + 0x4f8);
      }
      if (iVar2 != iVar3) goto LAB_100bdb49;
      local_18 = 0;
      local_14 = 0;
      pcVar8 = *(code **)(*(int *)param_1 + 0x180);
      local_10 = 0;
      local_c = 0;
      guard_check_icall(&local_18);
      (*pcVar8)();
      pCVar5 = local_1c;
      local_24.x = param_3;
      local_24.y = param_4;
      ScreenToClient(*(HWND *)(local_1c + 0x20),&local_24);
      pcVar8 = *(code **)(*(int *)pCVar5 + 0x218);
      guard_check_icall(&local_24);
      iVar2 = (*pcVar8)();
      if (iVar2 < 0) goto LAB_100bdb4e;
      pcVar8 = *(code **)(*(int *)local_1c + 0x214);
      guard_check_icall(iVar2);
      (*pcVar8)();
      uVar6 = CMDIClientAreaWnd::GetMDITabsContextMenuAllowedItems
                        ((CMDIClientAreaWnd *)(this + 0x458));
      pcVar8 = *(code **)(*(int *)this + 0x1d0);
    }
    guard_check_icall(param_3,param_4,uVar6,0);
    (*pcVar8)();
  }
LAB_100bdb4e:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

