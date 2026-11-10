// rea decompile_all
// name: CMDIClientAreaWnd::OnMoveTabComplete
// address: 0x10130b28
// body: available
// range: 0x10130b28-0x10130d12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: long __thiscall CMDIClientAreaWnd::OnMoveTabComplete(unsigned int,long)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CMDIClientAreaWnd::OnMoveTabComplete(CMDIClientAreaWnd *this,uint param_1,long param_2)

{
  LPRECT lprc;
  code *pcVar1;
  CMDIClientAreaWnd *this_00;
  CMFCTabCtrl *pCVar2;
  BOOL BVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  CMFCTabCtrl *pCVar9;
  long lVar10;
  tagRECT *ptVar11;
  tagPOINT local_48;
  tagPOINT local_40;
  CObject *local_38;
  CMFCTabCtrl *local_34;
  CMDIClientAreaWnd *local_30;
  CWnd *local_2c;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  lprc = (LPRECT)(this + 0x2b64);
  local_2c = (CWnd *)param_1;
  local_28.left = lprc->left;
  local_28.top = *(LONG *)(this + 0x2b68);
  local_28.right = *(LONG *)(this + 0x2b6c);
  local_28.bottom = *(LONG *)(this + 0x2b70);
  local_30 = this;
  DrawNewGroupRect(this,(tagRECT *)0x0,lprc);
  SetRectEmpty(lprc);
  if (local_2c == (CWnd *)0x0) goto LAB_10130cfe;
  local_40.x = (LONG)(short)param_2;
  local_40.y = (LONG)(short)((uint)param_2 >> 0x10);
  ClientToScreen(*(HWND *)(local_2c + 0x20),&local_40);
  this_00 = local_30;
  pCVar2 = TabWndFromPoint(local_30,local_40.x,local_40.y);
  local_34 = pCVar2;
  if (pCVar2 == (CMFCTabCtrl *)0x0) goto LAB_10130cfe;
  local_30 = (CMDIClientAreaWnd *)0x1;
  BVar3 = IsRectEmpty(&local_28);
  if (BVar3 != 0) {
    pHVar4 = GetParent(*(HWND *)(this_00 + 0x20));
    pCVar5 = CWnd::FromHandle(pHVar4);
    local_38 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_101c56b8,(CObject *)pCVar5)
    ;
    local_48.x = 0;
    local_48.y = 0;
    GetCursorPos(&local_48);
    uVar6 = GetMDITabsContextMenuAllowedItems(this_00);
    if (uVar6 != 0) {
      pcVar1 = *(code **)(*(int *)local_38 + 0x1d0);
      guard_check_icall(local_48.x,local_48.y,uVar6,1);
      local_30 = (CMDIClientAreaWnd *)(*pcVar1)();
    }
  }
  pCVar9 = local_34;
  local_18.left = *(LONG *)(pCVar2 + 0x2ec);
  local_18.top = *(LONG *)(pCVar2 + 0x2f0);
  local_18.right = *(LONG *)(pCVar2 + 0x2f4);
  local_18.bottom = *(LONG *)(pCVar2 + 0x2f8);
  CWnd::ClientToScreen((CWnd *)local_34,&local_18);
  if (local_30 == (CMDIClientAreaWnd *)0x0) {
    if (local_2c == (CWnd *)pCVar9) {
      pcVar1 = *(code **)(*(int *)local_2c + 0x1ac);
      guard_check_icall();
      iVar7 = (*pcVar1)();
      if (iVar7 < 2) goto LAB_10130cfe;
      if (*(int *)(this_00 + 0x2b90) != 2) {
        local_18.left = local_18.right - (local_18.right - local_18.left) / 2;
      }
      else {
        local_18.top = local_18.bottom - (local_18.bottom - local_18.top) / 2;
      }
      uVar8 = (uint)(*(int *)(this_00 + 0x2b90) != 2);
      ptVar11 = &local_18;
LAB_10130cdd:
      pCVar9 = CreateNewTabGroup(this_00,local_34,ptVar11->left,ptVar11->top,ptVar11->right,
                                 ptVar11->bottom,uVar8);
    }
  }
  else {
    BVar3 = IsRectEmpty(&local_28);
    if (BVar3 != 0) goto LAB_10130cfe;
    BVar3 = EqualRect(&local_28,&local_18);
    if (BVar3 == 0) {
      uVar8 = *(uint *)(this_00 + 0x2b34);
      ptVar11 = &local_28;
      goto LAB_10130cdd;
    }
  }
  MoveWindowToTabGroup(this_00,(CMFCTabCtrl *)local_2c,pCVar9,-1);
LAB_10130cfe:
  lVar10 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar10;
}

