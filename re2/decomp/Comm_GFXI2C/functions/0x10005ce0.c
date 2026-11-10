// rea decompile_all
// name: FUN_10005ce0
// address: 0x10005ce0
// body: available
// range: 0x10005ce0-0x10005d4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


CDialog * FUN_10005ce0(CDialog *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100583e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CDialog::CDialog(param_1,0xbb9,(CWnd *)0x0);
  local_4 = 0;
  *(undefined ***)param_1 = CMultiRTMonitorSelDlg::vftable;
  CWnd::CWnd((CWnd *)(param_1 + 0x78));
  *(undefined ***)(param_1 + 0x78) = CComboBox::vftable;
  *(undefined4 *)(param_1 + 0x74) = param_2;
  ExceptionList = local_c;
  return param_1;
}

