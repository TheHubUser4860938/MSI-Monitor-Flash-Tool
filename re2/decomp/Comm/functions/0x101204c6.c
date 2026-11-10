// rea decompile_all
// name: CMFCRibbonPanelMenuBar::OnMouseLeave
// address: 0x101204c6
// body: available
// range: 0x101204c6-0x10120583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonPanelMenuBar::OnMouseLeave(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonPanelMenuBar::OnMouseLeave(CMFCRibbonPanelMenuBar *this)

{
  code *pcVar1;
  POINT pt;
  BOOL BVar2;
  tagPOINT local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_20.x = 0;
  local_20.y = 0;
  GetCursorPos(&local_20);
  ScreenToClient(*(HWND *)(this + 0x20),&local_20);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  pt.y = local_20.y;
  pt.x = local_20.x;
  BVar2 = PtInRect(&local_18,pt);
  if (BVar2 == 0) {
    OnMouseMove(this,0,0xffffffff,0xffffffff);
    *(undefined4 *)(this + 0xdd0) = 0;
    if (*(int **)(this + 0xea4) != (int *)0x0) {
      pcVar1 = *(code **)(**(int **)(this + 0xea4) + 0x114);
      guard_check_icall(0,0xffffffff,0xffffffff);
      (*pcVar1)();
    }
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x185);
  }
  *(undefined4 *)(this + 0xdd0) = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

