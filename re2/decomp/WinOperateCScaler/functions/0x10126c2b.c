// rea decompile_all
// name: CMFCRibbonBar::OnCancelMode
// address: 0x10126c2b
// body: available
// range: 0x10126c2b-0x10126d57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonBar::OnCancelMode(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonBar::OnCancelMode(CMFCRibbonBar *this)

{
  code *pcVar1;
  int iVar2;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  CPane::OnCancelMode((CPane *)this);
  DeactivateKeyboardFocus(this,0);
  if (*(int *)(this + 0x300) != 0) {
    KillTimer(*(HWND *)(this + 0x20),0xec19);
    *(undefined4 *)(this + 0x300) = 0;
  }
  *(undefined4 *)(this + 0x2ec) = 0;
  PopTooltip(this);
  if (*(int **)(this + 0x7a8) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x7a8) + 0xb8);
    guard_check_icall();
    (*pcVar1)();
  }
  iVar2 = *(int *)(this + 0x338);
  if (iVar2 != 0) {
    local_18.left = *(LONG *)(iVar2 + 0x74);
    local_18.top = *(LONG *)(iVar2 + 0x78);
    local_18.right = *(LONG *)(iVar2 + 0x7c);
    local_18.bottom = *(LONG *)(iVar2 + 0x80);
    *(undefined4 *)(iVar2 + 200) = 0;
    pcVar1 = *(code **)(**(int **)(this + 0x338) + 0x220);
    guard_check_icall(0);
    (*pcVar1)();
    *(undefined4 *)(*(int *)(this + 0x338) + 0xd0) = 0;
    if (*(int *)(this + 0x33c) == *(int *)(this + 0x338)) {
      *(undefined4 *)(this + 0x33c) = 0;
    }
    *(undefined4 *)(this + 0x338) = 0;
    RedrawWindow(*(HWND *)(this + 0x20),&local_18,(HRGN)0x0,0x105);
  }
  iVar2 = *(int *)(this + 0x33c);
  if (iVar2 != 0) {
    local_18.left = *(LONG *)(iVar2 + 0x74);
    local_18.top = *(LONG *)(iVar2 + 0x78);
    local_18.right = *(LONG *)(iVar2 + 0x7c);
    local_18.bottom = *(LONG *)(iVar2 + 0x80);
    *(undefined4 *)(iVar2 + 200) = 0;
    *(undefined4 *)(*(int *)(this + 0x33c) + 0xd0) = 0;
    *(undefined4 *)(this + 0x33c) = 0;
    RedrawWindow(*(HWND *)(this + 0x20),&local_18,(HRGN)0x0,0x105);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

