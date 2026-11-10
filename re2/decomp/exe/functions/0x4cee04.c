// rea decompile_all
// name: CMFCPopupMenu::TearOff
// address: 0x4cee04
// body: available
// range: 0x4cee04-0x4cf1b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCPopupMenu::TearOff(class CPoint)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCPopupMenu::TearOff(CMFCPopupMenu *this,int param_2,int param_3)

{
  CObject *pCVar1;
  CObject *pCVar2;
  CBasePane *pCVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  tagPOINT local_48;
  CObject *local_40;
  undefined1 local_3c [4];
  CObject *local_38;
  CObject *local_34;
  CObject *local_30;
  CMFCPopupMenu *local_2c;
  CObject *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  local_8 = 0x4cee10;
  local_2c = this;
  if ((*(int *)(this + 0x158) == 0) ||
     (pCVar1 = *(CObject **)(*(int *)(this + 0x158) + 0xbc), local_38 = pCVar1,
     pCVar1 == (CObject *)0x0)) goto LAB_004cf026;
  local_48.x = param_2;
  local_48.y = param_3;
  ClientToScreen(*(HWND *)(this + 0x20),&local_48);
  local_34 = DAT_0061620c;
  pCVar2 = DAT_0061620c;
  if ((DAT_0061620c == (CObject *)0x0) &&
     (pCVar2 = (CObject *)CWnd::GetTopLevelFrame((CWnd *)this), local_34 = pCVar2,
     pCVar2 == (CObject *)0x0)) goto LAB_004cf026;
  local_34 = pCVar2;
  local_40 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_005bad18,pCVar2);
  if (local_40 == (CObject *)0x0) {
    local_28 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_005ba788,pCVar2);
    if (local_28 == (CObject *)0x0) {
      local_28 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleIPFrameWndEx_005c15c4,pCVar2);
      if (local_28 == (CObject *)0x0) {
        local_28 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleDocIPFrameWndEx_005c1980,pCVar2);
        if (local_28 == (CObject *)0x0) goto LAB_004cf026;
        pCVar3 = (CBasePane *)GetPane(pCVar1);
        local_30 = local_28 + 0x1a4;
      }
      else {
        pCVar3 = (CBasePane *)GetPane(pCVar1);
        local_30 = local_28 + 0x1a8;
      }
    }
    else {
      pCVar3 = (CBasePane *)GetPane(pCVar1);
      local_30 = local_28 + 0x134;
    }
  }
  else {
    pCVar3 = CMDIFrameWndEx::GetPane((CMDIFrameWndEx *)local_40,(uint)pCVar1);
    local_30 = local_40 + 0x350;
  }
  if (local_30 == (CObject *)0x0) goto LAB_004cf026;
  if (pCVar3 == (CBasePane *)0x0) {
    iVar4 = FUN_00415ee0(*(int *)(*(int *)(this + 0x158) + 0x2c) + -0x10);
    local_28 = (CObject *)(iVar4 + 0x10);
    local_8 = 0;
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_28,L'&')
    ;
    pcVar6 = *(code **)(*(int *)this + 0x1fc);
    guard_check_icall(pCVar2,local_38,local_28);
    pCVar3 = (CBasePane *)(*pcVar6)();
    if (pCVar3 == (CBasePane *)0x0) {
      FUN_0040efa0();
      goto LAB_004cf026;
    }
    FUN_00492520(pCVar3);
    local_8 = 0xffffffff;
    FUN_0040efa0();
    pCVar2 = local_34;
  }
  else {
    pcVar6 = *(code **)(*(int *)pCVar3 + 0x224);
    guard_check_icall(1,0,1);
    (*pcVar6)();
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    GetWindowRect(*(HWND *)(pCVar3 + 0x20),&local_24);
    local_24.right = local_24.right - local_24.left;
    local_24.left = local_48.x;
    local_24.right = local_48.x + local_24.right;
    local_24.bottom = local_24.bottom - local_24.top;
    local_24.top = local_48.y;
    local_24.bottom = local_48.y + local_24.bottom;
    pcVar6 = *(code **)(*(int *)pCVar3 + 0x168);
    guard_check_icall();
    iVar4 = (*pcVar6)();
    if (iVar4 == 0) {
      pcVar6 = *(code **)(*(int *)pCVar3 + 0x234);
      guard_check_icall(&local_24,1,0);
      (*pcVar6)();
    }
    else {
      pcVar6 = *(code **)(*(int *)pCVar3 + 0x1fc);
      guard_check_icall(local_24.left,local_24.top,local_24.right,local_24.bottom,3,1);
      (*pcVar6)();
      pCVar2 = local_34;
    }
  }
  if (local_40 == (CObject *)0x0) {
    local_38 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_005ba788,pCVar2);
    if (local_38 != (CObject *)0x0) {
      pcVar6 = *(code **)(*(int *)local_38 + 0x1ec);
LAB_004cf0b3:
      guard_check_icall(local_2c,pCVar3);
      goto LAB_004cf0c1;
    }
    local_38 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleIPFrameWndEx_005c15c4,pCVar2);
    if ((local_38 != (CObject *)0x0) ||
       (local_38 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleDocIPFrameWndEx_005c1980,pCVar2),
       local_38 != (CObject *)0x0)) {
      pcVar6 = *(code **)(*(int *)local_38 + 0x208);
      goto LAB_004cf0b3;
    }
  }
  else {
    pcVar6 = *(code **)(*(int *)local_40 + 0x208);
    guard_check_icall(local_2c,pCVar3);
LAB_004cf0c1:
    iVar4 = (*pcVar6)();
    if (iVar4 == 0) {
      pcVar6 = *(code **)(*(int *)pCVar3 + 0x60);
      guard_check_icall();
      (*pcVar6)();
      pcVar6 = *(code **)(*(int *)pCVar3 + 4);
      guard_check_icall(1);
      (*pcVar6)();
      goto LAB_004cf026;
    }
  }
  pcVar6 = *(code **)(*(int *)pCVar3 + 0x244);
  guard_check_icall(pCVar2,1);
  (*pcVar6)();
  pcVar6 = *(code **)(*(int *)pCVar3 + 0x2a4);
  guard_check_icall(local_3c,0);
  piVar5 = (int *)(*pcVar6)();
  local_24.left = local_48.x;
  local_24.right = local_48.x + *piVar5;
  local_24.top = local_48.y;
  local_24.bottom = local_48.y + piVar5[1];
  pcVar6 = *(code **)(*(int *)pCVar3 + 0x1fc);
  guard_check_icall(local_48.x,local_48.y,local_24.right,local_24.bottom,3,1);
  (*pcVar6)();
  pcVar6 = *(code **)(*(int *)pCVar3 + 0x210);
  guard_check_icall();
  (*pcVar6)();
  pcVar6 = *(code **)(*(int *)local_34 + 0x178);
  guard_check_icall(1);
  (*pcVar6)();
  pcVar6 = *(code **)(*(int *)pCVar3 + 0x228);
  guard_check_icall(1);
  iVar4 = (*pcVar6)();
  if (iVar4 != 0) {
    FUN_00461a5a(local_2c);
  }
LAB_004cf026:
  iVar4 = FUN_0055bae6();
  return iVar4;
}

