// rea decompile_all
// name: do_put
// address: 0x1001b390
// body: available
// range: 0x1001b390-0x1001b3ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class std::ostreambuf_iterator<char,struct std::char_traits<char> >
   __thiscall std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> >
   >::do_put(class std::ostreambuf_iterator<char,struct std::char_traits<char> >,class std::ios_base
   &,char,void const *)const 
    protected: virtual class std::ostreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > __thiscall std::num_put<unsigned short,class
   std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >::do_put(class
   std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,class
   std::ios_base &,unsigned short,void const *)const 
    protected: virtual class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
   __thiscall std::num_put<wchar_t,class std::ostreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::do_put(class std::ostreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,class std::ios_base &,wchar_t,void const *)const 
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void do_put(void)

{
  undefined4 in_stack_00000018;
  undefined1 local_48 [64];
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  FUN_1001ba70(local_48,0x40,&DAT_101a7894,in_stack_00000018);
  FUN_1001a7f0();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

