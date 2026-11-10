// rea decompile_all
// name: CMDIClientAreaWnd::OnDragComplete
// address: 0x1013112a
// body: available
// range: 0x1013112a-0x10131256 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: long __thiscall CMDIClientAreaWnd::OnDragComplete(unsigned int,long)
   
   Library: Visual Studio 2015 Release */

long __thiscall CMDIClientAreaWnd::OnDragComplete(CMDIClientAreaWnd *this,uint param_1,long param_2)

{
  CMFCTabCtrl *this_00;
  long lVar1;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  if (((*(int *)(this + 0x2b30) != 0) && (*(int *)(this + 0x2b04) != 0)) &&
     (this_00 = GetNextTabWnd(this,(CMFCTabCtrl *)param_1,0), this_00 != (CMFCTabCtrl *)0x0)) {
    *(undefined4 *)(this + 0x2b94) = 1;
    CWnd::ScreenToClient((CWnd *)this,(tagRECT *)param_2);
    CWnd::SetWindowPos((CWnd *)param_1,(CWnd *)0x0,-1,-1,*(int *)(param_2 + 8) - *(int *)param_2,
                       *(int *)(param_2 + 0xc) - *(int *)(param_2 + 4),0x16);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(this_00 + 0x20),&local_18);
    CWnd::ScreenToClient((CWnd *)this,&local_18);
    if (*(int *)(this + 0x2b90) == 1) {
      local_18.left = *(int *)(param_2 + 8);
    }
    else {
      local_18.top = *(int *)(param_2 + 0xc);
    }
    CWnd::SetWindowPos((CWnd *)this_00,(CWnd *)0x0,local_18.left,local_18.top,
                       local_18.right - local_18.left,local_18.bottom - local_18.top,0x14);
    AdjustMDIChildren(this,(CMFCTabCtrl *)param_1);
    AdjustMDIChildren(this,this_00);
    RedrawWindow(*(HWND *)(param_1 + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
    RedrawWindow(*(HWND *)(this_00 + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
    *(undefined4 *)(this + 0x2b94) = 0;
  }
  lVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar1;
}

