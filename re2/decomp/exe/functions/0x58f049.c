// rea decompile_all
// name: try_get_function
// address: 0x58f049
// body: available
// range: 0x58f049-0x58f0e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void * __cdecl try_get_function(enum `anonymous namespace'::function_id,char const * const,enum
   A0x9b56aee1::module_id const * const,enum A0x9b56aee1::module_id const * const)
   
   Library: Visual Studio 2015 Release */

void * __cdecl
try_get_function(function_id param_1,char *param_2,module_id *param_3,module_id *param_4)

{
  uint *puVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  byte bVar3;
  void *pvVar4;
  
  puVar1 = &DAT_006192f8 + param_1;
  bVar3 = (byte)DAT_0060cff4 & 0x1f;
  pvVar4 = (void *)((DAT_0060cff4 ^ *puVar1) >> bVar3 | (DAT_0060cff4 ^ *puVar1) << 0x20 - bVar3);
  if (pvVar4 != (void *)0xffffffff) {
    if (pvVar4 != (void *)0x0) {
      return pvVar4;
    }
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      hModule = (HMODULE)try_get_module(*param_3);
      if (hModule != (HMODULE)0x0) goto LAB_0058f0a1;
    }
    hModule = (HMODULE)0x0;
LAB_0058f0a1:
    if ((hModule != (HMODULE)0x0) &&
       (pFVar2 = GetProcAddress(hModule,param_2), pFVar2 != (FARPROC)0x0)) {
      pvVar4 = __crt_fast_encode_pointer<void*>(pFVar2);
      LOCK();
      *puVar1 = (uint)pvVar4;
      UNLOCK();
      return pFVar2;
    }
    bVar3 = 0x20 - ((byte)DAT_0060cff4 & 0x1f) & 0x1f;
    LOCK();
    *puVar1 = (0xffffffffU >> bVar3 | -1 << 0x20 - bVar3) ^ DAT_0060cff4;
    UNLOCK();
  }
  return (void *)0x0;
}

