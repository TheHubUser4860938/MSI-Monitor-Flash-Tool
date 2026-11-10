// rea decompile_all
// name: create_thread_parameter
// address: 0x57f1a3
// body: available
// range: 0x57f1a3-0x57f1eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    struct __acrt_thread_parameter * __cdecl create_thread_parameter(void * const,void * const)
   
   Library: Visual Studio 2015 Release */

__acrt_thread_parameter * __cdecl create_thread_parameter(void *param_1,void *param_2)

{
  __acrt_thread_parameter *p_Var1;
  thread_parameter_free_policy local_5;
  
  p_Var1 = (__acrt_thread_parameter *)__calloc_base(1,0x14);
  FID_conflict__free((void *)0x0);
  if (p_Var1 != (__acrt_thread_parameter *)0x0) {
    *(void **)(p_Var1 + 4) = param_2;
    *(void **)p_Var1 = param_1;
    GetModuleHandleExW(4,param_1,(HMODULE *)(p_Var1 + 0xc));
  }
  _anon_58BB9154::thread_parameter_free_policy::operator()(&local_5,(__acrt_thread_parameter *)0x0);
  return p_Var1;
}

