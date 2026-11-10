// rea decompile_all
// name: operator()<>
// address: 0x1015dfe0
// body: available
// range: 0x1015dfe0-0x1015e016 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_4fdada1b837b2abbf20876fac97688ad>,class <lambda_b57350f2640456a0859d250846f69caf> &,class
   <lambda_eed5e4f92b5b7d55fa22c48c484aaa54> >(class <lambda_4fdada1b837b2abbf20876fac97688ad>
   &&,class <lambda_b57350f2640456a0859d250846f69caf> &,class
   <lambda_eed5e4f92b5b7d55fa22c48c484aaa54> &&)
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_c76fdea48760d5f9368b465f31df4405>,class <lambda_e378711a6f6581bf7f0efd7cdf97f5d9> &,class
   <lambda_e927a58b2a85c081d733e8c6192ae2d2> >(class <lambda_c76fdea48760d5f9368b465f31df4405>
   &&,class <lambda_e378711a6f6581bf7f0efd7cdf97f5d9> &,class
   <lambda_e927a58b2a85c081d733e8c6192ae2d2> &&)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void operator()<>(undefined4 *param_1)

{
  ___acrt_lock(*param_1);
  FID_conflict_operator__();
  FUN_1015e017();
  return;
}

