// rea decompile_all
// name: std::_LStrxfrm<unsigned_short>
// address: 0x5603f8
// body: available
// range: 0x5603f8-0x56042a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    unsigned int __cdecl std::_LStrxfrm<unsigned short>(unsigned short *,unsigned short *,unsigned
   short const *,unsigned short const *,struct _Collvec const *)
   
   Library: Visual Studio 2015 Release */

uint __cdecl
std::_LStrxfrm<unsigned_short>
          (ushort *param_1,ushort *param_2,ushort *param_3,ushort *param_4,_Collvec *param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (int)param_4 - (int)param_3 >> 1;
  uVar1 = (int)param_2 - (int)param_1 >> 1;
  if (uVar2 <= uVar1) {
    _memcpy_s(param_1,uVar1 * 2,param_3,uVar2 * 2);
  }
  return uVar2;
}

