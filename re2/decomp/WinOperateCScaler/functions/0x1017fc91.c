// rea decompile_all
// name: __acrt_lock_and_call<<lambda_275893d493268fdec8709772e3fcec0e>_>
// address: 0x1017fc91
// body: available
// range: 0x1017fc91-0x1017fcb8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl __acrt_lock_and_call<class <lambda_275893d493268fdec8709772e3fcec0e> >(enum
   __acrt_lock_id,class <lambda_275893d493268fdec8709772e3fcec0e> &&)
   
   Library: Visual Studio 2015 Release */

int __cdecl
__acrt_lock_and_call<<lambda_275893d493268fdec8709772e3fcec0e>_>
          (__acrt_lock_id param_1,<lambda_275893d493268fdec8709772e3fcec0e> *param_2)

{
  int iVar1;
  __acrt_lock_id local_10;
  __acrt_lock_id local_c;
  __crt_seh_guarded_call<int> local_5;
  
  local_c = param_1;
  local_10 = param_1;
  iVar1 = __crt_seh_guarded_call<int>::
          operator()<<lambda_995298e7d72eb4c2aab26c0585b3abe5>,<lambda_275893d493268fdec8709772e3fcec0e>&,<lambda_293819299cbf9a7022e18b56a874bb5c>_>
                    (&local_5,(<lambda_995298e7d72eb4c2aab26c0585b3abe5> *)&local_10,param_2,
                     (<lambda_293819299cbf9a7022e18b56a874bb5c> *)&local_c);
  return iVar1;
}

