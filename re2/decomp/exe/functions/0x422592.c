// rea decompile_all
// name: CMFCVisualManagerWindows::OnDrawSeparator
// address: 0x422592
// body: available
// range: 0x422592-0x4226e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerWindows::OnDrawSeparator(class CDC *,class
   CBasePane *,class CRect,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerWindows::OnDrawSeparator
          (CMFCVisualManagerWindows *this,int param_1,CObject *param_2,int param_4,int param_5,
          int param_6,int param_7,int param_8)

{
  CObject *this_00;
  CObject *this_01;
  int iVar1;
  HDC hdc;
  HTHEME hTheme;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if ((*(int *)(this + 8) == 0) || (*(int *)(param_2 + 0x8c) != 0)) {
LAB_004225e1:
    FUN_0049f5ab(param_1,param_2,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenuBar_0060c6b4,param_2);
    if (this_00 == (CObject *)0x0) {
LAB_00422639:
      if ((param_8 != 0) && (param_6 - param_4 < 2)) {
        param_6 = param_6 + 1;
      }
      if (param_1 == 0) {
        hdc = (HDC)0x0;
      }
      else {
        hdc = *(HDC *)(param_1 + 4);
      }
      iVar1 = 6 - (uint)(param_8 != 0);
      hTheme = *(HTHEME *)(this + 8);
    }
    else {
      if (*(int *)(this + 0x158) != 0) goto LAB_004225e1;
      if ((*(int *)(this + 0x4c) == 0) ||
         (((this_01 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonPanelMenuBar_005bd4c4,
                                         param_2), this_01 != (CObject *)0x0 &&
           (*(int *)(this_01 + 0xdd8) == 0)) &&
          (iVar1 = CMFCRibbonPanelMenuBar::IsMainPanel((CMFCRibbonPanelMenuBar *)this_01),
          iVar1 == 0)))) goto LAB_00422639;
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetClientRect(*(HWND *)(param_2 + 0x20),&local_18);
      param_4 = CMFCPopupMenuBar::GetGutterWidth((CMFCPopupMenuBar *)this_00);
      param_4 = param_4 + local_18.left;
      param_6 = local_18.right;
      param_5 = (param_5 + param_7) / 2 + -3;
      param_7 = (param_5 + param_7) / 2 + 3;
      if (param_1 == 0) {
        hdc = (HDC)0x0;
      }
      else {
        hdc = *(HDC *)(param_1 + 4);
      }
      iVar1 = 0xf;
      hTheme = *(HTHEME *)(this + 0x4c);
    }
    DrawThemeBackground(hTheme,hdc,iVar1,0,(LPCRECT)&param_4,(LPCRECT)0x0);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

