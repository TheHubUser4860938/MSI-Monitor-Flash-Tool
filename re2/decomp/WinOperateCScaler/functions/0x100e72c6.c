// rea decompile_all
// name: CMFCToolBarMenuButton::OnCancelMode
// address: 0x100e72c6
// body: available
// range: 0x100e72c6-0x100e7402 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarMenuButton::OnCancelMode(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBarMenuButton::OnCancelMode(CMFCToolBarMenuButton *this)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  CMFCToolBarMenuButton *pCVar4;
  CMFCVisualManager *pCVar5;
  int iVar6;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x8c) != 0) {
    BVar2 = IsWindow(*(HWND *)(*(int *)(this + 0x8c) + 0x20));
    if (BVar2 != 0) {
      pcVar1 = *(code **)(**(int **)(this + 0x8c) + 0x1cc);
      guard_check_icall();
      iVar3 = (*pcVar1)();
      if (iVar3 != 0) goto LAB_100e73f2;
      iVar6 = 0;
      iVar3 = CMFCPopupMenu::GetMenuItemCount(*(CMFCPopupMenu **)(this + 0x8c));
      if (0 < iVar3) {
        do {
          pCVar4 = CMFCPopupMenu::GetMenuItem(*(CMFCPopupMenu **)(this + 0x8c),iVar6);
          if (pCVar4 != (CMFCToolBarMenuButton *)0x0) {
            pcVar1 = *(code **)(*(int *)pCVar4 + 0x58);
            guard_check_icall();
            (*pcVar1)();
          }
          iVar6 = iVar6 + 1;
          iVar3 = CMFCPopupMenu::GetMenuItemCount(*(CMFCPopupMenu **)(this + 0x8c));
        } while (iVar6 < iVar3);
      }
      pcVar1 = *(code **)(**(int **)(this + 0x8c) + 0x1e0);
      guard_check_icall();
      (*pcVar1)();
      *(undefined4 *)(*(int *)(this + 0x8c) + 0x130) = 0;
      CMFCPopupMenu::CloseMenu(*(CMFCPopupMenu **)(this + 0x8c),0);
    }
  }
  *(undefined4 *)(this + 0x8c) = 0;
  if (*(int *)(this + 0x6c) != 0) {
    BVar2 = IsWindow(*(HWND *)(*(int *)(this + 0x6c) + 0x20));
    if (BVar2 != 0) {
      local_18.left = *(LONG *)(this + 0x54);
      local_18.top = *(LONG *)(this + 0x58);
      local_18.right = *(LONG *)(this + 0x5c);
      local_18.bottom = *(LONG *)(this + 0x60);
      pCVar5 = CMFCVisualManager::GetInstance();
      InflateRect(&local_18,*(int *)(pCVar5 + 0x7c),*(int *)(pCVar5 + 0x7c));
      InvalidateRect(*(HWND *)(*(int *)(this + 0x6c) + 0x20),&local_18,1);
      UpdateWindow(*(HWND *)(*(int *)(this + 0x6c) + 0x20));
    }
  }
  *(undefined4 *)(this + 0xa4) = 0;
LAB_100e73f2:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

