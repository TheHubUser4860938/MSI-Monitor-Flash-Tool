// rea decompile_all
// name: FUN_10117615
// address: 0x10117615
// body: available
// range: 0x10117615-0x101176b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101176b1 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_10117615(CMFCPopupMenu *param_1)

{
  CMFCPopupMenu *pCVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_14;
  
  pCVar1 = CMFCPopupMenu::GetParentPopupMenu(param_1);
  if (pCVar1 != (CMFCPopupMenu *)0x0) {
    uVar2 = FUN_10049868();
    FUN_100476a0(uVar2);
    uVar2 = 0;
    iVar3 = FUN_1004c4e6(0x427a);
    if ((iVar3 == 0) || (iVar3 = FUN_10047070(iVar3,0x427a), iVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_1004a383();
    }
    if (((*(int *)(pCVar1 + 0x158) == 0) || (iVar3 = FUN_100477c0(local_14,0), iVar3 != -1)) &&
       ((pCVar1 = CMFCPopupMenu::GetParentPopupMenu(pCVar1), pCVar1 == (CMFCPopupMenu *)0x0 ||
        (uVar2 = 1, *(int *)(pCVar1 + 0x1168) == 1)))) {
      FUN_100476d0();
      return uVar2;
    }
    FUN_100476d0();
  }
  return 0;
}

