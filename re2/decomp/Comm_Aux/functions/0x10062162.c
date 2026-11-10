// rea decompile_all
// name: FUN_10062162
// address: 0x10062162
// body: available
// range: 0x10062162-0x100622aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006229b to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100622a6 to 0x10048884 FUN_10048884 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10062162(int param_1)

{
  int iVar1;
  int iVar2;
  LRESULT LVar3;
  int in_ECX;
  int *piVar4;
  int local_c;
  uint local_8;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  FUN_10067e65(*(undefined4 *)(in_ECX + 0xbc),param_1);
  if (*(int *)(in_ECX + 0x20) == 0) {
    return;
  }
  local_8 = 0;
  piVar4 = *(int **)(in_ECX + 0xa0);
  local_c = 0;
  iVar2 = 0;
  if (*(int *)(in_ECX + 0x98) != 0) {
    do {
      iVar1 = *piVar4;
      local_c = iVar1 + iVar2;
      if ((local_c < iVar2) || (local_c < iVar1)) goto LAB_100622a6;
      piVar4 = (int *)((int)piVar4 + iVar1);
      local_8 = local_8 + 1;
      iVar2 = local_c;
    } while (local_8 < *(uint *)(in_ECX + 0x98));
  }
  iVar1 = **(int **)(param_1 + 0xa8);
  iVar2 = iVar1 + local_c;
  if (((local_c <= iVar2) && (iVar1 <= iVar2)) &&
     (iVar2 = FUN_101894db(*(undefined4 *)(in_ECX + 0xa0),iVar2), iVar2 != 0)) {
    *(int *)(in_ECX + 0xa0) = iVar2;
    iVar2 = iVar2 + local_c;
    FUN_100345e0(iVar2,iVar1,*(undefined4 **)(param_1 + 0xa8),**(undefined4 **)(param_1 + 0xa8));
    PreProcessPageTemplate(iVar2,(*(uint *)(in_ECX + 0x84) & 0x1000020) != 0);
    iVar1 = *(int *)(param_1 + 0xb4);
    if (*(int *)(iVar1 + -0xc) != 0) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x1000;
      *(int *)(iVar2 + 0x28) = iVar1;
    }
    iVar1 = *(int *)(param_1 + 0xb8);
    if (*(int *)(iVar1 + -0xc) != 0) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x2000;
      *(int *)(iVar2 + 0x2c) = iVar1;
    }
    iVar2 = FID_conflict__IsolationAwareCreatePropertySheetPageW_4(iVar2);
    if (iVar2 != 0) {
      LVar3 = SendMessageW(*(HWND *)(in_ECX + 0x20),0x467,0,iVar2);
      if (LVar3 != 0) {
        *(int *)(in_ECX + 0x98) = *(int *)(in_ECX + 0x98) + 1;
        return;
      }
      FID_conflict__IsolationAwareFindTextA_4(iVar2);
    }
  }
LAB_100622a6:
                    /* WARNING: Subroutine does not return */
  FUN_10048884();
}

