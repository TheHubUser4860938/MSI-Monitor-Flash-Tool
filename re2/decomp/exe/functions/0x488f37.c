// rea decompile_all
// name: CMFCBaseTabCtrl::get_accValue
// address: 0x488f37
// body: available
// range: 0x488f37-0x488fa4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual long __thiscall CMFCBaseTabCtrl::get_accValue(struct tagVARIANT,wchar_t * *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CMFCBaseTabCtrl::get_accValue
          (CMFCBaseTabCtrl *this,short param_2,undefined4 param_3,int param_4,undefined4 param_5,
          undefined4 *param_6)

{
  code *pcVar1;
  int *piVar2;
  wchar_t *pwVar3;
  
  if (param_2 == 3) {
    if (param_4 < 1) {
      if (param_4 != 0) {
        return 1;
      }
      if (*(int *)(this + 0xc0) == -1) {
        return 1;
      }
      piVar2 = (int *)FUN_004ab4cd(*(int *)(this + 0xc0));
      this = (CMFCBaseTabCtrl *)(*piVar2 + 4);
    }
    else {
      pcVar1 = *(code **)(*(int *)this + 0x2d0);
      guard_check_icall(param_4);
      (*pcVar1)();
      this = this + 0x214;
    }
    if (*(int *)(*(int *)this + -0xc) != 0) {
      pwVar3 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
               AllocSysString((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                              this);
      *param_6 = pwVar3;
      return 0;
    }
  }
  return 1;
}

