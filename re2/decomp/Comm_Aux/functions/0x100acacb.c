// rea decompile_all
// name: FUN_100acacb
// address: 0x100acacb
// body: available
// range: 0x100acacb-0x100acbf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100acbf3 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100acacb(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  LRESULT LVar5;
  HGDIOBJ pvVar6;
  int *in_ECX;
  
  if (param_1 == 0) {
LAB_100acbf3:
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if ((iVar1 == 1) || (iVar1 == 0x10001)) {
    *param_2 = 0x20;
  }
  else {
    if (iVar1 == 0x30001) {
      iVar1 = *(int *)(param_1 + 0x38);
      uVar2 = *(undefined4 *)(param_1 + 0x24);
      pcVar3 = *(code **)(*in_ECX + 0x178);
      guard_check_icall(uVar2,iVar1);
      uVar4 = (*pcVar3)();
      *(undefined4 *)(param_1 + 0x34) = uVar4;
      pcVar3 = *(code **)(*in_ECX + 0x174);
      guard_check_icall(uVar2,iVar1);
      uVar4 = (*pcVar3)();
      *(undefined4 *)(param_1 + 0x30) = uVar4;
      if (((iVar1 == in_ECX[0x4f]) && (in_ECX[0x51] != 0)) &&
         (LVar5 = SendMessageW((HWND)in_ECX[8],0x1000,0,0), *(int *)(param_1 + 0x34) == LVar5)) {
        *(int *)(param_1 + 0x34) = in_ECX[0x4e];
      }
      pcVar3 = *(code **)(*in_ECX + 0x17c);
      guard_check_icall(uVar2,iVar1,*(undefined4 *)(param_1 + 0x2c));
      pvVar6 = (HGDIOBJ)(*pcVar3)();
      if (pvVar6 != (HGDIOBJ)0x0) {
        pvVar6 = SelectObject(*(HDC *)(param_1 + 0x10),pvVar6);
        in_ECX[0x52] = (int)pvVar6;
        if (pvVar6 != (HGDIOBJ)0x0) {
          *param_2 = 0x12;
          return;
        }
        goto LAB_100acbf3;
      }
    }
    else {
      if (iVar1 != 0x30002) {
        return;
      }
      if ((HGDIOBJ)in_ECX[0x52] != (HGDIOBJ)0x0) {
        SelectObject(*(HDC *)(param_1 + 0x10),(HGDIOBJ)in_ECX[0x52]);
        in_ECX[0x52] = 0;
      }
    }
    *param_2 = 0;
  }
  return;
}

