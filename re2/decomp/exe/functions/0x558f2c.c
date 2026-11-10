// rea decompile_all
// name: CMFCToolBarFontComboBox::Serialize
// address: 0x558f2c
// body: available
// range: 0x558f2c-0x559025 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCToolBarFontComboBox::Serialize(class CArchive &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBarFontComboBox::Serialize(CMFCToolBarFontComboBox *this,CArchive *param_1)

{
  CMFCToolBarButton::Serialize((CMFCToolBarButton *)this,param_1);
  if (((byte)param_1[0x18] & 1) == 0) {
    FUN_0043e915(*(undefined4 *)(this + 0x70));
    FUN_0043e915(*(undefined4 *)(this + 0x8c));
    FUN_0043e915(*(undefined4 *)(this + 0x74));
    CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0xb8));
    FUN_0043e915(*(undefined4 *)(this + 0x78));
    FUN_0043e915(*(undefined4 *)(this + 0xf4));
    FUN_0043e890(this[0xf8]);
  }
  else {
    FUN_00450090(this + 0x70);
    *(int *)(this + 0x5c) = *(int *)(this + 0x54) + *(int *)(this + 0x70);
    FUN_00450090(this + 0x8c);
    FUN_00450090(this + 0x74);
    CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0xb8));
    FUN_00450090(this + 0x78);
    FUN_00450090(this + 0xf4);
    FUN_0043e7aa(this + 0xf8);
    if (DAT_0061826c == 0) {
      RebuildFonts(this);
    }
    FUN_00559026();
    CMFCToolBarComboBoxButton::SelectItem((CMFCToolBarComboBoxButton *)this,*(int *)(this + 0x74),1)
    ;
  }
  return;
}

