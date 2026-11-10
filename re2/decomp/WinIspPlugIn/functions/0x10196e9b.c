// rea decompile_all
// name: ___FrameUnwindToState
// address: 0x10196e9b
// body: available
// range: 0x10196e9b-0x10196f10 inclusive
// range: 0x10196f1e-0x10196f4b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10196f2a to 0x101ac831 FUN_101ac831 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___FrameUnwindToState
   
   Library: Visual Studio 2015 Release */

void ___FrameUnwindToState(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_3 + 4) < 0x81) {
    iVar2 = (int)*(char *)(param_1 + 8);
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
  }
  iVar1 = ___vcrt_getptd();
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
  while (iVar1 = iVar2, iVar1 != param_4) {
    if ((iVar1 < 0) || (*(int *)(param_3 + 4) <= iVar1)) goto LAB_10196f2a;
    iVar2 = *(int *)(*(int *)(param_3 + 8) + iVar1 * 8);
    if (*(int *)(*(int *)(param_3 + 8) + 4 + iVar1 * 8) != 0) {
      *(int *)(param_1 + 8) = iVar2;
      __CallSettingFrame_12(*(undefined4 *)(*(int *)(param_3 + 8) + 4 + iVar1 * 8),param_1,0x103);
    }
  }
  FUN_10196f4f();
  if (iVar1 == param_4) {
    *(int *)(param_1 + 8) = iVar1;
    return;
  }
LAB_10196f2a:
                    /* WARNING: Subroutine does not return */
  FUN_101ac831();
}

