// rea decompile_all
// name: FUN_10051770
// address: 0x10051770
// body: available
// range: 0x10051770-0x1005190b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10051907 to 0x10050dca FUN_10050dca (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10051770(void *param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint local_14;
  uint local_8;
  
  if ((param_2 == 0) || (param_1 == (void *)0x0)) {
    iVar2 = 0;
  }
  else {
    if ((*(byte *)(in_ECX + 0x18) & 1) == 0) {
      uVar4 = FUN_10046f30();
                    /* WARNING: Subroutine does not return */
      FUN_10050dca(4,uVar4);
    }
    uVar7 = *(int *)(in_ECX + 0x2c) - *(int *)(in_ECX + 0x28);
    if (param_2 < uVar7) {
      uVar7 = param_2;
    }
    ATL::Checked::memmove_s(param_1,param_2,*(void **)(in_ECX + 0x28),uVar7);
    *(int *)(in_ECX + 0x28) = *(int *)(in_ECX + 0x28) + uVar7;
    param_1 = (void *)((int)param_1 + uVar7);
    uVar7 = param_2 - uVar7;
    if (uVar7 != 0) {
      iVar6 = uVar7 - uVar7 % *(uint *)(in_ECX + 0x20);
      local_14 = 0;
      local_8 = 0;
      iVar2 = iVar6;
      do {
        pcVar1 = *(code **)(**(int **)(in_ECX + 0x24) + 0x38);
        guard_check_icall(param_1,iVar2);
        iVar3 = (*pcVar1)();
        param_1 = (void *)((int)param_1 + iVar3);
        local_8 = local_8 + iVar3;
        iVar2 = iVar2 - iVar3;
        if (iVar3 == 0) break;
      } while (iVar2 != 0);
      uVar7 = uVar7 - local_8;
      if ((uVar7 != 0) && (local_8 == iVar6)) {
        if (*(int *)(in_ECX + 8) == 0) {
          local_8 = uVar7;
          if ((*(int *)(in_ECX + 0xc) == 0) &&
             (local_8 = *(uint *)(in_ECX + 0x20), *(uint *)(in_ECX + 0x20) < uVar7)) {
            local_8 = uVar7;
          }
          iVar2 = *(int *)(in_ECX + 0x30);
          do {
            pcVar1 = *(code **)(**(int **)(in_ECX + 0x24) + 0x38);
            guard_check_icall(iVar2,local_8);
            iVar6 = (*pcVar1)();
            iVar2 = iVar2 + iVar6;
            local_14 = local_14 + iVar6;
            local_8 = local_8 - iVar6;
            if ((iVar6 == 0) || (local_8 == 0)) break;
          } while (local_14 < uVar7);
          pvVar5 = *(void **)(in_ECX + 0x30);
          *(uint *)(in_ECX + 0x2c) = (int)pvVar5 + local_14;
        }
        else {
          pcVar1 = *(code **)(**(int **)(in_ECX + 0x24) + 0x54);
          guard_check_icall(0,*(undefined4 *)(in_ECX + 0x20),(undefined4 *)(in_ECX + 0x30),
                            (int *)(in_ECX + 0x2c));
          (*pcVar1)();
          pvVar5 = *(void **)(in_ECX + 0x30);
        }
        uVar8 = *(int *)(in_ECX + 0x2c) - (int)pvVar5;
        *(void **)(in_ECX + 0x28) = pvVar5;
        if (uVar7 < uVar8) {
          uVar8 = uVar7;
        }
        ATL::Checked::memmove_s(param_1,uVar7,pvVar5,uVar8);
        *(int *)(in_ECX + 0x28) = *(int *)(in_ECX + 0x28) + uVar8;
        uVar7 = uVar7 - uVar8;
      }
    }
    iVar2 = param_2 - uVar7;
  }
  return iVar2;
}

