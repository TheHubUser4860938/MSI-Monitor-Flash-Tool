// rea decompile_all
// name: __realloc_base
// address: 0x58b0db
// body: available
// range: 0x58b0db-0x58b143 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __realloc_base
   
   Library: Visual Studio 2015 Release */

LPVOID __realloc_base(void *param_1,uint param_2)

{
  LPVOID pvVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 == (void *)0x0) {
    pvVar1 = (LPVOID)__malloc_base(param_2);
  }
  else {
    if (param_2 == 0) {
      FID_conflict__free(param_1);
    }
    else {
      if (param_2 < 0xffffffe1) {
        do {
          pvVar1 = HeapReAlloc(DAT_00619450,0,param_1,param_2);
          if (pvVar1 != (LPVOID)0x0) {
            return pvVar1;
          }
          iVar3 = FUN_0058a325();
        } while ((iVar3 != 0) && (iVar3 = __callnewh(param_2), iVar3 != 0));
      }
      piVar2 = __errno();
      *piVar2 = 0xc;
    }
    pvVar1 = (LPVOID)0x0;
  }
  return pvVar1;
}

