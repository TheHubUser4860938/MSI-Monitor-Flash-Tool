// rea decompile_all
// name: CMFCMaskedEdit::IsMaskedChar
// address: 0x1007173a
// body: available
// range: 0x1007173a-0x100717dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
LAB_10071793:
      if (iVar1 == 0) goto LAB_100717d8;
    }
    else {
      if (param_2 == L'*') {
        iVar1 = _iswprint(param_1);
        goto LAB_10071793;
      }
      if (param_2 != L'+') {
        if (param_2 == L'A') {
          iVar1 = _iswalnum(param_1);
        }
        else {
          if (param_2 != L'C') goto LAB_100717d8;
          iVar1 = _iswalpha(param_1);
        }
        goto LAB_10071793;
      }
      if ((param_1 != L'+') && (param_1 != L'-')) goto LAB_100717ba;
    }
LAB_10071798:
    iVar1 = 1;
  }
  else {
    if (param_2 == L'a') {
      iVar1 = _iswalnum(param_1);
LAB_100717b5:
      if (iVar1 != 0) goto LAB_10071798;
LAB_100717ba:
      iVar1 = _iswspace(param_1);
      goto LAB_10071793;
    }
    if (param_2 == L'c') {
      iVar1 = _iswalpha(param_1);
      goto LAB_100717b5;
    }
    if (param_2 == L'd') {
      iVar1 = _iswdigit(param_1);
      goto LAB_100717b5;
    }
LAB_100717d8:
    iVar1 = 0;
  }
  return iVar1;
}

