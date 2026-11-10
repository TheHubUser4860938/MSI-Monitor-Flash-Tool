// rea decompile_all
// name: CMFCRibbonBar::OnMouseMove
// address: 0x10152132
// body: available
// range: 0x10152132-0x10152362 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonBar::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonBar::OnMouseMove(CMFCRibbonBar *this,uint param_1,int param_3,int param_4)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  tagTRACKMOUSEEVENT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  CPane::OnMouseMove((CPane *)this,param_1,param_3,param_4);
  pcVar1 = *(code **)(*(int *)this + 0x330);
  guard_check_icall(param_3,param_4,0,0);
  piVar3 = (int *)(*pcVar1)();
  if ((param_3 == -1) && (param_4 == -1)) {
    *(undefined4 *)(this + 0x2ec) = 0;
  }
  else if (*(int *)(this + 0x2ec) == 0) {
    local_18.hwndTrack = *(HWND *)(this + 0x20);
    *(undefined4 *)(this + 0x2ec) = 1;
    local_18.cbSize = 0x10;
    local_18.dwFlags = 2;
    TrackMouseEvent(&local_18);
    if ((*(int *)(this + 0x33c) != 0) && ((param_1 & 1) == 0)) {
      *(undefined4 *)(*(int *)(this + 0x33c) + 0xd0) = 0;
    }
  }
  piVar2 = *(int **)(this + 0x338);
  if (piVar3 == piVar2) {
    if (piVar2 != (int *)0x0) {
      if (piVar2[0x32] == 0) {
        piVar2[0x32] = 1;
        iVar4 = *(int *)(this + 0x338);
        local_18.cbSize = *(DWORD *)(iVar4 + 0x74);
        local_18.dwFlags = *(DWORD *)(iVar4 + 0x78);
        local_18.hwndTrack = *(HWND *)(iVar4 + 0x7c);
        local_18.dwHoverTime = *(DWORD *)(iVar4 + 0x80);
        RedrawWindow(*(HWND *)(this + 0x20),(RECT *)&local_18,(HRGN)0x0,0x105);
      }
      pcVar1 = *(code **)(**(int **)(this + 0x338) + 0x218);
      guard_check_icall(param_3,param_4);
      (*pcVar1)();
    }
    goto LAB_1015232d;
  }
  PopTooltip(this);
  if (*(int *)(this + 0x338) != 0) {
    *(undefined4 *)(*(int *)(this + 0x338) + 200) = 0;
    pcVar1 = *(code **)(**(int **)(this + 0x338) + 0x220);
    guard_check_icall(0);
    (*pcVar1)();
    iVar4 = *(int *)(this + 0x338);
    local_18.cbSize = *(DWORD *)(iVar4 + 0x74);
    local_18.dwFlags = *(DWORD *)(iVar4 + 0x78);
    local_18.hwndTrack = *(HWND *)(iVar4 + 0x7c);
    local_18.dwHoverTime = *(DWORD *)(iVar4 + 0x80);
    InvalidateRect(*(HWND *)(this + 0x20),(RECT *)&local_18,1);
    *(undefined4 *)(this + 0x338) = 0;
  }
  if (piVar3 != (int *)0x0) {
    if ((param_1 & 1) != 0) {
      pcVar1 = *(code **)(*piVar3 + 0xd8);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      if (iVar4 == 0) goto LAB_101522c9;
    }
    *(int **)(this + 0x338) = piVar3;
    pcVar1 = *(code **)(*piVar3 + 0x220);
    guard_check_icall(1);
    (*pcVar1)();
    *(undefined4 *)(*(int *)(this + 0x338) + 200) = 1;
    iVar4 = *(int *)(this + 0x338);
    local_18.cbSize = *(DWORD *)(iVar4 + 0x74);
    local_18.dwFlags = *(DWORD *)(iVar4 + 0x78);
    local_18.hwndTrack = *(HWND *)(iVar4 + 0x7c);
    local_18.dwHoverTime = *(DWORD *)(iVar4 + 0x80);
    InvalidateRect(*(HWND *)(this + 0x20),(RECT *)&local_18,1);
    pcVar1 = *(code **)(**(int **)(this + 0x338) + 0x218);
    guard_check_icall(param_3,param_4);
    (*pcVar1)();
  }
LAB_101522c9:
  UpdateWindow(*(HWND *)(this + 0x20));
LAB_1015232d:
  if (*(int **)(this + 0x7a8) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x7a8) + 0xc4);
    guard_check_icall(param_3,param_4);
    (*pcVar1)();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

