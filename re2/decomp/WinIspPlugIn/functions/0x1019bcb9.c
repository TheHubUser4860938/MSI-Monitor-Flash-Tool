// rea decompile_all
// name: __acrt_lock_stream_and_call<>
// address: 0x1019bcb9
// body: available
// range: 0x1019bcb9-0x1019bce0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    int __cdecl __acrt_lock_stream_and_call<class <lambda_0a97c9e57da7be065955385c79108ff2> >(struct
   _iobuf * const,class <lambda_0a97c9e57da7be065955385c79108ff2> &&)
    int __cdecl __acrt_lock_stream_and_call<class <lambda_2565fc715a641e539f44ad02d6823606> >(struct
   _iobuf * const,class <lambda_2565fc715a641e539f44ad02d6823606> &&)
    int __cdecl __acrt_lock_stream_and_call<class <lambda_481dd5778c961fbcd3b60b650e9b9dc4> >(struct
   _iobuf * const,class <lambda_481dd5778c961fbcd3b60b650e9b9dc4> &&)
    int __cdecl __acrt_lock_stream_and_call<class <lambda_4f2c1eaeead2a5fc776db5b62ea0fb9b> >(struct
   _iobuf * const,class <lambda_4f2c1eaeead2a5fc776db5b62ea0fb9b> &&)
     8 names - too many to list
   
   Library: Visual Studio 2015 Release */

void __acrt_lock_stream_and_call<>(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_10;
  undefined4 local_c [2];
  
  local_c[0] = param_1;
  local_10 = param_1;
  operator()<>(&local_10,param_2,local_c);
  return;
}

