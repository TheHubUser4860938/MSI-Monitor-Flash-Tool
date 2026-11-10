// rea decompile_all
// name: CMFCToolBar::AdjustSize
// address: 0x10094162
// body: available
// range: 0x10094162-0x1009455b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCToolBar::AdjustSize(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBar::AdjustSize(CMFCToolBar *this)

{
  int iVar1;
  code *pcVar2;
  LONG this_00;
  CFrameWnd *pCVar3;
  undefined4 uVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  CObject *pCVar7;
  int iVar8;
  CWnd *pCVar9;
  CMFCToolBar *pCVar10;
  CMFCToolBar *pCVar11;
  CMFCToolBar *local_30;
  CMFCToolBar *local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_18.bottom = (LONG)this;
  pCVar3 = AFXGetParentFrame((CWnd *)this);
  if ((pCVar3 == (CFrameWnd *)0x0) || (*(int *)(pCVar3 + 0x20) == 0)) goto LAB_1009454d;
  iVar8 = *(int *)this;
  iVar1 = *(int *)(this + 0xb8);
  pcVar2 = *(code **)(iVar8 + 0x164);
  guard_check_icall();
  uVar4 = (*pcVar2)();
  pcVar2 = *(code **)(iVar8 + 0x260);
  guard_check_icall(&local_30,iVar1 == 0,uVar4);
  this_00 = local_18.bottom;
  (*pcVar2)();
  if ((local_30 == (CMFCToolBar *)0x7fff) || (local_2c == (CMFCToolBar *)0x7fff)) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    pHVar5 = GetParent(*(HWND *)(this_00 + 0x20));
    pCVar6 = CWnd::FromHandle(pHVar5);
    GetClientRect(*(HWND *)(pCVar6 + 0x20),&local_18);
    pCVar10 = *(CMFCToolBar **)(this_00 + 0xc08);
    if (local_30 == (CMFCToolBar *)0x7fff) {
      local_30 = (CMFCToolBar *)(local_18.right + -local_18.left);
      if ((pCVar10 != (CMFCToolBar *)0x0) && ((int)pCVar10 <= (int)local_30)) {
        local_30 = pCVar10;
      }
    }
    else {
      local_2c = (CMFCToolBar *)(local_18.bottom + -local_18.top);
      if ((pCVar10 != (CMFCToolBar *)0x0) && ((int)pCVar10 <= (int)local_2c)) {
        local_2c = pCVar10;
      }
    }
  }
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  GetWindowRect(*(HWND *)(this_00 + 0x20),&local_28);
  pHVar5 = GetParent(*(HWND *)(this_00 + 0x20));
  pCVar6 = CWnd::FromHandle(pHVar5);
  pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_101e1714,(CObject *)pCVar6);
  if (pCVar7 != (CObject *)0x0) {
    local_18.left = *(LONG *)(pCVar7 + 0x2ec);
    local_18.top = *(LONG *)(pCVar7 + 0x2f0);
    local_18.right = *(LONG *)(pCVar7 + 0x2f4);
    local_18.bottom = *(LONG *)(pCVar7 + 0x2f8);
    pcVar2 = *(code **)(*(int *)this_00 + 0x238);
    guard_check_icall(0,0xffffffff,0xffffffff,local_18.right - local_18.left,
                      local_18.bottom - local_18.top,0x16,0);
    (*pcVar2)();
    goto LAB_100943cf;
  }
  if (DAT_10245ca8 == 0) {
    if (((CMFCToolBar *)(local_28.bottom - local_28.top) == local_2c) ||
       (local_2c == (CMFCToolBar *)0x7fff)) {
LAB_10094353:
      if (((CMFCToolBar *)(local_28.right - local_28.left) != local_30) &&
         (local_30 != (CMFCToolBar *)0x7fff)) {
        pcVar2 = *(code **)(*(int *)this_00 + 0x164);
        guard_check_icall();
        iVar8 = (*pcVar2)();
        if (iVar8 == 0) goto LAB_1009437a;
      }
    }
    else {
      pcVar2 = *(code **)(*(int *)this_00 + 0x164);
      guard_check_icall();
      iVar8 = (*pcVar2)();
      if (iVar8 == 0) goto LAB_10094353;
LAB_1009437a:
      local_18.right = 0;
      local_18.bottom = 0;
      pcVar2 = *(code **)(*(int *)this_00 + 0x270);
      guard_check_icall(&local_18.right);
      (*pcVar2)();
      pCVar10 = (CMFCToolBar *)local_18.right;
      if (local_18.right <= (int)local_30) {
        pCVar10 = local_30;
      }
      pCVar11 = (CMFCToolBar *)local_18.bottom;
      if (local_18.bottom <= (int)local_2c) {
        pCVar11 = local_2c;
      }
LAB_100943b2:
      pcVar2 = *(code **)(*(int *)this_00 + 0x238);
      guard_check_icall(0,0,0,pCVar10,pCVar11,0x16,0);
      (*pcVar2)();
      CPane::UpdateVirtualRect((CPane *)this_00);
    }
  }
  else {
    if (((CMFCToolBar *)(local_28.bottom - local_28.top) != local_2c) &&
       (local_2c != (CMFCToolBar *)0x7fff)) {
      pcVar2 = *(code **)(*(int *)this_00 + 0x164);
      guard_check_icall();
      iVar8 = (*pcVar2)();
      pCVar10 = local_30;
      pCVar11 = local_2c;
      if (iVar8 != 0) goto LAB_100943b2;
    }
    if (((CMFCToolBar *)(local_28.right - local_28.left) != local_30) &&
       (local_30 != (CMFCToolBar *)0x7fff)) {
      pcVar2 = *(code **)(*(int *)this_00 + 0x164);
      guard_check_icall();
      iVar8 = (*pcVar2)();
      pCVar10 = local_30;
      pCVar11 = local_2c;
      if (iVar8 == 0) goto LAB_100943b2;
    }
  }
