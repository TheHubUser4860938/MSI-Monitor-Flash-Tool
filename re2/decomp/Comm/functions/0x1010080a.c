// rea decompile_all
// name: FUN_1010080a
// address: 0x1010080a
// body: available
// range: 0x1010080a-0x10100946 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10100942 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1010080a(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  int in_ECX;
  int iVar5;
  
  if (-1 < param_1) {
    if (-1 < param_2) {
      *(int *)(in_ECX + 0x10) = param_2;
    }
    if (param_1 == 0) {
      FUN_101009a5(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
      FID_conflict__free(*(void **)(in_ECX + 4));
      *(undefined4 *)(in_ECX + 4) = 0;
      *(undefined4 *)(in_ECX + 0xc) = 0;
      *(undefined4 *)(in_ECX + 8) = 0;
    }
    else {
      iVar3 = *(int *)(in_ECX + 4);
      if (iVar3 == 0) {
        uVar2 = FUN_10011fb9(param_1 << 2);
        *(undefined4 *)(in_ECX + 4) = uVar2;
        FUN_10100948(uVar2,param_1);
        *(int *)(in_ECX + 0xc) = param_1;
      }
      else {
        iVar1 = *(int *)(in_ECX + 0xc);
        if (iVar1 < param_1) {
          iVar3 = *(int *)(in_ECX + 0x10);
          if ((*(int *)(in_ECX + 0x10) == 0) &&
             ((iVar5 = (int)((*(int *)(in_ECX + 8) >> 0x1f & 7U) + *(int *)(in_ECX + 8)) >> 3,
              iVar5 < 4 || ((iVar3 = 0x400, iVar5 < 0x401 && (iVar3 = iVar5, iVar5 < 4)))))) {
            iVar3 = 4;
          }
          iVar5 = iVar3 + iVar1;
          if (iVar3 + iVar1 <= param_1) {
            iVar5 = param_1;
          }
          if (iVar5 < iVar1) goto LAB_10100942;
          pvVar4 = (void *)FUN_10011fb9(iVar5 << 2);
          ATL::Checked::memmove_s
                    (pvVar4,iVar5 << 2,*(void **)(in_ECX + 4),*(int *)(in_ECX + 8) << 2);
          FUN_10100948((void *)((int)pvVar4 + *(int *)(in_ECX + 8) * 4),
                       param_1 - *(int *)(in_ECX + 8));
          FID_conflict__free(*(void **)(in_ECX + 4));
          *(void **)(in_ECX + 4) = pvVar4;
          *(int *)(in_ECX + 0xc) = iVar5;
        }
        else {
          iVar1 = *(int *)(in_ECX + 8);
          if (iVar1 < param_1) {
            FUN_10100948(iVar3 + iVar1 * 4,param_1 - iVar1);
          }
          else if (param_1 < iVar1) {
            FUN_101009a5(iVar3 + param_1 * 4,iVar1 - param_1);
          }
        }
      }
      *(int *)(in_ECX + 8) = param_1;
    }
    return;
  }
LAB_10100942:
                    /* WARNING: Subroutine does not return */
  FUN_10012a3f();
}

