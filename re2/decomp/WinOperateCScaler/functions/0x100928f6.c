// rea decompile_all
// name: FUN_100928f6
// address: 0x100928f6
// body: available
// range: 0x100928f6-0x10092acf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10092acb to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100928f6(tagMSG *param_1)

{
  code *pcVar1;
  UINT UVar2;
  int iVar3;
  undefined4 uVar4;
  HACCEL hAccTable;
  CWnd *in_ECX;
  
  if (param_1 == (tagMSG *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1001d023();
  }
  if ((param_1->message == 0x201) || (param_1->message == 0xa1)) {
    AfxCancelModes(param_1->hwnd);
  }
  if (((((byte)in_ECX[0xfc] & 4) != 0) && (param_1->message == 0x105)) && (param_1->wParam == 0x79))
  {
    pcVar1 = *(code **)(*(int *)in_ECX + 0x18c);
    guard_check_icall(1);
    (*pcVar1)();
  }
  if (((byte)in_ECX[0xfc] & 2) != 0) {
    if ((param_1->message == 0x105) && (param_1->wParam == 0x12)) {
      pcVar1 = *(code **)(*(int *)in_ECX + 0x18c);
      guard_check_icall((*(int *)(in_ECX + 0x100) == 1) + '\x01');
      (*pcVar1)();
    }
    else if ((param_1->message == 0x106) && (*(int *)(in_ECX + 0x100) == 2)) {
      pcVar1 = *(code **)(*(int *)in_ECX + 0x18c);
      guard_check_icall(1);
      (*pcVar1)();
      *(undefined4 *)(in_ECX + 0x108) = 1;
    }
  }
  if ((((byte)in_ECX[0xfc] & 1) == 0) &&
     ((((UVar2 = param_1->message, UVar2 == 0x100 && (param_1->wParam == 0x1b)) ||
       ((UVar2 == 0x201 || (UVar2 == 0x204)))) ||
      (((UVar2 == 0xa1 || (UVar2 == 0xa4)) && (param_1->wParam != 5)))))) {
    pcVar1 = *(code **)(*(int *)in_ECX + 0x18c);
    guard_check_icall(2);
    (*pcVar1)();
  }
  UVar2 = param_1->message;
  if ((UVar2 == 0xa1) || (UVar2 == 0xa4)) {
    *(uint *)(in_ECX + 0x10c) = (uint)(param_1->wParam == 5);
  }
  else if (((UVar2 == 0xa2) || (UVar2 == 0xa5)) || ((UVar2 == 0x202 || (UVar2 == 0x205)))) {
    *(undefined4 *)(in_ECX + 0x10c) = 0;
  }
  iVar3 = CWnd::PreTranslateMessage(in_ECX,param_1);
  if (iVar3 == 0) {
    if (*(int **)(in_ECX + 0xac) != (int *)0x0) {
      pcVar1 = *(code **)(**(int **)(in_ECX + 0xac) + 0x54);
      guard_check_icall(param_1);
      iVar3 = (*pcVar1)();
      if (iVar3 != 0) goto LAB_10092a60;
    }
    if ((0xff < param_1->message) && (param_1->message < 0x10a)) {
      pcVar1 = *(code **)(*(int *)in_ECX + 0x1ac);
      guard_check_icall();
      hAccTable = (HACCEL)(*pcVar1)();
      if (hAccTable != (HACCEL)0x0) {
        iVar3 = TranslateAcceleratorW(*(HWND *)(in_ECX + 0x20),hAccTable,param_1);
        if (iVar3 != 0) goto LAB_10092a60;
      }
    }
    uVar4 = 0;
  }
  else {
LAB_10092a60:
    uVar4 = 1;
  }
  return uVar4;
}

