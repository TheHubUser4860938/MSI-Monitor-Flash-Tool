// rea decompile_all
// name: common_getdcwd_user_buffer<char>
// address: 0x101887c9
// body: available
// range: 0x101887c9-0x10188822 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    char * __cdecl common_getdcwd_user_buffer<char>(char * const,char * const,unsigned int)
   
   Library: Visual Studio 2015 Release */

char * __cdecl common_getdcwd_user_buffer<char>(char *param_1,char *param_2,uint param_3)

{
  int *piVar1;
  DWORD DVar2;
  
  if (param_3 == 0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_1016ec41();
  }
  else {
    DVar2 = GetFullPathNameA(param_1,param_3,param_2,(LPSTR *)0x0);
    if (DVar2 < param_3) {
      if (DVar2 != 0) {
        return param_2;
      }
      DVar2 = GetLastError();
      ___acrt_errno_map_os_error(DVar2);
    }
    else {
      piVar1 = __errno();
      *piVar1 = 0x22;
    }
  }
  return (char *)0x0;
}

