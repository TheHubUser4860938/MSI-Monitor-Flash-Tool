// rea decompile_all
// name: __crt_stdio_input::scanset_buffer<wchar_t>::test
// address: 0x1017bf89
// body: available
// range: 0x1017bf89-0x1017bfc0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1017bfa6) */
/* Library Function - Single Match
    public: bool __thiscall __crt_stdio_input::scanset_buffer<wchar_t>::test(wchar_t)const 
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_input::scanset_buffer<wchar_t>::test(scanset_buffer<wchar_t> *this,wchar_t param_1)

{
  uchar *puVar1;
  
  puVar1 = scanset_storage<2>::data((scanset_storage<2> *)this);
  return (puVar1[(ushort)param_1 >> 3] & (byte)(1 << ((byte)param_1 & 7))) != 0;
}

