// rea decompile_all
// name: FUN_100c7634
// address: 0x100c7634
// body: available
// range: 0x100c7634-0x100c776d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c7769 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100c7634(CWnd *param_1,undefined **param_2,undefined **param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  CSmartDockingManager *in_ECX;
  CSmartDockingManager *local_c;
  CSmartDockingManager *local_8;
  
  if (param_2 == (undefined **)0x0) {
    param_2 = &PTR_s_CSmartDockingStandaloneGuide_101a2de8;
  }
  if (param_3 == (undefined **)0x0) {
    param_3 = &PTR_s_CSmartDockingGroupGuidesManager_101a2fd0;
  }
  if (param_2 != (undefined **)0x0) {
    iVar2 = FUN_10019d25(&PTR_s_CSmartDockingStandaloneGuide_101a2de8);
    if ((iVar2 != 0) && (param_3 != (undefined **)0x0)) {
      iVar2 = FUN_10019d25(&PTR_s_CSmartDockingGroupGuidesManager_101a2fd0);
      if (iVar2 != 0) {
        CSmartDockingManager::Destroy(in_ECX);
        pcVar1 = (code *)param_3[3];
        guard_check_icall();
        uVar3 = (*pcVar1)();
        local_8 = (CSmartDockingManager *)0x0;
        *(undefined4 *)(in_ECX + 0x10c) = uVar3;
        local_c = in_ECX + 0xe8;
        do {
          pcVar1 = (code *)param_2[3];
          guard_check_icall();
          piVar4 = (int *)(*pcVar1)();
          *(int **)local_c = piVar4;
          pcVar1 = *(code **)(*piVar4 + 0xc);
          guard_check_icall(local_8,param_1);
          (*pcVar1)();
          local_c = local_c + 4;
          local_8 = (CSmartDockingManager *)((int)local_8 + 1);
        } while ((int)local_8 < 4);
        pcVar1 = *(code **)(**(int **)(in_ECX + 0x10c) + 0xc);
        guard_check_icall(param_1);
        (*pcVar1)();
        local_8 = in_ECX + 0xf8;
        local_c = (CSmartDockingManager *)0x4;
        do {
          pcVar1 = *(code **)(**(int **)(in_ECX + 0x10c) + 0x1c);
          guard_check_icall(local_c);
          uVar3 = (*pcVar1)();
          local_c = (CSmartDockingManager *)((int)local_c + 1);
          *(undefined4 *)local_8 = uVar3;
          local_8 = local_8 + 4;
        } while ((int)local_c < 9);
        *(CWnd **)(in_ECX + 0x14) = param_1;
        CSmartDockingHighlighterWnd::Create((CSmartDockingHighlighterWnd *)(in_ECX + 0x30),param_1);
        *(undefined4 *)(in_ECX + 8) = 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012a3f();
}

