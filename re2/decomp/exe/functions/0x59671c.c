// rea decompile_all
// name: ___hw_cw_sse2
// address: 0x59671c
// body: available
// range: 0x59671c-0x5967c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___hw_cw_sse2
   
   Library: Visual Studio 2015 Release */

uint ___hw_cw_sse2(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_1 & 0x10) != 0) {
    uVar1 = 0x80;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 0x400;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x800;
  }
  if ((param_1 & 1) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  if ((param_1 & 0x80000) != 0) {
    uVar1 = uVar1 | 0x100;
  }
  uVar2 = param_1 & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x2000;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x4000;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0x6000;
    }
  }
  param_1 = param_1 & 0x3000000;
  if (param_1 == 0x1000000) {
    uVar1 = uVar1 | 0x8040;
  }
  else {
    if (param_1 == 0x2000000) {
      return uVar1 | 0x40;
    }
    if (param_1 == 0x3000000) {
      return uVar1 | 0x8000;
    }
  }
  return uVar1;
}

