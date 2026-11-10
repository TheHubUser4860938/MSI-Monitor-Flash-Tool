// rea decompile_all
// name: operator()<>
// address: 0x1016ef66
// body: available
// range: 0x1016ef66-0x1016efa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_5be909dfbae0a631386585770cd7b676>,class <lambda_e516058a9c289d98c8ca9fea99247804> &,class
   <lambda_afe2e0cdc5e0ecf6f0d6f5e2f8985e38> >(class <lambda_5be909dfbae0a631386585770cd7b676>
   &&,class <lambda_e516058a9c289d98c8ca9fea99247804> &,class
   <lambda_afe2e0cdc5e0ecf6f0d6f5e2f8985e38> &&)
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_823d65812123d985753d53e2a8c25d20>,class <lambda_0a97c9e57da7be065955385c79108ff2> &,class
   <lambda_4d2973f3ad2d226f00468307185dca1b> >(class <lambda_823d65812123d985753d53e2a8c25d20>
   &&,class <lambda_0a97c9e57da7be065955385c79108ff2> &,class
   <lambda_4d2973f3ad2d226f00468307185dca1b> &&)
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_ab9923ffb5d694ec0d78876dd103e44f>,class <lambda_481dd5778c961fbcd3b60b650e9b9dc4> &,class
   <lambda_7923d86c9e3f319b415918ec4b39749c> >(class <lambda_ab9923ffb5d694ec0d78876dd103e44f>
   &&,class <lambda_481dd5778c961fbcd3b60b650e9b9dc4> &,class
   <lambda_7923d86c9e3f319b415918ec4b39749c> &&)
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_db08b09ef7aa9d4f8620ce68402612bc>,class <lambda_4f2c1eaeead2a5fc776db5b62ea0fb9b> &,class
   <lambda_3ae262bc35d4ba6a3825c4f6bcaaf95c> >(class <lambda_db08b09ef7aa9d4f8620ce68402612bc>
   &&,class <lambda_4f2c1eaeead2a5fc776db5b62ea0fb9b> &,class
   <lambda_3ae262bc35d4ba6a3825c4f6bcaaf95c> &&)
   
   Library: Visual Studio 2015 Release */

int operator()<>(undefined4 *param_1,<lambda_4f2c1eaeead2a5fc776db5b62ea0fb9b> *param_2)

{
  int iVar1;
  
  __lock_file((FILE *)*param_1);
  iVar1 = <lambda_4f2c1eaeead2a5fc776db5b62ea0fb9b>::operator()(param_2);
  FUN_1016efab();
  return iVar1;
}

