// rea decompile_all
// name: CMFCRibbonPanel::CancelMode
// address: 0x10106a8d
// body: available
// range: 0x10106a8d-0x10106b6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonPanel::CancelMode(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonPanel::CancelMode(CMFCRibbonPanel *this)

{
  code *pcVar1;
  int iVar2;
  
  *(undefined4 *)(this + 0xa0) = 0;
  if (*(int *)(this + 0x2dc) != 0) {
    *(undefined4 *)(*(int *)(this + 0x2dc) + 200) = 0;
    pcVar1 = *(code **)(**(int **)(this + 0x2dc) + 0x220);
    guard_check_icall(0);
    (*pcVar1)();
    *(undefined4 *)(*(int *)(this + 0x2dc) + 0xd0) = 0;
    *(undefined4 *)(*(int *)(this + 0x2dc) + 0xcc) = 0;
    pcVar1 = *(code **)(**(int **)(this + 0x2dc) + 0x224);
    guard_check_icall(0);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)this + 0x108);
    guard_check_icall(*(undefined4 *)(this + 0x2dc));
    (*pcVar1)();
    *(undefined4 *)(this + 0x2dc) = 0;
  }
  if (*(int *)(this + 0x68) != 0) {
    *(undefined4 *)(this + 0x68) = 0;
    pcVar1 = *(code **)(*(int *)this + 0xa4);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x20) != 0)) {
      pcVar1 = *(code **)(*(int *)this + 0xa4);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      RedrawWindow(*(HWND *)(iVar2 + 0x20),(RECT *)(this + 0xcc),(HRGN)0x0,0x105);
    }
  }
  return;
}

