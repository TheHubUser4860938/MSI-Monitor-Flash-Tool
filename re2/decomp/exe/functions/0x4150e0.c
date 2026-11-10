// rea decompile_all
// name: FUN_004150e0
// address: 0x4150e0
// body: available
// range: 0x4150e0-0x415220 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4151ce to 0x55c72e FUN_0055c72e (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4151e4 to 0x55c72e FUN_0055c72e (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4151f6 to 0x57663d FUN_0057663d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41521c to 0x57663d FUN_0057663d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004150e0(uint param_1)

{
  undefined4 *puVar1;
  uint *in_ECX;
  uint *puVar2;
  int iVar3;
  uint *extraout_ECX;
  uint *extraout_ECX_00;
  undefined4 *puVar4;
  uint uVar5;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059d490;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 == 0) {
    uVar5 = 0;
    puVar2 = in_ECX;
  }
  else {
    if (0x4ec4ec4 < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_0055c72e();
    }
    uVar5 = param_1 * 0x34;
    if (uVar5 < 0x1000) {
      uVar5 = FUN_00416408(uVar5);
      puVar2 = extraout_ECX_00;
      if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0057663d();
      }
    }
    else {
      if (uVar5 + 0x23 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_0055c72e();
      }
      iVar3 = FUN_00416408(uVar5 + 0x23);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0057663d();
      }
      uVar5 = iVar3 + 0x23U & 0xffffffe0;
      *(int *)(uVar5 - 4) = iVar3;
      puVar2 = extraout_ECX;
    }
  }
  local_8 = 0;
  local_1c = local_1c & 0xffffff00;
  FUN_004152a0(uVar5,puVar2,local_1c,puVar2);
  puVar1 = (undefined4 *)in_ECX[1];
  puVar4 = (undefined4 *)*in_ECX;
  iVar3 = (int)puVar1 - (int)puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    for (; puVar4 != puVar1; puVar4 = puVar4 + 0xd) {
      (**(code **)*puVar4)(0);
    }
    FUN_00414e10(*in_ECX,(int)(in_ECX[2] - *in_ECX) / 0x34);
  }
  in_ECX[2] = param_1 * 0x34 + uVar5;
  in_ECX[1] = (iVar3 / 0x34) * 0x34 + uVar5;
  *in_ECX = uVar5;
  ExceptionList = local_10;
  return;
}

