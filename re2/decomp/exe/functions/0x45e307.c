// rea decompile_all
// name: CPaneFrameWnd::OnDrawBorder
// address: 0x45e307
// body: available
// range: 0x45e307-0x45e480 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CPaneFrameWnd::OnDrawBorder(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneFrameWnd::OnDrawBorder(CPaneFrameWnd *this,CDC *param_1)

{
  CWnd *pCVar1;
  CDockingManager *pCVar2;
  CObject *pCVar3;
  AFX_GLOBAL_DATA *pAVar4;
  CMFCVisualManager *pCVar5;
  HBRUSH hbr;
  code *pcVar6;
  RECT local_38;
  tagRECT local_28;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  pCVar2 = *(CDockingManager **)(this + 0x184);
  if (pCVar2 == (CDockingManager *)0x0) {
    pCVar1 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 200));
    pCVar2 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_0060c45c,pCVar1);
    if (pCVar2 == (CDockingManager *)0x0) goto LAB_0045e46e;
  }
  hbr = (HBRUSH)0x0;
  if (*(int *)(pCVar2 + 8) == 0) {
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_28);
    CWnd::ScreenToClient((CWnd *)this,&local_28);
    local_18 = 0;
    local_14 = 0;
    pcVar6 = *(code **)(*(int *)this + 0x1bc);
    local_10 = 0;
    local_c = 0;
    guard_check_icall(&local_18);
    (*pcVar6)();
    OffsetRect(&local_28,local_18,*(int *)(this + 0xac) + local_14);
    local_38.left = local_28.left;
    local_38.top = local_28.top;
    local_38.right = local_28.right;
    local_38.bottom = local_28.bottom;
    pcVar6 = *(code **)(*(int *)this + 0x1a8);
    guard_check_icall();
    pCVar3 = (CObject *)(*pcVar6)();
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_0060c580,pCVar3);
    if (pCVar3 == (CObject *)0x0) {
      pCVar5 = CMFCVisualManager::GetInstance();
      pcVar6 = *(code **)(*(int *)pCVar5 + 0x14c);
    }
    else {
      pAVar4 = GetGlobalData();
      if (pAVar4 != (AFX_GLOBAL_DATA *)0xffffff68) {
        hbr = *(HBRUSH *)(pAVar4 + 0x9c);
      }
      FillRect(*(HDC *)(param_1 + 4),&local_38,hbr);
      pCVar5 = CMFCVisualManager::GetInstance();
      pcVar6 = *(code **)(*(int *)pCVar5 + 0x150);
      this = (CPaneFrameWnd *)pCVar3;
    }
    guard_check_icall(param_1,this,local_38.left,local_38.top,local_38.right,local_38.bottom,
                      local_18,local_14,local_10,local_c);
    (*pcVar6)();
  }
LAB_0045e46e:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

