// rea decompile_all
// name: __crt_seh_guarded_call<void>::operator()<<lambda_70818de7b02deff9841e8b0962a60ed9>,<lambda_2af78c5f5901b1372d98f9ab3177dfa6>&,<lambda_f51fe5fd7c79a33db34fc9310f277369>&>
// address: 0x5891b0
// body: available
// range: 0x5891b0-0x5891db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_70818de7b02deff9841e8b0962a60ed9>,class <lambda_2af78c5f5901b1372d98f9ab3177dfa6> &,class
   <lambda_f51fe5fd7c79a33db34fc9310f277369> &>(class <lambda_70818de7b02deff9841e8b0962a60ed9>
   &&,class <lambda_2af78c5f5901b1372d98f9ab3177dfa6> &,class
   <lambda_f51fe5fd7c79a33db34fc9310f277369> &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_70818de7b02deff9841e8b0962a60ed9>,<lambda_2af78c5f5901b1372d98f9ab3177dfa6>&,<lambda_f51fe5fd7c79a33db34fc9310f277369>&>
          (__crt_seh_guarded_call<void> *this,<lambda_70818de7b02deff9841e8b0962a60ed9> *param_1,
          <lambda_2af78c5f5901b1372d98f9ab3177dfa6> *param_2,
          <lambda_f51fe5fd7c79a33db34fc9310f277369> *param_3)

{
  <lambda_2af78c5f5901b1372d98f9ab3177dfa6>::operator()(param_2);
  FUN_005891dc();
  return;
}

