// rea decompile_all
// name: CMFCFontComboBox::PreTranslateMessage
// address: 0x533c5a
// body: available
// range: 0x533c5a-0x533d4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCFontComboBox::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCFontComboBox::PreTranslateMessage(CMFCFontComboBox *this,tagMSG *param_1)

{
  WPARAM WVar1;
  SHORT SVar2;
  HWND pHVar3;
  CWnd *this_00;
  LRESULT LVar4;
  CFrameWnd *pCVar5;
  int iVar6;
  
  if (((*(int *)(this + 0x88) != 0) && (param_1->message == 0x100)) && (DAT_0060ca9c == 0)) {
    pHVar3 = GetParent(*(HWND *)(this + 0x20));
    this_00 = CWnd::FromHandle(pHVar3);
    WVar1 = param_1->wParam;
    if (WVar1 == 9) {
      if (this_00 == (CWnd *)0x0) {
        return 1;
      }
      pCVar5 = (CFrameWnd *)CWnd::GetNextDlgTabItem(this_00,(CWnd *)this,0);
    }
    else {
      if (WVar1 != 0x1b) {
        if (((WVar1 == 0x26) || (WVar1 == 0x28)) &&
           ((SVar2 = GetKeyState(0x12), -1 < SVar2 &&
            ((SVar2 = GetKeyState(0x11), -1 < SVar2 &&
             (LVar4 = SendMessageW(*(HWND *)(this + 0x20),0x157,0,0), LVar4 == 0)))))) {
          SendMessageW(*(HWND *)(this + 0x20),0x14f,1,0);
          return 1;
        }
        goto LAB_00533d41;
      }
      pCVar5 = DAT_0061620c;
      if (DAT_0061620c == (CFrameWnd *)0x0) {
        pCVar5 = CWnd::GetTopLevelFrame((CWnd *)this);
      }
      if (pCVar5 == (CFrameWnd *)0x0) {
        return 1;
      }
      pCVar5 = DAT_0061620c;
      if (DAT_0061620c == (CFrameWnd *)0x0) {
        pCVar5 = CWnd::GetTopLevelFrame((CWnd *)this);
      }
    }
    CWnd::SetFocus((CWnd *)pCVar5);
    return 1;
  }
LAB_00533d41:
  iVar6 = CWnd::PreTranslateMessage((CWnd *)this,param_1);
  return iVar6;
}

