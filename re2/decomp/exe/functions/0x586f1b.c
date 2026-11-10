// rea decompile_all
// name: ___acrt_initialize_clock
// address: 0x586f1b
// body: available
// range: 0x586f1b-0x586f80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___acrt_initialize_clock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

undefined4 ___acrt_initialize_clock(void)

{
  BOOL BVar1;
  LARGE_INTEGER local_14;
  LARGE_INTEGER local_c;
  
  BVar1 = QueryPerformanceFrequency(&local_c);
  if (((BVar1 != 0) && (BVar1 = QueryPerformanceCounter(&local_14), BVar1 != 0)) &&
     (local_c.s.LowPart != 0 || local_c.s.HighPart != 0)) {
    DAT_00618ce8 = local_c.s.LowPart;
    DAT_00618cec = local_c.s.HighPart;
    DAT_00618cf0 = local_14.s.LowPart;
    _DAT_00618cf4 = local_14.s.HighPart;
    return 0;
  }
  DAT_00618cf0 = 0xffffffff;
  DAT_00618cec = 0xffffffff;
  DAT_00618ce8 = 0xffffffff;
  _DAT_00618cf4 = 0xffffffff;
  return 0;
}

