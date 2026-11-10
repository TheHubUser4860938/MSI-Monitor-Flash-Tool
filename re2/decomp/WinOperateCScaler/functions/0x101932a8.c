// rea decompile_all
// name: __sopen_nolock
// address: 0x101932a8
// body: available
// range: 0x101932a8-0x101932f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __sopen_nolock
   
   Library: Visual Studio 2015 Release */

errno_t __cdecl
__sopen_nolock(int *UnlockFlag,int *_FileHandle,char *_Filename,int _OpenFlag,int _ShareFlag,
              int _PermissionFlag,int _SecureFlag)

{
  wchar_t *_Memory;
  int iVar1;
  errno_t eVar2;
  wchar_t *local_8;
  
  local_8 = (wchar_t *)0x0;
  iVar1 = ___acrt_copy_path_to_wide_string(_Filename,&local_8);
  _Memory = local_8;
  if (iVar1 == 0) {
    eVar2 = -1;
  }
  else {
    eVar2 = __wsopen_nolock(UnlockFlag,_FileHandle,local_8,_OpenFlag,_ShareFlag,_PermissionFlag,
                            _SecureFlag);
    FID_conflict__free(_Memory);
  }
  return eVar2;
}

