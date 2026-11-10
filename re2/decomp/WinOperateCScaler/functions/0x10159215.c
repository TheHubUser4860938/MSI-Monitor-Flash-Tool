// rea decompile_all
// name: use_facet<>
// address: 0x10159215
// body: available
// range: 0x10159215-0x101592b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    class std::messages<unsigned short> const & __cdecl std::use_facet<class std::messages<unsigned
   short> >(class std::locale const &)
    class std::messages<wchar_t> const & __cdecl std::use_facet<class std::messages<wchar_t> >(class
   std::locale const &)
    class std::money_get<unsigned short,class std::istreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > > const & __cdecl std::use_facet<class std::money_get<unsigned
   short,class std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >
   >(class std::locale const &)
    class std::money_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > > const & __cdecl std::use_facet<class std::money_get<wchar_t,class
   std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > > >(class std::locale const
   &)
     10 names - too many to list
   
   Library: Visual Studio 2015 Release */

facet * use_facet<>(locale *param_1)

{
  code *pcVar1;
  facet *pfVar2;
  uint uVar3;
  facet *pfVar4;
  int iVar5;
  undefined1 local_24 [12];
  _Lockit local_18 [4];
  facet *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x10159221;
  std::_Lockit::_Lockit(local_18,0);
  pfVar2 = DAT_1020d39c;
  local_8 = 0;
  local_14[0] = DAT_1020d39c;
  uVar3 = std::locale::id::operator_unsigned_int((id *)&DAT_1020d348);
  pfVar4 = std::locale::_Getfacet(param_1,uVar3);
  if ((pfVar4 == (facet *)0x0) && (pfVar4 = pfVar2, pfVar2 == (facet *)0x0)) {
    iVar5 = Getcat(local_14,param_1);
    if (iVar5 == -1) {
      FUN_10156142();
      __CxxThrowException_8(local_24,&DAT_101ed21c);
    }
    pfVar4 = local_14[0];
    DAT_1020d39c = local_14[0];
    pcVar1 = *(code **)(*(int *)local_14[0] + 4);
    guard_check_icall();
    (*pcVar1)();
    std::_Facet_Register((_Facet_base *)pfVar4);
  }
  FUN_10155121();
  return pfVar4;
}

