// rea decompile_all
// name: CMFCVisualManagerWindows::OnFillButtonInterior
// address: 0x423895
// body: available
// range: 0x423895-0x4239db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerWindows::OnFillButtonInterior(class CDC *,class
   CMFCToolBarButton *,class CRect,enum CMFCVisualManager::AFX_BUTTON_STATE)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerWindows::OnFillButtonInterior
          (CMFCVisualManagerWindows *this,int param_1,CObject *param_2,LONG param_4,LONG param_5,
          LONG param_6,int param_7,int param_8)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  CObject *pCVar4;
  int iVar5;
  int iVar6;
  HDC hdc;
  
  if (*(int *)(this + 8) == 0) {
LAB_004238c1:
    CMFCVisualManagerOfficeXP::OnFillButtonInterior
              ((CMFCVisualManagerOfficeXP *)this,param_1,param_2,param_4,param_5,param_6,param_7,
               param_8);
    return;
  }
  bVar3 = false;
  bVar2 = false;
  pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_0060c6d0,param_2);
  if (pCVar4 != (CObject *)0x0) {
    if ((*(int *)(pCVar4 + 0x6c) == 0) ||
       (iVar5 = FUN_0043970d(&PTR_s_CMFCMenuBar_0060c730), iVar5 == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((*(int *)(pCVar4 + 0x6c) == 0) ||
       (iVar5 = FUN_0043970d(&PTR_s_CMFCPopupMenuBar_0060c6b4), iVar5 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  if (*(int *)(this + 0x158) == 0) {
    if (((bVar2) && (param_8 != 2)) && (param_8 != 1)) {
      return;
    }
  }
  else if ((bVar2) || (bVar3)) goto LAB_004238c1;
  iVar5 = 1;
  if ((*(uint *)(param_2 + 0x24) & 0x40000) != 0) {
    iVar5 = 4;
    goto LAB_004239b6;
  }
  if (((*(uint *)(param_2 + 0x24) & 0x20000) == 0) || (param_8 != 2)) {
    if ((*(uint *)(param_2 + 0x24) & 0x10000) != 0) {
      iVar5 = (param_8 == 2) + 5;
      goto LAB_004239b6;
    }
    if ((param_8 != 2) || (iVar5 = 2, pCVar4 == (CObject *)0x0)) goto LAB_004239b6;
    pcVar1 = *(code **)(*(int *)pCVar4 + 0x70);
    guard_check_icall();
    iVar6 = (*pcVar1)();
    if (iVar6 == 0) goto LAB_004239b6;
    param_7 = param_7 + -1;
  }
  iVar5 = 3;
LAB_004239b6:
  hdc = (HDC)0x0;
  if (param_1 != 0) {
    hdc = *(HDC *)(param_1 + 4);
  }
  DrawThemeBackground(*(HTHEME *)(this + 8),hdc,1,iVar5,(LPCRECT)&param_4,(LPCRECT)0x0);
  return;
}

