// rea decompile_all
// name: FUN_1017250c
// address: 0x1017250c
// body: available
// range: 0x1017250c-0x10172648 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10172644 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1017250c(int param_1,int param_2)

{
  void *_Dst;
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  if (-1 < param_1) {
    if (-1 < param_2) {
      *(int *)(in_ECX + 0x10) = param_2;
    }
    if (param_1 == 0) {
      param_1 = 0;
      if (*(int *)(in_ECX + 4) != 0) {
        FID_conflict__free(*(void **)(in_ECX + 4));
        *(undefined4 *)(in_ECX + 4) = 0;
      }
      *(undefined4 *)(in_ECX + 0xc) = 0;
    }
    else {
      if (*(int *)(in_ECX + 4) == 0) {
        iVar3 = *(int *)(in_ECX + 0x10);
        if (*(int *)(in_ECX + 0x10) < param_1) {
          iVar3 = param_1;
        }
        _Dst = (void *)FUN_10047ef0(iVar3 << 2);
        *(void **)(in_ECX + 4) = _Dst;
        _memset(_Dst,0,iVar3 << 2);
        *(int *)(in_ECX + 8) = param_1;
        *(int *)(in_ECX + 0xc) = iVar3;
        return;
      }
      iVar3 = *(int *)(in_ECX + 0xc);
      if (param_1 <= iVar3) {
        iVar3 = *(int *)(in_ECX + 8);
        if (iVar3 < param_1) {
          _memset((void *)(*(int *)(in_ECX + 4) + iVar3 * 4),0,(param_1 - iVar3) * 4);
        }
        *(int *)(in_ECX + 8) = param_1;
        return;
      }
      iVar1 = *(int *)(in_ECX + 0x10);
      if (iVar1 == 0) {
        iVar1 = (int)(*(int *)(in_ECX + 8) + (*(int *)(in_ECX + 8) >> 0x1f & 7U)) >> 3;
        if (iVar1 < 4) {
          iVar1 = 4;
        }
        else if (0x400 < iVar1) {
          iVar1 = 0x400;
        }
      }
      iVar2 = iVar1 + iVar3;
      if (iVar1 + iVar3 <= param_1) {
        iVar2 = param_1;
      }
      if (iVar2 < iVar3) goto LAB_10172644;
      iVar3 = FUN_10047ef0(iVar2 << 2);
      FUN_100345e0(iVar3,iVar2 << 2,*(undefined4 *)(in_ECX + 4),*(int *)(in_ECX + 8) << 2);
      _memset((void *)(iVar3 + *(int *)(in_ECX + 8) * 4),0,(param_1 - *(int *)(in_ECX + 8)) * 4);
      FID_conflict__free(*(void **)(in_ECX + 4));
      *(int *)(in_ECX + 4) = iVar3;
      *(int *)(in_ECX + 0xc) = iVar2;
    }
    *(int *)(in_ECX + 8) = param_1;
    return;
  }
LAB_10172644:
                    /* WARNING: Subroutine does not return */
  FUN_1004886a();
}

