// rea decompile_all
// name: FUN_0050649e
// address: 0x50649e
// body: available
// range: 0x50649e-0x5065c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5065bf to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * FUN_0050649e(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x5064aa;
  iVar2 = *(int *)(param_2 + 0x1c8);
  uVar1 = FUN_004295fe();
  FUN_0040eb30(uVar1);
  local_8 = 0;
  if (iVar2 == -3) {
    iVar2 = FUN_00435fce(0x42d3);
    if ((iVar2 == 0) || (iVar2 = FUN_004160f0(iVar2,0x42d3), iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
  }
  else {
    if (1 < iVar2 + 2U) {
      if ((iVar2 < 0) || (*(int *)(in_ECX + 800) <= iVar2)) {
        FUN_00415a10(&PTR_005e8934);
        FUN_0040efa0();
        return param_1;
      }
      piVar3 = (int *)FUN_004ab4cd(iVar2);
      iVar2 = FUN_00415ee0(*piVar3 + -0x10);
      goto LAB_0050653e;
    }
    iVar2 = *(int *)(in_ECX + 0x338);
    if (iVar2 == 1) {
      FUN_00452eeb(local_14,0x42d4,*(int *)(in_ECX + 0x33c) + 1,*(int *)(in_ECX + 0x340) + 1);
    }
    else {
      FUN_00452eeb(local_14,0x42d5,*(int *)(in_ECX + 0x33c) + 1,*(int *)(in_ECX + 0x33c) + iVar2,
                   *(int *)(in_ECX + 0x340) + iVar2);
    }
  }
  iVar2 = FUN_00415ee0(local_14[0] + -0x10);
LAB_0050653e:
  *param_1 = iVar2 + 0x10;
  FUN_0040efa0();
  return param_1;
}

