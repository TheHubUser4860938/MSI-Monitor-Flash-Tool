// rea decompile_all
// name: MakeResourceID
// address: 0x100a0261
// body: available
// range: 0x100a0261-0x100a02c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: static class ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> >
   > __stdcall CMFCVisualManagerOffice2007::MakeResourceID(char const *)
    protected: static class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > __stdcall CMFCVisualManagerOffice2007::MakeResourceID(wchar_t const
   *)
   
   Library: Visual Studio 2015 Release */

undefined4 MakeResourceID(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_18[1] = 0;
  local_8 = 0;
  FUN_100185a0(param_2);
  local_8 = 0;
  local_18[1] = 1;
  if (*(int *)(DAT_1020b4b8 + -0xc) != 0) {
    uVar1 = ATL__operator_(local_18,&DAT_1020b4b8,param_1);
    local_8 = 1;
    FUN_10018680(uVar1);
    ATL::CStringData::Release((CStringData *)(local_18[0] + -0x10));
  }
  return param_1;
}

