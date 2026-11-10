// rea decompile_all
// name: __crt_seh_guarded_call<int>::operator()<<lambda_61cee617f5178ae960314fd4d05640a0>,<lambda_6978c1fb23f02e42e1d9e99668cc68aa>&,<lambda_9cd88cf8ad10232537feb2133f08c833>_>
// address: 0x58e587
// body: available
// range: 0x58e587-0x58e60f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_61cee617f5178ae960314fd4d05640a0>,class <lambda_6978c1fb23f02e42e1d9e99668cc68aa> &,class
   <lambda_9cd88cf8ad10232537feb2133f08c833> >(class <lambda_61cee617f5178ae960314fd4d05640a0>
   &&,class <lambda_6978c1fb23f02e42e1d9e99668cc68aa> &,class
   <lambda_9cd88cf8ad10232537feb2133f08c833> &&)
   
   Library: Visual Studio 2015 Release */

int __thiscall
__crt_seh_guarded_call<int>::
operator()<<lambda_61cee617f5178ae960314fd4d05640a0>,<lambda_6978c1fb23f02e42e1d9e99668cc68aa>&,<lambda_9cd88cf8ad10232537feb2133f08c833>_>
          (__crt_seh_guarded_call<int> *this,<lambda_61cee617f5178ae960314fd4d05640a0> *param_1,
          <lambda_6978c1fb23f02e42e1d9e99668cc68aa> *param_2,
          <lambda_9cd88cf8ad10232537feb2133f08c833> *param_3)

{
  uint _FileHandle;
  HANDLE hFile;
  BOOL BVar1;
  ulong *puVar2;
  DWORD DVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0;
  ___acrt_lowio_lock_fh(*(undefined4 *)param_1);
  _FileHandle = **(uint **)param_2;
  if ((*(byte *)((&DAT_006190a0)[(int)_FileHandle >> 6] + 0x28 + (_FileHandle & 0x3f) * 0x30) & 1)
      != 0) {
    hFile = (HANDLE)__get_osfhandle(_FileHandle);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 != 0) goto LAB_0058e5f7;
    puVar2 = ___doserrno();
    DVar3 = GetLastError();
    *puVar2 = DVar3;
  }
  piVar4 = __errno();
  *piVar4 = 9;
  iVar5 = -1;
LAB_0058e5f7:
  FUN_0058e613();
  return iVar5;
}

