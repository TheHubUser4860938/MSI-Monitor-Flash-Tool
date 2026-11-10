// rea decompile_all
// name: FUN_100da4cf
// address: 0x100da4cf
// body: available
// range: 0x100da4cf-0x100da686 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100da682 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100da4cf(int param_1,int param_2)

{
  undefined4 *puVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  
  if (param_1 < 0) {
LAB_100da682:
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
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
    iVar3 = *(int *)(in_ECX + 0x10);
    if (*(int *)(in_ECX + 0x10) < param_1) {
      iVar3 = param_1;
    }
    _Dst = (void *)FUN_10047ef0(iVar3 << 3);
    *(void **)(in_ECX + 4) = _Dst;
    _memset(_Dst,0,iVar3 << 3);
    iVar4 = 0;
    if (0 < param_1) {
      do {
        puVar1 = (undefined4 *)(*(int *)(in_ECX + 4) + iVar4 * 8);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_1);
    }
  }
  else {
    iVar4 = *(int *)(in_ECX + 0xc);
    if (param_1 <= iVar4) {
      iVar4 = *(int *)(in_ECX + 8);
      if (iVar4 < param_1) {
        _memset((void *)(*(int *)(in_ECX + 4) + iVar4 * 8),0,(param_1 - iVar4) * 8);
        iVar4 = 0;
        if (param_1 != *(int *)(in_ECX + 8) && -1 < param_1 - *(int *)(in_ECX + 8)) {
          do {
            puVar1 = (undefined4 *)(*(int *)(in_ECX + 4) + (*(int *)(in_ECX + 8) + iVar4) * 8);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = 0;
              puVar1[1] = 0;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < param_1 - *(int *)(in_ECX + 8));
        }
      }
      goto LAB_100da676;
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
    iVar3 = iVar2 + iVar4;
    if (iVar2 + iVar4 <= param_1) {
      iVar3 = param_1;
    }
    if (iVar3 < iVar4) goto LAB_100da682;
    iVar4 = FUN_10047ef0(iVar3 << 3);
    FUN_100345e0(iVar4,iVar3 << 3,*(undefined4 *)(in_ECX + 4),*(int *)(in_ECX + 8) << 3);
    _memset((void *)(iVar4 + *(int *)(in_ECX + 8) * 8),0,(param_1 - *(int *)(in_ECX + 8)) * 8);
    iVar2 = 0;
    if (param_1 != *(int *)(in_ECX + 8) && -1 < param_1 - *(int *)(in_ECX + 8)) {
      do {
        puVar1 = (undefined4 *)(iVar4 + (*(int *)(in_ECX + 8) + iVar2) * 8);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_1 - *(int *)(in_ECX + 8));
    }
    FID_conflict__free(*(void **)(in_ECX + 4));
    *(int *)(in_ECX + 4) = iVar4;
  }
  *(int *)(in_ECX + 0xc) = iVar3;
LAB_100da676:
  *(int *)(in_ECX + 8) = param_1;
  return;
}

