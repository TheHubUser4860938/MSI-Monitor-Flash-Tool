// rea decompile_all
// name: FUN_0049a9c3
// address: 0x49a9c3
// body: available
// range: 0x49a9c3-0x49ac73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049a9c3(void)

{
  double dVar1;
  CWnd *pCVar2;
  code *pcVar3;
  int iVar4;
  BOOL BVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  CMFCRibbonBar *this;
  CFont *pCVar9;
  AFX_GLOBAL_DATA *pAVar10;
  CMFCRibbonBaseElement *in_ECX;
  WPARAM wParam;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  BVar5 = IsRectEmpty((RECT *)(in_ECX + 0x74));
  if (BVar5 == 0) {
    *(undefined4 *)(in_ECX + 0x98) = 1;
    local_28.left = *(LONG *)(in_ECX + 0x134);
    local_28.top = *(LONG *)(in_ECX + 0x138);
    local_28.right = *(LONG *)(in_ECX + 0x13c);
    local_28.bottom = *(LONG *)(in_ECX + 0x140);
    *(undefined4 *)(in_ECX + 0x134) = *(undefined4 *)(in_ECX + 0x74);
    *(undefined4 *)(in_ECX + 0x138) = *(undefined4 *)(in_ECX + 0x78);
    *(undefined4 *)(in_ECX + 0x13c) = *(undefined4 *)(in_ECX + 0x7c);
    *(undefined4 *)(in_ECX + 0x140) = *(undefined4 *)(in_ECX + 0x80);
    if (*(int *)(in_ECX + 0x1f0) == 0) {
      uVar8 = *(uint *)(in_ECX + 0x1d4);
      pcVar3 = *(code **)(*(int *)in_ECX + 0xa4);
      guard_check_icall();
      uVar6 = (*pcVar3)();
      pcVar3 = *(code **)(*(int *)in_ECX + 0x294);
      guard_check_icall(uVar6,uVar8 | 0x40011080);
      iVar7 = (*pcVar3)();
      *(int *)(in_ECX + 0x1f0) = iVar7;
      if (iVar7 == 0) goto LAB_0049ac65;
      wParam = 0;
      SendMessageW(*(HWND *)(iVar7 + 0x20),0x459,1,0);
      uVar8 = SendMessageW(*(HWND *)(*(int *)(in_ECX + 0x1f0) + 0x20),0x43b,0,0);
      SendMessageW(*(HWND *)(*(int *)(in_ECX + 0x1f0) + 0x20),0x445,0,uVar8 | 1);
      this = CMFCRibbonBaseElement::GetTopLevelRibbonBar(in_ECX);
      pCVar9 = CWnd::GetFont((CWnd *)this);
      if (pCVar9 != (CFont *)0x0) {
        wParam = *(WPARAM *)(pCVar9 + 4);
      }
      SendMessageW(*(HWND *)(*(int *)(in_ECX + 0x1f0) + 0x20),0x30,wParam,1);
      FUN_004349b3(*(undefined4 *)(in_ECX + 0x1ec));
    }
    BVar5 = EqualRect(&local_28,(RECT *)(in_ECX + 0x134));
    if ((BVar5 == 0) ||
       (BVar5 = IsWindowVisible(*(HWND *)(*(int *)(in_ECX + 0x1f0) + 0x20)), BVar5 == 0)) {
      local_18.left = *(LONG *)(in_ECX + 0x134);
      local_18.top = *(LONG *)(in_ECX + 0x138);
      local_18.right = *(LONG *)(in_ECX + 0x13c);
      local_18.bottom = *(LONG *)(in_ECX + 0x140);
      if (*(int *)(in_ECX + 0xc0) == 0) {
        iVar7 = *(int *)(in_ECX + 0x1c4);
      }
      else {
        iVar7 = *(int *)(in_ECX + 0x1c8);
      }
      pAVar10 = GetGlobalData();
      if (*(int *)(pAVar10 + 0x1e8) == 0) {
        dVar1 = 1.0;
      }
      else {
        dVar1 = *(double *)(pAVar10 + 0x1e0);
      }
      if (1.0 < dVar1) {
        GetGlobalData();
        iVar7 = FUN_0055bce0();
      }
      iVar4 = *(int *)(in_ECX + 0x120);
      local_18.left = local_18.right - iVar7;
      if (*(int *)(in_ECX + 0x1e0) == 0) {
        InflateRect(&local_18,-*(int *)(in_ECX + 0x11c),-iVar4);
      }
      else {
        local_18.right = local_18.right + -2;
        local_18.left = local_18.left + *(int *)(in_ECX + 0x11c);
        local_18.top = local_18.top + iVar4;
        local_18.bottom = local_18.bottom - iVar4;
      }
      CWnd::SetWindowPos(*(CWnd **)(in_ECX + 0x1f0),(CWnd *)0x0,local_18.left,local_18.top,
                         local_18.right - local_18.left,local_18.bottom - local_18.top,0x14);
      CWnd::ShowWindow(*(CWnd **)(in_ECX + 0x1f0),4);
      iVar7 = *(int *)(in_ECX + 500);
      if ((iVar7 != 0) && (*(int *)(iVar7 + 0x20) != 0)) {
        *(undefined4 *)(iVar7 + 0x98) = *(undefined4 *)(in_ECX + 0xc4);
        CSpinButtonCtrl::SetBuddy(*(CSpinButtonCtrl **)(in_ECX + 500),*(CWnd **)(in_ECX + 0x1f0));
        CWnd::ShowWindow(*(CWnd **)(in_ECX + 500),4);
      }
    }
  }
  else {
    pCVar2 = *(CWnd **)(in_ECX + 0x1f0);
    if ((pCVar2 != (CWnd *)0x0) && (*(int *)(pCVar2 + 0x20) != 0)) {
      CWnd::ShowWindow(pCVar2,0);
    }
    pCVar2 = *(CWnd **)(in_ECX + 500);
    if ((pCVar2 != (CWnd *)0x0) && (*(int *)(pCVar2 + 0x20) != 0)) {
      CWnd::ShowWindow(pCVar2,0);
    }
  }
LAB_0049ac65:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

