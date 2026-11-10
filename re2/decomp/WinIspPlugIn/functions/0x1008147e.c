// rea decompile_all
// name: CBasePane::get_accKeyboardShortcut
// address: 0x1008147e
// body: available
// range: 0x1008147e-0x10081507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __thiscall CBasePane::get_accKeyboardShortcut(struct tagVARIANT,wchar_t *
   *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CBasePane::get_accKeyboardShortcut
          (CBasePane *this,short param_2,undefined4 param_3,int param_4,undefined4 param_5,
          undefined4 *param_6)

{
  code *pcVar1;
  undefined4 uVar2;
  long lVar3;
  wchar_t *pwVar4;
  
  if (param_2 == 3) {
    if (param_4 == 0) {
      uVar2 = Ordinal_2(&PTR_1020e6b0);
      *param_6 = uVar2;
      return 0;
    }
  }
  else if (param_4 != 0) {
    return -0x7ff8ffa9;
  }
  if (param_6 == (undefined4 *)0x0) {
LAB_100814fd:
    lVar3 = -0x7ff8ffa9;
  }
  else {
    if (param_2 == 3) {
      if (0 < param_4) {
        pcVar1 = *(code **)(*(int *)this + 0x254);
        guard_check_icall(param_4);
        (*pcVar1)();
        if (*(int *)(*(int *)(this + 0xdc) + -0xc) != 0) {
          pwVar4 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                   AllocSysString((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                   *)(this + 0xdc));
          *param_6 = pwVar4;
          return 0;
        }
      }
    }
    else if (param_4 != 0) goto LAB_100814fd;
    lVar3 = 1;
  }
  return lVar3;
}

