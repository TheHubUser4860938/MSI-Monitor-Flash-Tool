// rea decompile_all
// name: FUN_100339a0
// address: 0x100339a0
// body: available
// range: 0x100339a0-0x10033a87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10033a47 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100339a0(int param_1)

{
  int *piVar1;
  int iVar2;
  byte in_CL;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101a0408;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = *(int *)(param_1 + -0xc);
  if ((iVar2 == 0) || (iVar2 < (int)(uint)in_CL)) {
LAB_10033a53:
    uVar6 = 0;
LAB_10033a55:
    local_8 = 0xffffffff;
    LOCK();
    piVar1 = (int *)(param_1 + -4);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      (**(code **)(**(int **)(param_1 + -0x10) + 4))((undefined4 *)(param_1 + -0x10));
    }
    ExceptionList = local_10;
    return uVar6;
  }
  uVar5 = (uint)in_CL << 8;
  uVar3 = 0;
  while ((int)uVar3 <= iVar2) {
    if (*(short *)(param_1 + uVar3 * 2) == 0) {
      uVar6 = 1;
      goto LAB_10033a55;
    }
    if ((byte)(uVar5 >> 8) < (byte)uVar5) goto LAB_10033a53;
    uVar3 = uVar5 & 0xff;
    if (iVar2 < (int)uVar3) break;
    if (*(ushort *)(param_1 + uVar3 * 2) < 0x3a) {
      if (iVar2 < (int)uVar3) break;
      if (*(ushort *)(param_1 + uVar3 * 2) < 0x30) goto LAB_10033a0f;
    }
    else {
LAB_10033a0f:
      if (iVar2 < (int)uVar3) break;
      if (*(ushort *)(param_1 + uVar3 * 2) < 0x47) {
        if (iVar2 < (int)uVar3) break;
        if (0x40 < *(ushort *)(param_1 + uVar3 * 2)) goto LAB_10033a3b;
      }
      if (iVar2 < (int)uVar3) break;
      if (0x66 < *(ushort *)(param_1 + uVar3 * 2)) goto LAB_10033a53;
      if (iVar2 < (int)uVar3) break;
      if (*(ushort *)(param_1 + uVar3 * 2) < 0x61) goto LAB_10033a53;
    }
LAB_10033a3b:
    bVar4 = (byte)uVar5 + 1;
    uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar4);
    uVar3 = (uint)bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_100351a0(0x80070057,DAT_10206460 ^ (uint)&stack0xfffffffc);
}

