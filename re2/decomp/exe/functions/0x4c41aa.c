// rea decompile_all
// name: FUN_004c41aa
// address: 0x4c41aa
// body: available
// range: 0x4c41aa-0x4c4361 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4c435d to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c41aa(int param_1,int param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  
  if (param_1 < 0) {
LAB_004c435d:
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  if (-1 < param_2) {
    *(int *)(in_ECX + 0x10) = param_2;
  }
  if (param_1 == 0) {
    if (*(int *)(in_ECX + 4) != 0) {
      FID_conflict__free(*(void **)(in_ECX + 4));
      *(undefined4 *)(in_ECX + 4) = 0;
    }
    *(undefined4 *)(in_ECX + 0xc) = 0;
    *(undefined4 *)(in_ECX + 8) = 0;
    return;
  }
  if (*(int *)(in_ECX + 4) == 0) {
    iVar4 = *(int *)(in_ECX + 0x10);
    if (*(int *)(in_ECX + 0x10) < param_1) {
      iVar4 = param_1;
    }
    pvVar2 = (void *)FUN_00416444(iVar4 << 3);
    *(void **)(in_ECX + 4) = pvVar2;
    _memset(pvVar2,0,iVar4 << 3);
    iVar5 = 0;
    if (0 < param_1) {
      do {
        puVar1 = (undefined4 *)(*(int *)(in_ECX + 4) + iVar5 * 8);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
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
        _memset((void *)(*(int *)(in_ECX + 4) + iVar5 * 8),0,(param_1 - iVar5) * 8);
        iVar5 = 0;
        if (param_1 != *(int *)(in_ECX + 8) && -1 < param_1 - *(int *)(in_ECX + 8)) {
          do {
            puVar1 = (undefined4 *)(*(int *)(in_ECX + 4) + (*(int *)(in_ECX + 8) + iVar5) * 8);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = 0;
              puVar1[1] = 0;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < param_1 - *(int *)(in_ECX + 8));
        }
      }
      goto LAB_004c4351;
    }
    iVar3 = *(int *)(in_ECX + 0x10);
    if (iVar3 == 0) {
      iVar3 = (int)(*(int *)(in_ECX + 8) + (*(int *)(in_ECX + 8) >> 0x1f & 7U)) >> 3;
      if (iVar3 < 4) {
        iVar3 = 4;
      }
      else if (0x400 < iVar3) {
        iVar3 = 0x400;
      }
    }
    iVar4 = iVar3 + iVar5;
    if (iVar3 + iVar5 <= param_1) {
      iVar4 = param_1;
    }
    if (iVar4 < iVar5) goto LAB_004c435d;
    pvVar2 = (void *)FUN_00416444(iVar4 << 3);
    ATL::Checked::memmove_s(pvVar2,iVar4 << 3,*(void **)(in_ECX + 4),*(int *)(in_ECX + 8) << 3);
    _memset((void *)((int)pvVar2 + *(int *)(in_ECX + 8) * 8),0,(param_1 - *(int *)(in_ECX + 8)) * 8)
    ;
    iVar5 = 0;
    if (param_1 != *(int *)(in_ECX + 8) && -1 < param_1 - *(int *)(in_ECX + 8)) {
      do {
        puVar1 = (undefined4 *)((int)pvVar2 + (*(int *)(in_ECX + 8) + iVar5) * 8);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_1 - *(int *)(in_ECX + 8));
    }
    FID_conflict__free(*(void **)(in_ECX + 4));
    *(void **)(in_ECX + 4) = pvVar2;
  }
  *(int *)(in_ECX + 0xc) = iVar4;
LAB_004c4351:
  *(int *)(in_ECX + 8) = param_1;
  return;
}

