// rea decompile_all
// name: Set_back
// address: 0x10015ed0
// body: available
// range: 0x10015ed0-0x10015f0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: void __thiscall std::basic_filebuf<unsigned short,struct std::char_traits<unsigned
   short> >::_Set_back(void)
    private: void __thiscall std::basic_filebuf<wchar_t,struct std::char_traits<wchar_t>
   >::_Set_back(void)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void Set_back(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = in_ECX + 0x3c;
  iVar2 = **(int **)(in_ECX + 0xc);
  if (iVar2 != iVar1) {
    *(int *)(in_ECX + 0x50) = iVar2;
    *(int *)(in_ECX + 0x54) = **(int **)(in_ECX + 0x1c) + **(int **)(in_ECX + 0x2c) * 2;
  }
  **(int **)(in_ECX + 0xc) = iVar1;
  **(int **)(in_ECX + 0x1c) = iVar1;
  **(int **)(in_ECX + 0x2c) = (in_ECX - iVar1) + 0x3e >> 1;
  return;
}

