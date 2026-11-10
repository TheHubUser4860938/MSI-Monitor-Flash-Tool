// rea decompile_all
// name: GetStyleResourceID
// address: 0x10094a6b
// body: available
// range: 0x10094a6b-0x10094b1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: static class ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> >
   > __stdcall CMFCVisualManagerOffice2007::GetStyleResourceID(enum
   CMFCVisualManagerOffice2007::Style)
    protected: static class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > __stdcall CMFCVisualManagerOffice2007::GetStyleResourceID(enum
   CMFCVisualManagerOffice2007::Style)
   
   Library: Visual Studio 2015 Release */

undefined4 GetStyleResourceID(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  wchar_t *pwVar2;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_18 = 0;
  local_8 = 0;
  FUN_100037c0(L"IDX_OFFICE2007_STYLE");
  local_8 = 0;
  local_18 = 1;
  uVar1 = FUN_10013071();
  FUN_10003190(uVar1);
  local_8 = 1;
  if (param_2 == 0) {
    pwVar2 = L"BLUE_";
  }
  else if (param_2 == 1) {
    pwVar2 = L"BLACK_";
  }
  else if (param_2 == 2) {
    pwVar2 = L"AQUA_";
  }
  else {
    if (param_2 != 3) goto LAB_10094adb;
    pwVar2 = L"SILVER_";
  }
  FUN_10003780(pwVar2);
LAB_10094adb:
  uVar1 = ATL__operator_(local_1c,local_14,param_1);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_100030d0(uVar1);
  FUN_10003460();
  FUN_10003460();
  return param_1;
}

