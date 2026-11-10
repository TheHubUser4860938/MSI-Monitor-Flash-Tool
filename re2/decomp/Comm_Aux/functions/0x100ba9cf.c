// rea decompile_all
// name: CMFCPopupMenu::get_accName
// address: 0x100ba9cf
// body: available
// range: 0x100ba9cf-0x100baa9c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100baa3d to 0x10034fa0 FUN_10034fa0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  long lVar2;
  int iVar3;
  int *piVar4;
  
  if (param_6 == (int *)0x0) {
    lVar2 = -0x7ff8ffa9;
  }
  else if ((((short)param_2 == 3) && (param_4 == 0)) && (*(int *)(this + 0x158) != 0)) {
    iVar3 = FUN_100349e0(*(int *)(*(int *)(this + 0x158) + 0x2c) + -0x10);
    lVar2 = 0;
    FUN_10037b90(0x26);
    if (*(int *)(iVar3 + 4) == 0) {
      lVar2 = 1;
    }
    else {
      iVar3 = Ordinal_4(iVar3 + 0x10,*(undefined4 *)(iVar3 + 4));
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_10034fa0();
      }
      *param_6 = iVar3;
    }
    FUN_10034f00();
  }
  else {
    pcVar1 = *(code **)(*(int *)this + 0x1c8);
    guard_check_icall();
    piVar4 = (int *)(*pcVar1)();
    if (piVar4 == (int *)0x0) {
      lVar2 = 1;
    }
    else {
      pcVar1 = *(code **)(*piVar4 + 0xa4);
      guard_check_icall(param_2,param_3,param_4,param_5,param_6);
      lVar2 = (*pcVar1)();
    }
  }
  return lVar2;
}

