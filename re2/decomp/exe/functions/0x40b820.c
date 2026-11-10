// rea decompile_all
// name: FUN_0040b820
// address: 0x40b820
// body: available
// range: 0x40b820-0x40b88b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> * FUN_0040b820(byte param_1)

{
  uint uVar1;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059c396;
  local_10 = ExceptionList;
  uVar1 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>(in_ECX);
  local_8 = 0;
  *(undefined ***)in_ECX = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)in_ECX);
  if ((param_1 & 1) != 0) {
    FUN_0055b3de(in_ECX + -0x78,0xc0,uVar1);
  }
  ExceptionList = local_10;
  return in_ECX + -0x78;
}

