// rea decompile_all
// name: CMFCPropertyGridCtrl::OnCancelMode
// address: 0x1003da92
// body: available
// range: 0x1003da92-0x1003db2a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003db26 to 0x1001d029 FUN_1001d029 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPropertyGridCtrl::OnCancelMode(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCPropertyGridCtrl::OnCancelMode(CMFCPropertyGridCtrl *this)

{
  HWND pHVar1;
  code *pcVar2;
  HWND pHVar3;
  
  if (*(int *)(this + 0x388) != 0) {
    TrackHeader(this,-1);
    pHVar1 = *(HWND *)(this + 0x20);
    *(undefined4 *)(this + 0x388) = 0;
    pHVar3 = GetCapture();
    if (pHVar3 == pHVar1) {
      ReleaseCapture();
    }
  }
  if (*(int *)(this + 0x38c) != 0) {
    TrackDescr(this,-0x80000000);
    pHVar1 = *(HWND *)(this + 0x20);
    *(undefined4 *)(this + 0x38c) = 0;
    pHVar3 = GetCapture();
    if (pHVar3 == pHVar1) {
      ReleaseCapture();
    }
  }
  pHVar1 = *(HWND *)(this + 0x20);
  pHVar3 = GetCapture();
  if (pHVar3 == pHVar1) {
    ReleaseCapture();
  }
  CMFCPropertyGridToolTipCtrl::Deactivate((CMFCPropertyGridToolTipCtrl *)(this + 0x1d8));
  pcVar2 = *(code **)(*(int *)this + 0x188);
  guard_check_icall(1);
  (*pcVar2)();
  FUN_1001d029();
  return;
}

