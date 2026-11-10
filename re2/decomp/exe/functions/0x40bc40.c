// rea decompile_all
// name: FUN_0040bc40
// address: 0x40bc40
// body: available
// range: 0x40bc40-0x40bca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040bc40(void)

{
  ios_base *piVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0059c116;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (ios_base *)(in_ECX + 2);
  *(undefined ***)(piVar1 + *(int *)(*in_ECX + 4) + -8) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)(piVar1 + *(int *)(*in_ECX + 4) + -0xc) = *(int *)(*in_ECX + 4) + -8;
  local_8 = 0;
  *(undefined ***)piVar1 = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor(piVar1);
  ExceptionList = local_10;
  return;
}

