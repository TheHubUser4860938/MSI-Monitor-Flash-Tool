// rea decompile_all
// name: Getcat
// address: 0x5628e4
// body: available
// range: 0x5628e4-0x56294b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: static unsigned int __cdecl std::num_get<char,class std::istreambuf_iterator<char,struct
   std::char_traits<char> > >::_Getcat(class std::locale::facet const * *,class std::locale const *)
    public: static unsigned int __cdecl std::num_get<unsigned short,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >
   >::_Getcat(class std::locale::facet const * *,class std::locale const *)
    public: static unsigned int __cdecl std::num_get<wchar_t,class
   std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >::_Getcat(class
   std::locale::facet const * *,class std::locale const *)
    public: static unsigned int __cdecl std::num_put<char,class std::ostreambuf_iterator<char,struct
   std::char_traits<char> > >::_Getcat(class std::locale::facet const * *,class std::locale const *)
     6 names - too many to list
   
   Library: Visual Studio 2015 Release */

undefined4 Getcat(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    puVar1 = (undefined4 *)FUN_00416408(8);
    bVar3 = puVar1 == (undefined4 *)0x0;
    if (bVar3) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      uVar2 = FUN_00402290();
      FUN_00401f80(uVar2);
      *puVar1 = std::
                num_put<unsigned_short,std::ostreambuf_iterator<unsigned_short,std::char_traits<unsigned_short>_>_>
                ::vftable;
      puVar1[1] = 0;
    }
    *param_1 = (int)puVar1;
    if (!bVar3) {
      FUN_00402070();
    }
  }
  return 4;
}

