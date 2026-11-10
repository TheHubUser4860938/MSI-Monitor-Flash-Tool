// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnFillButtonInterior
// address: 0x527391
// body: available
// range: 0x527391-0x527506 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2003::OnFillButtonInterior(class CDC
   *,class CMFCToolBarButton *,class CRect,enum CMFCVisualManager::AFX_BUTTON_STATE)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2003::OnFillButtonInterior
          (CMFCVisualManagerOffice2003 *this,undefined4 param_1,CObject *param_2,LONG param_4,
          LONG param_5,int param_6,int param_7,undefined4 param_8)

{
  CWnd *this_00;
  code *pcVar1;
  CObject *this_01;
  int iVar2;
  AFX_GLOBAL_DATA *pAVar3;
  undefined4 uVar4;
  int local_30;
  int local_2c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  this_01 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCCustomizeButton_0060c918,param_2);
  if (this_01 != (CObject *)0x0) {
    iVar2 = CMFCCustomizeButton::IsPipeStyle((CMFCCustomizeButton *)this_01);
    if (iVar2 != 0) {
      pAVar3 = GetGlobalData();
      if (8 < *(int *)(pAVar3 + 0x1ac)) {
        pAVar3 = GetGlobalData();
        iVar2 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar3);
        if (iVar2 == 0) {
          this_00 = *(CWnd **)(this_01 + 0xf8);
          if (this_00 != (CWnd *)0x0) {
            local_18.left = iVar2;
            local_18.top = iVar2;
            local_18.right = iVar2;
            local_18.bottom = iVar2;
            GetWindowRect(*(HWND *)(this_00 + 0x20),&local_18);
            CWnd::ScreenToClient(this_00,&local_18);
            pcVar1 = *(code **)(*(int *)this_00 + 0x164);
            guard_check_icall();
            iVar2 = (*pcVar1)();
            if (iVar2 == 0) {
              param_7 = local_18.bottom;
            }
            else {
              param_6 = local_18.right;
            }
            CMFCCustomizeButton::GetExtraSize((CMFCCustomizeButton *)this_01);
            InflateRect((LPRECT)&param_4,local_30,local_2c);
            iVar2 = *(int *)this;
            pcVar1 = *(code **)(*(int *)this_00 + 0x164);
            guard_check_icall(param_8,0 < *(int *)(this_01 + 0xe8),*(int *)(this_01 + 0x11c) != 0);
            uVar4 = (*pcVar1)();
            pcVar1 = *(code **)(iVar2 + 0x31c);
            guard_check_icall(param_1,param_4,param_5,param_6,param_7,uVar4);
            (*pcVar1)();
          }
          *(undefined4 *)(this_01 + 0x100) = 0;
          goto LAB_005274f4;
        }
      }
    }
  }
  CMFCVisualManagerOfficeXP::OnFillButtonInterior
            ((CMFCVisualManagerOfficeXP *)this,param_1,param_2,param_4,param_5,param_6,param_7,
             param_8);
LAB_005274f4:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

