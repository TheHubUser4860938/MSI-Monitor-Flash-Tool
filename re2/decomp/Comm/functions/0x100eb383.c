// rea decompile_all
// name: FUN_100eb383
// address: 0x100eb383
// body: available
// range: 0x100eb383-0x100eb3fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100eb398 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_100eb383(wchar_t *param_1)

{
  int iVar1;
  CMFCToolBarButton *pCVar2;
  CMFCToolBarsCustomizeDialog *in_ECX;
  int local_88;
  CMFCToolBarButton local_84 [124];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x78;
  local_8 = 0x100eb38f;
  if (param_1 != (wchar_t *)0x0) {
    local_88 = *(int *)(DAT_101dc968 + 8);
    while (local_88 != 0) {
      iVar1 = FUN_1005f4c2(&local_88);
      pCVar2 = (CMFCToolBarButton *)
               CMFCToolBarButton(*(undefined4 *)(iVar1 + 0x10),0,*(undefined4 *)(iVar1 + 4),0,0);
      local_8 = 0;
      CMFCToolBarsCustomizeDialog::AddButton(in_ECX,param_1,pCVar2,-1);
      local_8 = 0xffffffff;
      CMFCToolBarButton::~CMFCToolBarButton(local_84);
    }
    FUN_101490fe();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012a3f();
}

