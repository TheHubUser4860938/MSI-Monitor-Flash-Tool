// rea decompile_all
// name: __acrt_lowio_lock_fh_and_call<<lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec>_>
// address: 0x10161944
// body: available
// range: 0x10161944-0x1016196b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl __acrt_lowio_lock_fh_and_call<class <lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec>
   >(int,class <lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec> &&)
   
   Library: Visual Studio 2015 Release */

int __cdecl
__acrt_lowio_lock_fh_and_call<<lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec>_>
          (int param_1,<lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec> *param_2)

{
  int iVar1;
  int local_10;
  int local_c;
  __crt_seh_guarded_call<int> local_5;
  
  local_c = param_1;
  local_10 = param_1;
  iVar1 = __crt_seh_guarded_call<int>::
          operator()<<lambda_123407a5e2ac06da108355a851863b7a>,<lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec>&,<lambda_ae55bdf541ad94d75914d381c370e64d>_>
                    (&local_5,(<lambda_123407a5e2ac06da108355a851863b7a> *)&local_10,param_2,
                     (<lambda_ae55bdf541ad94d75914d381c370e64d> *)&local_c);
  return iVar1;
}

