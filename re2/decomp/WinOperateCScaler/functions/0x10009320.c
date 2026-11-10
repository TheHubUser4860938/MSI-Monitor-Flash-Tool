// rea decompile_all
// name: FUN_10009320
// address: 0x10009320
// body: available
// range: 0x10009320-0x100094ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000945b to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10009467 to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10009473 to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000947d to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009320(int param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 *_Memory;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined8 local_20;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10194f48;
  local_10 = ExceptionList;
  uVar2 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_20 = 0;
  local_18 = 0;
  local_8 = 0;
  uVar7 = 0;
  local_14 = uVar2;
  FUN_10003b40(param_1 + 0x2ec,0,0xffffffff);
  iVar3 = FUN_100090e0(&local_20,uVar7);
  puVar1 = (undefined1 *)local_20;
  if (iVar3 != 0) {
    uVar6 = local_20._4_4_ - (int)puVar1;
    if (uVar6 < 0x103) {
      iVar3 = *(int *)(param_1 + 0x260);
      *(int *)(param_2 + 0x104) = iVar3;
      *param_2 = *puVar1;
      param_2[1] = puVar1[1];
      if (iVar3 == 0) {
        uVar4 = 2;
        param_2[2] = (local_20._4_1_ - (char)local_20) + -2;
        if (2 < uVar6) {
          do {
            (param_2 + 1)[uVar4] = puVar1[uVar4];
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar6);
        }
      }
      else {
        bVar5 = puVar1[2];
        param_2[2] = bVar5 & 0x7f;
        if (((uint)(bVar5 & 0x7f) == uVar6 - 3) && (bVar5 = 3, 3 < uVar6)) {
          uVar4 = 3;
          do {
            bVar5 = bVar5 + 1;
            param_2[uVar4] = puVar1[uVar4];
            uVar4 = (uint)bVar5;
          } while (uVar4 < uVar6);
        }
      }
    }
  }
  if (puVar1 != (undefined1 *)0x0) {
    _Memory = puVar1;
    if (0xfff < (uint)(local_18 - (int)puVar1)) {
      if ((local_20 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51(uVar2);
      }
      _Memory = *(undefined1 **)(puVar1 + -4);
      if (puVar1 <= _Memory) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51(uVar2);
      }
      if ((uint)((int)puVar1 - (int)_Memory) < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51(uVar2);
      }
      if (0x23 < (uint)((int)puVar1 - (int)_Memory)) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51(uVar2);
      }
    }
    FID_conflict__free(_Memory);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

