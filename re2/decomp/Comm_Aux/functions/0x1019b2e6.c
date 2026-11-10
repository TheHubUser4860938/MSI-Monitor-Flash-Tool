// rea decompile_all
// name: expand_argument_wildcards<>
// address: 0x1019b2e6
// body: available
// range: 0x1019b2e6-0x1019b469 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    int __cdecl expand_argument_wildcards<char>(char * const,char * const,class `anonymous
   namespace'::argument_list<char> &)
    int __cdecl expand_argument_wildcards<char>(char * const,char * const,class `anonymous
   namespace'::argument_list<char> &)
   
   Library: Visual Studio 2015 Release */

void expand_argument_wildcards<>(uchar *param_1,uchar *param_2,int *param_3)

{
  uchar uVar1;
  byte bVar2;
  HANDLE hFindFile;
  int iVar3;
  BOOL BVar4;
  int iVar5;
  _WIN32_FIND_DATAA local_148;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  for (; (((param_2 != param_1 && (uVar1 = *param_2, uVar1 != '/')) && (uVar1 != '\\')) &&
         (uVar1 != ':')); param_2 = __mbsdec(param_1,param_2)) {
  }
  uVar1 = *param_2;
  if ((uVar1 == ':') && (param_2 != param_1 + 1)) {
    FUN_1019b250(param_1,0,0,param_3);
  }
  else {
    if ((uVar1 == '/') || ((uVar1 == '\\' || (uVar1 == ':')))) {
      bVar2 = 1;
    }
    else {
      bVar2 = 0;
    }
    _memset(&local_148,0,0x140);
    hFindFile = FindFirstFileExA((LPCSTR)param_1,FindExInfoStandard,&local_148,FindExSearchNameMatch
                                 ,(LPVOID)0x0,0);
    if (hFindFile == (HANDLE)0xffffffff) {
      FUN_1019b250(param_1,0,0,param_3);
    }
    else {
      iVar5 = param_3[1] - *param_3 >> 2;
      do {
        if (((local_148.cFileName[0] != '.') ||
            ((local_148.cFileName[1] != '\0' &&
             ((local_148.cFileName[1] != '.' || (local_148.cFileName[2] != '\0')))))) &&
           (iVar3 = FUN_1019b250(local_148.cFileName,param_1,
                                 -(uint)bVar2 & (uint)(param_2 + (1 - (int)param_1)),param_3),
           iVar3 != 0)) goto LAB_1019b3b6;
        BVar4 = FindNextFileA(hFindFile,&local_148);
      } while (BVar4 != 0);
      iVar3 = param_3[1] - *param_3 >> 2;
      if (iVar5 != iVar3) {
        _qsort((void *)(*param_3 + iVar5 * 4),iVar3 - iVar5,4,FUN_1019b0a8);
      }
    }
LAB_1019b3b6:
    if (hFindFile != (HANDLE)0xffffffff) {
      FindClose(hFindFile);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

