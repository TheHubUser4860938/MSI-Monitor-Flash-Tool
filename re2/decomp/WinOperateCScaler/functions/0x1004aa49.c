// rea decompile_all
// name: CMFCPropertyGridCtrl::OnLButtonUp
// address: 0x1004aa49
// body: available
// range: 0x1004aa49-0x1004ac16 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPropertyGridCtrl::OnLButtonUp(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCPropertyGridCtrl::OnLButtonUp
          (CMFCPropertyGridCtrl *this,undefined4 param_1,int param_3,int param_4)

{
  HWND pHVar1;
  code *pcVar2;
  HWND pHVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_48;
  int local_44;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  FUN_100283ad();
  if (*(int *)(this + 0x388) != 0) {
    TrackHeader(this,-1);
    pHVar1 = *(HWND *)(this + 0x20);
    *(undefined4 *)(this + 0x388) = 0;
    pHVar3 = GetCapture();
    if (pHVar3 == pHVar1) {
      ReleaseCapture();
    }
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    iVar5 = *(int *)(this + 0x354);
    if (*(int *)(this + 0x354) <= param_3) {
      iVar5 = param_3;
    }
    iVar6 = local_18.right - local_18.left;
    iVar4 = GetSystemMetrics(0x15);
    if (iVar5 < (iVar6 - iVar4) + -5) {
      iVar5 = *(int *)(this + 0x354);
      if (*(int *)(this + 0x354) <= param_3) {
        iVar5 = param_3;
      }
    }
    else {
      iVar4 = local_18.right - local_18.left;
      iVar5 = GetSystemMetrics(0x15);
      iVar5 = (iVar4 - iVar5) + -5;
    }
    local_44 = iVar5 + 2;
    *(int *)(this + 0x358) = iVar5;
    local_48 = 1;
    pcVar2 = *(code **)(*(int *)this + 0x164);
    guard_check_icall();
    iVar5 = (*pcVar2)();
    SendMessageW(*(HWND *)(iVar5 + 0x20),0x120c,0,(LPARAM)&local_48);
    local_44 = (local_18.right - local_18.left) + 10;
    pcVar2 = *(code **)(*(int *)this + 0x164);
    guard_check_icall();
    iVar5 = (*pcVar2)();
    SendMessageW(*(HWND *)(iVar5 + 0x20),0x120c,1,(LPARAM)&local_48);
  }
  if (*(int *)(this + 0x38c) != 0) {
    TrackDescr(this,-0x80000000);
    pHVar1 = *(HWND *)(this + 0x20);
    *(undefined4 *)(this + 0x38c) = 0;
    pHVar3 = GetCapture();
    if (pHVar3 == pHVar1) {
      ReleaseCapture();
    }
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    iVar5 = *(int *)(this + 0x354);
    if (param_4 <= *(int *)(this + 0x350) + iVar5) {
      param_4 = *(int *)(this + 0x350) + iVar5;
    }
    iVar4 = ((local_18.bottom - local_18.top) - param_4) + 2;
    *(int *)(this + 0x338) = iVar4;
    if (iVar5 <= iVar4) {
      iVar5 = iVar4;
    }
    *(int *)(this + 0x338) = iVar5;
    pcVar2 = *(code **)(*(int *)this + 0x170);
    guard_check_icall();
    (*pcVar2)();
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

