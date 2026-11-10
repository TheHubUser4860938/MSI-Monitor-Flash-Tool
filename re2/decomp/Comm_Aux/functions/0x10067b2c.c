// rea decompile_all
// name: FUN_10067b2c
// address: 0x10067b2c
// body: available
// range: 0x10067b2c-0x10067c40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10067c3c to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10067b2c(size_t param_1,int param_2)

{
  void *_Dst;
  int iVar1;
  size_t sVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  
  if (-1 < (int)param_1) {
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
        _Dst = (void *)FUN_10047ef0(param_1);
        *(void **)(in_ECX + 4) = _Dst;
        _memset(_Dst,0,param_1);
        *(size_t *)(in_ECX + 0xc) = param_1;
      }
      else {
        iVar3 = *(int *)(in_ECX + 0xc);
        if (iVar3 < (int)param_1) {
          iVar1 = *(int *)(in_ECX + 0x10);
          if ((*(int *)(in_ECX + 0x10) == 0) &&
             ((iVar4 = (int)((*(int *)(in_ECX + 8) >> 0x1f & 7U) + *(int *)(in_ECX + 8)) >> 3,
              iVar4 < 4 || ((iVar1 = 0x400, iVar4 < 0x401 && (iVar1 = iVar4, iVar4 < 4)))))) {
            iVar1 = 4;
          }
          sVar2 = iVar1 + iVar3;
          if (iVar1 + iVar3 <= (int)param_1) {
            sVar2 = param_1;
          }
          if ((int)sVar2 < iVar3) goto LAB_10067c3c;
          iVar3 = FUN_10047ef0(sVar2);
          FUN_100345e0(iVar3,sVar2,*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
          _memset((void *)(*(int *)(in_ECX + 8) + iVar3),0,param_1 - *(int *)(in_ECX + 8));
          FID_conflict__free(*(void **)(in_ECX + 4));
          *(int *)(in_ECX + 4) = iVar3;
          *(size_t *)(in_ECX + 0xc) = sVar2;
        }
        else {
          iVar3 = *(int *)(in_ECX + 8);
          if (iVar3 < (int)param_1) {
            _memset((void *)(iVar3 + *(int *)(in_ECX + 4)),0,param_1 - iVar3);
          }
        }
      }
      *(size_t *)(in_ECX + 8) = param_1;
    }
    return;
  }
LAB_10067c3c:
                    /* WARNING: Subroutine does not return */
  FUN_1004886a();
}

