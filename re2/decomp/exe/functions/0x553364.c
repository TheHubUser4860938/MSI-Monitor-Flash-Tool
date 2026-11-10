// rea decompile_all
// name: CMFCColorPickerCtrl::CMFCColorPickerCtrl
// address: 0x553364
// body: available
// range: 0x553364-0x5533f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCColorPickerCtrl::CMFCColorPickerCtrl(void)
   
   Library: Visual Studio 2015 Release */

CMFCColorPickerCtrl * __thiscall CMFCColorPickerCtrl::CMFCColorPickerCtrl(CMFCColorPickerCtrl *this)

{
  CWnd::CWnd((CWnd *)this);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined ***)(this + 0xb0) = CBitmap::vftable;
  CObArray::CObArray((CObArray *)(this + 0xb8));
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  FUN_004659f1(0,this + 0x98,this + 0x90,this + 0x88);
  *(undefined8 *)(this + 0x88) = 0x3fe0000000000000;
  *(undefined4 *)(this + 0xa8) = 0x14;
  *(undefined4 *)(this + 0x80) = 2;
  *(undefined4 *)(this + 0xac) = 0;
  return this;
}

