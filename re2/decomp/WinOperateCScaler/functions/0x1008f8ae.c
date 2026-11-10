// rea decompile_all
// name: CMFCPopupMenu::get_accName
// address: 0x1008f8ae
// body: available
// range: 0x1008f8ae-0x1008f97b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1008f91c to 0x10018fb0 FUN_10018fb0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual long __thiscall CMFCPopupMenu::get_accName(struct tagVARIANT,wchar_t * *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CMFCPopupMenu::get_accName
          (CMFCPopupMenu *this,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
          int *param_6)

{
  code *pcVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  int *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x1008f8ba;
  if (param_6 == (int *)0x0) {
    lVar3 = -0x7ff8ffa9;
  }
  else if ((((short)param_2 == 3) && (param_4 == 0)) && (*(int *)(this + 0x158) != 0)) {
    iVar4 = FUN_100187a0(*(int *)(*(int *)(this + 0x158) + 0x2c) + -0x10);
    local_14[0] = (int *)(iVar4 + 0x10);
    lVar3 = 0;
    local_8 = 0;
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14,L'&');
    piVar2 = local_14[0];
    if (*(int *)((int)local_14[0] + -0xc) == 0) {
      lVar3 = 1;
    }
    else {
      iVar4 = Ordinal_4(local_14[0],*(undefined4 *)((int)local_14[0] + -0xc));
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_10018fb0();
      }
      *param_6 = iVar4;
    }
    ATL::CStringData::Release((CStringData *)((int)piVar2 + -0x10));
  }
  else {
    pcVar1 = *(code **)(*(int *)this + 0x1c8);
    guard_check_icall();
    local_14[0] = (int *)(*pcVar1)();
    if (local_14[0] == (int *)0x0) {
      lVar3 = 1;
    }
    else {
      pcVar1 = *(code **)(*local_14[0] + 0xa4);
      guard_check_icall(param_2,param_3,param_4,param_5,param_6);
      lVar3 = (*pcVar1)();
    }
  }
  return lVar3;
}

