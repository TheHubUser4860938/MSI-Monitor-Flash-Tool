// rea decompile_all
// name: CMFCAutoHideBar::OnMouseMove
// address: 0x1012cf53
// body: available
// range: 0x1012cf53-0x1012d07a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCAutoHideBar::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCAutoHideBar::OnMouseMove(CMFCAutoHideBar *this)

{
  code *pcVar1;
  CMFCAutoHideButton *pCVar2;
  BOOL BVar3;
  UINT_PTR UVar4;
  tagTRACKMOUSEEVENT local_20;
  tagPOINT local_10;
  CMFCAutoHideButton *local_8;
  
  local_10.x = 0;
  local_10.y = 0;
  GetCursorPos(&local_10);
  ScreenToClient(*(HWND *)(this + 0x20),&local_10);
  pCVar2 = ButtonFromPoint(this,local_10.x,local_10.y);
  if (*(int *)(this + 0x2e4) == 0) {
    local_20.hwndTrack = *(HWND *)(this + 0x20);
    *(undefined4 *)(this + 0x2e4) = 1;
    local_20.cbSize = 0x10;
    local_20.dwFlags = 2;
    TrackMouseEvent(&local_20);
  }
  if ((pCVar2 != (CMFCAutoHideButton *)0x0) && (*(int *)(this + 0x2dc) == 0)) {
    BVar3 = IsWindowVisible(*(HWND *)(*(int *)(pCVar2 + 0x2c) + 0x20));
    if (BVar3 == 0) {
      *(undefined4 *)(this + 0x2dc) = 1;
      if (*(UINT_PTR *)(this + 0x2e0) != 0) {
        KillTimer(*(HWND *)(this + 0x20),*(UINT_PTR *)(this + 0x2e0));
      }
      UVar4 = SetTimer(*(HWND *)(this + 0x20),0xec00,DAT_10201ce0,(TIMERPROC)0x0);
      *(UINT_PTR *)(this + 0x2e0) = UVar4;
    }
    local_8 = *(CMFCAutoHideButton **)(this + 0x2d8);
    if ((local_8 != (CMFCAutoHideButton *)0x0) && (local_8 != pCVar2)) {
      pcVar1 = *(code **)(*(int *)local_8 + 0x18);
      guard_check_icall(0);
      (*pcVar1)();
    }
    if (pCVar2 != *(CMFCAutoHideButton **)(this + 0x2d8)) {
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x18);
      guard_check_icall(1);
      (*pcVar1)();
      *(CMFCAutoHideButton **)(this + 0x2d8) = pCVar2;
      UpdateWindow(*(HWND *)(this + 0x20));
      InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
    }
  }
  return;
}

