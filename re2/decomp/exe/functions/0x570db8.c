// rea decompile_all
// name: get_weekday
// address: 0x570db8
// body: available
// range: 0x570db8-0x570dee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: class std::istreambuf_iterator<char,struct std::char_traits<char> > __thiscall
   std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> >
   >::get_weekday(class std::istreambuf_iterator<char,struct std::char_traits<char> >,class
   std::istreambuf_iterator<char,struct std::char_traits<char> >,class std::ios_base &,int &,struct
   tm *)const 
    public: class std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >
   __thiscall std::time_get<unsigned short,class std::istreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > >::get_weekday(class std::istreambuf_iterator<unsigned
   short,struct std::char_traits<unsigned short> >,class std::istreambuf_iterator<unsigned
   short,struct std::char_traits<unsigned short> >,class std::ios_base &,int &,struct tm *)const 
    public: class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > __thiscall
   std::time_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
   >::get_weekday(class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >,class
   std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >,class std::ios_base &,int
   &,struct tm *)const 
   
   Library: Visual Studio 2015 Release */

undefined4
get_weekday(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
           undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  guard_check_icall(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  (**(code **)(iVar1 + 0x18))();
  return param_1;
}

