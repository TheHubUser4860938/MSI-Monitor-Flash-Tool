// rea decompile_all
// name: CMFCVisualManagerWindows::OnFillBarBackground
// address: 0x4236cb
// body: available
// range: 0x4236cb-0x423894 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerWindows::OnFillBarBackground(class CDC *,class
   CBasePane *,class CRect,class CRect,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerWindows::OnFillBarBackground
          (CMFCVisualManagerWindows *this,int param_1,CObject *param_2,int param_4,LONG param_5,
          LONG param_6,LONG param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
          undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  HDC pHVar2;
  HBRUSH hbr;
  CObject *this_00;
  HTHEME hTheme;
  LPCRECT pRect;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_0043970d(&PTR_s_CMFCStatusBar_005bcd6c);
  if (((iVar1 == 0) || (hTheme = *(HTHEME *)(this + 0x14), hTheme == (HTHEME)0x0)) &&
     ((iVar1 = FUN_0043970d(&PTR_s_CMFCRibbonStatusBar_005bd48c), iVar1 == 0 ||
      (hTheme = *(HTHEME *)(this + 0x14), hTheme == (HTHEME)0x0)))) {
    if ((((*(int *)(this + 0xc) != 0) && (*(int *)(param_2 + 0x8c) == 0)) &&
        (iVar1 = FUN_0043970d(&PTR_s_CMFCCaptionBar_005ba198), iVar1 == 0)) &&
       (iVar1 = FUN_0043970d(&PTR_s_CMFCColorBar_0060c79c), iVar1 == 0)) {
      iVar1 = FUN_0043970d(&PTR_s_CMFCPopupMenuBar_0060c6b4);
      if (iVar1 == 0) {
        iVar1 = *(int *)this;
        guard_check_icall(param_1,param_2,param_4,param_5,param_6,param_7);
        (**(code **)(iVar1 + 0x1c))();
        goto LAB_00423882;
      }
      if (*(int *)(this + 0x158) == 0) {
        if (param_1 == 0) {
          pHVar2 = (HDC)0x0;
        }
        else {
          pHVar2 = *(HDC *)(param_1 + 4);
        }
        hbr = GetSysColorBrush(4);
        FillRect(pHVar2,(RECT *)&param_4,hbr);
        this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenuBar_0060c6b4,param_2);
        if ((*(int *)(this + 0x4c) == 0) || (*(int *)(this_00 + 0xd40) != 0)) goto LAB_00423882;
        local_18.left = param_4;
        local_18.top = param_5;
        local_18.right = param_6;
        local_18.bottom = param_7;
        local_18.right = CMFCPopupMenuBar::GetGutterWidth((CMFCPopupMenuBar *)this_00);
        local_18.right = local_18.right + local_18.left + 2;
        InflateRect(&local_18,0,-1);
        if (param_1 == 0) {
          pHVar2 = (HDC)0x0;
        }
        else {
          pHVar2 = *(HDC *)(param_1 + 4);
        }
        pRect = &local_18;
        iVar1 = 0xd;
        hTheme = *(HTHEME *)(this + 0x4c);
        goto LAB_0042371a;
      }
    }
    CMFCVisualManagerOfficeXP::OnFillBarBackground
              ((CMFCVisualManagerOfficeXP *)this,param_1,param_2,param_4,param_5,param_6,param_7,
               param_8,param_9,param_10,param_11,param_12);
  }
  else {
    pHVar2 = (HDC)0x0;
    if (param_1 != 0) {
      pHVar2 = *(HDC *)(param_1 + 4);
    }
    pRect = (LPCRECT)&param_4;
    iVar1 = 0;
LAB_0042371a:
    DrawThemeBackground(hTheme,pHVar2,iVar1,0,pRect,(LPCRECT)0x0);
  }
LAB_00423882:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

