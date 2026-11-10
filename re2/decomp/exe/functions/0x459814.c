// rea decompile_all
// name: FUN_00459814
// address: 0x459814
// body: available
// range: 0x459814-0x45987d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x459879 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00459814(int param_1)

{
  CMFCToolBar *this;
  code *pcVar1;
  uint uVar2;
  int in_ECX;
  
  if (2 < param_1) {
    param_1 = 1;
  }
  this = *(CMFCToolBar **)(in_ECX + 0x14);
  if (this != (CMFCToolBar *)0x0) {
    uVar2 = CMFCToolBar::GetButtonStyle(this,*(int *)(in_ECX + 8));
    uVar2 = uVar2 & 0xffeeffff;
    if (param_1 == 1) {
      uVar2 = uVar2 | 0x10000;
    }
    else if (param_1 == 2) {
      uVar2 = uVar2 | 0x100000;
    }
    pcVar1 = *(code **)(*(int *)this + 0x374);
    guard_check_icall(*(undefined4 *)(in_ECX + 8),uVar2 | 2);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

