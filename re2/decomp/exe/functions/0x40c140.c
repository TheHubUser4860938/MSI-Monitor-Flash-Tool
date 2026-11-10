// rea decompile_all
// name: Reset_back
// address: 0x40c140
// body: available
// range: 0x40c140-0x40c164 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: void __thiscall std::basic_filebuf<unsigned short,struct std::char_traits<unsigned
   short> >::_Reset_back(void)
    private: void __thiscall std::basic_filebuf<wchar_t,struct std::char_traits<wchar_t>
   >::_Reset_back(void)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void Reset_back(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (**(int **)(in_ECX + 0xc) == in_ECX + 0x3c) {
    iVar1 = *(int *)(in_ECX + 0x50);
    iVar2 = *(int *)(in_ECX + 0x54);
    **(int **)(in_ECX + 0xc) = iVar1;
    **(int **)(in_ECX + 0x1c) = iVar1;
    **(int **)(in_ECX + 0x2c) = iVar2 - iVar1 >> 1;
  }
  return;
}

