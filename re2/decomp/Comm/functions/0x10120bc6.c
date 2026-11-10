// rea decompile_all
// name: CMFCRibbonPanelMenuBar::OnTimer
// address: 0x10120bc6
// body: available
// range: 0x10120bc6-0x10120ec8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonPanelMenuBar::OnTimer(unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonPanelMenuBar::OnTimer(CMFCRibbonPanelMenuBar *this,uint param_1)

{
  code *pcVar1;
  int *piVar2;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  POINT pt_03;
  BOOL BVar3;
  int iVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  CObject *pCVar7;
  CFrameWnd *pCVar8;
  int iVar9;
  tagPOINT local_20;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_20.x = 0;
  local_20.y = 0;
  GetCursorPos(&local_20);
  ScreenToClient(*(HWND *)(this + 0x20),&local_20);
  if (param_1 == 0xec1b) {
    KillTimer(*(HWND *)(this + 0x20),0xec1b);
    pCVar6 = *(CWnd **)(this + 0xd08);
    if ((pCVar6 != (CWnd *)0x0) && (*(int *)(pCVar6 + 0x20) != 0)) {
      CWnd::ShowWindow(pCVar6,0);
    }
    iVar4 = *(int *)(this + 0xeac);
    if (iVar4 != 0) {
      local_18.left = *(LONG *)(iVar4 + 0x74);
      local_18.top = *(LONG *)(iVar4 + 0x78);
      local_18.right = *(LONG *)(iVar4 + 0x7c);
      local_18.bottom = *(LONG *)(iVar4 + 0x80);
      pt.y = local_20.y;
      pt.x = local_20.x;
      BVar3 = PtInRect(&local_18,pt);
      if (BVar3 != 0) goto LAB_10120eb6;
    }
    pcVar1 = *(code **)(*(int *)this + 0x440);
    guard_check_icall();
    (*pcVar1)();
    piVar2 = *(int **)(this + 0xeb0);
    *(undefined4 *)(this + 0xeb0) = 0;
    if (piVar2 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar2 + 0xd0);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      if (iVar4 != 0) {
        pcVar1 = *(code **)(*piVar2 + 0x13c);
        guard_check_icall();
        (*pcVar1)();
      }
    }
  }
  else if (param_1 == 0xec1c) {
    KillTimer(*(HWND *)(this + 0x20),0xec1c);
    if (*(int *)(this + 0xeac) != 0) {
      pHVar5 = GetParent(*(HWND *)(this + 0x20));
      pCVar6 = CWnd::FromHandle(pHVar5);
      pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_101d377c,(CObject *)pCVar6);
      iVar4 = *(int *)(this + 0xeac);
      local_18.left = *(LONG *)(iVar4 + 0x74);
      local_18.top = *(LONG *)(iVar4 + 0x78);
      local_18.right = *(LONG *)(iVar4 + 0x7c);
      local_18.bottom = *(LONG *)(iVar4 + 0x80);
      pt_00.y = local_20.y;
      pt_00.x = local_20.x;
      BVar3 = PtInRect(&local_18,pt_00);
      if (BVar3 == 0) {
        pcVar1 = *(code **)(**(int **)(this + 0xeac) + 0x198);
        guard_check_icall();
        (*pcVar1)();
        *(undefined4 *)(this + 0xeac) = 0;
        if (pCVar7 != (CObject *)0x0) {
          pCVar8 = DAT_101dc4c4;
          if (DAT_101dc4c4 == (CFrameWnd *)0x0) {
            pCVar8 = CWnd::GetTopLevelFrame((CWnd *)this);
          }
          CMFCPopupMenu::ActivatePopupMenu(pCVar8,(CMFCPopupMenu *)pCVar7);
        }
      }
    }
  }
  else if (param_1 == 0xec07) {
    KillTimer(*(HWND *)(this + 0x20),0xec07);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    pt_01.y = local_20.y;
    pt_01.x = local_20.x;
    BVar3 = PtInRect(&local_18,pt_01);
    if (BVar3 != 0) {
      iVar4 = HitTestEx(this,local_20.x,local_20.y);
      if (((iVar4 != -1) && (*(int *)(this + 0xc0c) == iVar4)) && (*(int *)(this + 0xc0c) != -1)) {
        GetCursorPos(&local_20);
        pcVar1 = *(code **)(*(int *)this + 0x254);
        guard_check_icall(CONCAT22((undefined2)local_20.y,(undefined2)local_20.x));
        iVar9 = (*pcVar1)();
        if (iVar9 != 0) {
          NotifyWinEvent(0x8005,*(HWND *)(this + 0x20),-4,iVar4 + 1);
        }
      }
    }
  }
  else if (param_1 == 0xec1d) {
    pt_02.y = local_20.y;
    pt_02.x = local_20.x;
    BVar3 = PtInRect((RECT *)(this + 0xe08),pt_02);
    if (BVar3 == 0) {
      *(undefined4 *)(this + 0xeb8) = 0;
      KillTimer(*(HWND *)(this + 0x20),0xec1d);
      SetRectEmpty((RECT *)(this + 0xe08));
    }
    else {
      iVar4 = *(int *)(this + 0xeb8);
      if (iVar4 != 0) {
        local_18.left = *(LONG *)(iVar4 + 0x74);
        local_18.top = *(LONG *)(iVar4 + 0x78);
        local_18.right = *(LONG *)(iVar4 + 0x7c);
        local_18.bottom = *(LONG *)(iVar4 + 0x80);
        pt_03.y = local_20.y;
        pt_03.x = local_20.x;
        BVar3 = PtInRect(&local_18,pt_03);
        if (BVar3 != 0) {
          pcVar1 = *(code **)(**(int **)(this + 0xeb8) + 0x150);
          guard_check_icall();
          iVar4 = (*pcVar1)();
          if (iVar4 == 0) {
            KillTimer(*(HWND *)(this + 0x20),0xec1d);
          }
        }
      }
    }
  }
LAB_10120eb6:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

