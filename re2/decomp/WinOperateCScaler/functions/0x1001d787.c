// rea decompile_all
// name: CheckImplicitLoad
// address: 0x1001d787
// body: available
// range: 0x1001d787-0x1001d7aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char>
   > >::CheckImplicitLoad(void const *)
    private: bool __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >::CheckImplicitLoad(void const *)
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release */

undefined1 CheckImplicitLoad(uint param_1)

{
  CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_> *in_ECX;
  undefined1 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && ((param_1 & 0xffff0000) == 0)) {
    ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>::LoadStringA
              (in_ECX,param_1 & 0xffff);
    uVar1 = 1;
  }
  return uVar1;
}

