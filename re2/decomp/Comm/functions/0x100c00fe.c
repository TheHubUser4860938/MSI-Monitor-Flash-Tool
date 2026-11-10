// rea decompile_all
// name: FUN_100c00fe
// address: 0x100c00fe
// body: available
// range: 0x100c00fe-0x100c01cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c01c7 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_100c00fe(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 param_5,
            int *param_6,int *param_7)

{
  code *pcVar1;
  int iVar2;
  
  if (param_4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10012a3f();
  }
  *param_4 = 0;
  pcVar1 = *(code **)(*param_1 + 0x6c);
  guard_check_icall(param_2,param_3,param_4);
  iVar2 = (*pcVar1)();
  *param_7 = iVar2;
  if (iVar2 == 0) {
    iVar2 = *param_1;
    guard_check_icall(param_2,param_3,DAT_101d3904,1,param_6,param_7);
    iVar2 = (**(code **)(iVar2 + 0x68))();
    *param_4 = iVar2;
    if ((*param_7 == 0) && (*param_6 == 0)) {
      if (iVar2 != 0) {
        iVar2 = CGlobalUtils::CheckAlignment
                          ((CGlobalUtils *)&PTR_vftable_101d3944,param_2,param_3,iVar2,DAT_101d3904,
                           0,0,param_5,0xf000,0);
        if (iVar2 != 0) {
          return 1;
        }
        *param_4 = 0;
        return 1;
      }
    }
    else if (iVar2 != 0) {
      return 1;
    }
    iVar2 = *param_1;
    guard_check_icall(param_2,param_3,DAT_101d3904,0,param_6,param_7);
    (**(code **)(iVar2 + 0x68))();
  }
  return 1;
}

