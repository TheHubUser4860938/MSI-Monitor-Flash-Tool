// rea decompile_all
// name: std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Tidy
// address: 0x10155828
// body: available
// range: 0x10155828-0x1015587e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::_Tidy(bool,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Tidy
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          bool param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_1) && (7 < *(uint *)(this + 0x14))) {
    uVar1 = *(undefined4 *)this;
    if (param_2 != 0) {
      copy(this,uVar1,param_2);
    }
    FUN_10015760(uVar1,*(int *)(this + 0x14) + 1,2);
  }
  *(undefined4 *)(this + 0x14) = 7;
  *(uint *)(this + 0x10) = param_2;
  if (7 < *(uint *)(this + 0x14)) {
    this = *(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> **)this;
  }
  *(undefined2 *)(this + param_2 * 2) = 0;
  return;
}

