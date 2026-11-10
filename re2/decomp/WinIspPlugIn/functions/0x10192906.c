// rea decompile_all
// name: Getcat
// address: 0x10192906
// body: available
// range: 0x10192906-0x10192971 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: static unsigned int __cdecl std::time_get<char,class
   std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getcat(class std::locale::facet
   const * *,class std::locale const *)
    public: static unsigned int __cdecl std::time_get<unsigned short,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >
   >::_Getcat(class std::locale::facet const * *,class std::locale const *)
    public: static unsigned int __cdecl std::time_get<wchar_t,class
   std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >::_Getcat(class
   std::locale::facet const * *,class std::locale const *)
   
   Library: Visual Studio 2015 Release */

undefined4 Getcat(int *param_1)

{
  time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this;
  undefined4 uVar1;
  _Locinfo *p_Var2;
  int iVar3;
  
  iVar3 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    this = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
           FUN_100491ae(0x44);
    if (this != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
      uVar1 = FUN_10006a80();
      p_Var2 = (_Locinfo *)FUN_10006790(uVar1);
      iVar3 = std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::
              time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>(this,p_Var2,0);
    }
    *param_1 = iVar3;
    if (this != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
      FUN_10006870();
    }
  }
  return 5;
}

