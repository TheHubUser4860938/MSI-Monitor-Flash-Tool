// rea decompile_all
// name: __crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>
// address: 0x1016f677
// body: available
// range: 0x1016f677-0x1016f6fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: bool __thiscall
   __crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>(unsigned int)
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>
          (formatting_buffer *this,uint param_1)

{
  uint uVar1;
  int *piVar2;
  bool bVar3;
  formatting_buffer *local_8;
  
  local_8 = this;
  if (((uint)(0xffffffff / (ulonglong)param_1) & 0xfffffffe) < 2) {
    piVar2 = __errno();
    *piVar2 = 0xc;
    bVar3 = false;
  }
  else {
    uVar1 = param_1 * 2;
    if (((*(int *)(this + 0x404) == 0) && (uVar1 < 0x401)) || (uVar1 <= *(uint *)(this + 0x400))) {
      bVar3 = true;
    }
    else {
      local_8 = (formatting_buffer *)__malloc_base(uVar1);
      bVar3 = local_8 != (void *)0x0;
      if (bVar3) {
        __crt_unique_heap_ptr<char,__crt_internal_free_policy>::operator=
                  ((__crt_unique_heap_ptr<char,__crt_internal_free_policy> *)(this + 0x404),
                   (__crt_unique_heap_ptr<char,struct___crt_internal_free_policy> *)&local_8);
        *(uint *)(this + 0x400) = uVar1;
      }
      FID_conflict__free(local_8);
    }
  }
  return bVar3;
}

