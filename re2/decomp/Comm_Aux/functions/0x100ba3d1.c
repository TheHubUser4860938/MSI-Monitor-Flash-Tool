// rea decompile_all
// name: CMFCPopupMenu::UpdateBottomWindows
// address: 0x100ba3d1
// body: available
// range: 0x100ba3d1-0x100ba4f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPopupMenu::UpdateBottomWindows(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCPopupMenu::UpdateBottomWindows(CMFCPopupMenu *this,int param_1)

{
  CWnd *pCVar1;
  ulong uVar2;
  BOOL BVar3;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  pCVar1 = CWnd::GetTopLevelParent((CWnd *)this);
  if (pCVar1 != (CWnd *)0x0) {
    if ((*(int *)(this + 0x105c) != 0) && (DAT_10205be8 == 0)) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetWindowRect(*(HWND *)(pCVar1 + 0x20),&local_18);
      local_28.top = *(LONG *)(this + 0x13c);
      local_28.left = *(LONG *)(this + 0x138);
      local_28.right = local_28.left + *(int *)(this + 0x148) + *(int *)(this + 0x105c);
      local_28.bottom = local_28.top + *(int *)(this + 0x14c) + *(int *)(this + 0x105c);
      uVar2 = CWnd::GetExStyle((CWnd *)this);
      if ((uVar2 & 0x400000) != 0) {
        OffsetRect(&local_28,-(*(int *)(this + 0x105c) + *(int *)(this + 0x148)),0);
      }
      local_38.left = 0;
      local_38.top = 0;
      local_38.right = 0;
      local_38.bottom = 0;
      UnionRect(&local_38,&local_28,&local_18);
      BVar3 = EqualRect(&local_38,&local_18);
      if (BVar3 == 0) {
        *(undefined4 *)(this + 0x105c) = 0;
        if (param_1 == 0) {
          CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,-1,-1,*(int *)(this + 0x148),
                             *(int *)(this + 0x14c),0x16);
        }
        goto LAB_100ba4e5;
      }
    }
    UpdateWindow(*(HWND *)(pCVar1 + 0x20));
  }
LAB_100ba4e5:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

