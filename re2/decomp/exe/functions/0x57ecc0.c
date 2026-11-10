// rea decompile_all
// name: __wsplitpath_s
// address: 0x57ecc0
// body: available
// range: 0x57ecc0-0x57ed10 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __wsplitpath_s
   
   Library: Visual Studio 2015 Release */

errno_t __cdecl
__wsplitpath_s(wchar_t *_FullPath,wchar_t *_Drive,size_t _DriveSize,wchar_t *_Dir,size_t _DirSize,
              wchar_t *_Filename,size_t _FilenameSize,wchar_t *_Ext,size_t _ExtSize)

{
  int iVar1;
  wchar_t *local_28;
  size_t local_24;
  wchar_t *local_20;
  size_t local_1c;
  wchar_t *local_18;
  size_t local_14;
  wchar_t *local_10;
  size_t local_c;
  
  local_28 = _Drive;
  local_24 = _DriveSize;
  local_20 = _Dir;
  local_1c = _DirSize;
  local_18 = _Filename;
  local_14 = _FilenameSize;
  local_10 = _Ext;
  local_c = _ExtSize;
  iVar1 = common_splitpath_internal<wchar_t,<lambda_b1695639fcc80704960aa67b3ee55b9c>,<lambda_ecdbb1a461ee1e417bd5a09552dd727e>_>
                    (_FullPath,&local_28);
  return iVar1;
}

