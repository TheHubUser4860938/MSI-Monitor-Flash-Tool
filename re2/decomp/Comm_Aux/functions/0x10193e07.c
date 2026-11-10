// rea decompile_all
// name: operator()<>
// address: 0x10193e07
// body: available
// range: 0x10193e07-0x10193e5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_38edbb1296d33220d7e4dd0ed76b244a>,class <lambda_5ce1d447e08cb34b2473517608e21441> &,class
   <lambda_fb385d3da700c9147fc39e65dd577a8c> >(class <lambda_38edbb1296d33220d7e4dd0ed76b244a>
   &&,class <lambda_5ce1d447e08cb34b2473517608e21441> &,class
   <lambda_fb385d3da700c9147fc39e65dd577a8c> &&)
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_51b6e8b1eb166f2a3faf91f424b38130>,class <lambda_6250bd4b2a391816dd638c3bf72b0bcb> &,class
   <lambda_0b5a4a3e68152e1d9b943535f5f47bed> >(class <lambda_51b6e8b1eb166f2a3faf91f424b38130>
   &&,class <lambda_6250bd4b2a391816dd638c3bf72b0bcb> &,class
   <lambda_0b5a4a3e68152e1d9b943535f5f47bed> &&)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void operator()<>(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *_Memory;
  
  ___acrt_lock(*param_1);
  _Memory = *(int **)(*(int *)*param_2 + 0x48);
  if (_Memory != (int *)0x0) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = iVar1 + -1;
    UNLOCK();
    if ((iVar1 + -1 == 0) && (_Memory != &DAT_10206b00)) {
      FID_conflict__free(_Memory);
    }
  }
  FUN_10193e5c();
  return;
}

