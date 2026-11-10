// rea decompile_all
// name: FUN_1004dfd7
// address: 0x1004dfd7
// body: available
// range: 0x1004dfd7-0x1004e172 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004e16e to 0x1004e3b5 FUN_1004e3b5 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1004dfd7(int param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint local_14;
  uint local_8;
  
  if ((param_2 == 0) || (param_1 == 0)) {
    iVar2 = 0;
  }
  else {
    if ((*(byte *)(in_ECX + 0x18) & 1) == 0) {
      uVar4 = FUN_10034ad0();
                    /* WARNING: Subroutine does not return */
      FUN_1004e3b5(4,uVar4);
    }
    uVar6 = *(int *)(in_ECX + 0x2c) - *(int *)(in_ECX + 0x28);
    if (param_2 < uVar6) {
      uVar6 = param_2;
    }
    FUN_100345e0(param_1,param_2,*(undefined4 *)(in_ECX + 0x28),uVar6);
    *(int *)(in_ECX + 0x28) = *(int *)(in_ECX + 0x28) + uVar6;
    param_1 = param_1 + uVar6;
    uVar6 = param_2 - uVar6;
    if (uVar6 != 0) {
      iVar5 = uVar6 - uVar6 % *(uint *)(in_ECX + 0x20);
      local_14 = 0;
      local_8 = 0;
      iVar2 = iVar5;
      do {
        pcVar1 = *(code **)(**(int **)(in_ECX + 0x24) + 0x38);
        guard_check_icall(param_1,iVar2);
        iVar3 = (*pcVar1)();
        param_1 = param_1 + iVar3;
        local_8 = local_8 + iVar3;
        iVar2 = iVar2 - iVar3;
        if (iVar3 == 0) break;
      } while (iVar2 != 0);
      uVar6 = uVar6 - local_8;
      if ((uVar6 != 0) && (local_8 == iVar5)) {
        if (*(int *)(in_ECX + 8) == 0) {
          local_8 = uVar6;
          if ((*(int *)(in_ECX + 0xc) == 0) &&
             (local_8 = *(uint *)(in_ECX + 0x20), *(uint *)(in_ECX + 0x20) < uVar6)) {
            local_8 = uVar6;
          }
          iVar2 = *(int *)(in_ECX + 0x30);
          do {
            pcVar1 = *(code **)(**(int **)(in_ECX + 0x24) + 0x38);
            guard_check_icall(iVar2,local_8);
            iVar5 = (*pcVar1)();
            iVar2 = iVar2 + iVar5;
            local_14 = local_14 + iVar5;
            local_8 = local_8 - iVar5;
            if ((iVar5 == 0) || (local_8 == 0)) break;
          } while (local_14 < uVar6);
          iVar2 = *(int *)(in_ECX + 0x30);
          *(uint *)(in_ECX + 0x2c) = iVar2 + local_14;
        }
        else {
          pcVar1 = *(code **)(**(int **)(in_ECX + 0x24) + 0x54);
          guard_check_icall(0,*(undefined4 *)(in_ECX + 0x20),(int *)(in_ECX + 0x30),
                            (int *)(in_ECX + 0x2c));
          (*pcVar1)();
          iVar2 = *(int *)(in_ECX + 0x30);
        }
        uVar7 = *(int *)(in_ECX + 0x2c) - iVar2;
        *(int *)(in_ECX + 0x28) = iVar2;
        if (uVar6 < uVar7) {
          uVar7 = uVar6;
        }
        FUN_100345e0(param_1,uVar6,iVar2,uVar7);
        *(int *)(in_ECX + 0x28) = *(int *)(in_ECX + 0x28) + uVar7;
        uVar6 = uVar6 - uVar7;
      }
    }
    iVar2 = param_2 - uVar6;
  }
  return iVar2;
}

