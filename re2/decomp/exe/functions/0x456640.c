// rea decompile_all
// name: CMFCToolBar::OnLButtonUp
// address: 0x456640
// body: available
// range: 0x456640-0x456a2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBar::OnLButtonUp(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBar::OnLButtonUp(CMFCToolBar *this,undefined4 param_1,int param_3,undefined4 param_4)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  HWND pHVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  CWnd *pCVar9;
  BOOL BVar10;
  int iVar11;
  uint local_10;
  uint local_8;
  
  if ((DAT_00614ed8 != 0) && (*(int *)(this + 0xb78) == 0)) {
    if (*(int *)(this + 0xba4) != 0) {
      iVar11 = param_3 - *(int *)(*(int *)(this + 0xd0c) + 0x54);
      if ((4 < iVar11) &&
         (lVar3 = _labs(*(int *)(*(int *)(this + 0xd0c) + 0x5c) - param_3), 6 < lVar3)) {
        pcVar1 = *(code **)(**(int **)(this + 0xd0c) + 0x34);
        guard_check_icall(iVar11);
        (*pcVar1)();
        pcVar1 = *(code **)(*(int *)this + 0x20c);
        guard_check_icall();
        (*pcVar1)();
      }
      SetRectEmpty((LPRECT)(this + 0xcdc));
      *(undefined4 *)(this + 0xd0c) = 0;
      *(undefined4 *)(this + 0xba4) = 0;
      RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x505);
      ReleaseCapture();
      if (*(int *)(this + 0xd04) != 0) {
        pHVar4 = SetCapture(*(HWND *)(*(int *)(this + 0xd04) + 0x20));
        CWnd::FromHandle(pHVar4);
        *(undefined4 *)(this + 0xd04) = 0;
      }
      pcVar1 = *(code **)(*(int *)this + 0x2d4);
      guard_check_icall(1);
      (*pcVar1)();
    }
LAB_0045672f:
    CPane::OnLButtonUp((CPane *)this,param_1,param_3,param_4);
    return;
  }
  if (*(int *)(this + 0x174) != 0) goto LAB_0045672f;
  if (*(int *)(this + 0xbec) == -1) {
    pcVar1 = *(code **)(*(int *)this + 0x390);
    guard_check_icall(param_3,param_4);
    iVar11 = (*pcVar1)();
    if (iVar11 != -1) {
      return;
    }
    CPane::OnLButtonUp((CPane *)this,param_1,param_3,param_4);
    goto LAB_00456a0e;
  }
  ReleaseCapture();
  if (*(int *)(this + 0xd04) != 0) {
    pHVar4 = SetCapture(*(HWND *)(*(int *)(this + 0xd04) + 0x20));
    CWnd::FromHandle(pHVar4);
    *(undefined4 *)(this + 0xd04) = 0;
  }
  pcVar1 = *(code **)(*(int *)this + 0x390);
  guard_check_icall(param_3,param_4);
  uVar5 = (*pcVar1)();
  *(undefined4 *)(this + 0xbf0) = uVar5;
  piVar6 = (int *)FUN_00452f94(*(undefined4 *)(this + 0xbec));
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar7 = FUN_0043970d(&PTR_s_CMFCToolBarMenuButtonsButton_005c7550);
  local_8 = 0;
  iVar11 = *(int *)(this + 0xbec);
  uVar2 = piVar6[9];
  local_10 = uVar2 & 0xfffdffff;
  if (iVar11 == *(int *)(this + 0xbf0)) {
    pcVar1 = *(code **)(*(int *)this + 0x390);
    guard_check_icall(param_3,param_4);
    iVar8 = (*pcVar1)();
    if (((iVar8 == iVar11) && (UpdateButton(this,iVar11), (piVar6[9] & 0x40000U) == 0)) &&
       (local_8 = piVar6[8], (*(byte *)(piVar6 + 9) & 2) != 0)) {
      if ((uVar2 & 0x100000) != 0) {
        local_10 = uVar2 & 0xffedffff;
      }
      local_10 = local_10 ^ 0x10000;
    }
  }
  if (DAT_00614ed0 == 0) {
    pCVar9 = CWnd::GetOwner((CWnd *)this);
    SendMessageW(*(HWND *)(pCVar9 + 0x20),0x362,0xe001,0);
  }
  iVar11 = *(int *)(this + 0xbec);
  *(undefined4 *)(this + 0xbec) = 0xffffffff;
  *(undefined4 *)(this + 0xbf0) = 0xffffffff;
  pHVar4 = *(HWND *)(this + 0x20);
  pcVar1 = *(code **)(*(int *)this + 0x364);
  guard_check_icall();
  (*pcVar1)();
  pcVar1 = *(code **)(*(int *)this + 0x390);
  guard_check_icall(param_3,param_4);
  iVar8 = (*pcVar1)();
  if (iVar8 == iVar11) {
    pcVar1 = *(code **)(*(int *)this + 1000);
    guard_check_icall(piVar6);
    iVar8 = (*pcVar1)();
    if (((iVar8 != 0) || (local_8 == 0)) || (local_8 == 0xffffffff)) goto LAB_0045696f;
    InvalidateButton(this,iVar11);
    UpdateWindow(*(HWND *)(this + 0x20));
    CMFCCmdUsageCount::AddCmd((CMFCCmdUsageCount *)&DAT_00614f54,local_8);
    pcVar1 = *(code **)(*piVar6 + 0x24);
    guard_check_icall();
    iVar8 = (*pcVar1)();
    if ((iVar8 == 0) &&
       ((DAT_00616ad0 == (CUserToolsManager *)0x0 ||
        (iVar8 = CUserToolsManager::InvokeTool(DAT_00616ad0,local_8), iVar8 == 0)))) {
      pCVar9 = CWnd::GetOwner((CWnd *)this);
      SendMessageW(*(HWND *)(pCVar9 + 0x20),0x111,local_8,0);
    }
  }
  else {
LAB_0045696f:
    BVar10 = IsWindow(pHVar4);
    if (((BVar10 != 0) && (BVar10 = IsIconic(pHVar4), BVar10 == 0)) &&
       (BVar10 = IsZoomed(pHVar4), BVar10 != 0)) {
      pcVar1 = *(code **)(*piVar6 + 0x24);
      guard_check_icall();
      (*pcVar1)();
    }
  }
  BVar10 = IsWindow(pHVar4);
  if (BVar10 == 0) {
    return;
  }
  if (*(int *)(this + 0xc48) <= iVar11) {
    return;
  }
  if (iVar7 == 0) {
    pcVar1 = *(code **)(*(int *)this + 0x374);
    guard_check_icall(iVar11,local_10);
    (*pcVar1)();
  }
  else {
    iVar7 = FUN_00452f94(iVar11);
    if (iVar7 != 0) {
      *(uint *)(iVar7 + 0x24) = *(uint *)(iVar7 + 0x24) & 0xfffdffff;
    }
  }
  UpdateButton(this,iVar11);
  InvalidateButton(this,iVar11);
  UpdateWindow(*(HWND *)(this + 0x20));
LAB_00456a0e:
  *(undefined4 *)(this + 0xcfc) = 0xffffffff;
  *(undefined4 *)(this + 0xd00) = 0xffffffff;
  OnMouseMove(this,0,param_3,param_4);
  return;
}

