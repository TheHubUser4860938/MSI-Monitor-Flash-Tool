// rea decompile_all
// name: CMFCTabCtrl::StopResize
// address: 0x10073bb0
// body: available
// range: 0x10073bb0-0x10073cae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCTabCtrl::StopResize(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCTabCtrl::StopResize(CMFCTabCtrl *this,int param_1)

{
  code *pcVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  LONG local_38;
  LONG LStack_34;
  LONG LStack_30;
  LONG LStack_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x29c) != 0) {
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    SetRectEmpty(&local_28);
    pcVar1 = *(code **)(*(int *)this + 0x2fc);
    guard_check_icall(&local_28,this + 0x30c);
    (*pcVar1)();
    *(undefined4 *)(this + 0x29c) = 0;
    ReleaseCapture();
    if (param_1 == 0) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetWindowRect(*(HWND *)(this + 0x20),&local_18);
      if (*(int *)(this + 0x29f8) == 1) {
        local_18.right = *(LONG *)(this + 0x314);
      }
      else if (*(int *)(this + 0x29f8) == 2) {
        local_18.bottom = *(LONG *)(this + 0x318);
      }
      local_38 = local_18.left;
      LStack_34 = local_18.top;
      LStack_30 = local_18.right;
      LStack_2c = local_18.bottom;
      pHVar2 = GetParent(*(HWND *)(this + 0x20));
      pCVar3 = CWnd::FromHandle(pHVar2);
      SendMessageW(*(HWND *)(pCVar3 + 0x20),DAT_101dbbe4,(WPARAM)this,(LPARAM)&local_38);
    }
    SetRectEmpty((LPRECT)(this + 0x30c));
    SetRectEmpty((LPRECT)(this + 0x31c));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

