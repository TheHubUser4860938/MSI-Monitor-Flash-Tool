// rea decompile_all
// name: CMFCPopupMenu::UpdateShadow
// address: 0x4cf39a
// body: available
// range: 0x4cf39a-0x4cf7b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCPopupMenu::UpdateShadow(struct tagRECT *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCPopupMenu::UpdateShadow(CMFCPopupMenu *this,tagRECT *param_1)

{
  code *pcVar1;
  CWnd *pCVar2;
  ulong uVar3;
  uint uVar4;
  BOOL BVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  LONG LVar11;
  uint uVar12;
  uint local_9c;
  RECT local_98;
  RECT local_88;
  tagRECT local_78;
  tagRECT local_68;
  RECT local_58;
  tagRECT local_48;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if (((0 < *(int *)(this + 0x105c)) &&
      (pCVar2 = CWnd::GetTopLevelParent((CWnd *)this), pCVar2 != (CWnd *)0x0)) &&
     (*(int *)(pCVar2 + 0x20) != 0)) {
    uVar3 = CWnd::GetExStyle((CWnd *)this);
    uVar4 = uVar3 & 0x400000;
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    local_38.left = local_18.left;
    local_38.top = local_18.top;
    local_38.right = local_18.right;
    local_38.bottom = local_18.bottom;
    local_48.left = local_18.left;
    local_48.top = local_18.top;
    local_48.right = local_18.right;
    local_48.bottom = local_18.bottom;
    if (param_1 != (tagRECT *)0x0) {
      CopyRect(&local_28,param_1);
      CWnd::ScreenToClient((CWnd *)this,&local_28);
      local_58.left = local_18.left;
      local_58.top = local_18.top;
      local_58.right = local_18.right;
      local_58.bottom = local_18.bottom;
      if (uVar4 == 0) {
        local_58.left = (local_18.right - *(int *)(this + 0x105c)) + -1;
      }
      else {
        local_58.right = local_18.left + 1 + *(int *)(this + 0x105c);
      }
      BVar5 = IntersectRect(&local_38,&local_28,&local_58);
      if (BVar5 == 0) {
        SetRectEmpty(&local_38);
      }
      local_98.left = local_18.left;
      local_98.top = (local_18.bottom - *(int *)(this + 0x105c)) + -1;
      local_98.right = local_18.right;
      local_98.bottom = local_18.bottom;
      BVar5 = IntersectRect(&local_48,&local_28,&local_98);
      if (BVar5 == 0) {
        SetRectEmpty(&local_48);
      }
      BVar5 = IsRectEmpty(&local_38);
      if ((BVar5 != 0) && (BVar5 = IsRectEmpty(&local_48), BVar5 != 0)) goto LAB_004cf7a2;
    }
    local_78.left = 0;
    local_78.top = 0;
    local_78.right = 0;
    local_78.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_78);
    if (DAT_0060c804 == 0) {
      local_28.left = 0;
      local_28.top = 0;
      local_28.right = 0;
      local_28.bottom = 0;
      GetWindowRect(*(HWND *)(pCVar2 + 0x20),&local_28);
      local_58.left = 0;
      local_58.top = 0;
      local_58.right = 0;
      local_58.bottom = 0;
      UnionRect(&local_58,&local_78,&local_28);
      BVar5 = EqualRect(&local_58,&local_28);
      if (BVar5 == 0) goto LAB_004cf7a2;
    }
    iVar10 = *(int *)(this + 0x105c);
    *(undefined4 *)(this + 0x105c) = 0;
    if (((CGdiObject *)(this + 0x1060) != (CGdiObject *)0x0) && (*(int *)(this + 0x1064) != 0)) {
      CGdiObject::DeleteObject((CGdiObject *)(this + 0x1060));
    }
    if (((CGdiObject *)(this + 0x1068) != (CGdiObject *)0x0) && (*(int *)(this + 0x106c) != 0)) {
      CGdiObject::DeleteObject((CGdiObject *)(this + 0x1068));
    }
    local_9c = 0x41c;
    local_68.left = -1;
    local_68.top = -1;
    local_68.right = -1;
    local_68.bottom = -1;
    pcVar1 = *(code **)(*(int *)this + 0x1c8);
    guard_check_icall();
    iVar6 = (*pcVar1)();
    *(undefined4 *)(iVar6 + 0xbdc) = 1;
    if (uVar4 == 0) {
      uVar12 = 0x41e;
      local_9c = 0x41e;
      iVar7 = (local_18.bottom - local_18.top) - iVar10;
      iVar8 = (local_18.right - local_18.left) - iVar10;
      LVar11 = -1;
      iVar9 = -1;
    }
    else {
      GetWindowRect(*(HWND *)(this + 0x20),&local_68);
      iVar7 = (local_18.bottom - local_18.top) - iVar10;
      uVar12 = 0x41c;
      iVar8 = (local_18.right - local_18.left) - iVar10;
      iVar9 = local_68.left + iVar10;
      LVar11 = local_68.top;
    }
    CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,iVar9,LVar11,iVar8,iVar7,uVar12);
    local_88.left = local_38.left;
    local_88.top = local_38.top;
    local_88.right = local_38.right;
    local_88.bottom = local_38.bottom;
    BVar5 = IsRectEmpty(&local_38);
    if (BVar5 == 0) {
      MapWindowPoints(*(HWND *)(this + 0x20),*(HWND *)(pCVar2 + 0x20),(LPPOINT)&local_88,2);
      RedrawWindow(*(HWND *)(pCVar2 + 0x20),&local_88,(HRGN)0x0,0x185);
    }
    local_88.left = local_48.left;
    local_88.top = local_48.top;
    local_88.right = local_48.right;
    local_88.bottom = local_48.bottom;
    BVar5 = IsRectEmpty(&local_48);
    if ((BVar5 == 0) && (BVar5 = EqualRect(&local_38,&local_48), BVar5 == 0)) {
      MapWindowPoints(*(HWND *)(this + 0x20),*(HWND *)(pCVar2 + 0x20),(LPPOINT)&local_88,2);
      RedrawWindow(*(HWND *)(pCVar2 + 0x20),&local_88,(HRGN)0x0,0x185);
    }
    UpdateWindow(*(HWND *)(pCVar2 + 0x20));
    *(int *)(this + 0x105c) = iVar10;
    iVar10 = local_68.left;
    iVar7 = local_68.top;
    if (uVar4 == 0) {
      iVar10 = -1;
      iVar7 = -1;
    }
    CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,iVar10,iVar7,local_18.right - local_18.left,
                       local_18.bottom - local_18.top,local_9c);
    BVar5 = IsRectEmpty(&local_38);
    if (BVar5 == 0) {
      InvalidateRect(*(HWND *)(this + 0x20),&local_38,1);
    }
    BVar5 = IsRectEmpty(&local_48);
    if ((BVar5 == 0) && (BVar5 = EqualRect(&local_38,&local_48), BVar5 == 0)) {
      InvalidateRect(*(HWND *)(this + 0x20),&local_48,1);
    }
    UpdateWindow(*(HWND *)(this + 0x20));
    *(undefined4 *)(iVar6 + 0xbdc) = 0;
  }
LAB_004cf7a2:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

