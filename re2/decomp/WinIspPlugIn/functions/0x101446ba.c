// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnDrawMenuBorder
// address: 0x101446ba
// body: available
// range: 0x101446ba-0x10144a4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCVisualManagerOfficeXP::OnDrawMenuBorder(class CDC *,class
   CMFCPopupMenu *,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOfficeXP::OnDrawMenuBorder
          (CMFCVisualManagerOfficeXP *this,CDC *param_1,CWnd *param_2,int param_4,int param_5,
          int param_6,int param_7)

{
  int *piVar1;
  code *pcVar2;
  ulong uVar3;
  HBRUSH pHVar4;
  CMFCPopupMenu *pCVar5;
  CMFCToolBarMenuButton *pCVar6;
  BOOL BVar7;
  int iVar8;
  int iVar9;
  int yTop;
  int yBottom;
  int local_54;
  int local_4c;
  RECT local_48;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  uVar3 = CWnd::GetExStyle(param_2);
  CDC::Draw3dRect(param_1,(tagRECT *)&param_4,*(ulong *)(this + 0xe4),*(ulong *)(this + 0xe4));
  InflateRect((LPRECT)&param_4,-1,-1);
  CDC::Draw3dRect(param_1,(tagRECT *)&param_4,*(ulong *)(this + 0xc0),*(ulong *)(this + 0xc0));
  local_48.right = 2;
  local_48.left = 1;
  local_48.top = 1;
  local_48.bottom = param_7 + -1;
  pHVar4 = (HBRUSH)0x0;
  if (this != (CMFCVisualManagerOfficeXP *)0xffffff04) {
    pHVar4 = *(HBRUSH *)(this + 0x100);
  }
  FillRect(*(HDC *)(param_1 + 4),&local_48,pHVar4);
  pCVar5 = CMFCPopupMenu::GetParentPopupMenu((CMFCPopupMenu *)param_2);
  if ((((pCVar5 != (CMFCPopupMenu *)0x0) && (*(int *)(pCVar5 + 0x1160) != 0)) &&
      ((uVar3 & 0x400000) == 0)) &&
     ((*(int *)(param_2 + 0x158) != 0 && (*(int *)(*(int *)(param_2 + 0x158) + 0xb4) != 0)))) {
    pCVar5 = CMFCPopupMenu::GetParentPopupMenu((CMFCPopupMenu *)param_2);
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    GetWindowRect(*(HWND *)(pCVar5 + 0x20),&local_28);
    local_38.left = 0;
    local_38.top = 0;
    local_38.right = 0;
    local_38.bottom = 0;
    GetWindowRect(*(HWND *)(param_2 + 0x20),&local_38);
    pCVar6 = CMFCPopupMenu::GetMenuItem((CMFCPopupMenu *)param_2,0);
    iVar8 = *(int *)(pCVar6 + 0x58);
    yBottom = *(int *)(pCVar6 + 0x60);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    SetRectEmpty(&local_18);
    iVar9 = param_4;
    if (local_38.left < local_28.left) {
      iVar9 = param_6;
    }
    yTop = param_5;
    if (local_38.top < local_28.top) {
      yTop = (iVar8 - yBottom) + param_7;
      yBottom = param_7;
    }
    SetRect(&local_18,iVar9 + -1,yTop,iVar9 + 1,yBottom);
    BVar7 = IsRectEmpty(&local_18);
    if (BVar7 == 0) {
      pHVar4 = (HBRUSH)0x0;
      if (this != (CMFCVisualManagerOfficeXP *)0xffffff04) {
        pHVar4 = *(HBRUSH *)(this + 0x100);
      }
      FillRect(*(HDC *)(param_1 + 4),&local_18,pHVar4);
    }
  }
  if (((DAT_10245ca8 != 0) || (piVar1 = *(int **)(param_2 + 0x158), *(int *)(this + 0x14c) == 0)) ||
     ((piVar1 == (int *)0x0 ||
      (pCVar5 = CMFCPopupMenu::GetParentPopupMenu((CMFCPopupMenu *)param_2),
      pCVar5 != (CMFCPopupMenu *)0x0)))) goto LAB_10144a3b;
  pcVar2 = *(code **)(*piVar1 + 0xe4);
  guard_check_icall();
  iVar8 = (*pcVar2)();
  if (iVar8 == 0) goto LAB_10144a3b;
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  SetRectEmpty(&local_28);
  local_18.left = piVar1[0x15];
  local_18.top = piVar1[0x16];
  local_18.right = piVar1[0x17];
  local_18.bottom = piVar1[0x18];
  CWnd::ClientToScreen((CWnd *)piVar1[0x1b],&local_18);
  CWnd::ScreenToClient(param_2,&local_18);
  iVar8 = *(int *)(param_2 + 0xf30);
  if (iVar8 == 1) {
    local_4c = param_5;
    local_54 = param_5 + -1;
LAB_101449b1:
    local_28.left = local_18.left + 1;
    local_28.right = local_18.right + -1;
    local_28.top = local_54;
    local_28.bottom = local_4c;
    if ((param_6 - param_4) + 2 < local_28.right - local_28.left) goto LAB_10144a3b;
  }
  else {
    if (iVar8 == 2) {
      local_54 = param_7;
      local_4c = param_7 + 1;
      goto LAB_101449b1;
    }
    if (iVar8 == 3) {
      local_28.top = local_18.top + 1;
      local_28.left = param_4 + -1;
      local_28.bottom = local_18.bottom + -1;
      local_28.right = param_4;
      if ((param_7 - param_5) + 2 < local_28.bottom - local_28.top) goto LAB_10144a3b;
    }
    else if (iVar8 == 4) {
      local_28.top = local_18.top + 1;
      local_28.right = param_6 + 1;
      local_28.bottom = local_18.bottom + -1;
      local_28.left = param_6;
      if ((param_7 - param_5) + 2 < local_28.bottom - local_28.top) goto LAB_10144a3b;
    }
  }
  pHVar4 = (HBRUSH)0x0;
  local_38.left = param_4;
  local_38.top = param_5;
  local_38.right = param_6;
  local_38.bottom = param_7;
  InflateRect(&local_38,1,1);
  IntersectRect(&local_28,&local_28,&local_38);
  InflateRect(&local_18,1,1);
  IntersectRect(&local_28,&local_28,&local_18);
  if (this != (CMFCVisualManagerOfficeXP *)0xffffff04) {
    pHVar4 = *(HBRUSH *)(this + 0x100);
  }
  FillRect(*(HDC *)(param_1 + 4),&local_28,pHVar4);
LAB_10144a3b:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

