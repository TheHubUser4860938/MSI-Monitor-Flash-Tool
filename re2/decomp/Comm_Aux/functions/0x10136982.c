// rea decompile_all
// name: FUN_10136982
// address: 0x10136982
// body: available
// range: 0x10136982-0x10136abe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10136aba to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10136982(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  
  if (-1 < param_1) {
    if (-1 < param_2) {
      *(int *)(in_ECX + 0x10) = param_2;
    }
    if (param_1 == 0) {
      FUN_10136b1d(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
      FID_conflict__free(*(void **)(in_ECX + 4));
      *(undefined4 *)(in_ECX + 4) = 0;
      *(undefined4 *)(in_ECX + 0xc) = 0;
      *(undefined4 *)(in_ECX + 8) = 0;
    }
    else {
      iVar3 = *(int *)(in_ECX + 4);
      if (iVar3 == 0) {
        uVar2 = FUN_10047ef0(param_1 << 2);
        *(undefined4 *)(in_ECX + 4) = uVar2;
        FUN_10136ac0(uVar2,param_1);
        *(int *)(in_ECX + 0xc) = param_1;
      }
      else {
        iVar1 = *(int *)(in_ECX + 0xc);
        if (iVar1 < param_1) {
          iVar3 = *(int *)(in_ECX + 0x10);
          if ((*(int *)(in_ECX + 0x10) == 0) &&
             ((iVar4 = (int)((*(int *)(in_ECX + 8) >> 0x1f & 7U) + *(int *)(in_ECX + 8)) >> 3,
              iVar4 < 4 || ((iVar3 = 0x400, iVar4 < 0x401 && (iVar3 = iVar4, iVar4 < 4)))))) {
            iVar3 = 4;
          }
          iVar4 = iVar3 + iVar1;
          if (iVar3 + iVar1 <= param_1) {
            iVar4 = param_1;
          }
          if (iVar4 < iVar1) goto LAB_10136aba;
          iVar3 = FUN_10047ef0(iVar4 << 2);
          FUN_100345e0(iVar3,iVar4 << 2,*(undefined4 *)(in_ECX + 4),*(int *)(in_ECX + 8) << 2);
          FUN_10136ac0(iVar3 + *(int *)(in_ECX + 8) * 4,param_1 - *(int *)(in_ECX + 8));
          FID_conflict__free(*(void **)(in_ECX + 4));
          *(int *)(in_ECX + 4) = iVar3;
          *(int *)(in_ECX + 0xc) = iVar4;
        }
        else {
          iVar1 = *(int *)(in_ECX + 8);
          if (iVar1 < param_1) {
            FUN_10136ac0(iVar3 + iVar1 * 4,param_1 - iVar1);
          }
          else if (param_1 < iVar1) {
            FUN_10136b1d(iVar3 + param_1 * 4,iVar1 - param_1);
          }
        }
      }
      *(int *)(in_ECX + 8) = param_1;
    }
    return;
  }
LAB_10136aba:
                    /* WARNING: Subroutine does not return */
  FUN_1004886a();
}

