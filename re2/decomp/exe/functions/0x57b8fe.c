// rea decompile_all
// name: __acrt_lock_stream_and_call<<lambda_b721fa326cdb32351d23dfa67958c160>_>
// address: 0x57b8fe
// body: available
// range: 0x57b8fe-0x57b925 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl __acrt_lock_stream_and_call<class <lambda_b721fa326cdb32351d23dfa67958c160> >(struct
   _iobuf * const,class <lambda_b721fa326cdb32351d23dfa67958c160> &&)
   
   Library: Visual Studio 2015 Release */

int __cdecl
__acrt_lock_stream_and_call<<lambda_b721fa326cdb32351d23dfa67958c160>_>
          (_iobuf *param_1,<lambda_b721fa326cdb32351d23dfa67958c160> *param_2)

{
  int iVar1;
  _iobuf *local_10;
  _iobuf *local_c;
  __crt_seh_guarded_call<int> local_5;
  
  local_c = param_1;
  local_10 = param_1;
  iVar1 = __crt_seh_guarded_call<int>::
          operator()<<lambda_d92cfe8357b99225085016881b624cb0>,<lambda_b721fa326cdb32351d23dfa67958c160>&,<lambda_42d75b0848218ec137fa420c8ba9fdf9>_>
                    (&local_5,(<lambda_d92cfe8357b99225085016881b624cb0> *)&local_10,param_2,
                     (<lambda_42d75b0848218ec137fa420c8ba9fdf9> *)&local_c);
  return iVar1;
}

