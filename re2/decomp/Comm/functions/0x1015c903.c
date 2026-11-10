// rea decompile_all
// name: __crt_seh_guarded_call<int>::operator()<<lambda_800076c951b434888f4765a74a194fcc>,<lambda_4e60a939b0d047cfe11ddc22648dfba9>&,<lambda_6dbb1268764f43b569ce7b67e331d33a>_>
// address: 0x1015c903
// body: available
// range: 0x1015c903-0x1015c944 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_800076c951b434888f4765a74a194fcc>,class <lambda_4e60a939b0d047cfe11ddc22648dfba9> &,class
   <lambda_6dbb1268764f43b569ce7b67e331d33a> >(class <lambda_800076c951b434888f4765a74a194fcc>
   &&,class <lambda_4e60a939b0d047cfe11ddc22648dfba9> &,class
   <lambda_6dbb1268764f43b569ce7b67e331d33a> &&)
   
   Library: Visual Studio 2015 Release */

int __thiscall
__crt_seh_guarded_call<int>::
operator()<<lambda_800076c951b434888f4765a74a194fcc>,<lambda_4e60a939b0d047cfe11ddc22648dfba9>&,<lambda_6dbb1268764f43b569ce7b67e331d33a>_>
          (__crt_seh_guarded_call<int> *this,<lambda_800076c951b434888f4765a74a194fcc> *param_1,
          <lambda_4e60a939b0d047cfe11ddc22648dfba9> *param_2,
          <lambda_6dbb1268764f43b569ce7b67e331d33a> *param_3)

{
  int iVar1;
  
  ___acrt_lock(*(undefined4 *)param_1);
  iVar1 = <lambda_4e60a939b0d047cfe11ddc22648dfba9>::operator()(param_2);
  FUN_1015c948();
  return iVar1;
}

