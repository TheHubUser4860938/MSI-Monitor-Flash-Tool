// rea decompile_all
// name: CMFCVisualManagerWindows::OnDrawPopupWindowButtonBorder
// address: 0x4224b0
// body: available
// range: 0x4224b0-0x422591 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerWindows::OnDrawPopupWindowButtonBorder(class
   CDC *,class CRect,class CMFCDesktopAlertWndButton *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerWindows::OnDrawPopupWindowButtonBorder
          (CMFCVisualManagerWindows *this,CDC *param_1,LONG param_3,LONG param_4,LONG param_5,
          LONG param_6,CWnd *param_7)

{
  int iVar1;
  LRESULT LVar2;
  HDC hdc;
  AFX_GLOBAL_DATA *this_00;
  HTHEME hTheme;
  int iPartId;
  CWnd *this_01;
  CDC *pCVar3;
  tagRECT *ptVar4;
  
  this_01 = param_7;
  iVar1 = CWnd::IsWindowEnabled(param_7);
  if (iVar1 == 0) {
    iVar1 = 4;
  }
  else {
    iVar1 = CMFCButton::IsPressed((CMFCButton *)this_01);
    if ((iVar1 == 0) && (LVar2 = SendMessageW(*(HWND *)(this_01 + 0x20),0xf0,0,0), LVar2 == 0)) {
      iVar1 = (*(int *)(this_01 + 0xb4) != 0) + 1;
    }
    else {
      iVar1 = 3;
    }
  }
  hTheme = *(HTHEME *)(this + 4);
  if (((hTheme == (HTHEME)0x0) || (*(int *)(this_01 + 0x7ac) == 0)) ||
     (*(int *)(this_01 + 0x7a8) == 0)) {
    if (*(int *)(this + 0x10) == 0) {
      CMFCVisualManagerOfficeXP::OnDrawPopupWindowButtonBorder
                ((CMFCVisualManagerOfficeXP *)this,param_1,param_3,param_4,param_5,param_6,this_01);
      return;
    }
    ptVar4 = (tagRECT *)&param_3;
    pCVar3 = param_1;
    this_00 = GetGlobalData();
    AFX_GLOBAL_DATA::DrawParentBackground(this_00,this_01,pCVar3,ptVar4);
    if (param_1 == (CDC *)0x0) {
      hdc = (HDC)0x0;
    }
    else {
      hdc = *(HDC *)(param_1 + 4);
    }
    iPartId = 1;
    hTheme = *(HTHEME *)(this + 0x10);
  }
  else {
    if (param_1 == (CDC *)0x0) {
      hdc = (HDC)0x0;
    }
    else {
      hdc = *(HDC *)(param_1 + 4);
    }
    iPartId = 0x13;
  }
  DrawThemeBackground(hTheme,hdc,iPartId,iVar1,(LPCRECT)&param_3,(LPCRECT)0x0);
  return;
}

