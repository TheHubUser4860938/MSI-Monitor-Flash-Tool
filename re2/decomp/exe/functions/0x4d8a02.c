// rea decompile_all
// name: FUN_004d8a02
// address: 0x4d8a02
// body: available
// range: 0x4d8a02-0x4d8a38 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4d8a34 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d8a02(int param_1,_CTaskDialogButton *param_2)

{
  CArray<CTaskDialog::_CTaskDialogButton,CTaskDialog::_CTaskDialogButton_const&> *in_ECX;
  
  if (-1 < param_1) {
    if (*(int *)(in_ECX + 8) <= param_1) {
      CArray<CTaskDialog::_CTaskDialogButton,CTaskDialog::_CTaskDialogButton_const&>::SetSize
                (in_ECX,param_1 + 1,-1);
    }
    CTaskDialog::_CTaskDialogButton::operator=
              ((_CTaskDialogButton *)(param_1 * 0xc + *(int *)(in_ECX + 4)),param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

