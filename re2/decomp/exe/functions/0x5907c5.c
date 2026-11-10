// rea decompile_all
// name: common_lseek_nolock<__int64>
// address: 0x5907c5
// body: available
// range: 0x5907c5-0x590842 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __int64 __cdecl common_lseek_nolock<__int64>(int,__int64,int)
   
   Library: Visual Studio 2015 Release */

__int64 __cdecl common_lseek_nolock<__int64>(int param_1,__int64 param_2,int param_3)

{
  byte *pbVar1;
  LARGE_INTEGER liDistanceToMove;
  HANDLE hFile;
  int *piVar2;
  BOOL BVar3;
  DWORD DVar4;
  DWORD unaff_EDI;
  uint local_c;
  uint local_8;
  
  hFile = (HANDLE)__get_osfhandle(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    liDistanceToMove.s.HighPart = (LONG)&local_c;
    liDistanceToMove.s.LowPart = (undefined4)param_2;
    BVar3 = SetFilePointerEx(hFile,liDistanceToMove,param_2._4_4_,unaff_EDI);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      ___acrt_errno_map_os_error(DVar4);
    }
    else if ((local_c & local_8) != 0xffffffff) {
      pbVar1 = (byte *)((&DAT_006190a0)[param_1 >> 6] + 0x28 + (param_1 & 0x3fU) * 0x30);
      *pbVar1 = *pbVar1 & 0xfd;
      goto LAB_0059083d;
    }
  }
  local_c = 0xffffffff;
  local_8 = 0xffffffff;
LAB_0059083d:
  return CONCAT44(local_8,local_c);
}

