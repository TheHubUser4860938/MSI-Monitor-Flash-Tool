// rea decompile_all
// name: Getcat
// address: 0x1015b52c
// body: available
// range: 0x1015b52c-0x1015b597 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    iVar1 = FUN_1001cfa0(0x44);
    if (iVar1 != 0) {
      uVar2 = FUN_10157777();
      uVar2 = FUN_10006880(uVar2);
      iVar3 = time_get<>(uVar2,0);
    }
    *param_1 = iVar3;
    if (iVar1 != 0) {
      FUN_10007520();
    }
  }
  return 5;
}

