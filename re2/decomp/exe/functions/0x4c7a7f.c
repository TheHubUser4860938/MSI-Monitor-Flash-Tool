// rea decompile_all
// name: CMDIChildWndEx::PreTranslateMessage
// address: 0x4c7a7f
// body: available
// range: 0x4c7a7f-0x4c7af7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMDIChildWndEx::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMDIChildWndEx::PreTranslateMessage(CMDIChildWndEx *this,tagMSG *param_1)

{
  HWND pHVar1;
  CWnd *pCVar2;
  int iVar3;
  
  if (0xff < param_1->message) {
    if (((param_1->message < 0x10a) && (*(int *)(this + 0x448) != 0)) && (DAT_00616b18 != 0)) {
      return 0;
    }
    if (((param_1->message == 0x100) && (param_1->wParam == 0x1b)) && (*(int *)(this + 0x128) != 0))
    {
      pHVar1 = GetCapture();
      pCVar2 = CWnd::FromHandle(pHVar1);
      if (pCVar2 == *(CWnd **)(this + 0x128)) {
        PostMessageW(*(HWND *)(*(CWnd **)(this + 0x128) + 0x20),0x1f,0,0);
      }
    }
  }
  iVar3 = CMDIChildWnd::PreTranslateMessage((CMDIChildWnd *)this,param_1);
  return iVar3;
}

