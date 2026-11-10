// rea decompile_all
// name: FUN_00405b80
// address: 0x405b80
// body: available
// range: 0x405b80-0x405c3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x405bf8 to 0x405c67 FUN_00405c67 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x405c08 to 0x55c72e FUN_0055c72e (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x405c1a to 0x57663d FUN_0057663d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x405c28 to 0x405c67 FUN_00405c67 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x405c39 to 0x57663d FUN_0057663d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00405b80(uint param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *in_ECX;
  uint uVar6;
  void *_Memory;
  uint uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0059c090;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar7 = param_1 | 0xf;
  if (uVar7 != 0xffffffff) {
    uVar1 = in_ECX[5];
    uVar6 = uVar1 >> 1;
    param_1 = uVar7;
    if ((uVar7 / 3 < uVar6) && (param_1 = uVar6 + uVar1, -uVar6 - 2 < uVar1)) {
      param_1 = 0xfffffffe;
    }
  }
  uVar7 = param_1 + 1;
  local_8 = 0;
  if (uVar7 == 0) {
    FUN_00405c67();
    return;
  }
  if (0xfff < uVar7) {
    if (param_1 + 0x24 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_0055c72e();
    }
    iVar3 = FUN_00416408(param_1 + 0x24);
    if (iVar3 != 0) {
      *(int *)((iVar3 + 0x23U & 0xffffffe0) - 4) = iVar3;
      FUN_00405c67();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0057663d();
  }
  puVar4 = (uint *)FUN_00416408(uVar7);
  if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0057663d();
  }
  if (param_2 != 0) {
    puVar5 = in_ECX;
    if (0xf < in_ECX[5]) {
      puVar5 = (uint *)*in_ECX;
    }
    if (param_2 != 0) {
      FUN_005734b0(puVar4,puVar5,param_2);
    }
  }
  if (0xf < in_ECX[5]) {
    pvVar2 = (void *)*in_ECX;
    _Memory = pvVar2;
    if (0xfff < in_ECX[5] + 1) {
      if (((uint)pvVar2 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0057663d();
      }
      _Memory = *(void **)((int)pvVar2 - 4);
      if (pvVar2 <= _Memory) {
                    /* WARNING: Subroutine does not return */
        FUN_0057663d();
      }
      if ((uint)((int)pvVar2 - (int)_Memory) < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_0057663d();
      }
      if (0x23 < (uint)((int)pvVar2 - (int)_Memory)) {
                    /* WARNING: Subroutine does not return */
        FUN_0057663d();
      }
    }
    FID_conflict__free(_Memory);
  }
  in_ECX[5] = 0xf;
  in_ECX[4] = 0;
  puVar5 = in_ECX;
  if (0xf < in_ECX[5]) {
    puVar5 = (uint *)*in_ECX;
  }
  *(undefined1 *)puVar5 = 0;
  *in_ECX = (uint)puVar4;
  in_ECX[5] = param_1;
  in_ECX[4] = param_2;
  if (0xf < in_ECX[5]) {
    in_ECX = puVar4;
  }
  *(undefined1 *)((int)in_ECX + param_2) = 0;
  ExceptionList = local_10;
  return;
}

