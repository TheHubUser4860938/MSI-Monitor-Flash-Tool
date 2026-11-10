// rea decompile_all
// name: CMFCToolBarComboBoxEdit::PreTranslateMessage
// address: 0x51a711
// body: available
// range: 0x51a711-0x51a9d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBarComboBoxEdit::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCToolBarComboBoxEdit::PreTranslateMessage(CMFCToolBarComboBoxEdit *this,tagMSG *param_1)

{
  ushort uVar1;
  uint uVar2;
  WPARAM WVar3;
  SHORT SVar4;
  LRESULT LVar5;
  int iVar6;
  CWnd *pCVar7;
  HWND pHVar8;
  CFrameWnd *pCVar9;
  LPARAM lParam;
  
  lParam = 0;
  if ((param_1->message == 0x20a) && (*(int *)(*(int *)(this + 0x80) + 0xb4) != 0)) {
    LVar5 = SendMessageW(*(HWND *)(*(int *)(*(int *)(this + 0x80) + 0xb4) + 0x20),0x157,0,0);
    if (LVar5 == 0) goto LAB_0051a771;
    iVar6 = *(int *)(this + 0x80);
LAB_0051a751:
    SendMessageW(*(HWND *)(*(int *)(iVar6 + 0xb4) + 0x20),param_1->message,param_1->wParam,
                 param_1->lParam);
LAB_0051a769:
    iVar6 = 1;
  }
  else {
LAB_0051a771:
    if (param_1->message == 0x100) {
      SVar4 = GetKeyState(0x12);
      if (-1 < SVar4) {
        SVar4 = GetKeyState(0x11);
        if ((-1 < SVar4) && (*(int *)(*(int *)(this + 0x80) + 0xb4) != 0)) {
          uVar2 = param_1->wParam;
          if (uVar2 == 0xd) {
LAB_0051a7f0:
            CWnd::SetFocus((CWnd *)this);
            LVar5 = SendMessageW(*(HWND *)(*(int *)(*(int *)(this + 0x80) + 0xb4) + 0x20),0x157,0,0)
            ;
            iVar6 = *(int *)(this + 0x80);
            if (LVar5 != 0) goto LAB_0051a751;
            pCVar7 = CWnd::GetOwner(*(CWnd **)(iVar6 + 0xb4));
            if (pCVar7 != (CWnd *)0x0) {
              CWnd::GetWindowTextW
                        ((CWnd *)this,
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         (*(int *)(this + 0x80) + 0xb8));
              pCVar7 = *(CWnd **)(*(int *)(this + 0x80) + 0xb4);
              if (pCVar7 != (CWnd *)0x0) {
                lParam = *(LPARAM *)(pCVar7 + 0x20);
              }
              uVar1 = *(ushort *)(*(int *)(this + 0x80) + 0x20);
              pCVar7 = CWnd::GetOwner(pCVar7);
              PostMessageW(*(HWND *)(pCVar7 + 0x20),0x111,(uint)uVar1,lParam);
            }
            goto LAB_0051a769;
          }
          if ((0x20 < uVar2) && (((uVar2 < 0x25 || (uVar2 == 0x26)) || (uVar2 == 0x28)))) {
            LVar5 = SendMessageW(*(HWND *)(*(int *)(*(int *)(this + 0x80) + 0xb4) + 0x20),0x157,0,0)
            ;
            if (LVar5 != 0) goto LAB_0051a7f0;
          }
        }
      }
      WVar3 = param_1->wParam;
      if (WVar3 == 9) {
        pHVar8 = GetParent(*(HWND *)(this + 0x20));
        pCVar7 = CWnd::FromHandle(pHVar8);
        if (pCVar7 != (CWnd *)0x0) {
          pHVar8 = GetParent(*(HWND *)(this + 0x20));
          pCVar7 = CWnd::FromHandle(pHVar8);
          pCVar7 = CWnd::GetNextDlgTabItem(pCVar7,(CWnd *)this,0);
LAB_0051a9bb:
          CWnd::SetFocus(pCVar7);
          goto LAB_0051a769;
        }
      }
      else if (WVar3 == 0x1b) {
        if (*(int *)(*(int *)(this + 0x80) + 0xb4) != 0) {
          SendMessageW(*(HWND *)(*(int *)(*(int *)(this + 0x80) + 0xb4) + 0x20),0x14f,0,0);
        }
        pCVar9 = CWnd::GetTopLevelFrame((CWnd *)this);
        if (pCVar9 != (CFrameWnd *)0x0) {
          pCVar7 = (CWnd *)CWnd::GetTopLevelFrame((CWnd *)this);
          goto LAB_0051a9bb;
        }
      }
      else if ((WVar3 == 0x26) || (WVar3 == 0x28)) {
        SVar4 = GetKeyState(0x12);
        if (-1 < SVar4) {
          SVar4 = GetKeyState(0x11);
          if ((-1 < SVar4) && (*(int *)(*(int *)(this + 0x80) + 0xb4) != 0)) {
            LVar5 = SendMessageW(*(HWND *)(*(int *)(*(int *)(this + 0x80) + 0xb4) + 0x20),0x157,0,0)
            ;
            if (LVar5 == 0) {
              SendMessageW(*(HWND *)(*(int *)(*(int *)(this + 0x80) + 0xb4) + 0x20),0x14f,1,0);
              pHVar8 = GetParent(*(HWND *)(*(int *)(*(int *)(this + 0x80) + 0xb4) + 0x20));
              pCVar7 = CWnd::FromHandle(pHVar8);
              if (pCVar7 != (CWnd *)0x0) {
                iVar6 = *(int *)(this + 0x80);
                pHVar8 = GetParent(*(HWND *)(*(int *)(iVar6 + 0xb4) + 0x20));
                pCVar7 = CWnd::FromHandle(pHVar8);
                InvalidateRect(*(HWND *)(pCVar7 + 0x20),(RECT *)(iVar6 + 0x90),1);
              }
            }
            goto LAB_0051a769;
          }
        }
      }
    }
    iVar6 = CWnd::PreTranslateMessage((CWnd *)this,param_1);
  }
  return iVar6;
}

