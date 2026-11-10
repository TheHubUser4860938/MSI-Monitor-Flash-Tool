// rea decompile_all
// name: FUN_100de59a
// address: 0x100de59a
// body: available
// range: 0x100de59a-0x100de6bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100de6b7 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100de59a(undefined4 param_1,int *param_2)

{
  int iVar1;
  __POSITION *p_Var2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  undefined4 uVar5;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_1020fd14) &&
     (FUN_1017f1aa(&DAT_1020fd14), DAT_1020fd14 == -1)) {
    uVar5 = FUN_10048e90();
    FUN_10034c30(uVar5);
    _atexit((_func_4879 *)&LAB_101aed1e);
    FUN_1017f16b(&DAT_1020fd14);
  }
  if (param_2 == (int *)0x0) {
LAB_100de6b7:
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  iVar4 = *(int *)(in_ECX + 0x124);
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x20) != 0)) {
    iVar1 = 0;
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 0x20);
    }
    if (((((*param_2 == iVar1) && (DAT_1020f8f4 == 0)) && (iVar4 = param_2[1], iVar4 != 0)) &&
        ((iVar4 <= *(int *)(in_ECX + 0x114) &&
         (p_Var2 = CObList::FindIndex((CObList *)(in_ECX + 0x108),iVar4 + -1),
         p_Var2 != (__POSITION *)0x0)))) && (uVar3 = FUN_1014d4d1(), 7 < uVar3)) {
      if (uVar3 < 10) {
        uVar5 = 0x3ea1;
      }
      else if (uVar3 == 0x14) {
        uVar5 = 0x3ee9;
      }
      else {
        if (uVar3 != 0x19) {
          return 0;
        }
        uVar5 = 0x4279;
      }
      iVar4 = FUN_10048ace(uVar5);
      if ((iVar4 != 0) && (iVar4 = FUN_10034d90(iVar4,uVar5), iVar4 != 0)) {
        param_2[3] = DAT_1020fd10;
        return 1;
      }
      goto LAB_100de6b7;
    }
  }
  return 0;
}

