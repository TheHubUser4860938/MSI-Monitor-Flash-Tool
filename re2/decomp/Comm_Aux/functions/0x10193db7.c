// rea decompile_all
// name: operator()<>
// address: 0x10193db7
// body: available
// range: 0x10193db7-0x10193dfa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_3518db117f0e7cdb002338c5d3c47b6c>,class <lambda_b2ea41f6bbb362cd97d94c6828d90b61> &,class
   <lambda_abdedf541bb04549bc734292b4a045d4> >(class <lambda_3518db117f0e7cdb002338c5d3c47b6c>
   &&,class <lambda_b2ea41f6bbb362cd97d94c6828d90b61> &,class
   <lambda_abdedf541bb04549bc734292b4a045d4> &&)
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_a7e850c220f1c8d1e6efeecdedd162c6>,class <lambda_46720907175c18b6c9d2717bc0d2d362> &,class
   <lambda_9048902d66e8d99359bc9897bbb930a8> >(class <lambda_a7e850c220f1c8d1e6efeecdedd162c6>
   &&,class <lambda_46720907175c18b6c9d2717bc0d2d362> &,class
   <lambda_9048902d66e8d99359bc9897bbb930a8> &&)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void operator()<>(undefined4 *param_1,undefined4 *param_2)

{
  ___acrt_lock(*param_1);
  replace_current_thread_locale_nolock
            (*(__acrt_ptd **)*param_2,(__crt_locale_data *)**(undefined4 **)param_2[1]);
  FUN_10193dfb();
  return;
}

