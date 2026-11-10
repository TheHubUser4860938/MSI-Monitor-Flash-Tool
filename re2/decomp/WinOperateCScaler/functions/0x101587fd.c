// rea decompile_all
// name: _Find_elem<>
// address: 0x101587fd
// body: available
// range: 0x101587fd-0x10158820 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    unsigned int __cdecl std::_Find_elem<unsigned short>(unsigned short *,unsigned short)
    unsigned int __cdecl std::_Find_elem<wchar_t>(wchar_t *,wchar_t)
   
   Library: Visual Studio 2015 Release */

int _Find_elem<>(short *param_1,short param_2)

{
  short *psVar1;
  short sVar2;
  
  sVar2 = *param_1;
  psVar1 = param_1;
  while ((sVar2 != 0 && (sVar2 != param_2))) {
    psVar1 = psVar1 + 1;
    sVar2 = *psVar1;
  }
  return (int)psVar1 - (int)param_1 >> 1;
}

