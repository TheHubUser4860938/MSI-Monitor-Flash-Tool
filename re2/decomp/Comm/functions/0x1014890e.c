// rea decompile_all
// name: __onexit
// address: 0x1014890e
// body: available
// range: 0x1014890e-0x10148948 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2015 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = (byte)DAT_101d3fec & 0x1f;
  if (((DAT_101d3fec ^ DAT_101ddf34) >> bVar2 | (DAT_101d3fec ^ DAT_101ddf34) << 0x20 - bVar2) ==
      0xffffffff) {
    iVar1 = __crt_atexit();
  }
  else {
    iVar1 = __register_onexit_function(&DAT_101ddf34,_Func);
  }
  return (_onexit_t)(~-(uint)(iVar1 != 0) & (uint)_Func);
}

