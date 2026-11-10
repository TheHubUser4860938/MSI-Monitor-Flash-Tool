// rea decompile_all
// name: CMDIClientAreaWnd::CreateNewTabGroup
// address: 0x1012f2d1
// body: available
// range: 0x1012f2d1-0x1012f418 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: class CMFCTabCtrl * __thiscall CMDIClientAreaWnd::CreateNewTabGroup(class CMFCTabCtrl
   *,class CRect,int)
   
   Library: Visual Studio 2015 Release */

CMFCTabCtrl * __thiscall
CMDIClientAreaWnd::CreateNewTabGroup
          (CMDIClientAreaWnd *this,CMFCTabCtrl *param_1,int param_3,int param_4,int param_5,
          int param_6,int param_7)

{
  code *pcVar1;
  __POSITION *p_Var2;
  CMFCTabCtrl *pCVar3;
  ResizeMode RVar4;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  p_Var2 = CObList::Find((CObList *)(this + 11000),(CObject *)param_1,(__POSITION *)0x0);
  if (p_Var2 != (__POSITION *)0x0) {
    pcVar1 = *(code **)(*(int *)this + 0x164);
    guard_check_icall(0);
    pCVar3 = (CMFCTabCtrl *)(*pcVar1)();
    RVar4 = (param_7 == 0) + 1;
    CMFCTabCtrl::SetResizeMode(param_1,RVar4);
    CObList::InsertAfter((CObList *)(this + 11000),p_Var2,(CObject *)pCVar3);
    if (pCVar3 != *(CMFCTabCtrl **)(*(int *)(this + 0x2b00) + 8)) {
      CMFCTabCtrl::SetResizeMode(pCVar3,RVar4);
    }
    *(ResizeMode *)(this + 0x2b90) = RVar4;
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(param_1 + 0x20),&local_18);
    CWnd::ScreenToClient((CWnd *)this,(tagRECT *)&param_3);
    CWnd::ScreenToClient((CWnd *)this,&local_18);
    if (param_7 == 0) {
      local_18.bottom = local_18.bottom + (param_4 - param_6);
      param_3 = local_18.left;
      param_5 = local_18.right;
    }
    else {
      local_18.right = local_18.right + (param_3 - param_5);
      param_6 = local_18.bottom;
      param_4 = local_18.top;
    }
    CWnd::SetWindowPos((CWnd *)param_1,(CWnd *)0x0,-1,-1,local_18.right - local_18.left,
                       local_18.bottom - local_18.top,0x16);
    CWnd::SetWindowPos((CWnd *)pCVar3,(CWnd *)0x0,param_3,param_4,param_5 - param_3,
                       param_6 - param_4,0x14);
    AdjustMDIChildren(this,param_1);
  }
  pCVar3 = (CMFCTabCtrl *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar3;
}

