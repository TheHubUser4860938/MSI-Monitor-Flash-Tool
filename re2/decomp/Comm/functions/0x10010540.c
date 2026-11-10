// rea decompile_all
// name: FUN_10010540
// address: 0x10010540
// body: available
// range: 0x10010540-0x100105fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100105b8 to 0x10010627 FUN_10010627 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100105da to 0x1014f4d6 FUN_1014f4d6 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100105e8 to 0x10010627 FUN_10010627 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100105f9 to 0x1014f4d6 FUN_1014f4d6 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10010540(uint param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *in_ECX;
  uint uVar6;
  uint extraout_ECX;
  void *_Memory;
  uint uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1016d950;
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
    FUN_10010627();
    return;
  }
  if (0xfff < uVar7) {
    param_1 = param_1 + 0x24;
    if (param_1 <= uVar7) {
      FUN_10149c04();
      param_1 = extraout_ECX;
    }
    iVar3 = FUN_10011f7d(param_1);
    if (iVar3 != 0) {
      *(int *)((iVar3 + 0x23U & 0xffffffe0) - 4) = iVar3;
      FUN_10010627();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1014f4d6();
  }
  puVar4 = (uint *)FUN_10011f7d(uVar7);
  if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1014f4d6();
  }
  if (param_2 != 0) {
    puVar5 = in_ECX;
    if (0xf < in_ECX[5]) {
      puVar5 = (uint *)*in_ECX;
    }
    if (param_2 != 0) {
      FUN_1014c320(puVar4,puVar5,param_2);
    }
  }
  if (0xf < in_ECX[5]) {
    pvVar2 = (void *)*in_ECX;
    _Memory = pvVar2;
    if (0xfff < in_ECX[5] + 1) {
      if (((uint)pvVar2 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1014f4d6();
      }
      _Memory = *(void **)((int)pvVar2 - 4);
      if (pvVar2 <= _Memory) {
                    /* WARNING: Subroutine does not return */
        FUN_1014f4d6();
      }
      if ((uint)((int)pvVar2 - (int)_Memory) < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_1014f4d6();
      }
      if (0x23 < (uint)((int)pvVar2 - (int)_Memory)) {
                    /* WARNING: Subroutine does not return */
        FUN_1014f4d6();
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

