// rea decompile_all
// name: CDockingManager::AlignAutoHidePane
// address: 0x100ab3b5
// body: available
// range: 0x100ab3b5-0x100ab6bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CDockingManager::AlignAutoHidePane(class CPaneDivider *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDockingManager::AlignAutoHidePane(CDockingManager *this,CPaneDivider *param_1,int param_2)

{
  code *pcVar1;
  CPaneDivider *pCVar2;
  uint uVar3;
  ulong uVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  CBasePane *pCVar7;
  CBasePane *pCVar8;
  int dx;
  int dy;
  tagRECT *ptVar9;
  int local_3c;
  CBasePane *local_38;
  uint local_34;
  CPaneDivider *local_30;
  CBasePane *local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  local_30 = param_1;
  GetWindowRect(*(HWND *)(param_1 + 0x20),&local_18);
  pcVar1 = *(code **)(*(int *)param_1 + 0x164);
  guard_check_icall();
  local_2c = (CBasePane *)(*pcVar1)();
  pcVar1 = *(code **)(*(int *)param_1 + 0x194);
  guard_check_icall();
  uVar3 = (*pcVar1)();
  uVar4 = CWnd::GetExStyle(*(CWnd **)(this + 0xe4));
  pCVar2 = local_30;
  local_34 = uVar4 & 0x400000;
  if (param_2 != 0) {
    pcVar1 = *(code **)(*(int *)local_30 + 0x260);
    guard_check_icall(&local_3c,0,local_2c);
    (*pcVar1)();
    if (local_2c == (CBasePane *)0x0) {
      if ((uVar3 & 0x1000) == 0) {
        local_18.left = local_18.right - local_3c;
      }
      else {
        local_18.right = local_3c + local_18.left;
      }
    }
    else if ((uVar3 & 0x2000) == 0) {
      local_18.top = local_18.bottom + -(int)local_38;
    }
    else {
      local_18.bottom = (LONG)(local_38 + local_18.top);
    }
    local_28.left = *(LONG *)(this + 0x108);
    local_28.top = *(LONG *)(this + 0x10c);
    local_28.right = *(LONG *)(this + 0x110);
    local_28.bottom = *(LONG *)(this + 0x114);
    CWnd::ClientToScreen(*(CWnd **)(this + 0xe4),&local_28);
    AlignByRect(this,(CRect *)&local_28,(CRect *)&local_18,uVar3,(int)local_2c,1);
    local_34 = 0;
    pcVar1 = *(code **)(*(int *)local_30 + 0x284);
    guard_check_icall(&local_18,&local_34);
    (*pcVar1)();
    goto LAB_100ab67b;
  }
  local_38 = CPaneDivider::GetFirstPane(local_30);
  dy = 0;
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  GetWindowRect(*(HWND *)(local_38 + 0x20),&local_28);
  ptVar9 = &local_18;
  pHVar5 = GetParent(*(HWND *)(pCVar2 + 0x20));
  pCVar6 = CWnd::FromHandle(pHVar5);
  CWnd::ScreenToClient(pCVar6,ptVar9);
  ptVar9 = &local_28;
  pHVar5 = GetParent(*(HWND *)(pCVar2 + 0x20));
  pCVar6 = CWnd::FromHandle(pHVar5);
  CWnd::ScreenToClient(pCVar6,ptVar9);
  if (local_2c == (CBasePane *)0x0) {
    local_28.top = *(LONG *)(this + 0x10c);
    local_28.bottom = *(LONG *)(this + 0x114);
    local_18.top = local_28.top;
    local_18.bottom = local_28.bottom;
  }
  else {
    local_28.left = *(LONG *)(this + 0x108);
    local_28.right = *(LONG *)(this + 0x110);
    local_18.left = local_28.left;
    local_18.right = local_28.right;
  }
  dx = 0;
  if (uVar3 == 0x1000) {
    if (local_34 == 0) {
LAB_100ab5e4:
      if (local_18.left != *(int *)(this + 0x108)) {
        dx = *(int *)(this + 0x108) - local_18.left;
      }
    }
    else {
LAB_100ab6a5:
      if (local_18.right != *(int *)(this + 0x110)) {
        dx = *(int *)(this + 0x110) - local_18.right;
      }
    }
  }
  else {
    if (uVar3 == 0x2000) {
      pCVar8 = *(CBasePane **)(this + 0x10c);
      pCVar7 = (CBasePane *)local_18.top;
    }
    else {
      if (uVar3 == 0x4000) {
        if (local_34 == 0) goto LAB_100ab6a5;
        goto LAB_100ab5e4;
      }
      if (uVar3 != 0x8000) goto LAB_100ab5f2;
      pCVar8 = *(CBasePane **)(this + 0x114);
      pCVar7 = (CBasePane *)local_18.bottom;
    }
    if (pCVar7 != pCVar8) {
      dy = (int)pCVar8 - (int)pCVar7;
    }
  }
LAB_100ab5f2:
  local_2c = (CBasePane *)local_18.bottom;
  OffsetRect(&local_18,dx,dy);
  OffsetRect(&local_28,dx,dy);
  pcVar1 = *(code **)(*(int *)local_30 + 0x238);
  guard_check_icall(0,local_18.left,local_18.top,local_18.right - local_18.left,
                    local_18.bottom - local_18.top,0x14,0);
  (*pcVar1)();
  pCVar8 = local_38;
  pcVar1 = *(code **)(*(int *)local_38 + 0x238);
  guard_check_icall(0,local_28.left,local_28.top,local_28.right - local_28.left,
                    local_28.bottom - local_28.top,0x14,0);
  (*pcVar1)();
  pcVar1 = *(code **)(*(int *)pCVar8 + 0x210);
  guard_check_icall();
  (*pcVar1)();
LAB_100ab67b:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

