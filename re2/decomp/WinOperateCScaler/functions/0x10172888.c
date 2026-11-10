// rea decompile_all
// name: __crt_seh_guarded_call<unsigned_int>::operator()<<lambda_11b4f7b0d3157825a5656a18eba1ae27>,<lambda_b51c0495177f500e782686251704ae76>&,<lambda_cf89b47920b5017557bfe891e78aca36>_>
// address: 0x10172888
// body: available
// range: 0x10172888-0x101728c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: unsigned int __thiscall __crt_seh_guarded_call<unsigned int>::operator()<class
   <lambda_11b4f7b0d3157825a5656a18eba1ae27>,class <lambda_b51c0495177f500e782686251704ae76> &,class
   <lambda_cf89b47920b5017557bfe891e78aca36> >(class <lambda_11b4f7b0d3157825a5656a18eba1ae27>
   &&,class <lambda_b51c0495177f500e782686251704ae76> &,class
   <lambda_cf89b47920b5017557bfe891e78aca36> &&)
   
   Library: Visual Studio 2015 Release */

uint __thiscall
__crt_seh_guarded_call<unsigned_int>::
operator()<<lambda_11b4f7b0d3157825a5656a18eba1ae27>,<lambda_b51c0495177f500e782686251704ae76>&,<lambda_cf89b47920b5017557bfe891e78aca36>_>
          (__crt_seh_guarded_call<unsigned_int> *this,
          <lambda_11b4f7b0d3157825a5656a18eba1ae27> *param_1,
          <lambda_b51c0495177f500e782686251704ae76> *param_2,
          <lambda_cf89b47920b5017557bfe891e78aca36> *param_3)

{
  uint uVar1;
  
  __lock_file(*(FILE **)param_1);
  uVar1 = <lambda_b51c0495177f500e782686251704ae76>::operator()(param_2);
  FUN_101728cd();
  return uVar1;
}

