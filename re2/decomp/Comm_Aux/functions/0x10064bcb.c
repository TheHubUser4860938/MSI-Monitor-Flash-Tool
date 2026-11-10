// rea decompile_all
// name: CMFCPropertyPage::OnEraseBkgnd
// address: 0x10064bcb
// body: available
// range: 0x10064bcb-0x10064ce7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCPropertyPage::OnEraseBkgnd(class CDC *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCPropertyPage::OnEraseBkgnd(CMFCPropertyPage *this,CDC *param_1)

{
  code *pcVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  CObject *this_00;
  int iVar4;
  int iVar5;
  int iVar6;
  LONG LVar7;
  LONG LVar8;
  int local_40;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  FUN_100509af();
  pHVar2 = GetParent(*(HWND *)(this + 0x20));
  pCVar3 = CWnd::FromHandle(pHVar2);
  this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPropertySheet_101b5eb8,(CObject *)pCVar3)
  ;
  if ((this_00 != (CObject *)0x0) && (0 < *(int *)(this_00 + 0x4dc0))) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    LVar8 = local_18.top;
    LVar7 = local_18.left;
    iVar4 = *(int *)(this_00 + 0x4dc0) + local_18.top;
    local_40 = local_18.right;
    iVar6 = *(int *)(this_00 + 0xe0);
    if ((iVar6 == 1) || ((iVar6 == 2 || (iVar6 == 4)))) {
      local_28.left = 0;
      local_28.top = 0;
      local_28.right = 0;
      local_28.bottom = 0;
      GetWindowRect(*(HWND *)(this_00 + 0x20),&local_28);
      CWnd::ScreenToClient((CWnd *)this,&local_28);
      local_40 = GetSystemMetrics(7);
      local_40 = local_28.right - local_40;
    }
    iVar6 = *(int *)this_00;
    iVar5 = CPropertySheet::GetPageIndex((CPropertySheet *)this_00,(CPropertyPage *)this);
    pcVar1 = *(code **)(iVar6 + 0x188);
    guard_check_icall(param_1,iVar5,LVar7,LVar8,local_40,iVar4);
    (*pcVar1)();
  }
  iVar6 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar6;
}

