// rea decompile_all
// name: FUN_1002c650
// address: 0x1002c650
// body: available
// range: 0x1002c650-0x1002c764 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002c751 to 0x10180c1c FUN_10180c1c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1002c756 to 0x10180c1c FUN_10180c1c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1002c75b to 0x1019ab71 FUN_1019ab71 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1002c760 to 0x1019ab71 FUN_1019ab71 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c650(uint param_1)

{
  uint uVar1;
  uint *in_ECX;
  uint *puVar2;
  int iVar3;
  uint *extraout_ECX;
  uint *extraout_ECX_00;
  uint uVar4;
  uint uVar5;
  uint local_8;
  
  if (param_1 == 0) {
    uVar5 = 0;
    puVar2 = in_ECX;
  }
  else {
    if (0x15555555 < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_10180c1c();
    }
    uVar5 = param_1 * 0xc;
    if (uVar5 < 0x1000) {
      uVar5 = FUN_100491ae(uVar5);
      puVar2 = extraout_ECX_00;
      if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1019ab71();
      }
    }
    else {
      if (uVar5 + 0x23 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_10180c1c();
      }
      iVar3 = FUN_100491ae(uVar5 + 0x23);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1019ab71();
      }
      uVar5 = iVar3 + 0x23U & 0xffffffe0;
      *(int *)(uVar5 - 4) = iVar3;
      puVar2 = extraout_ECX;
    }
  }
  local_8 = local_8 & 0xffffff00;
  FUN_1002d670(uVar5,puVar2,local_8,puVar2);
  uVar1 = in_ECX[1];
  uVar4 = *in_ECX;
  iVar3 = uVar1 - uVar4;
  if (uVar4 != 0) {
    for (; uVar4 != uVar1; uVar4 = uVar4 + 0xc) {
      FUN_1002c3c0();
    }
    FUN_1002c4f0(*in_ECX,(int)(in_ECX[2] - *in_ECX) / 0xc);
  }
  in_ECX[2] = uVar5 + param_1 * 0xc;
  in_ECX[1] = uVar5 + (iVar3 / 0xc) * 0xc;
  *in_ECX = uVar5;
  return;
}

