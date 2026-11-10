// rea decompile_all
// name: CMDIChildWndEx::OnStyleChanged
// address: 0x100c1f94
// body: available
// range: 0x100c1f94-0x100c2323 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMDIChildWndEx::OnStyleChanged(int,struct tagSTYLESTRUCT *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMDIChildWndEx::OnStyleChanged(CMDIChildWndEx *this,int param_1,tagSTYLESTRUCT *param_2)

{
  CRect *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  ulong uVar6;
  BOOL BVar7;
  CMFCVisualManager *pCVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  tagRECT *ptVar15;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  FUN_100283ad();
  iVar3 = IsTaskbarTabsSupportEnabled(this);
  if (iVar3 == 0) {
    UnregisterTaskbarTab(this,1);
  }
  else {
    pcVar1 = *(code **)(*(int *)this + 0x1d8);
    guard_check_icall(0);
    (*pcVar1)();
  }
  uVar10 = *(uint *)param_2 & 0x80000;
  uVar11 = *(uint *)(param_2 + 4) & 0x80000;
  if (uVar10 == uVar11) goto LAB_100c2311;
  iVar3 = *(int *)(this + 0x448);
  if ((iVar3 == 0) || (*(int *)(iVar3 + 0x2f88) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (uVar10 == 0) {
    if (bVar2) goto LAB_100c2311;
    if ((iVar3 != 0) && (uVar6 = CWnd::GetExStyle((CWnd *)(iVar3 + 0x458)), (uVar6 & 0x200) == 0)) {
      CWnd::ModifyStyleEx((CWnd *)(*(int *)(this + 0x448) + 0x458),0,0x200,0x20);
    }
    BVar7 = IsZoomed(*(HWND *)(this + 0x20));
    if ((BVar7 == 0) && (uVar11 != 0)) {
      pCVar8 = CMFCVisualManager::GetInstance();
      pcVar1 = *(code **)(*(int *)pCVar8 + 500);
      guard_check_icall();
      iVar3 = (*pcVar1)();
      if (iVar3 == 0) {
        *(undefined4 *)(this + 0x170) = 0;
        SetWindowRgn(*(HWND *)(this + 0x20),(HRGN)0x0,1);
      }
      else {
        local_18.left = *(LONG *)(this + 0x138);
        local_18.top = *(LONG *)(this + 0x13c);
        local_18.right = *(LONG *)(this + 0x140);
        local_18.bottom = *(LONG *)(this + 0x144);
        iVar3 = CRect::IsRectNull((CRect *)&local_18);
        if (iVar3 != 0) {
          GetWindowRect(*(HWND *)(this + 0x20),&local_18);
          ptVar15 = &local_18;
          pHVar4 = GetParent(*(HWND *)(this + 0x20));
          pCVar5 = CWnd::FromHandle(pHVar4);
          CWnd::ScreenToClient(pCVar5,ptVar15);
        }
        iVar3 = CRect::IsRectNull((CRect *)&local_18);
        if (iVar3 == 0) {
          pCVar8 = CMFCVisualManager::GetInstance();
          pcVar1 = *(code **)(*(int *)pCVar8 + 0x1f8);
          guard_check_icall(this,local_18.right - local_18.left,local_18.bottom - local_18.top);
          uVar9 = (*pcVar1)();
          *(undefined4 *)(this + 0x170) = uVar9;
        }
      }
    }
    this_00 = (CRect *)(this + 0x138);
    iVar3 = CRect::IsRectNull(this_00);
    if (iVar3 != 0) goto LAB_100c2311;
    iVar13 = *(int *)(this + 0x144) - *(int *)(this + 0x13c);
    iVar12 = *(int *)(this + 0x140) - *(int *)this_00;
    iVar3 = *(int *)(this + 0x13c);
    iVar14 = *(int *)this_00;
  }
  else {
    if ((*(uint *)param_2 & 0x21000000) == 0) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetWindowRect(*(HWND *)(this + 0x20),&local_18);
      ptVar15 = &local_18;
      pHVar4 = GetParent(*(HWND *)(this + 0x20));
      pCVar5 = CWnd::FromHandle(pHVar4);
      CWnd::ScreenToClient(pCVar5,ptVar15);
      *(LONG *)(this + 0x138) = local_18.left;
      *(LONG *)(this + 0x13c) = local_18.top;
      *(LONG *)(this + 0x140) = local_18.right;
      *(LONG *)(this + 0x144) = local_18.bottom;
    }
    if ((*(int *)(this + 0x448) != 0) &&
       (uVar6 = CWnd::GetExStyle((CWnd *)(*(int *)(this + 0x448) + 0x458)), (uVar6 & 0x200) != 0)) {
      CWnd::ModifyStyleEx((CWnd *)(*(int *)(this + 0x448) + 0x458),0x200,0,0x20);
    }
    if (bVar2) goto LAB_100c2311;
    BVar7 = IsZoomed(*(HWND *)(this + 0x20));
    if ((BVar7 == 0) && (uVar11 != 0)) {
      pCVar8 = CMFCVisualManager::GetInstance();
      pcVar1 = *(code **)(*(int *)pCVar8 + 500);
      guard_check_icall();
      iVar3 = (*pcVar1)();
      if (iVar3 == 0) {
        *(undefined4 *)(this + 0x170) = 0;
        SetWindowRgn(*(HWND *)(this + 0x20),(HRGN)0x0,1);
      }
      else {
        pCVar8 = CMFCVisualManager::GetInstance();
        pcVar1 = *(code **)(*(int *)pCVar8 + 0x1f8);
        guard_check_icall(this,*(int *)(this + 0x140) - *(int *)(this + 0x138),
                          *(int *)(this + 0x144) - *(int *)(this + 0x13c));
        uVar9 = (*pcVar1)();
        *(undefined4 *)(this + 0x170) = uVar9;
      }
    }
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    GetClientRect(*(HWND *)(*(int *)(this + 0x448) + 0x478),&local_28);
    local_38.left = 0;
    local_38.top = 0;
    local_38.right = 0;
    local_38.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_38);
    CWnd::ClientToScreen((CWnd *)this,&local_38);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_18);
    local_28.left = local_28.left + (local_18.left - local_38.left);
    local_28.top = local_28.top + (local_18.top - local_38.top);
    iVar12 = local_28.right + (local_18.right - local_38.right);
    iVar13 = local_28.bottom + (local_18.bottom - local_38.bottom);
    local_28.right = iVar12;
    local_28.bottom = iVar13;
    iVar3 = CRect::IsRectNull((CRect *)&local_28);
    if (iVar3 != 0) goto LAB_100c2311;
    iVar13 = iVar13 - local_28.top;
    iVar12 = iVar12 - local_28.left;
    iVar14 = local_28.left;
    iVar3 = local_28.top;
  }
  CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,iVar14,iVar3,iVar12,iVar13,0x14);
LAB_100c2311:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

