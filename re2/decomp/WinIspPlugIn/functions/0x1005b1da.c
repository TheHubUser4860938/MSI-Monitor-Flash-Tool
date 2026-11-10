// rea decompile_all
// name: ATL::_AtlDownlevelLCIDToLocaleName
// address: 0x1005b1da
// body: available
// range: 0x1005b1da-0x1005b244 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl ATL::_AtlDownlevelLCIDToLocaleName(unsigned long,wchar_t *,int)
   
   Library: Visual Studio 2015 Release */

int __cdecl ATL::_AtlDownlevelLCIDToLocaleName(ulong param_1,wchar_t *param_2,int param_3)

{
  wchar_t *_Src;
  int iVar1;
  
  if ((((param_1 != 0) && (param_1 != 0x400)) && (param_1 != 0x800)) &&
     (((param_2 != (wchar_t *)0x0 || (param_3 < 1)) &&
      ((-1 < param_3 && (iVar1 = FID_conflict__AtlGetTableIndexFromLcid(param_1), -1 < iVar1)))))) {
    _Src = (wchar_t *)(&PTR_DAT_101d4d3c)[iVar1 * 2];
    iVar1 = FUN_101a2311(_Src,0x55);
    if (0 < param_3) {
      if (param_3 <= iVar1) {
        return 0;
      }
      _wcscpy_s(param_2,param_3,_Src);
    }
    return iVar1 + 1;
  }
  return 0;
}

