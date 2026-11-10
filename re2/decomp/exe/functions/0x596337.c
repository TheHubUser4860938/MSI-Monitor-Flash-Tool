// rea decompile_all
// name: __callnewh
// address: 0x596337
// body: available
// range: 0x596337-0x59637a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2015 Release */

int __cdecl __callnewh(size_t _Size)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  
  uVar1 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  pcVar2 = (code *)__query_new_handler();
  if (pcVar2 != (code *)0x0) {
    guard_check_icall(_Size);
    (*pcVar2)();
  }
  iVar3 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

