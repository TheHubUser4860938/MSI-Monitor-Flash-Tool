// rea decompile_all
// name: FUN_10091dca
// address: 0x10091dca
// body: available
// range: 0x10091dca-0x10091fa4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10091fa0 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10091dca(uint param_1,uint param_2,int param_3)

{
  code *pcVar1;
  SHORT SVar2;
  CFrameWnd *pCVar3;
  int iVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  CWnd *in_ECX;
  
  pCVar3 = CWnd::GetTopLevelFrame(in_ECX);
  if (pCVar3 == (CFrameWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1001d023();
  }
  if (*(int **)(in_ECX + 0xac) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(in_ECX + 0xac) + 0x7c);
    guard_check_icall(param_1,param_2,param_3);
    iVar4 = (*pcVar1)();
    if (iVar4 != 0) {
      return;
    }
  }
  if (param_2 == 0xffff) {
    *(uint *)(in_ECX + 0x60) = *(uint *)(in_ECX + 0x60) & 0xffffffbf;
    if (*(int *)(pCVar3 + 0x94) == 0) {
      *(undefined4 *)(in_ECX + 0xd4) = 0xe001;
    }
    else {
      *(undefined4 *)(in_ECX + 0xd4) = 0xe002;
    }
    SendMessageW(*(HWND *)(in_ECX + 0x20),0x362,*(WPARAM *)(in_ECX + 0xd4),0);
    pcVar1 = *(code **)(*(int *)in_ECX + 0x198);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    if (iVar4 != 0) {
      UpdateWindow(*(HWND *)(iVar4 + 0x20));
    }
    if (((param_3 == 0) && (((byte)in_ECX[0xfc] & 1) == 0)) &&
       ((SVar2 = GetKeyState(0x79), -1 < SVar2 &&
        ((SVar2 = GetKeyState(0x12), -1 < SVar2 && (*(int *)(in_ECX + 0x10c) == 0)))))) {
      pcVar1 = *(code **)(*(int *)in_ECX + 0x18c);
      guard_check_icall(2);
      (*pcVar1)();
    }
  }
  else {
    if (((*(int *)(in_ECX + 0x108) != 0) &&
        (*(undefined4 *)(in_ECX + 0x108) = 0, (param_2 & 0x2000) != 0)) &&
       (((byte)in_ECX[0xfc] & 1) == 0)) {
      pcVar1 = *(code **)(*(int *)in_ECX + 0x18c);
      guard_check_icall(2);
      (*pcVar1)();
    }
    if ((param_1 == 0) || ((param_2 & 0x810) != 0)) {
      *(undefined4 *)(in_ECX + 0xd4) = 0;
    }
    else if (param_1 - 0xf000 < 0x1f0) {
      *(uint *)(in_ECX + 0xd4) = (param_1 - 0xf000 >> 4) + 0xef00;
    }
    else if (param_1 < 0xff00) {
      *(uint *)(in_ECX + 0xd4) = param_1;
    }
    else {
      *(undefined4 *)(in_ECX + 0xd4) = 0xef1f;
    }
    *(uint *)(pCVar3 + 0x60) = *(uint *)(pCVar3 + 0x60) | 0x40;
  }
  if (*(int *)(in_ECX + 0xd4) != *(int *)(in_ECX + 0xd8)) {
    pHVar5 = GetParent(*(HWND *)(in_ECX + 0x20));
    pCVar6 = CWnd::FromHandle(pHVar5);
    if (pCVar6 != (CWnd *)0x0) {
      PostMessageW(*(HWND *)(in_ECX + 0x20),0x36a,0,0);
    }
  }
  return;
}

