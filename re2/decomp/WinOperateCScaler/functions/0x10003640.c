// rea decompile_all
// name: FUN_10003640
// address: 0x10003640
// body: available
// range: 0x10003640-0x100036fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100036b8 to 0x10003727 FUN_10003727 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100036c8 to 0x1015501f FUN_1015501f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100036da to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100036e8 to 0x10003727 FUN_10003727 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100036f9 to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10003640(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  uint uVar5;
  uint uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10194900;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar6 = param_1 | 0xf;
  if (uVar6 != 0xffffffff) {
    uVar1 = in_ECX[5];
    uVar5 = uVar1 >> 1;
    param_1 = uVar6;
    if ((uVar6 / 3 < uVar5) && (param_1 = uVar5 + uVar1, -uVar5 - 2 < uVar1)) {
      param_1 = 0xfffffffe;
    }
  }
  uVar6 = param_1 + 1;
  local_8 = 0;
  if (uVar6 == 0) {
    FUN_10003727();
    return;
  }
  if (uVar6 < 0x1000) {
    puVar3 = (undefined4 *)FUN_1001cfa0(uVar6);
    if (puVar3 != (undefined4 *)0x0) {
      if (param_2 != 0) {
        puVar4 = in_ECX;
        if (0xf < (uint)in_ECX[5]) {
          puVar4 = (undefined4 *)*in_ECX;
        }
        if (param_2 != 0) {
          FUN_1016bba0(puVar3,puVar4,param_2);
        }
      }
      if (0xf < (uint)in_ECX[5]) {
        FUN_10003d70(*in_ECX,in_ECX[5] + 1);
      }
      in_ECX[5] = 0xf;
      in_ECX[4] = 0;
      puVar4 = in_ECX;
      if (0xf < (uint)in_ECX[5]) {
        puVar4 = (undefined4 *)*in_ECX;
      }
      *(undefined1 *)puVar4 = 0;
      *in_ECX = puVar3;
      in_ECX[5] = param_1;
      in_ECX[4] = param_2;
      if (0xf < (uint)in_ECX[5]) {
        in_ECX = puVar3;
      }
      *(undefined1 *)((int)in_ECX + param_2) = 0;
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1016ec51();
  }
  if (uVar6 < param_1 + 0x24) {
    iVar2 = FUN_1001cfa0(param_1 + 0x24);
    if (iVar2 != 0) {
      *(int *)((iVar2 + 0x23U & 0xffffffe0) - 4) = iVar2;
      FUN_10003727();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1016ec51();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1015501f();
}

