// rea decompile_all
// name: FUN_1012f812
// address: 0x1012f812
// body: available
// range: 0x1012f812-0x1012fa49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1012fa45 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1012f812(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  undefined4 *puVar4;
  int iVar5;
  int local_8;
  
  if (param_1 < 0) {
LAB_1012fa45:
                    /* WARNING: Subroutine does not return */
    FUN_10012a3f();
  }
  if (-1 < param_2) {
    *(int *)(in_ECX + 0x10) = param_2;
  }
  if (param_1 == 0) {
    if (*(int *)(in_ECX + 4) != 0) {
      iVar5 = 0;
      if (0 < *(int *)(in_ECX + 8)) {
        local_8 = 0;
        do {
          CVariantBoolPair::_scalar_deleting_destructor_
                    ((CVariantBoolPair *)(*(int *)(in_ECX + 4) + local_8),0);
          iVar5 = iVar5 + 1;
          local_8 = local_8 + 0xc;
        } while (iVar5 < *(int *)(in_ECX + 8));
      }
      FID_conflict__free(*(void **)(in_ECX + 4));
      *(undefined4 *)(in_ECX + 4) = 0;
    }
    *(undefined4 *)(in_ECX + 0xc) = 0;
    *(undefined4 *)(in_ECX + 8) = 0;
    return;
  }
  if (*(int *)(in_ECX + 4) == 0) {
    iVar3 = *(int *)(in_ECX + 0x10);
    if (*(int *)(in_ECX + 0x10) < param_1) {
      iVar3 = param_1;
    }
    pvVar1 = (void *)FUN_10011fb9(iVar3 * 0xc);
    *(void **)(in_ECX + 4) = pvVar1;
    _memset(pvVar1,0,iVar3 * 0xc);
    iVar5 = 0;
    if (0 < param_1) {
      do {
        puVar4 = (undefined4 *)(iVar5 * 0xc + *(int *)(in_ECX + 4));
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0;
          puVar4[1] = 0;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_1);
    }
  }
  else {
    iVar5 = *(int *)(in_ECX + 0xc);
    if (param_1 <= iVar5) {
      iVar5 = *(int *)(in_ECX + 8);
      if (iVar5 < param_1) {
        _memset((void *)(iVar5 * 0xc + *(int *)(in_ECX + 4)),0,(param_1 - iVar5) * 0xc);
        iVar5 = 0;
        if (param_1 != *(int *)(in_ECX + 8) && -1 < param_1 - *(int *)(in_ECX + 8)) {
          do {
            puVar4 = (undefined4 *)((*(int *)(in_ECX + 8) + iVar5) * 0xc + *(int *)(in_ECX + 4));
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = 0;
              puVar4[1] = 0;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < param_1 - *(int *)(in_ECX + 8));
        }
      }
      else if ((param_1 < iVar5) && (local_8 = 0, iVar5 != param_1 && -1 < iVar5 - param_1)) {
        iVar5 = param_1 * 0xc;
        do {
          CVariantBoolPair::_scalar_deleting_destructor_
                    ((CVariantBoolPair *)(*(int *)(in_ECX + 4) + iVar5),0);
          local_8 = local_8 + 1;
          iVar5 = iVar5 + 0xc;
        } while (local_8 < *(int *)(in_ECX + 8) - param_1);
      }
      goto LAB_1012fa39;
    }
    iVar2 = *(int *)(in_ECX + 0x10);
    if (iVar2 == 0) {
      iVar2 = (int)(*(int *)(in_ECX + 8) + (*(int *)(in_ECX + 8) >> 0x1f & 7U)) >> 3;
      if (iVar2 < 4) {
        iVar2 = 4;
      }
      else if (0x400 < iVar2) {
        iVar2 = 0x400;
      }
    }
    iVar3 = iVar2 + iVar5;
    if (iVar2 + iVar5 <= param_1) {
      iVar3 = param_1;
    }
    if (iVar3 < iVar5) goto LAB_1012fa45;
    pvVar1 = (void *)FUN_10011fb9(iVar3 * 0xc);
    ATL::Checked::memmove_s(pvVar1,iVar3 * 0xc,*(void **)(in_ECX + 4),*(int *)(in_ECX + 8) * 0xc);
    _memset((void *)(*(int *)(in_ECX + 8) * 0xc + (int)pvVar1),0,
            (param_1 - *(int *)(in_ECX + 8)) * 0xc);
    iVar5 = 0;
    if (param_1 != *(int *)(in_ECX + 8) && -1 < param_1 - *(int *)(in_ECX + 8)) {
      do {
        puVar4 = (undefined4 *)((*(int *)(in_ECX + 8) + iVar5) * 0xc + (int)pvVar1);
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0;
          puVar4[1] = 0;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_1 - *(int *)(in_ECX + 8));
    }
    FID_conflict__free(*(void **)(in_ECX + 4));
    *(void **)(in_ECX + 4) = pvVar1;
  }
  *(int *)(in_ECX + 0xc) = iVar3;
LAB_1012fa39:
  *(int *)(in_ECX + 8) = param_1;
  return;
}

