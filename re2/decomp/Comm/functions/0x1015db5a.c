// rea decompile_all
// name: operator()<>
// address: 0x1015db5a
// body: available
// range: 0x1015db5a-0x1015db95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_15ade71b0218206bbe3333a0c9b79046>,class <lambda_da44e0f8b0f19ba52fefafb335991732> &,class
   <lambda_207f2d024fc103971653565357d6cd41> >(class <lambda_15ade71b0218206bbe3333a0c9b79046>
   &&,class <lambda_da44e0f8b0f19ba52fefafb335991732> &,class
   <lambda_207f2d024fc103971653565357d6cd41> &&)
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_9df27f884b057bc3edfc946cb5b7cf47>,class <lambda_e69574bed617af4e071282c136b37893> &,class
   <lambda_cc0d902bcbbeb830f749456577db4721> >(class <lambda_9df27f884b057bc3edfc946cb5b7cf47>
   &&,class <lambda_e69574bed617af4e071282c136b37893> &,class
   <lambda_cc0d902bcbbeb830f749456577db4721> &&)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void operator()<>(undefined4 *param_1,undefined4 *param_2)

{
  ___acrt_lock(*param_1);
  LOCK();
  **(int **)(*(int *)*param_2 + 0x48) = **(int **)(*(int *)*param_2 + 0x48) + 1;
  UNLOCK();
  FUN_1015db96();
  return;
}

