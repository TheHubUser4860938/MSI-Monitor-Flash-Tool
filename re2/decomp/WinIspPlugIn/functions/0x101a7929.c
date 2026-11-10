// rea decompile_all
// name: __crt_stdio_input::scanset_storage<2>::data
// address: 0x101a7929
// body: available
// range: 0x101a7929-0x101a7962 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: unsigned char * __thiscall __crt_stdio_input::scanset_storage<2>::data(void)const 
   
   Library: Visual Studio 2015 Release */

uchar * __thiscall __crt_stdio_input::scanset_storage<2>::data(scanset_storage<2> *this)

{
  scanset_storage<2> *local_8;
  
  if (*(int *)this == 0) {
    local_8 = this;
    local_8 = (scanset_storage<2> *)__calloc_base(0x2000,1);
    __crt_unique_heap_ptr<char,__crt_internal_free_policy>::operator=
              ((__crt_unique_heap_ptr<char,__crt_internal_free_policy> *)this,
               (__crt_unique_heap_ptr<char,struct___crt_internal_free_policy> *)&local_8);
    FID_conflict__free(local_8);
  }
  return *(uchar **)this;
}

