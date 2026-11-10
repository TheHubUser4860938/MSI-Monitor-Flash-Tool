// rea decompile_all
// name: FUN_1000bf30
// address: 0x1000bf30
// body: available
// range: 0x1000bf30-0x1000bfed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000bfa8 to 0x1000c017 FUN_1000c017 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1000bfb8 to 0x10180c1c FUN_10180c1c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000bfca to 0x1019ab71 FUN_1019ab71 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000bfd8 to 0x1000c017 FUN_1000c017 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1000bfe9 to 0x1019ab71 FUN_1019ab71 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000bf30(uint param_1,int param_2)

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
  
  puStack_c = &LAB_101c1080;
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
    FUN_1000c017();
    return;
  }
  if (uVar6 < 0x1000) {
    puVar3 = (undefined4 *)FUN_100491ae(uVar6);
    if (puVar3 != (undefined4 *)0x0) {
      if (param_2 != 0) {
        puVar4 = in_ECX;
        if (0xf < (uint)in_ECX[5]) {
          puVar4 = (undefined4 *)*in_ECX;
        }
        if (param_2 != 0) {
          FUN_10197c50(puVar3,puVar4,param_2);
        }
      }
      if (0xf < (uint)in_ECX[5]) {
        FUN_1000b630(*in_ECX,in_ECX[5] + 1);
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
    FUN_1019ab71();
  }
  if (uVar6 < param_1 + 0x24) {
    iVar2 = FUN_100491ae(param_1 + 0x24);
    if (iVar2 != 0) {
      *(int *)((iVar2 + 0x23U & 0xffffffe0) - 4) = iVar2;
      FUN_1000c017();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1019ab71();
  }
                    /* WARNING: Subroutine does not return */
  FUN_10180c1c();
}

