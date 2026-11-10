// rea decompile_all
// name: CMFCToolBarComboBoxButton::CreateEdit
// address: 0x100c2f5d
// body: available
// range: 0x100c2f5d-0x100c2fca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual class CMFCToolBarComboBoxEdit * __thiscall
   CMFCToolBarComboBoxButton::CreateEdit(class CWnd *,class CRect const &,unsigned long)
   
   Library: Visual Studio 2015 Release */

CMFCToolBarComboBoxEdit * __thiscall
CMFCToolBarComboBoxButton::CreateEdit
          (CMFCToolBarComboBoxButton *this,CWnd *param_1,CRect *param_2,ulong param_3)

{
  code *pcVar1;
  CMFCToolBarComboBoxEdit *this_00;
  int iVar2;
  CMFCToolBarComboBoxEdit *this_01;
  
  this_00 = (CMFCToolBarComboBoxEdit *)FUN_100491ae(0x88);
  this_01 = (CMFCToolBarComboBoxEdit *)0x0;
  if (this_00 != (CMFCToolBarComboBoxEdit *)0x0) {
    this_01 = (CMFCToolBarComboBoxEdit *)
              CMFCToolBarComboBoxEdit::CMFCToolBarComboBoxEdit(this_00,this);
  }
  iVar2 = CEdit::Create((CEdit *)this_01,param_3,(tagRECT *)param_2,param_1,*(uint *)(this + 0x20));
  if (iVar2 == 0) {
    if (this_01 != (CMFCToolBarComboBoxEdit *)0x0) {
      pcVar1 = *(code **)(*(int *)this_01 + 4);
      guard_check_icall(1);
      (*pcVar1)();
    }
    this_01 = (CMFCToolBarComboBoxEdit *)0x0;
  }
  return this_01;
}

