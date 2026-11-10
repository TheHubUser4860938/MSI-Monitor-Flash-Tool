// rea decompile_all
// name: ___get_machine_status_sse2
// address: 0x59979d
// body: available
// range: 0x59979d-0x5997fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___get_machine_status_sse2
   
   Library: Visual Studio 2015 Release */

byte ___get_machine_status_sse2(uint param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((param_1 & 0x1f) != 0) {
    bVar1 = (param_1 & 0x10000010) == 0x10000010;
    if ((param_1 & 0x8000008) == 0x8000008) {
      bVar1 = bVar1 | 4;
    }
    if ((param_1 & 0x4000004) == 0x4000004) {
      bVar1 = bVar1 | 8;
    }
    if ((param_1 & 0x2000002) == 0x2000002) {
      bVar1 = bVar1 | 0x10;
    }
    if ((param_1 & 0x1000001) == 0x1000001) {
      bVar1 = bVar1 | 0x20;
    }
  }
  return bVar1;
}