LAB_100943cf:
  pcVar2 = *(code **)(*(int *)this_00 + 0x170);
  guard_check_icall();
  iVar8 = (*pcVar2)();
  if (iVar8 == 0) {
    pcVar2 = *(code **)(*(int *)this_00 + 0x17c);
    guard_check_icall();
    iVar8 = (*pcVar2)();
    if (((iVar8 == 0) || (*(int *)(this_00 + 0xb8) == 0)) || (*(int *)(this_00 + 0xbc) == 0))
    goto LAB_100944cf;
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    pcVar2 = *(code **)(*(int *)this_00 + 0x164);
    local_18.bottom = 0;
    guard_check_icall();
    iVar8 = (*pcVar2)();
    CDockingPanesRow::GetClientRect(*(CDockingPanesRow **)(this_00 + 0xbc),(CRect *)&local_18);
    if (((CMFCToolBar *)(local_18.bottom + -local_18.top) == local_2c) || (iVar8 == 0)) {
      if (((CMFCToolBar *)(local_18.right + -local_18.left) != local_30) && (iVar8 == 0)) {
        local_18.right = (LONG)(local_30 + local_18.left);
        goto LAB_10094480;
      }
    }
    else {
      local_18.bottom = (LONG)(local_2c + local_18.top);
LAB_10094480:
      pCVar10 = local_2c;
      if (iVar8 == 0) {
        pCVar10 = local_30;
      }
      CDockSite::ResizeRow
                (*(CDockSite **)(this_00 + 0xb8),*(CDockingPanesRow **)(this_00 + 0xbc),(int)pCVar10
                 ,1);
    }
    if (DAT_10245ca8 != 0) {
      CPane::UpdateVirtualRect((CPane *)this_00,local_30,local_2c);
      pcVar2 = *(code **)(**(int **)(this_00 + 0xbc) + 0x28);
      guard_check_icall(this_00);
      (*pcVar2)();
    }
  }
  else {
LAB_100944cf:
    uVar4 = 0;
    pcVar2 = *(code **)(*(int *)this_00 + 0x228);
    guard_check_icall(0);
    pCVar6 = (CWnd *)(*pcVar2)();
    if (pCVar6 != (CWnd *)0x0) {
      pHVar5 = GetParent(*(HWND *)(this_00 + 0x20));
      pCVar9 = CWnd::FromHandle(pHVar5);
      if (pCVar9 == pCVar6) {
        pcVar2 = *(code **)(*(int *)pCVar6 + 0x1b4);
        guard_check_icall(uVar4);
        (*pcVar2)();
        RedrawWindow(*(HWND *)(pCVar6 + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
        goto LAB_1009454d;
      }
    }
    iVar8 = FUN_10051e53(&PTR_s_CMFCDropDownToolBar_1023db30);
    if (iVar8 != 0) goto LAB_1009454d;
  }
  pcVar2 = *(code **)(*(int *)pCVar3 + 0x178);
  guard_check_icall(1);
  (*pcVar2)();
LAB_1009454d:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

