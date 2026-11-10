// rea decompile_all
// name: CMFCToolBarEditCtrl::PreTranslateMessage
// address: 0x51c68b
// body: available
// range: 0x51c68b-0x51c786 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBarEditCtrl::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCToolBarEditCtrl::PreTranslateMessage(CMFCToolBarEditCtrl *this,tagMSG *param_1)

{
  WPARAM WVar1;
  ushort uVar2;
  CFrameWnd *pCVar3;
  CWnd *pCVar4;
  HWND pHVar5;
  int iVar6;
  UINT Msg;
  
  if (param_1->message == 0x100) {
    if (param_1->wParam == 9) {
      pHVar5 = GetParent(*(HWND *)(this + 0x20));
      pCVar4 = CWnd::FromHandle(pHVar5);
      if (pCVar4 != (CWnd *)0x0) {
        pHVar5 = GetParent(*(HWND *)(this + 0x20));
        pCVar4 = CWnd::FromHandle(pHVar5);
        pCVar4 = CWnd::GetNextDlgTabItem(pCVar4,(CWnd *)this,0);
        goto LAB_0051c6ec;
      }
    }
    else if ((param_1->wParam == 0x1b) &&
            (pCVar3 = CWnd::GetTopLevelFrame((CWnd *)this), pCVar3 != (CFrameWnd *)0x0)) {
      pCVar4 = (CWnd *)CWnd::GetTopLevelFrame((CWnd *)this);
LAB_0051c6ec:
      CWnd::SetFocus(pCVar4);
      return 1;
    }
    pHVar5 = GetFocus();
    pCVar4 = CWnd::FromHandle(pHVar5);
    if ((pCVar4 == (CWnd *)this) && (uVar2 = GetKeyState(0x11), (uVar2 & 0x8000) != 0)) {
      WVar1 = param_1->wParam;
      if (WVar1 == 0x2e) {
        Msg = 0x303;
      }
      else if (WVar1 == 0x43) {
        Msg = 0x301;
      }
      else if (WVar1 == 0x56) {
        Msg = 0x302;
      }
      else if (WVar1 == 0x58) {
        Msg = 0x300;
      }
      else {
        if (WVar1 != 0x5a) goto LAB_0051c779;
        Msg = 199;
      }
      SendMessageW(*(HWND *)(this + 0x20),Msg,0,0);
      return 1;
    }
  }
LAB_0051c779:
  iVar6 = CMFCEditBrowseCtrl::PreTranslateMessage((CMFCEditBrowseCtrl *)this,param_1);
  return iVar6;
}

