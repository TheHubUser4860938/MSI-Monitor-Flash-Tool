// rea decompile_all
// name: FUN_100460b0
// address: 0x100460b0
// body: available
// range: 0x100460b0-0x100461b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100461a3 to 0x10180c1c FUN_10180c1c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100461a8 to 0x10180c1c FUN_10180c1c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100461ad to 0x1019ab71 FUN_1019ab71 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100461b2 to 0x1019ab71 FUN_1019ab71 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100460b0(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint *in_ECX;
  uint *puVar3;
  uint *extraout_ECX;
  uint *extraout_ECX_00;
  uint uVar4;
  
  uVar1 = param_1;
  if (param_1 == 0) {
    uVar4 = 0;
    puVar3 = in_ECX;
  }
  else {
    if (0xaaaaaaa < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_10180c1c();
    }
    uVar4 = param_1 * 0x18;
    if (uVar4 < 0x1000) {
      uVar4 = FUN_100491ae(uVar4);
      puVar3 = extraout_ECX_00;
      if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1019ab71();
      }
    }
    else {
      if (uVar4 + 0x23 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_10180c1c();
      }
      iVar2 = FUN_100491ae(uVar4 + 0x23);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1019ab71();
      }
      uVar4 = iVar2 + 0x23U & 0xffffffe0;
      *(int *)(uVar4 - 4) = iVar2;
      puVar3 = extraout_ECX;
    }
  }
  param_1 = param_1 & 0xffffff00;
  FUN_100466a0(uVar4,puVar3,param_1,puVar3);
  iVar2 = (int)(in_ECX[1] - *in_ECX) / 0x18;
  if (*in_ECX != 0) {
    FUN_10046650(iVar2,iVar2);
    FUN_1002c430(*in_ECX,(int)(in_ECX[2] - *in_ECX) / 0x18);
  }
  in_ECX[2] = uVar4 + uVar1 * 0x18;
  in_ECX[1] = uVar4 + iVar2 * 0x18;
  *in_ECX = uVar4;
  return;
}

