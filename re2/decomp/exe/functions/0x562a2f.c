// rea decompile_all
// name: std::numpunct<wchar_t>::_Getcat
// address: 0x562a2f
// body: available
// range: 0x562a2f-0x562aa9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: static unsigned int __cdecl std::numpunct<wchar_t>::_Getcat(class std::locale::facet
   const * *,class std::locale const *)
   
   Library: Visual Studio 2015 Release */

uint __cdecl std::numpunct<wchar_t>::_Getcat(facet **param_1,locale *param_2)

{
  numpunct<wchar_t> *this;
  undefined4 uVar1;
  _Locinfo *p_Var2;
  bool bVar3;
  
  if ((param_1 != (facet **)0x0) && (*param_1 == (facet *)0x0)) {
    this = (numpunct<wchar_t> *)FUN_00416408(0x18);
    bVar3 = this == (numpunct<wchar_t> *)0x0;
    if (bVar3) {
      this = (numpunct<wchar_t> *)0x0;
    }
    else {
      uVar1 = FUN_00402290();
      p_Var2 = (_Locinfo *)FUN_00401f80(uVar1);
      *(undefined4 *)(this + 4) = 0;
      *(undefined ***)this = vftable;
      _Init(this,p_Var2,true);
    }
    *param_1 = (facet *)this;
    if (!bVar3) {
      FUN_00402070();
    }
  }
  return 4;
}

