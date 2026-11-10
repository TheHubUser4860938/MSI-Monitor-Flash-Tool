// rea decompile_all
// name: FUN_1006e920
// address: 0x1006e920
// body: available
// range: 0x1006e920-0x1006e9fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006e9f6 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1006e920(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  CObject *pCVar4;
  CObject *pCVar5;
  int iVar6;
  int *in_ECX;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = 0;
  }
  else {
    in_ECX[0x2e4] = 0;
    if (*(int *)(param_1 + 0xc) == in_ECX[0x319]) {
      local_8 = in_ECX[0x317];
      local_c = *(int *)(param_1 + 4);
      do {
        if (local_8 == 0) {
          return 0;
        }
        if (local_c == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_10012a3f();
        }
        puVar3 = (undefined4 *)FUN_1002466e(&local_8);
        pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarButton_101d3a8c,
                                    (CObject *)*puVar3);
        pCVar5 = (CObject *)FUN_1005f4c2(&local_c);
        pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarButton_101d3a8c,pCVar5);
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x94);
        guard_check_icall(pCVar5);
        iVar6 = (*pcVar1)();
      } while (iVar6 != 0);
    }
    uVar2 = 1;
    pcVar1 = *(code **)(*in_ECX + 0x388);
    guard_check_icall();
    (*pcVar1)();
  }
  return uVar2;
}

