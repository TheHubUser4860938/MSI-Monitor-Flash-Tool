// rea decompile_all
// name: __Towupper
// address: 0x10155e07
// body: available
// range: 0x10155e07-0x10155e6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __Towupper
   
   Library: Visual Studio 2015 Release */

wchar_t __cdecl __Towupper(wchar_t param_1,_Ctypevec *param_2)

{
  int iVar1;
  undefined4 in_ECX;
  wchar_t local_8;
  undefined2 uStack_6;
  
  _local_8 = CONCAT22((short)((uint)in_ECX >> 0x10),param_1);
  if (param_1 != L'\xffff') {
    if ((param_2->_LocaleName == (LPCWSTR)0x0) && ((ushort)param_1 < 0x100)) {
      if ((ushort)(param_1 + L'ﾟ') < 0x1a) {
        param_1 = param_1 + L'￠';
      }
    }
    else {
      iVar1 = ___crtLCMapStringW(param_2->_LocaleName,0x200,&param_1,1,&local_8,1);
      if (iVar1 != 0) {
        param_1 = local_8;
      }
    }
  }
  return param_1;
}

