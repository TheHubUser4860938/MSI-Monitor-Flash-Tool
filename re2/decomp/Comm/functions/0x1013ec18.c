// rea decompile_all
// name: CMFCCustomColorsPropertyPage::CMFCCustomColorsPropertyPage
// address: 0x1013ec18
// body: available
// range: 0x1013ec18-0x1013ec98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCCustomColorsPropertyPage::CMFCCustomColorsPropertyPage(void)
   
   Library: Visual Studio 2015 Release */

CMFCCustomColorsPropertyPage * __thiscall
CMFCCustomColorsPropertyPage::CMFCCustomColorsPropertyPage(CMFCCustomColorsPropertyPage *this)

{
  CPropertyPage::CPropertyPage((CPropertyPage *)this,0x4243,0,0x38);
  *(undefined ***)this = vftable;
  CMFCColorPickerCtrl::CMFCColorPickerCtrl((CMFCColorPickerCtrl *)(this + 200));
  CMFCColorPickerCtrl::CMFCColorPickerCtrl((CMFCColorPickerCtrl *)(this + 0x198));
  *(undefined4 *)(this + 0x268) = 0;
  *(undefined4 *)(this + 0x26c) = 0;
  *(undefined4 *)(this + 0x270) = 0;
  *(undefined4 *)(this + 0x274) = 0;
  *(undefined4 *)(this + 0x278) = 0;
  *(undefined4 *)(this + 0x27c) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0x280) = 0;
  *(undefined4 *)(this + 0x284) = 0;
  return this;
}

