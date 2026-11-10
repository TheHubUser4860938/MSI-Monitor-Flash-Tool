// rea decompile_all
// name: FUN_1002c770
// address: 0x1002c770
// body: available
// range: 0x1002c770-0x1002c843 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002c821 to 0x1019ab71 FUN_1019ab71 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1002c826 to 0x10180c1c FUN_10180c1c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1002c82b to 0x1019ab71 FUN_1019ab71 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1002c830 to 0x1019ab71 FUN_1019ab71 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1002c835 to 0x1019ab71 FUN_1019ab71 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1002c83a to 0x1019ab71 FUN_1019ab71 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1002c83f to 0x1019ab71 FUN_1019ab71 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c770(uint param_1)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  uint *in_ECX;
  void *_Memory;
  uint uVar4;
  
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else if (param_1 < 0x1000) {
    uVar4 = FUN_100491ae(param_1);
    if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1019ab71();
    }
  }
  else {
    if (param_1 + 0x23 <= param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_10180c1c();
    }
    iVar3 = FUN_100491ae(param_1 + 0x23);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1019ab71();
    }
    uVar4 = iVar3 + 0x23U & 0xffffffe0;
    *(int *)(uVar4 - 4) = iVar3;
  }
  FUN_101971c0(uVar4,*in_ECX,in_ECX[1] - *in_ECX);
  pvVar1 = (void *)*in_ECX;
  uVar2 = in_ECX[1];
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if (0xfff < in_ECX[2] - (int)pvVar1) {
      if (((uint)pvVar1 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1019ab71();
      }
      _Memory = *(void **)((int)pvVar1 - 4);
      if (pvVar1 <= _Memory) {
                    /* WARNING: Subroutine does not return */
        FUN_1019ab71();
      }
      if ((uint)((int)pvVar1 - (int)_Memory) < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_1019ab71();
      }
      if (0x23 < (uint)((int)pvVar1 - (int)_Memory)) {
                    /* WARNING: Subroutine does not return */
        FUN_1019ab71();
      }
    }
    FID_conflict__free(_Memory);
  }
  in_ECX[2] = uVar4 + param_1;
  in_ECX[1] = (uVar2 - (int)pvVar1) + uVar4;
  *in_ECX = uVar4;
  return;
}

