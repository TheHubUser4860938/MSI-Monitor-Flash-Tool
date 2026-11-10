// rea decompile_all
// name: CMFCPopupMenu::OnSize
// address: 0x100b7d33
// body: available
// range: 0x100b7d33-0x100b7e47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPopupMenu::OnSize(unsigned int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCPopupMenu::OnSize(CMFCPopupMenu *this,uint param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  CFrameWnd::OnSize((CFrameWnd *)this,param_1,param_2,param_3);
  pcVar1 = *(code **)(*(int *)this + 0x1c8);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (*(int *)(iVar3 + 0xbdc) == 0) {
    if (*(int *)(iVar3 + 0x20) != 0) {
      AdjustScroll(this,1);
      SetScrollBar(this);
    }
    pcVar1 = *(code **)(*(int *)this + 0x20c);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (0 < *(int *)(this + 0xf58)) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetClientRect(*(HWND *)(this + 0x20),&local_18);
      iVar2 = *(int *)(this + 0xf60);
      if (iVar2 == 0) {
        local_18.right = *(int *)(this + 0xf58) + local_18.left + iVar3;
      }
      else if (iVar2 == 1) {
        local_18.left = (local_18.right - *(int *)(this + 0xf58)) - iVar3;
      }
      else if (iVar2 == 2) {
        local_18.bottom = *(int *)(this + 0xf58) + local_18.top + iVar3;
      }
      else if (iVar2 == 3) {
        local_18.top = (local_18.bottom - *(int *)(this + 0xf58)) - iVar3;
      }
      InvalidateRect(*(HWND *)(this + 0x20),&local_18,1);
      UpdateWindow(*(HWND *)(this + 0x20));
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

