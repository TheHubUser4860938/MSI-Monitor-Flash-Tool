// rea decompile_all
// name: do_scan_is
// address: 0x1016570a
// body: available
// range: 0x1016570a-0x10165745 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: virtual unsigned short const * __thiscall std::ctype<unsigned
   short>::do_scan_is(short,unsigned short const *,unsigned short const *)const 
    protected: virtual wchar_t const * __thiscall std::ctype<wchar_t>::do_scan_is(short,wchar_t
   const *,wchar_t const *)const 
   
   Library: Visual Studio 2015 Release */

undefined2 * do_scan_is(undefined4 param_1,undefined2 *param_2,undefined2 *param_3)

{
  code *pcVar1;
  char cVar2;
  int *in_ECX;
  
  while( true ) {
    if (param_2 == param_3) {
      return param_2;
    }
    pcVar1 = *(code **)(*in_ECX + 0x10);
    guard_check_icall(param_1,*param_2);
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') break;
    param_2 = param_2 + 1;
  }
  return param_2;
}

