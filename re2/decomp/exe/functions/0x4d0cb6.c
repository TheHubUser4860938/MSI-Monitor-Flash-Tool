// rea decompile_all
// name: FUN_004d0cb6
// address: 0x4d0cb6
// body: available
// range: 0x4d0cb6-0x4d0dcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4d0dc2 to 0x429141 FUN_00429141 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4d0dc7 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d0cb6(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_8;
  
  FID_conflict__free(*(void **)(in_ECX + 0xa0));
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  iVar5 = 0;
  iVar6 = 0;
  if (0 < *(int *)(in_ECX + 0xbc)) {
    do {
      iVar3 = FUN_004d130f(iVar6);
      iVar5 = iVar5 + **(int **)(iVar3 + 0xa8);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(in_ECX + 0xbc));
  }
  piVar4 = (int *)FUN_0057b8a2(iVar5);
  if (piVar4 != (int *)0x0) {
    piVar1 = (int *)((int)piVar4 + iVar5);
    if (piVar1 < piVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    uVar2 = *(uint *)(in_ECX + 0x84);
    *(int **)(in_ECX + 0xa0) = piVar4;
    local_8 = 0;
    piVar7 = piVar4;
    if (0 < *(int *)(in_ECX + 0xbc)) {
      do {
        iVar5 = FUN_004d130f(local_8);
        if ((piVar7 < piVar4) || (piVar1 < piVar7)) goto LAB_004d0dc2;
        ATL::Checked::memmove_s
                  (piVar7,(int)piVar1 - (int)piVar7,*(uint **)(iVar5 + 0xa8),
                   **(uint **)(iVar5 + 0xa8));
        iVar6 = *(int *)(iVar5 + 0xb4);
        if (*(int *)(iVar6 + -0xc) != 0) {
          piVar7[1] = piVar7[1] | 0x1000;
          piVar7[10] = iVar6;
        }
        iVar5 = *(int *)(iVar5 + 0xb8);
        if (*(int *)(iVar5 + -0xc) != 0) {
          piVar7[1] = piVar7[1] | 0x2000;
          piVar7[0xb] = iVar5;
        }
        PreProcessPageTemplate(piVar7,uVar2 & 0x1000020);
        piVar7 = (int *)((int)piVar7 + *piVar7);
        local_8 = local_8 + 1;
      } while (local_8 < *(int *)(in_ECX + 0xbc));
    }
    *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(in_ECX + 0xbc);
    return;
  }
LAB_004d0dc2:
                    /* WARNING: Subroutine does not return */
  FUN_00429141();
}

