// rea decompile_all
// name: FUN_101084ea
// address: 0x101084ea
// body: available
// range: 0x101084ea-0x1010857b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_101084ea(CWnd *param_1)

{
  CDialog *in_ECX;
  
  CDialog::CDialog(in_ECX,0x426c,param_1);
  *(undefined ***)in_ECX = COutlookOptionsDlg::vftable;
  CWnd::CWnd((CWnd *)(in_ECX + 0xa8));
  *(undefined ***)(in_ECX + 0xa8) = CButton::vftable;
  CWnd::CWnd((CWnd *)(in_ECX + 0x128));
  *(undefined ***)(in_ECX + 0x128) = CButton::vftable;
  CWnd::CWnd((CWnd *)(in_ECX + 0x1a8));
  *(undefined ***)(in_ECX + 0x1a8) = CButton::vftable;
  CMFCToolBarsListCheckBox::CMFCToolBarsListCheckBox((CMFCToolBarsListCheckBox *)(in_ECX + 0x228));
  *(CWnd **)(in_ECX + 0x2c8) = param_1;
  return;
}

