// rea decompile_all
// name: CMFCToolBarComboBoxButton::CreateCombo
// address: 0x10096f9d
// body: available
// range: 0x10096f9d-0x1009701d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual class CComboBox * __thiscall CMFCToolBarComboBoxButton::CreateCombo(class CWnd
   *,class CRect const &)
   
   Library: Visual Studio 2015 Release */

CComboBox * __thiscall
CMFCToolBarComboBoxButton::CreateCombo(CMFCToolBarComboBoxButton *this,CWnd *param_1,CRect *param_2)

{
  code *pcVar1;
  CComboBox *this_00;
  int iVar2;
  
  this_00 = (CComboBox *)FUN_1001cfa0(0x80);
  if (this_00 == (CComboBox *)0x0) {
    this_00 = (CComboBox *)0x0;
  }
  else {
    CWnd::CWnd((CWnd *)this_00);
    *(undefined ***)this_00 = CComboBox::vftable;
  }
  pcVar1 = *(code **)(*(int *)this_00 + 0x164);
  guard_check_icall(*(undefined4 *)(this + 0x8c),param_2,param_1,*(undefined4 *)(this + 0x20));
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    pcVar1 = *(code **)(*(int *)this_00 + 4);
    guard_check_icall(1);
    (*pcVar1)();
    this_00 = (CComboBox *)0x0;
  }
  return this_00;
}

