// rea decompile_all
// name: FUN_1016329d
// address: 0x1016329d
// body: available
// range: 0x1016329d-0x101633c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101633c1 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1016329d(int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  
  if (param_1 < 0) {
LAB_101633c1:
                    /* WARNING: Subroutine does not return */
    FUN_1004a383();
  }
  if (-1 < param_2) {
    *(int *)(in_ECX + 0x10) = param_2;
  }
  if (param_1 == 0) {
    FID_conflict__free(*(void **)(in_ECX + 4));
    *(undefined4 *)(in_ECX + 4) = 0;
    *(undefined4 *)(in_ECX + 0xc) = 0;
    *(undefined4 *)(in_ECX + 8) = 0;
  }
  else {
    if (*(int *)(in_ECX + 4) == 0) {
      pvVar2 = (void *)FUN_100491e5(param_1 << 2);
      *(void **)(in_ECX + 4) = pvVar2;
      _memset(pvVar2,0,param_1 << 2);
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
        if (iVar1 <= iVar4) {
          pvVar2 = (void *)FUN_100491e5(iVar4 << 2);
          ATL::Checked::memmove_s
                    (pvVar2,iVar4 << 2,*(void **)(in_ECX + 4),*(int *)(in_ECX + 8) << 2);
          _memset((void *)((int)pvVar2 + *(int *)(in_ECX + 8) * 4),0,
                  (param_1 - *(int *)(in_ECX + 8)) * 4);
          FID_conflict__free(*(void **)(in_ECX + 4));
          *(void **)(in_ECX + 4) = pvVar2;
          *(int *)(in_ECX + 8) = param_1;
          *(int *)(in_ECX + 0xc) = iVar4;
          return;
        }
        goto LAB_101633c1;
      }
      iVar1 = *(int *)(in_ECX + 8);
      if (iVar1 < param_1) {
        _memset((void *)(*(int *)(in_ECX + 4) + iVar1 * 4),0,(param_1 - iVar1) * 4);
      }
    }
    *(int *)(in_ECX + 8) = param_1;
  }
  return;
}

