// rea decompile_all
// name: CMDIClientAreaWnd::RemoveTabGroup
// address: 0x10131f78
// body: available
// range: 0x10131f78-0x10132116 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMDIClientAreaWnd::RemoveTabGroup(class CMFCTabCtrl *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMDIClientAreaWnd::RemoveTabGroup(CMDIClientAreaWnd *this,CMFCTabCtrl *param_1,int param_2)

{
  code *pcVar1;
  __POSITION *p_Var2;
  CObject *this_00;
  int iVar3;
  CWnd *local_30;
  __POSITION *local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  p_Var2 = CObList::Find((CObList *)(this + 11000),(CObject *)param_1,(__POSITION *)0x0);
  if (p_Var2 != (__POSITION *)0x0) {
    local_30 = (CWnd *)0x0;
    local_2c = p_Var2;
    if (*(__POSITION **)(this + 0x2afc) == p_Var2) {
      FUN_100c321b(&local_2c);
    }
    else {
      FUN_10065af5(&local_2c);
    }
    if (local_2c != (__POSITION *)0x0) {
      local_30 = (CWnd *)AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_101e1714,
                                            *(CObject **)(local_2c + 8));
    }
    FUN_10060ce1(p_Var2);
    CWnd::ShowWindow((CWnd *)param_1,0);
    if (0 < *(int *)(this + 0x2b04)) {
      this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_101e1714,
                                   *(CObject **)(*(int *)(this + 0x2b00) + 8));
      CMFCTabCtrl::SetResizeMode((CMFCTabCtrl *)this_00,0);
    }
    if (*(int *)(this + 0x2b04) < 2) {
      *(undefined4 *)(this + 0x2b90) = 0;
    }
    if (local_30 != (CWnd *)0x0) {
      local_28.left = 0;
      local_28.top = 0;
      local_28.right = 0;
      local_28.bottom = 0;
      GetWindowRect(*(HWND *)(param_1 + 0x20),&local_28);
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetWindowRect(*(HWND *)(local_30 + 0x20),&local_18);
      UnionRect(&local_18,&local_18,&local_28);
      CWnd::ScreenToClient((CWnd *)this,&local_18);
      CWnd::SetWindowPos(local_30,(CWnd *)0x0,local_18.left,local_18.top,
                         local_18.right - local_18.left,local_18.bottom - local_18.top,4);
      AdjustMDIChildren(this,(CMFCTabCtrl *)local_30);
    }
    local_2c = (__POSITION *)0x0;
    iVar3 = CMap<int,int,int,int>::Lookup
                      ((CMap<int,int,int,int> *)(this + 0x2b14),(int)param_1,(int *)&local_2c);
    if ((iVar3 != 0) && (local_2c != (__POSITION *)0x0)) {
      pcVar1 = *(code **)(*(int *)local_2c + 4);
      guard_check_icall(1);
      (*pcVar1)();
      CMap<CWnd*,CWnd*,CImageList*,CImageList*>::RemoveKey
                ((CMap<CWnd*,CWnd*,CImageList*,CImageList*> *)(this + 0x2b14),(CWnd *)param_1);
    }
    CObList::AddTail((CObList *)(this + 0x2b3c),(CObject *)param_1);
    CWnd::ShowWindow((CWnd *)param_1,0);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

