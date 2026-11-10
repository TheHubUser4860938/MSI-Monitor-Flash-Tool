// rea decompile_all
// name: CMFCBaseTabCtrl::SetTabLabel
// address: 0x4883ce
// body: available
// range: 0x4883ce-0x488554 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCBaseTabCtrl::SetTabLabel(int,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCBaseTabCtrl::SetTabLabel
          (CMFCBaseTabCtrl *this,int param_1,
          CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_2)

{
  CToolTipCtrl *this_00;
  code *pcVar1;
  int *piVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  CObject *pCVar5;
  int iVar6;
  CToolInfo local_238 [16];
  tagRECT local_228 [34];
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if (((-1 < param_1) && (param_1 < *(int *)(this + 0xbc))) &&
     (*(int *)(*(int *)param_2 + -0xc) != 0)) {
    piVar2 = (int *)FUN_004ab4cd(param_1);
    iVar6 = *piVar2;
    FUN_00415f50(param_2);
    this_00 = *(CToolTipCtrl **)(this + 0xf8);
    if ((this_00 != (CToolTipCtrl *)0x0) && (*(int *)(this_00 + 0x20) != 0)) {
      if (*(int *)(this + 0x100) == 0) {
        FUN_004e5834(*(undefined4 *)param_2,this,*(uint *)(iVar6 + 0x28));
      }
      else {
        CToolTipCtrl::GetToolInfo(this_00,local_238,(CWnd *)this,*(uint *)(iVar6 + 0x28));
        CToolTipCtrl::DelTool(*(CToolTipCtrl **)(this + 0xf8),(CWnd *)this,*(uint *)(iVar6 + 0x28));
        CToolTipCtrl::AddTool
                  (*(CToolTipCtrl **)(this + 0xf8),(CWnd *)this,(wchar_t *)0xffffffff,local_228,
                   *(uint *)(iVar6 + 0x28));
      }
    }
    if ((*(int *)(iVar6 + 0x20) != 0) && (*(int *)(*(int *)(iVar6 + 0x20) + 0x20) != 0)) {
      FUN_004349b3(*(undefined4 *)param_2);
    }
    pcVar1 = *(code **)(*(int *)this + 0x184);
    guard_check_icall();
    (*pcVar1)();
    if (param_1 == *(int *)(this + 0xc0)) {
      pHVar3 = GetParent(*(HWND *)(this + 0x20));
      pCVar4 = CWnd::FromHandle(pHVar3);
      pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_005c7aa4,(CObject *)pCVar4
                                 );
      if (pCVar5 != (CObject *)0x0) {
        pcVar1 = *(code **)(*(int *)pCVar5 + 0x3e4);
        guard_check_icall();
        iVar6 = (*pcVar1)();
        if (iVar6 != 0) {
          FUN_004349b3(*(undefined4 *)param_2);
        }
        pcVar1 = *(code **)(*(int *)pCVar5 + 0x168);
        guard_check_icall();
        iVar6 = (*pcVar1)();
        if (iVar6 == 0) {
          pHVar3 = GetParent(*(HWND *)(pCVar5 + 0x20));
          pCVar5 = (CObject *)CWnd::FromHandle(pHVar3);
        }
        if (pCVar5 != (CObject *)0x0) {
          RedrawWindow(*(HWND *)(pCVar5 + 0x20),(RECT *)0x0,(HRGN)0x0,0x401);
        }
      }
    }
  }
  iVar6 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar6;
}

