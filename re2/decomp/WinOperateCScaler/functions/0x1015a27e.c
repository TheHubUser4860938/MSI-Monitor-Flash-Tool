// rea decompile_all
// name: FID_conflict:_Assign_rv
// address: 0x1015a27e
// body: available
// range: 0x1015a27e-0x1015a2d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    public: void __thiscall std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::_Assign_rv(class std::basic_string<unsigned
   short,struct std::char_traits<unsigned short>,class std::allocator<unsigned short> > &&)
    public: void __thiscall std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::_Assign_rv(class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > &&)
   
   Library: Visual Studio 2015 Release */

void FID_conflict__Assign_rv(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  if ((uint)param_1[5] < 8) {
    move();
  }
  else {
    if (in_ECX != (undefined4 *)0x0) {
      *in_ECX = *param_1;
    }
    *param_1 = 0;
  }
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  param_1[5] = 7;
  param_1[4] = 0;
  if (7 < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  *(undefined2 *)param_1 = 0;
  return;
}

