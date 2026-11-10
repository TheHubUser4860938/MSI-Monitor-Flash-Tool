// rea decompile_all
// name: std::use_facet<std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>_>
// address: 0x101923de
// body: available
// range: 0x101923de-0x1019247a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    class std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >
   const & __cdecl std::use_facet<class std::time_get<char,class
   std::istreambuf_iterator<char,struct std::char_traits<char> > > >(class std::locale const &)
   
   Library: Visual Studio 2015 Release */

time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> * __cdecl
std::use_facet<std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>_>
          (locale *param_1)

{
  code *pcVar1;
  time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *ptVar2;
  uint uVar3;
  time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *ptVar4;
  int iVar5;
  undefined1 local_24 [12];
  _Lockit local_18 [4];
  time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x101923ea;
  _Lockit::_Lockit(local_18,0);
  ptVar2 = DAT_1024949c;
  local_8 = 0;
  local_14[0] = DAT_1024949c;
  uVar3 = locale::id::operator_unsigned_int((id *)&DAT_1024947c);
  ptVar4 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
           FUN_10006aa0(uVar3);
  if ((ptVar4 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) &&
     (ptVar4 = ptVar2,
     ptVar2 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)) {
    iVar5 = ::Getcat(local_14,param_1);
    if (iVar5 == -1) {
      FUN_10006770();
      __CxxThrowException_8(local_24,&DAT_10238974);
    }
    ptVar4 = local_14[0];
    DAT_1024949c = local_14[0];
    pcVar1 = *(code **)(*(int *)local_14[0] + 4);
    guard_check_icall();
    (*pcVar1)();
    _Facet_Register((_Facet_base *)ptVar4);
  }
  FUN_10180d1e();
  return ptVar4;
}

