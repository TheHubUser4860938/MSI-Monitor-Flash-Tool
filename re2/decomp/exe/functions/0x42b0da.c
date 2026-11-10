// rea decompile_all
// name: CDialogImpl::ProcessMouseClick
// address: 0x42b0da
// body: available
// range: 0x42b0da-0x42b2b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CDialogImpl::ProcessMouseClick(struct tagPOINT)
   
   Library: Visual Studio 2015 Release */

int __thiscall CDialogImpl::ProcessMouseClick(CDialogImpl *this,tagPOINT param_1)

{
  code *pcVar1;
  POINT pt;
  CMFCPopupMenu *pCVar2;
  MENUAREA_TYPE MVar3;
  CObject *pCVar4;
  BOOL BVar5;
  int iVar6;
  HWND pHVar7;
  CWnd *pCVar8;
  tagPOINT local_18;
  LONG local_10;
  CObject *local_c;
  CDialogImpl *local_8;
  
  local_8 = this;
  pCVar2 = CMFCPopupMenu::GetSafeActivePopupMenu();
  if (DAT_00614ed8 != 0) {
    return 0;
  }
  if (pCVar2 == (CMFCPopupMenu *)0x0) {
    return 0;
  }
  local_18.x = param_1.x;
  local_18.y = param_1.y;
  MVar3 = CMFCPopupMenu::CheckArea(pCVar2,(CPoint *)&local_18);
  if (MVar3 != 4) {
    if ((MVar3 != 1) && (MVar3 != 2)) {
      return 0;
    }
    SendMessageW(*(HWND *)(pCVar2 + 0x20),0x10,0,0);
    pCVar8 = *(CWnd **)(this + 4);
LAB_0042b2ac:
    CWnd::SetFocus(pCVar8);
    return 1;
  }
  iVar6 = *(int *)(pCVar2 + 0x158);
  if ((iVar6 != 0) && (local_c = *(CObject **)(iVar6 + 0x6c), local_c != (CObject *)0x0)) {
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenuBar_0060c6b4,local_c);
    local_18.x = param_1.x;
    local_18.y = param_1.y;
    ScreenToClient(*(HWND *)(local_c + 0x20),&local_18);
    pt.y = local_18.y;
    pt.x = local_18.x;
    BVar5 = PtInRect((RECT *)(iVar6 + 0x54),pt);
    if (BVar5 != 0) {
      if (pCVar4 != (CObject *)0x0) {
        return 1;
      }
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x1cc);
      guard_check_icall();
      iVar6 = (*pcVar1)();
      if (iVar6 != 0) {
        return 1;
      }
      SendMessageW(*(HWND *)(pCVar2 + 0x20),0x10,0,0);
      return 1;
    }
    this = local_8;
    if (pCVar4 != (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)pCVar4 + 0x440);
      guard_check_icall();
      (*pcVar1)();
      pHVar7 = GetParent(*(HWND *)(pCVar4 + 0x20));
      pCVar8 = CWnd::FromHandle(pHVar7);
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_0060c808,(CObject *)pCVar8);
      this = local_8;
      if (pCVar4 != (CObject *)0x0) {
        local_10 = param_1.x;
        local_c = (CObject *)param_1.y;
        MVar3 = CMFCPopupMenu::CheckArea((CMFCPopupMenu *)pCVar4,(CPoint *)&local_10);
        if (MVar3 == 0) {
          return 0;
        }
        this = local_8;
        if (0 < (int)MVar3) {
          if ((int)MVar3 < 3) {
            SendMessageW(*(HWND *)(pCVar4 + 0x20),0x10,0,0);
            pCVar8 = *(CWnd **)(local_8 + 4);
            goto LAB_0042b2ac;
          }
          if (MVar3 == 3) {
            return 0;
          }
          if (MVar3 == 5) {
            return 0;
          }
        }
      }
    }
  }
  pCVar2 = CMFCPopupMenu::GetSafeActivePopupMenu();
  if (pCVar2 != (CMFCPopupMenu *)0x0) {
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x1cc);
    guard_check_icall();
    iVar6 = (*pcVar1)();
    if (iVar6 == 0) {
      SendMessageW(*(HWND *)(pCVar2 + 0x20),0x10,0,0);
      pHVar7 = GetFocus();
      pCVar8 = CWnd::FromHandle(pHVar7);
      if ((pCVar8 != (CWnd *)0x0) && (iVar6 = FUN_0043970d(&PTR_s_CMFCToolBar_0060c580), iVar6 != 0)
         ) {
        CWnd::SetFocus(*(CWnd **)(this + 4));
      }
    }
  }
  return 0;
}

