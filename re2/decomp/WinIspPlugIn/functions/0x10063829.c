// rea decompile_all
// name: FUN_10063829
// address: 0x10063829
// body: available
// range: 0x10063829-0x10063971 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10063962 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1006396d to 0x1004a39d FUN_1004a39d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10063829(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  LRESULT LVar4;
  int in_ECX;
  int *piVar5;
  void *pvVar6;
  int local_c;
  uint local_8;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004a383();
  }
  FUN_1016326a(*(undefined4 *)(in_ECX + 0xbc),param_1);
  if (*(int *)(in_ECX + 0x20) == 0) {
    return;
  }
  local_8 = 0;
  piVar5 = *(int **)(in_ECX + 0xa0);
  local_c = 0;
  iVar3 = 0;
  if (*(int *)(in_ECX + 0x98) != 0) {
    do {
      iVar1 = *piVar5;
      local_c = iVar1 + iVar3;
      if ((local_c < iVar3) || (local_c < iVar1)) goto LAB_1006396d;
      piVar5 = (int *)((int)piVar5 + iVar1);
      local_8 = local_8 + 1;
      iVar3 = local_c;
    } while (local_8 < *(uint *)(in_ECX + 0x98));
  }
  uVar2 = **(uint **)(param_1 + 0xa8);
  iVar3 = uVar2 + local_c;
  if (((local_c <= iVar3) && ((int)uVar2 <= iVar3)) &&
     (iVar3 = FUN_101a257b(*(undefined4 *)(in_ECX + 0xa0),iVar3), iVar3 != 0)) {
    *(int *)(in_ECX + 0xa0) = iVar3;
    pvVar6 = (void *)(iVar3 + local_c);
    ATL::Checked::memmove_s(pvVar6,uVar2,*(uint **)(param_1 + 0xa8),**(uint **)(param_1 + 0xa8));
    PreProcessPageTemplate(pvVar6,(*(uint *)(in_ECX + 0x84) & 0x1000020) != 0);
    iVar3 = *(int *)(param_1 + 0xb4);
    if (*(int *)(iVar3 + -0xc) != 0) {
      *(uint *)((int)pvVar6 + 4) = *(uint *)((int)pvVar6 + 4) | 0x1000;
      *(int *)((int)pvVar6 + 0x28) = iVar3;
    }
    iVar3 = *(int *)(param_1 + 0xb8);
    if (*(int *)(iVar3 + -0xc) != 0) {
      *(uint *)((int)pvVar6 + 4) = *(uint *)((int)pvVar6 + 4) | 0x2000;
      *(int *)((int)pvVar6 + 0x2c) = iVar3;
    }
    iVar3 = FID_conflict__IsolationAwareCreatePropertySheetPageW_4(pvVar6);
    if (iVar3 != 0) {
      LVar4 = SendMessageW(*(HWND *)(in_ECX + 0x20),0x467,0,iVar3);
      if (LVar4 != 0) {
        *(int *)(in_ECX + 0x98) = *(int *)(in_ECX + 0x98) + 1;
        return;
      }
      FID_conflict__IsolationAwareFindTextA_4(iVar3);
    }
  }
LAB_1006396d:
                    /* WARNING: Subroutine does not return */
  FUN_1004a39d();
}

