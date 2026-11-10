// rea decompile_all
// name: FUN_0054a05b
// address: 0x54a05b
// body: available
// range: 0x54a05b-0x54a253 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x54a24f to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054a05b(int param_1,CDockState *param_2)

{
  int iVar1;
  short sVar2;
  undefined4 *in_ECX;
  undefined4 *local_c;
  undefined4 *local_8;
  
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    local_c = in_ECX;
    local_8 = in_ECX;
    FUN_00450090(&local_8);
    *in_ECX = local_8;
    FUN_00450090(&local_8);
    in_ECX[1] = local_8;
    FUN_00450090(&local_8);
    in_ECX[2] = local_8;
    FUN_00450090(&local_8);
    in_ECX[3] = local_8;
    FUN_0041822b((CPoint *)(in_ECX + 5),8);
    if (1 < *(uint *)(param_2 + 0x44)) {
      CDockState::ScalePoint(param_2,(CPoint *)(in_ECX + 5));
      FUN_00450090(&local_8);
      in_ECX[7] = local_8;
      FUN_00450090(&local_8);
      in_ECX[8] = local_8;
      if (local_8 != (undefined4 *)0x0) {
        FUN_00450090(&local_8);
        in_ECX[9] = local_8;
        FUN_0041822b((CRect *)(in_ECX + 10),0x10);
        CDockState::ScaleRectPos(param_2,(CRect *)(in_ECX + 10));
        FUN_00450090(in_ECX + 0xe);
        FUN_0041822b((CPoint *)(in_ECX + 0xf),8);
        CDockState::ScalePoint(param_2,(CPoint *)(in_ECX + 0xf));
      }
    }
    FUN_0043e7f2(&local_8);
    sVar2 = (short)local_8;
    FUN_0051dec6((uint)local_8 & 0xffff,0xffffffff);
    if (sVar2 != 0) {
      if ((int)in_ECX[0x13] < 1) goto LAB_0054a24f;
      FUN_0041822b(in_ECX[0x12],in_ECX[0x13] << 2);
    }
  }
  else {
    FUN_0043e915(*in_ECX);
    FUN_0043e915(in_ECX[1]);
    FUN_0043e915(in_ECX[2]);
    FUN_0043e915(in_ECX[3]);
    local_c = (undefined4 *)in_ECX[5];
    local_8 = (undefined4 *)in_ECX[6];
    FUN_0043f073(&local_c,8);
    if (1 < *(uint *)(param_2 + 0x44)) {
      FUN_0043e915(in_ECX[7]);
      FUN_0043e915(in_ECX[8]);
      if (in_ECX[8] != 0) {
        FUN_0043e915(in_ECX[9]);
        FUN_0043f073(in_ECX + 10,0x10);
        FUN_0043e915(in_ECX[0xe]);
        local_c = (undefined4 *)in_ECX[0xf];
        local_8 = (undefined4 *)in_ECX[0x10];
        FUN_0043f073(&local_c,8);
      }
    }
    FUN_0043e8d0(*(undefined2 *)(in_ECX + 0x13));
    iVar1 = in_ECX[0x13];
    if (iVar1 != 0) {
      if (iVar1 < 1) {
LAB_0054a24f:
                    /* WARNING: Subroutine does not return */
        FUN_00429127();
      }
      FUN_0043f073(in_ECX[0x12],iVar1 << 2);
    }
  }
  return;
}

