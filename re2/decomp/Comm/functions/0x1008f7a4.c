// rea decompile_all
// name: CMFCHeaderCtrl::OnMouseMove
// address: 0x1008f7a4
// body: available
// range: 0x1008f7a4-0x1008f85e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCHeaderCtrl::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCHeaderCtrl::OnMouseMove(CMFCHeaderCtrl *this,byte param_1,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  LRESULT LVar2;
  tagTRACKMOUSEEVENT local_28;
  undefined4 local_18;
  undefined4 local_14;
  byte local_10;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  if ((param_1 & 1) == 0) {
    iVar1 = *(int *)(this + 0xb0);
    local_18 = param_3;
    local_14 = param_4;
    LVar2 = SendMessageW(*(HWND *)(this + 0x20),0x1206,0,(LPARAM)&local_18);
    *(LRESULT *)(this + 0xb0) = LVar2;
    if ((local_10 & 2) == 0) {
      *(undefined4 *)(this + 0xb0) = 0xffffffff;
    }
    if (*(int *)(this + 0xa8) == 0) {
      local_28.hwndTrack = *(HWND *)(this + 0x20);
      *(undefined4 *)(this + 0xa8) = 1;
      local_28.cbSize = 0x10;
      local_28.dwFlags = 2;
      TrackMouseEvent(&local_28);
    }
    if (iVar1 != *(int *)(this + 0xb0)) {
      RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
    }
  }
  FUN_1001d029();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

