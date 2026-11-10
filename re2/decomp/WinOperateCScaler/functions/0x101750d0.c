// rea decompile_all
// name: convert_file_time_to_time_t<__int64>
// address: 0x101750d0
// body: available
// range: 0x101750d0-0x1017514f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __int64 __cdecl convert_file_time_to_time_t<__int64>(struct _FILETIME const &)
   
   Library: Visual Studio 2015 Release */

__int64 __cdecl convert_file_time_to_time_t<__int64>(_FILETIME *param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  __int64 _Var3;
  _SYSTEMTIME local_28;
  _SYSTEMTIME local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if ((param_1->dwLowDateTime != 0) || (param_1->dwHighDateTime != 0)) {
    BVar1 = FileTimeToSystemTime(param_1,&local_28);
    if (BVar1 != 0) {
      BVar1 = SystemTimeToTzSpecificLocalTime((TIME_ZONE_INFORMATION *)0x0,&local_28,&local_18);
      if (BVar1 != 0) {
        FUN_1018867c(local_18.wYear,local_18.wMonth,local_18.wDay,local_18.wHour,local_18.wMinute,
                     local_18.wSecond,0xffffffff);
        uVar2 = extraout_EDX;
        goto LAB_10175142;
      }
    }
  }
  uVar2 = 0xffffffff;
LAB_10175142:
  _Var3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,uVar2);
  return _Var3;
}

