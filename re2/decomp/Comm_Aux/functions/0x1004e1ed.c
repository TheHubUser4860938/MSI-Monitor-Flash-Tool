// rea decompile_all
// name: FUN_1004e1ed
// address: 0x1004e1ed
// body: available
// range: 0x1004e1ed-0x1004e2ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004e2f6 to 0x1004e3b5 FUN_1004e3b5 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1004e2fb to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004e1ed(int param_1,uint param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  CArchive *in_ECX;
  uint uVar4;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    if ((~*(uint *)(in_ECX + 0x18) & 1) == 0) {
      uVar3 = FUN_10034ad0();
                    /* WARNING: Subroutine does not return */
      FUN_1004e3b5(2,uVar3);
    }
    uVar2 = *(int *)(in_ECX + 0x2c) - *(int *)(in_ECX + 0x28);
    uVar4 = uVar2;
    if (param_2 < uVar2) {
      uVar4 = param_2;
    }
    FUN_100345e0(*(undefined4 *)(in_ECX + 0x28),uVar2,param_1,uVar4);
    *(uint *)(in_ECX + 0x28) = *(int *)(in_ECX + 0x28) + uVar4;
    param_2 = param_2 - uVar4;
    if (param_2 != 0) {
      CArchive::Flush(in_ECX);
      uVar2 = param_2 % *(uint *)(in_ECX + 0x20);
      pcVar1 = *(code **)(**(int **)(in_ECX + 0x24) + 0x3c);
      guard_check_icall(param_1 + uVar4,param_2 - uVar2);
      (*pcVar1)();
      if (*(int *)(in_ECX + 8) != 0) {
        pcVar1 = *(code **)(**(int **)(in_ECX + 0x24) + 0x54);
        guard_check_icall(1,*(undefined4 *)(in_ECX + 0x20),in_ECX + 0x30,in_ECX + 0x2c);
        (*pcVar1)();
        *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(in_ECX + 0x30);
      }
      if ((*(uint *)(in_ECX + 0x20) <= uVar2) ||
         (*(int *)(in_ECX + 0x28) != *(int *)(in_ECX + 0x30))) {
                    /* WARNING: Subroutine does not return */
        FUN_1004886a();
      }
      FUN_100345e0(*(int *)(in_ECX + 0x28),uVar2,param_1 + uVar4 + (param_2 - uVar2),uVar2);
      *(uint *)(in_ECX + 0x28) = *(int *)(in_ECX + 0x28) + uVar2;
    }
  }
  return;
}

