// rea decompile_all
// name: FUN_0054d606
// address: 0x54d606
// body: available
// range: 0x54d606-0x54d6d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x54d6cd to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0054d606(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  undefined4 local_14;
  
  uVar2 = FUN_004295fe();
  FUN_0040eb30(uVar2);
  if (*(int *)(in_ECX + 0x13c) == 0) {
    iVar3 = *(int *)(in_ECX + 0x148);
  }
  else {
    iVar3 = *(int *)(in_ECX + 0x138);
  }
  iVar4 = 0xf042 - (uint)(iVar3 != 1);
  iVar3 = FUN_00435fce(iVar4);
  if (iVar3 != 0) {
    iVar3 = FUN_004160f0(iVar3,iVar4);
    if (iVar3 != 0) {
      pcVar1 = *(code **)(*param_1 + 0xc);
      guard_check_icall(local_14);
      (*pcVar1)();
      if (((*(int *)(in_ECX + 0x13c) != 0) || (uVar2 = 1, *(int *)(in_ECX + 0x140) == 1)) ||
         ((*(ushort *)(*(int *)(**(int **)(in_ECX + 0x164) + 0xa8) + 0x1e) < 2 &&
          (*(uint *)(in_ECX + 0x148) < 2)))) {
        uVar2 = 0;
      }
      pcVar1 = *(code **)*param_1;
      guard_check_icall(uVar2);
      (*pcVar1)();
      FUN_0040efa0();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

