// rea decompile_all
// name: CMFCRibbonBar::DeactivateKeyboardFocus
// address: 0x1011aeb0
// body: available
// range: 0x1011aeb0-0x1011af52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCRibbonBar::DeactivateKeyboardFocus(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonBar::DeactivateKeyboardFocus(CMFCRibbonBar *this,int param_1)

{
  code *pcVar1;
  int *piVar2;
  CFrameWnd *this_00;
  
  RemoveAllKeys(this);
  *(undefined4 *)(this + 0x2d8) = 0;
  pcVar1 = *(code **)(*(int *)this + 0x338);
  guard_check_icall();
  piVar2 = (int *)(*pcVar1)();
  if (piVar2 != (int *)0x0) {
    piVar2[0x33] = 0;
    pcVar1 = *(code **)(*piVar2 + 0x224);
    guard_check_icall(0);
    (*pcVar1)();
    pcVar1 = *(code **)(*piVar2 + 0x1b8);
    guard_check_icall();
    (*pcVar1)();
  }
  if (-1 < *(int *)(this + 0x2d4)) {
    *(undefined4 *)(this + 0x2d4) = 0xffffffff;
    *(undefined4 *)(this + 0x844) = 0;
    *(undefined4 *)(this + 0x848) = 0;
    this_00 = CWnd::GetParentFrame((CWnd *)this);
    if (param_1 != 0) {
      CWnd::SetFocus((CWnd *)this_00);
    }
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
  }
  return;
}

