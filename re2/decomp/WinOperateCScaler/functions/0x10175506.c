// rea decompile_all
// name: common_fullpath_dynamic_buffer<char>
// address: 0x10175506
// body: available
// range: 0x10175506-0x1017557b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    char * __cdecl common_fullpath_dynamic_buffer<char>(char const * const,unsigned int,int,char
   const * const,int)
   
   Library: Visual Studio 2015 Release */

char * __cdecl
common_fullpath_dynamic_buffer<char>
          (char *param_1,uint param_2,int param_3,char *param_4,int param_5)

{
  DWORD DVar1;
  char *pcVar2;
  char *pcVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  
  DVar1 = GetFullPathNameA(param_1,0,(LPSTR)0x0,(LPSTR *)0x0);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    ___acrt_errno_map_os_error(DVar1);
    pcVar2 = (char *)0x0;
  }
  else {
    if (param_2 <= DVar1) {
      param_2 = DVar1;
    }
    pcVar3 = (char *)FUN_10175686(param_2,1);
    pcVar6 = pcVar3;
    pcVar2 = (char *)0x0;
    if (pcVar3 == (char *)0x0) {
      piVar4 = __errno();
      *piVar4 = 0xc;
    }
    else {
      pcVar5 = common_fullpath_user_buffer<char>(pcVar3,param_1,param_2);
      if (pcVar5 != (char *)0x0) {
        pcVar6 = (char *)0x0;
        pcVar2 = pcVar3;
      }
    }
    FID_conflict__free(pcVar6);
  }
  return pcVar2;
}

