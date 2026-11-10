// rea decompile_all
// name: FUN_0043eb7f
// address: 0x43eb7f
// body: available
// range: 0x43eb7f-0x43ecd4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43ecd0 to 0x43e041 FUN_0043e041 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043eb7f(uint param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 local_8;
  
  if ((*(byte *)(in_ECX + 0x18) & 1) == 0) {
    FUN_0040ee70();
    uVar7 = 4;
    goto LAB_0043ecd0;
  }
  iVar6 = *(int *)(in_ECX + 0x2c);
  local_8 = iVar6 - *(int *)(in_ECX + 0x28);
  uVar1 = local_8 + param_1;
  if (*(int *)(in_ECX + 8) == 0) {
    uVar4 = *(uint *)(in_ECX + 0x30);
    if (uVar4 < *(uint *)(in_ECX + 0x28)) {
      if (0 < (int)local_8) {
        FUN_00415320(uVar4,iVar6 - uVar4,*(undefined4 *)(in_ECX + 0x28),local_8);
        uVar4 = *(uint *)(in_ECX + 0x30);
        *(int *)(in_ECX + 0x2c) = local_8 + uVar4;
        *(uint *)(in_ECX + 0x28) = uVar4;
      }
      if (*(int *)(in_ECX + 0xc) == 0) {
        uVar5 = *(int *)(in_ECX + 0x20) - local_8;
LAB_0043ec02:
        param_1 = uVar5;
      }
      else {
        uVar5 = *(int *)(in_ECX + 0x20) - local_8;
        if (uVar5 <= param_1) goto LAB_0043ec02;
      }
      iVar6 = uVar4 + local_8;
      do {
        pcVar2 = *(code **)(**(int **)(in_ECX + 0x24) + 0x38);
        guard_check_icall(iVar6,param_1);
        iVar3 = (*pcVar2)();
        iVar6 = iVar6 + iVar3;
        local_8 = local_8 + iVar3;
        param_1 = param_1 - iVar3;
        if ((iVar3 == 0) || (param_1 == 0)) break;
      } while (local_8 < uVar1);
      *(int *)(in_ECX + 0x28) = *(int *)(in_ECX + 0x30);
      *(uint *)(in_ECX + 0x2c) = *(int *)(in_ECX + 0x30) + local_8;
    }
  }
  else {
    if (local_8 != 0) {
      iVar6 = **(int **)(in_ECX + 0x24);
      guard_check_icall(-local_8,(int)-local_8 >> 0x1f,1);
      (**(code **)(iVar6 + 0x2c))();
    }
    pcVar2 = *(code **)(**(int **)(in_ECX + 0x24) + 0x54);
    guard_check_icall(0,*(undefined4 *)(in_ECX + 0x20),(undefined4 *)(in_ECX + 0x30),in_ECX + 0x2c);
    (*pcVar2)();
    *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(in_ECX + 0x30);
  }
  if (*(uint *)(in_ECX + 0x20) < uVar1) {
    uVar7 = 8;
  }
  else {
    if (uVar1 <= (uint)(*(int *)(in_ECX + 0x2c) - *(int *)(in_ECX + 0x28))) {
      return;
    }
    uVar7 = 3;
  }
LAB_0043ecd0:
                    /* WARNING: Subroutine does not return */
  FUN_0043e041(uVar7);
}

