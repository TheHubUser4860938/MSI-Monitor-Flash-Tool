// rea decompile_all
// name: CMFCMaskedEdit::IsMaskedChar
// address: 0x534c1a
// body: available
// range: 0x534c1a-0x534cbd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCMaskedEdit::IsMaskedChar(wchar_t,wchar_t)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCMaskedEdit::IsMaskedChar(CMFCMaskedEdit *this,wchar_t param_1,wchar_t param_2)

{
  int iVar1;
  
  if ((ushort)param_2 < 0x45) {
    if (param_2 == L'D') {
      iVar1 = _iswdigit(param_1);
LAB_00534c73:
      if (iVar1 == 0) goto LAB_00534cb8;
    }
    else {
      if (param_2 == L'*') {
        iVar1 = _iswprint(param_1);
        goto LAB_00534c73;
      }
      if (param_2 != L'+') {
        if (param_2 == L'A') {
          iVar1 = _iswalnum(param_1);
        }
        else {
          if (param_2 != L'C') goto LAB_00534cb8;
          iVar1 = _iswalpha(param_1);
        }
        goto LAB_00534c73;
      }
      if ((param_1 != L'+') && (param_1 != L'-')) goto LAB_00534c9a;
    }
LAB_00534c78:
    iVar1 = 1;
  }
  else {
    if (param_2 == L'a') {
      iVar1 = _iswalnum(param_1);
LAB_00534c95:
      if (iVar1 != 0) goto LAB_00534c78;
LAB_00534c9a:
      iVar1 = _iswspace(param_1);
      goto LAB_00534c73;
    }
    if (param_2 == L'c') {
      iVar1 = _iswalpha(param_1);
      goto LAB_00534c95;
    }
    if (param_2 == L'd') {
      iVar1 = _iswdigit(param_1);
      goto LAB_00534c95;
    }
LAB_00534cb8:
    iVar1 = 0;
  }
  return iVar1;
}

