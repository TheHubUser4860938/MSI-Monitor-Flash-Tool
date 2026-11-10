// rea decompile_all
// name: CMFCColorDialog::CMFCColorDialog
// address: 0x1013dfb9
// body: available
// range: 0x1013dfb9-0x1013e073 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCColorDialog::CMFCColorDialog(unsigned long,unsigned long,class CWnd
   *,struct HPALETTE__ *)
   
   Library: Visual Studio 2015 Release */

CMFCColorDialog * __thiscall
CMFCColorDialog::CMFCColorDialog
          (CMFCColorDialog *this,ulong param_1,ulong param_2,CWnd *param_3,HPALETTE__ *param_4)

{
  CGdiObject *pCVar1;
  
  CDialogEx::CDialogEx((CDialogEx *)this,0x4241,param_3);
  *(undefined ***)this = vftable;
  CMFCButton::CMFCButton((CMFCButton *)(this + 0xf8));
  CWnd::CWnd((CWnd *)(this + 0x8a0));
  *(undefined ***)(this + 0x8a0) = CStatic::vftable;
  CMFCColorPickerCtrl::CMFCColorPickerCtrl((CMFCColorPickerCtrl *)(this + 0x920));
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(ulong *)(this + 0xe4) = param_1;
  *(ulong *)(this + 0xe0) = param_1;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xec) = 1;
  *(undefined4 *)(this + 0xdc) = 0;
  if (param_4 != (HPALETTE__ *)0x0) {
    pCVar1 = CGdiObject::FromHandle(param_4);
    *(CGdiObject **)(this + 0xdc) = pCVar1;
    *(undefined4 *)(this + 0xec) = 0;
  }
  *(undefined4 *)(this + 0xf0) = 0;
  return this;
}

