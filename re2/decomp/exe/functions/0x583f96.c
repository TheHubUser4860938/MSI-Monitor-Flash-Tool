// rea decompile_all
// name: __crt_stdio_input::format_string_parser<wchar_t>::length
// address: 0x583f96
// body: available
// range: 0x583f96-0x583fd6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: unsigned int __thiscall
   __crt_stdio_input::format_string_parser<wchar_t>::length(void)const 
   
   Library: Visual Studio 2015 Release */

uint __thiscall
__crt_stdio_input::format_string_parser<wchar_t>::length(format_string_parser<wchar_t> *this)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x30);
  if (iVar1 < 0) {
    return 0;
  }
  if (1 < iVar1) {
    if (6 < iVar1) {
      if (iVar1 == 7) {
        uVar2 = to_floating_point_length(*(length_modifier *)(this + 0x28));
        return uVar2;
      }
      if (iVar1 == 8) goto LAB_00583fcd;
      if (iVar1 != 9) {
        return 0;
      }
    }
    uVar2 = to_integer_length(*(length_modifier *)(this + 0x28));
    return uVar2;
  }
LAB_00583fcd:
  return (this[0x2c] != (format_string_parser<wchar_t>)0x0) + 1;
}

