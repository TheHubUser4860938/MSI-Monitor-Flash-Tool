// rea decompile_all
// name: do_tolower
// address: 0x56d1d7
// body: available
// range: 0x56d1d7-0x56d220 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: virtual unsigned short const * __thiscall std::ctype<unsigned
   short>::do_tolower(unsigned short *,unsigned short const *)const 
    protected: virtual wchar_t const * __thiscall std::ctype<wchar_t>::do_tolower(wchar_t *,wchar_t
   const *)const 
   
   Library: Visual Studio 2015 Release */

wchar_t * do_tolower(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  int in_ECX;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = ~-(uint)(param_2 < param_1) & (uint)((int)param_2 + (1 - (int)param_1)) >> 1;
  if (uVar3 != 0) {
    do {
      wVar1 = __Towlower(*param_1,(_Ctypevec *)(in_ECX + 8));
      *param_1 = wVar1;
      param_1 = param_1 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar3);
  }
  return param_1;
}

