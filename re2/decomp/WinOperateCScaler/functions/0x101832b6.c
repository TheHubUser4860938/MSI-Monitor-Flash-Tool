// rea decompile_all
// name: operator()<>
// address: 0x101832b6
// body: available
// range: 0x101832b6-0x101832f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_5b71d36f03204c0beab531769a5b5694>,class <lambda_be2b3da3f62db62e9dad5dc70221a656> &,class
   <lambda_8f9ce462984622f9bf76b59e2aaaf805> >(class <lambda_5b71d36f03204c0beab531769a5b5694>
   &&,class <lambda_be2b3da3f62db62e9dad5dc70221a656> &,class
   <lambda_8f9ce462984622f9bf76b59e2aaaf805> &&)
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_6affb1475c98b40b75cdec977db92e3c>,class <lambda_b8d4b9c228a6ecc3f80208dbb4b4a104> &,class
   <lambda_608742c3c92a14382c1684fc64f96c88> >(class <lambda_6affb1475c98b40b75cdec977db92e3c>
   &&,class <lambda_b8d4b9c228a6ecc3f80208dbb4b4a104> &,class
   <lambda_608742c3c92a14382c1684fc64f96c88> &&)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void operator()<>(undefined4 *param_1,undefined4 *param_2)

{
  ___acrt_lock(*param_1);
  replace_current_thread_locale_nolock(*(__acrt_ptd **)*param_2,(__crt_locale_data *)0x0);
  FUN_101832f5();
  return;
}

