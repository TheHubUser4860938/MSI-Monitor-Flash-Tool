// rea decompile_all
// name: __getdrive
// address: 0x10191e6a
// body: available
// range: 0x10191e6a-0x10191f18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __getdrive
   
   Library: Visual Studio 2015 Release */

int __cdecl __getdrive(void)

{
  DWORD DVar1;
  wchar_t *lpBuffer;
  int *piVar2;
  int iVar3;
  WCHAR local_214;
  undefined1 local_212 [522];
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_214 = L'\0';
  _memset(local_212,0,0x208);
  DVar1 = GetCurrentDirectoryW(0x105,&local_214);
  if (DVar1 < 0x105) {
    get_drive_number_from_path(&local_214);
    goto LAB_10191f0a;
  }
  lpBuffer = (wchar_t *)__calloc_base(DVar1 + 1,2);
  if (lpBuffer == (wchar_t *)0x0) {
LAB_10191ee9:
    piVar2 = __errno();
    *piVar2 = 0xc;
  }
  else {
    DVar1 = GetCurrentDirectoryW(DVar1 + 1,lpBuffer);
    if (DVar1 == 0) goto LAB_10191ee9;
    get_drive_number_from_path(lpBuffer);
  }
  FID_conflict__free(lpBuffer);
LAB_10191f0a:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

