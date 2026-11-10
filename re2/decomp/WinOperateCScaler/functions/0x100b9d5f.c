// rea decompile_all
// name: FUN_100b9d5f
// address: 0x100b9d5f
// body: available
// range: 0x100b9d5f-0x100b9edf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b9edb to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100b9d5f(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  BOOL BVar4;
  int in_ECX;
  RECT *lpRect;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    if (*(CWnd **)(in_ECX + 0x44) == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001d023();
    }
    iVar2 = CWnd::GetDlgCtrlID(*(CWnd **)(in_ECX + 0x44));
    FUN_10025aff(iVar2);
    pcVar1 = *(code **)(**(int **)(in_ECX + 0x44) + 0x194);
    guard_check_icall();
    uVar3 = (*pcVar1)();
    FUN_10025aff(uVar3);
    pcVar1 = *(code **)(**(int **)(in_ECX + 0x44) + 0x36c);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    else {
      pcVar1 = *(code **)(**(int **)(in_ECX + 0x44) + 0x17c);
      guard_check_icall();
      uVar3 = (*pcVar1)();
    }
    FUN_10025aff(uVar3);
    lpRect = (RECT *)(in_ECX + 0xc);
    GetWindowRect(*(HWND *)(*(int *)(in_ECX + 0x44) + 0x20),lpRect);
    BVar4 = IsRectEmpty(lpRect);
    if (BVar4 != 0) {
      iVar2 = *(int *)(in_ECX + 0x44);
      lpRect = &local_18;
      local_18.left = *(LONG *)(iVar2 + 0x30c);
      local_18.top = *(LONG *)(iVar2 + 0x310);
      local_18.right = *(LONG *)(iVar2 + 0x314);
      local_18.bottom = *(LONG *)(iVar2 + 0x318);
    }
    FUN_1002625d(lpRect,0x10);
    FUN_10025aff(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x44) + 0x330) + 0x114));
    FUN_10025aff(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x44) + 0x330) + 0x118));
    FUN_10025aff(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x44) + 0x330) + 0x11c));
  }
  else {
    FUN_10026405(in_ECX);
    FUN_10026405(in_ECX + 4);
    FUN_10026405(in_ECX + 8);
    FUN_1002652d(in_ECX + 0xc,0x10);
    FUN_10026405(in_ECX + 0x38);
    FUN_10026405(in_ECX + 0x3c);
    FUN_10026405(in_ECX + 0x40);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

