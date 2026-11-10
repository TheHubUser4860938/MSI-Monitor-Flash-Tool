// rea decompile_all
// name: CBasePane::get_accName
// address: 0x1004a0c5
// body: available
// range: 0x1004a0c5-0x1004a168 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004a115 to 0x10003500 FUN_10003500 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __thiscall CBasePane::get_accName(struct tagVARIANT,wchar_t * *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CBasePane::get_accName
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
  local_8 = 0x1004a0d1;
  if (param_2 == 3) {
    if (param_4 == 0) {
      uVar2 = FUN_10013071();
      FUN_10003190(uVar2);
      local_8 = 0;
      CWnd::GetWindowTextW
                ((CWnd *)this,
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
      iVar3 = Ordinal_4(local_14[0],*(undefined4 *)(local_14[0] + -0xc));
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_10003500();
      }
      *param_6 = iVar3;
      FUN_10003460();
    }
    else if (0 < param_4) {
      pcVar1 = *(code **)(*(int *)this + 0x254);
      guard_check_icall(param_4);
      (*pcVar1)();
      if (*(int *)(*(int *)(this + 0xd0) + -0xc) == 0) {
        return 1;
      }
      pwVar4 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
               AllocSysString((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                              (this + 0xd0));
      *param_6 = (int)pwVar4;
    }
  }
  return 0;
}

