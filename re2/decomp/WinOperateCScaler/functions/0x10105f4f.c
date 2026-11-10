// rea decompile_all
// name: CMDIClientAreaWnd::OnTabGroupMouseMove
// address: 0x10105f4f
// body: available
// range: 0x10105f4f-0x1010628d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: long __thiscall CMDIClientAreaWnd::OnTabGroupMouseMove(unsigned int,long)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CMDIClientAreaWnd::OnTabGroupMouseMove(CMDIClientAreaWnd *this,uint param_1,long param_2)

{
  LPRECT lprc;
  tagRECT *ptVar1;
  code *pcVar2;
  POINT pt;
  POINT pt_00;
  HWND pHVar3;
  CWnd *pCVar4;
  CObject *pCVar5;
  int iVar6;
  HCURSOR pHVar7;
  AFX_GLOBAL_DATA *pAVar8;
  AFX_MODULE_STATE *pAVar9;
  BOOL BVar10;
  int iVar11;
  long lVar12;
  CMDIClientAreaWnd *pCVar13;
  bool bVar14;
  tagPOINT local_64;
  CObject *local_5c;
  tagPOINT local_58;
  CObject *local_50;
  CMDIClientAreaWnd *local_4c;
  RECT local_48;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_4c = this;
  pHVar3 = GetCapture();
  pCVar4 = CWnd::FromHandle(pHVar3);
  pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_101b54cc,(CObject *)pCVar4);
  local_5c = pCVar5;
  if (pCVar5 == (CObject *)0x0) goto LAB_1010627d;
  if (*(int *)(this + 0x2b04) == 1) {
    pcVar2 = *(code **)(*(int *)pCVar5 + 0x1ac);
    guard_check_icall();
    pCVar5 = local_5c;
    iVar6 = (*pcVar2)();
    if (iVar6 == 1) goto LAB_1010627d;
  }
  local_50 = (CObject *)(int)(short)param_2;
  local_64.y = (LONG)(short)((uint)param_2 >> 0x10);
  pcVar2 = *(code **)(*(int *)pCVar5 + 0x164);
  guard_check_icall(local_50,local_64.y);
  iVar6 = (*pcVar2)();
  if (iVar6 == 0) {
    local_58.x = (LONG)local_50;
    local_58.y = local_64.y;
    ClientToScreen(*(HWND *)(pCVar5 + 0x20),&local_58);
    pCVar13 = local_4c;
    iVar6 = 0;
    local_38.left = 0;
    local_38.top = 0;
    local_38.right = 0;
    local_38.bottom = 0;
    GetClientRect(*(HWND *)(local_4c + 0x20),&local_38);
    CWnd::ClientToScreen((CWnd *)pCVar13,&local_38);
    pAVar8 = GetGlobalData();
    if (*(int *)(pAVar8 + 0x100) == 0) {
      AfxGetModuleState();
      pAVar9 = AfxGetModuleState();
      pHVar7 = LoadCursorW(*(HINSTANCE *)(pAVar9 + 0xc),(LPCWSTR)0x4297);
      pAVar8 = GetGlobalData();
      *(HCURSOR *)(pAVar8 + 0x100) = pHVar7;
      AfxGetModuleState();
      pAVar9 = AfxGetModuleState();
      pHVar7 = LoadCursorW(*(HINSTANCE *)(pAVar9 + 0xc),(LPCWSTR)0x4298);
      pAVar8 = GetGlobalData();
      *(HCURSOR *)(pAVar8 + 0x104) = pHVar7;
      pCVar13 = local_4c;
    }
    pt.y = local_58.y;
    pt.x = local_58.x;
    BVar10 = PtInRect(&local_38,pt);
    if (BVar10 == 0) {
      pAVar8 = GetGlobalData();
      SetCursor(*(HCURSOR *)(pAVar8 + 0x104));
    }
    else {
      pAVar8 = GetGlobalData();
      SetCursor(*(HCURSOR *)(pAVar8 + 0x100));
      local_50 = (CObject *)TabWndFromPoint(pCVar13,local_58.x,local_58.y);
      if (local_50 != (CObject *)0x0) {
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        GetWindowRect(*(HWND *)(local_50 + 0x20),&local_18);
        local_48.left = local_18.left;
        local_48.top = local_18.top;
        local_48.right = local_18.right;
        local_48.bottom = local_18.bottom;
        iVar11 = *(int *)(local_4c + 0x2b90);
        if (iVar11 == 0) {
          bVar14 = local_18.right - local_58.x < local_18.bottom - local_58.y;
        }
        else {
          bVar14 = iVar11 == 1;
        }
        if ((iVar11 == 1) || (bVar14)) {
          iVar6 = 1;
          local_48.left = local_18.right - *(int *)(local_4c + 0x2b5c);
        }
        else {
          local_48.top = local_18.bottom - *(int *)(local_4c + 0x2b5c);
        }
        local_28.left = local_18.left;
        local_28.top = local_18.top;
        local_28.right = local_18.right;
        local_28.bottom = local_18.bottom;
        if (iVar6 == 0) {
          local_28.top = local_18.bottom - (local_18.bottom - local_18.top) / 2;
        }
        else {
          local_28.left = local_18.right - (local_18.right - local_18.left) / 2;
        }
        pt_00.y = local_58.y;
        pt_00.x = local_58.x;
        BVar10 = PtInRect(&local_48,pt_00);
        pCVar5 = local_50;
        if (BVar10 == 0) {
          if (local_50 != local_5c) {
            local_64.x = local_58.x;
            local_64.y = local_58.y;
            ScreenToClient(*(HWND *)(local_50 + 0x20),&local_64);
            pcVar2 = *(code **)(*(int *)pCVar5 + 0x164);
            guard_check_icall(local_64.x,local_64.y);
            iVar11 = (*pcVar2)();
            if (iVar11 != 0) {
              local_28.left = *(LONG *)(pCVar5 + 0x2ec);
              local_28.top = *(LONG *)(pCVar5 + 0x2f0);
              local_28.right = *(LONG *)(pCVar5 + 0x2f4);
              local_28.bottom = *(LONG *)(pCVar5 + 0x2f8);
              CWnd::ClientToScreen((CWnd *)local_50,&local_28);
              goto LAB_10106253;
            }
          }
LAB_1010624d:
          SetRectEmpty(&local_28);
        }
        else if (local_50 == local_5c) {
          pcVar2 = *(code **)(*(int *)local_5c + 0x1ac);
          guard_check_icall();
          iVar11 = (*pcVar2)();
          if (iVar11 == 1) goto LAB_1010624d;
        }
LAB_10106253:
        pCVar13 = local_4c;
        ptVar1 = (tagRECT *)(local_4c + 0x2b64);
        DrawNewGroupRect(local_4c,&local_28,ptVar1);
        ptVar1->left = local_28.left;
        *(int *)(local_4c + 0x2b34) = iVar6;
        *(LONG *)(pCVar13 + 0x2b68) = local_28.top;
        *(LONG *)(pCVar13 + 0x2b6c) = local_28.right;
        *(LONG *)(pCVar13 + 0x2b70) = local_28.bottom;
        goto LAB_1010627d;
      }
    }
  }
  else {
    AfxGetModuleState();
    pHVar7 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
    SetCursor(pHVar7);
  }
  lprc = (LPRECT)(local_4c + 0x2b64);
  DrawNewGroupRect(local_4c,(tagRECT *)0x0,lprc);
  SetRectEmpty(lprc);
LAB_1010627d:
  lVar12 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar12;
}

