// rea decompile_all
// name: CDockablePane::RedrawButton
// address: 0x101024e0
// body: available
// range: 0x101024e0-0x1010255e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CDockablePane::RedrawButton(class CMFCCaptionButton const *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockablePane::RedrawButton(CDockablePane *this,CMFCCaptionButton *param_1)

{
  code *pcVar1;
  LONG *pLVar2;
  undefined1 local_18 [16];
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if ((param_1 != (CMFCCaptionButton *)0x0) && (*(int *)(param_1 + 0x10) != 0)) {
    pcVar1 = *(code **)(*(int *)param_1 + 0xc);
    guard_check_icall(local_18);
    pLVar2 = (LONG *)(*pcVar1)();
    ((LPRECT)(this + 0x2e8))->left = *pLVar2;
    *(LONG *)(this + 0x2ec) = pLVar2[1];
    *(LONG *)(this + 0x2f0) = pLVar2[2];
    *(LONG *)(this + 0x2f4) = pLVar2[3];
    SendMessageW(*(HWND *)(this + 0x20),0x85,0,0);
    SetRectEmpty((LPRECT)(this + 0x2e8));
    UpdateWindow(*(HWND *)(this + 0x20));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

