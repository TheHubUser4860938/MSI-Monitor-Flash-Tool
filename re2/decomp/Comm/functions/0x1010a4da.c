// rea decompile_all
// name: FUN_1010a4da
// address: 0x1010a4da
// body: available
// range: 0x1010a4da-0x1010a6d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1010a6ce to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1010a4da(int param_1,CDockState *param_2)

{
  int iVar1;
  short sVar2;
  undefined4 *in_ECX;
  undefined4 *local_c;
  undefined4 *local_8;
  
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    local_c = in_ECX;
    local_8 = in_ECX;
    FUN_1001a6a2(&local_8);
    *in_ECX = local_8;
    FUN_1001a6a2(&local_8);
    in_ECX[1] = local_8;
    FUN_1001a6a2(&local_8);
    in_ECX[2] = local_8;
    FUN_1001a6a2(&local_8);
    in_ECX[3] = local_8;
    FUN_1001b1a6((CPoint *)(in_ECX + 5),8);
    if (1 < *(uint *)(param_2 + 0x44)) {
      CDockState::ScalePoint(param_2,(CPoint *)(in_ECX + 5));
      FUN_1001a6a2(&local_8);
      in_ECX[7] = local_8;
      FUN_1001a6a2(&local_8);
      in_ECX[8] = local_8;
      if (local_8 != (undefined4 *)0x0) {
        FUN_1001a6a2(&local_8);
        in_ECX[9] = local_8;
        FUN_1001b1a6((CRect *)(in_ECX + 10),0x10);
        CDockState::ScaleRectPos(param_2,(CRect *)(in_ECX + 10));
        FUN_1001a6a2(in_ECX + 0xe);
        FUN_1001b1a6((CPoint *)(in_ECX + 0xf),8);
        CDockState::ScalePoint(param_2,(CPoint *)(in_ECX + 0xf));
      }
    }
    FUN_1001a655(&local_8);
    sVar2 = (short)local_8;
    FUN_1003287c((uint)local_8 & 0xffff,0xffffffff);
    if (sVar2 != 0) {
      if ((int)in_ECX[0x13] < 1) goto LAB_1010a6ce;
      FUN_1001b1a6(in_ECX[0x12],in_ECX[0x13] << 2);
    }
  }
  else {
    FUN_1001b086(*in_ECX);
    FUN_1001b086(in_ECX[1]);
    FUN_1001b086(in_ECX[2]);
    FUN_1001b086(in_ECX[3]);
    local_c = (undefined4 *)in_ECX[5];
    local_8 = (undefined4 *)in_ECX[6];
    FUN_1001aede(&local_c,8);
    if (1 < *(uint *)(param_2 + 0x44)) {
      FUN_1001b086(in_ECX[7]);
      FUN_1001b086(in_ECX[8]);
      if (in_ECX[8] != 0) {
        FUN_1001b086(in_ECX[9]);
        FUN_1001aede(in_ECX + 10,0x10);
        FUN_1001b086(in_ECX[0xe]);
        local_c = (undefined4 *)in_ECX[0xf];
        local_8 = (undefined4 *)in_ECX[0x10];
        FUN_1001aede(&local_c,8);
      }
    }
    FUN_1001a77e(*(undefined2 *)(in_ECX + 0x13));
    iVar1 = in_ECX[0x13];
    if (iVar1 != 0) {
      if (iVar1 < 1) {
LAB_1010a6ce:
                    /* WARNING: Subroutine does not return */
        FUN_10012a3f();
      }
      FUN_1001aede(in_ECX[0x12],iVar1 << 2);
    }
  }
  return;
}

