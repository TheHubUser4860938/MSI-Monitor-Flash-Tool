// rea decompile_all
// name: CBasePane::get_accDescription
// address: 0x10081369
// body: available
// range: 0x10081369-0x1008140c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100813b9 to 0x10047550 FUN_10047550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __thiscall CBasePane::get_accDescription(struct tagVARIANT,wchar_t * *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CBasePane::get_accDescription
          (CBasePane *this,short param_2,undefined4 param_3,int param_4,undefined4 param_5,
          int *param_6)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  wchar_t *pwVar4;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x10081375;
  if (param_2 == 3) {
    if (param_4 == 0) {
      uVar2 = FUN_10049868();
      FUN_100476a0(uVar2);
      local_8 = 0;
      CWnd::GetWindowTextW
                ((CWnd *)this,
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
      iVar3 = Ordinal_4(local_14[0],*(undefined4 *)(local_14[0] + -0xc));
      if (iVar3 != 0) {
        *param_6 = iVar3;
        FUN_100476d0();
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_10047550();
    }
    if (0 < param_4) {
      pcVar1 = *(code **)(*(int *)this + 0x254);
      guard_check_icall(param_4);
      (*pcVar1)();
      if (*(int *)(*(int *)(this + 0xd8) + -0xc) != 0) {
        pwVar4 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                 AllocSysString((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                 *)(this + 0xd8));
        *param_6 = (int)pwVar4;
        return 0;
      }
    }
  }
  return 1;
}

