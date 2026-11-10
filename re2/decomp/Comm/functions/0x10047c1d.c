// rea decompile_all
// name: CDialogImpl::PreTranslateMessage
// address: 0x10047c1d
// body: available
// range: 0x10047c1d-0x10047dc4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CDialogImpl::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CDialogImpl::PreTranslateMessage(CDialogImpl *this,tagMSG *param_1)

{
  uint uVar1;
  tagPOINT tVar2;
  tagPOINT tVar3;
  tagPOINT tVar4;
  CMFCPopupMenu *pCVar5;
  CWnd *pCVar6;
  BOOL BVar7;
  int iVar8;
  UINT Msg;
  WPARAM wParam;
  tagPOINT local_c;
  
  uVar1 = param_1->message;
  local_c.x = (LONG)this;
  local_c.y = (LONG)this;
  if (0x105 < uVar1) {
    if (uVar1 != 0x200) {
      if (uVar1 != 0x201) {
        if (uVar1 < 0x204) {
          return 0;
        }
        if (0x205 < uVar1) {
          if (uVar1 < 0x207) {
            return 0;
          }
          if (0x208 < uVar1) {
            if (uVar1 != 0x20a) {
              return 0;
            }
            pCVar5 = CMFCPopupMenu::GetSafeActivePopupMenu();
            if (pCVar5 == (CMFCPopupMenu *)0x0) {
              return 0;
            }
            if (*(int *)(pCVar5 + 0xf7c) == 0) {
              return 0;
            }
            SendMessageW(*(HWND *)(pCVar5 + 0x20),0x20a,param_1->wParam,param_1->lParam);
            return 0;
          }
        }
      }
      local_c.x = (LONG)(short)param_1->lParam;
      local_c.y = (LONG)*(short *)((int)&param_1->lParam + 2);
      pCVar6 = CWnd::FromHandle(param_1->hwnd);
      if ((pCVar6 != (CWnd *)0x0) && (BVar7 = IsWindow(param_1->hwnd), BVar7 != 0)) {
        ClientToScreen(*(HWND *)(pCVar6 + 0x20),&local_c);
      }
      tVar3.y = local_c.y;
      tVar3.x = local_c.x;
      iVar8 = ProcessMouseClick(this,tVar3);
      if (iVar8 == 0) {
        BVar7 = IsWindow(param_1->hwnd);
        if (BVar7 != 0) {
          return 0;
        }
        return 1;
      }
      return 1;
    }
    local_c.x = (LONG)(short)param_1->lParam;
    local_c.y = (LONG)*(short *)((int)&param_1->lParam + 2);
    pCVar6 = CWnd::FromHandle(param_1->hwnd);
    if (pCVar6 != (CWnd *)0x0) {
      ClientToScreen(*(HWND *)(pCVar6 + 0x20),&local_c);
    }
    tVar4.y = local_c.y;
    tVar4.x = local_c.x;
    pCVar5 = (CMFCPopupMenu *)ProcessMouseMove(this,tVar4);
    goto LAB_10047cc5;
  }
  if (uVar1 == 0x105) {
    pCVar5 = CMFCPopupMenu::GetSafeActivePopupMenu();
    goto LAB_10047cc5;
  }
  if (uVar1 < 0xa9) {
    if (uVar1 < 0xa7) {
      if (uVar1 == 0x7b) goto LAB_10047c8c;
      if (uVar1 < 0xa1) {
        return 0;
      }
      if ((0xa2 < uVar1) && (1 < uVar1 - 0xa4)) {
        return 0;
      }
    }
    tVar2.y = (int)*(short *)((int)&param_1->lParam + 2);
    tVar2.x = (int)(short)param_1->lParam;
    pCVar5 = (CMFCPopupMenu *)ProcessMouseClick(this,tVar2);
LAB_10047cc5:
    if (pCVar5 != (CMFCPopupMenu *)0x0) {
      return 1;
    }
    return 0;
  }
  if (uVar1 == 0x100) {
    pCVar5 = CMFCPopupMenu::GetSafeActivePopupMenu();
    if (pCVar5 == (CMFCPopupMenu *)0x0) {
      return 0;
    }
    wParam = param_1->wParam;
    Msg = 0x100;
    goto LAB_10047ca1;
  }
  if (uVar1 != 0x104) {
    return 0;
  }
LAB_10047c8c:
  pCVar5 = CMFCPopupMenu::GetSafeActivePopupMenu();
  if (pCVar5 == (CMFCPopupMenu *)0x0) {
    return 0;
  }
  if (param_1->wParam != 0x12) {
    return 0;
  }
  wParam = 0;
  Msg = 0x10;
LAB_10047ca1:
  SendMessageW(*(HWND *)(pCVar5 + 0x20),Msg,wParam,0);
  return 1;
}

