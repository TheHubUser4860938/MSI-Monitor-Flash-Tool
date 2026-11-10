// rea decompile_all
// name: __crt_seh_guarded_call<int>::operator()<<lambda_9227be29367c048ad7fd93a717dcb1a1>,<lambda_a463b7b0560cfcaf9b17f27c6ef46564>&,<lambda_ccea11b5727ccf69be64f5f5d9a08d9f>_>
// address: 0x10160f47
// body: available
// range: 0x10160f47-0x10160fbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_9227be29367c048ad7fd93a717dcb1a1>,class <lambda_a463b7b0560cfcaf9b17f27c6ef46564> &,class
   <lambda_ccea11b5727ccf69be64f5f5d9a08d9f> >(class <lambda_9227be29367c048ad7fd93a717dcb1a1>
   &&,class <lambda_a463b7b0560cfcaf9b17f27c6ef46564> &,class
   <lambda_ccea11b5727ccf69be64f5f5d9a08d9f> &&)
   
   Library: Visual Studio 2015 Release */

int __thiscall
__crt_seh_guarded_call<int>::
operator()<<lambda_9227be29367c048ad7fd93a717dcb1a1>,<lambda_a463b7b0560cfcaf9b17f27c6ef46564>&,<lambda_ccea11b5727ccf69be64f5f5d9a08d9f>_>
          (__crt_seh_guarded_call<int> *this,<lambda_9227be29367c048ad7fd93a717dcb1a1> *param_1,
          <lambda_a463b7b0560cfcaf9b17f27c6ef46564> *param_2,
          <lambda_ccea11b5727ccf69be64f5f5d9a08d9f> *param_3)

{
  byte bVar1;
  BOOL BVar2;
  
  ___acrt_lock(*(undefined4 *)param_1);
  _DAT_101deca8 = __crt_fast_encode_pointer<>(**(undefined4 **)param_2);
  BVar2 = EnumSystemLocalesW(<lambda_5a01b672d24c8480ee9d6bdb50dd3881>::<helper_func_stdcall>,1);
  bVar1 = 0x20 - ((byte)DAT_101d3fec & 0x1f) & 0x1f;
  _DAT_101deca8 = (0U >> bVar1 | 0 << 0x20 - bVar1) ^ DAT_101d3fec;
  FUN_10160fbf();
  return BVar2;
}

