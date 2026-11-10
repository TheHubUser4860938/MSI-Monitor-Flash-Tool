// rea decompile_all
// name: __acrt_lowio_lock_fh_and_call<<lambda_6978c1fb23f02e42e1d9e99668cc68aa>_>
// address: 0x58e61f
// body: available
// range: 0x58e61f-0x58e646 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl __acrt_lowio_lock_fh_and_call<class <lambda_6978c1fb23f02e42e1d9e99668cc68aa>
   >(int,class <lambda_6978c1fb23f02e42e1d9e99668cc68aa> &&)
   
   Library: Visual Studio 2015 Release */

int __cdecl
__acrt_lowio_lock_fh_and_call<<lambda_6978c1fb23f02e42e1d9e99668cc68aa>_>
          (int param_1,<lambda_6978c1fb23f02e42e1d9e99668cc68aa> *param_2)

{
  int iVar1;
  int local_10;
  int local_c;
  __crt_seh_guarded_call<int> local_5;
  
  local_c = param_1;
  local_10 = param_1;
  iVar1 = __crt_seh_guarded_call<int>::
          operator()<<lambda_61cee617f5178ae960314fd4d05640a0>,<lambda_6978c1fb23f02e42e1d9e99668cc68aa>&,<lambda_9cd88cf8ad10232537feb2133f08c833>_>
                    (&local_5,(<lambda_61cee617f5178ae960314fd4d05640a0> *)&local_10,param_2,
                     (<lambda_9cd88cf8ad10232537feb2133f08c833> *)&local_c);
  return iVar1;
}

