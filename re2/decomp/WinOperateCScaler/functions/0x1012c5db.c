// rea decompile_all
// name: CMFCRibbonPanelMenuBar::RestoreDelayedSubMenu
// address: 0x1012c5db
// body: available
// range: 0x1012c5db-0x1012c6d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonPanelMenuBar::RestoreDelayedSubMenu(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonPanelMenuBar::RestoreDelayedSubMenu(CMFCRibbonPanelMenuBar *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if ((*(int *)(this + 0xeac) != 0) && (*(int *)(this + 0xea4) != 0)) {
    *(undefined4 *)(*(int *)(this + 0xeac) + 0x188) = 0;
    iVar4 = FUN_100dbf78();
    iVar1 = *(int *)(this + 0xeac);
    local_18.left = *(LONG *)(iVar1 + 0x74);
    local_18.top = *(LONG *)(iVar1 + 0x78);
    local_18.right = *(LONG *)(iVar1 + 0x7c);
    local_18.bottom = *(LONG *)(iVar1 + 0x80);
    pcVar2 = *(code **)(**(int **)(this + 0xea4) + 0x114);
    guard_check_icall(1,local_18.left,local_18.top);
    (*pcVar2)();
    iVar1 = *(int *)(this + 0xeac);
    bVar3 = false;
    if (iVar1 != iVar4) {
      if (iVar1 != 0) {
        local_18.left = *(LONG *)(iVar1 + 0x74);
        local_18.top = *(LONG *)(iVar1 + 0x78);
        local_18.right = *(LONG *)(iVar1 + 0x7c);
        local_18.bottom = *(LONG *)(iVar1 + 0x80);
        InvalidateRect(*(HWND *)(this + 0x20),&local_18,1);
      }
      if (iVar4 != 0) {
        local_18.left = *(LONG *)(iVar4 + 0x74);
        local_18.top = *(LONG *)(iVar4 + 0x78);
        local_18.right = *(LONG *)(iVar4 + 0x7c);
        local_18.bottom = *(LONG *)(iVar4 + 0x80);
        InvalidateRect(*(HWND *)(this + 0x20),&local_18,1);
      }
      bVar3 = true;
    }
    *(undefined4 *)(this + 0xeac) = 0;
    KillTimer(*(HWND *)(this + 0x20),0xec1c);
    if (bVar3) {
      UpdateWindow(*(HWND *)(this + 0x20));
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

