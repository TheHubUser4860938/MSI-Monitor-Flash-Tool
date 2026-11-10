// rea decompile_all
// name: _clock
// address: 0x586f81
// body: available
// range: 0x586f81-0x586fe2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00586fd5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _clock
   
   Library: Visual Studio 2015 Release */

clock_t __cdecl _clock(void)

{
  BOOL BVar1;
  int iVar2;
  __int64 _Var3;
  LARGE_INTEGER local_c;
  
  if (((DAT_00618cf0 & _DAT_00618cf4) != 0xffffffff) &&
     (BVar1 = QueryPerformanceCounter(&local_c), BVar1 != 0)) {
    iVar2 = (local_c.s.HighPart - _DAT_00618cf4) - (uint)(local_c.s.LowPart < DAT_00618cf0);
    if ((0 < iVar2) || (-1 < iVar2)) {
      _Var3 = scale_count(CONCAT44(iVar2,local_c.s.LowPart - DAT_00618cf0));
      if (_Var3 < 0x80000000) {
        return (clock_t)_Var3;
      }
    }
  }
  return -1;
}

