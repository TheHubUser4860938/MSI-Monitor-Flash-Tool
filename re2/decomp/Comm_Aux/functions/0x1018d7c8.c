// rea decompile_all
// name: __crt_unique_heap_ptr<char,__crt_internal_free_policy>::operator=
// address: 0x1018d7c8
// body: available
// range: 0x1018d7c8-0x1018d7eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class __crt_unique_heap_ptr<char,struct __crt_internal_free_policy> & __thiscall
   __crt_unique_heap_ptr<char,struct __crt_internal_free_policy>::operator=(class
   __crt_unique_heap_ptr<char,struct __crt_internal_free_policy> &&)
   
   Library: Visual Studio 2015 Release */

__crt_unique_heap_ptr<char,struct___crt_internal_free_policy> * __thiscall
__crt_unique_heap_ptr<char,__crt_internal_free_policy>::operator=
          (__crt_unique_heap_ptr<char,__crt_internal_free_policy> *this,
          __crt_unique_heap_ptr<char,struct___crt_internal_free_policy> *param_1)

{
  FID_conflict__free(*(void **)this);
  *(undefined4 *)this = 0;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)param_1 = 0;
  return (__crt_unique_heap_ptr<char,struct___crt_internal_free_policy> *)this;
}

