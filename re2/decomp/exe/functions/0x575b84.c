// rea decompile_all
// name: try_get_function
// address: 0x575b84
// body: available
// range: 0x575b84-0x575c23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void * __cdecl try_get_function(enum `anonymous namespace'::function_id,char const * const,enum
   A0x89697e75::module_id const * const,enum A0x89697e75::module_id const * const)
   
   Library: Visual Studio 2015 Release */

void * __cdecl
try_get_function(function_id param_1,char *param_2,module_id *param_3,module_id *param_4)

{
  uint *puVar1;
  uint uVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  byte bVar4;
  void *pvVar5;
  
  puVar1 = &DAT_00618c0c + param_1;
  LOCK();
  uVar2 = *puVar1;
  if (uVar2 == 0) {
    *puVar1 = 0;
    uVar2 = 0;
  }
  UNLOCK();
  bVar4 = (byte)DAT_0060cff4 & 0x1f;
  pvVar5 = (void *)((DAT_0060cff4 ^ uVar2) >> bVar4 | (DAT_0060cff4 ^ uVar2) << 0x20 - bVar4);
  if (pvVar5 != (void *)0xffffffff) {
    if (pvVar5 != (void *)0x0) {
      return pvVar5;
    }
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      hModule = try_get_module(*param_3);
      if (hModule != (HINSTANCE__ *)0x0) goto LAB_00575be0;
    }
    hModule = (HMODULE)0x0;
LAB_00575be0:
    if ((hModule != (HMODULE)0x0) &&
       (pFVar3 = GetProcAddress(hModule,param_2), pFVar3 != (FARPROC)0x0)) {
      pvVar5 = __crt_fast_encode_pointer<void*>(pFVar3);
      LOCK();
      *puVar1 = (uint)pvVar5;
      UNLOCK();
      return pFVar3;
    }
    bVar4 = 0x20 - ((byte)DAT_0060cff4 & 0x1f) & 0x1f;
    LOCK();
    *puVar1 = (0xffffffffU >> bVar4 | -1 << 0x20 - bVar4) ^ DAT_0060cff4;
    UNLOCK();
  }
  return (void *)0x0;
}

