// rea decompile_all
// name: FUN_1014ee7d
// address: 0x1014ee7d
// body: available
// range: 0x1014ee7d-0x1014efb2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1014efae to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1014ee7d(uint param_1)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  __POSITION *p_Var5;
  CMFCTasksPane *in_ECX;
  tagPOINT local_18;
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_18.x = param_1 & 0xffff;
  local_18.y = param_1 >> 0x10;
  ScreenToClient(*(HWND *)(in_ECX + 0x20),&local_18);
  pcVar1 = *(code **)(*(int *)in_ECX + 0x3e4);
  guard_check_icall(local_18.x,local_18.y);
  piVar2 = (int *)(*pcVar1)();
  local_8 = piVar2;
  piVar3 = (int *)FUN_10150e9b(local_18.x,local_18.y);
  local_10 = piVar3;
  if ((piVar2 == (int *)0x0) && (piVar3 == (int *)0x0)) {
    iVar4 = CMFCTasksPane::GetActivePage(in_ECX);
    p_Var5 = CObList::FindIndex((CObList *)(in_ECX + 0x464),iVar4);
    if (p_Var5 == (__POSITION *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001d023();
    }
    local_c = *(int **)(p_Var5 + 8);
    if (local_c != (int *)0x0) {
      pcVar1 = *(code **)(*local_c + 0xc);
      guard_check_icall();
      (*pcVar1)();
      ((tagRECT *)(in_ECX + 0xf4))->left = *(LONG *)(in_ECX + 0x444);
      *(undefined4 *)(in_ECX + 0xf8) = *(undefined4 *)(in_ECX + 0x448);
      *(undefined4 *)(in_ECX + 0xfc) = *(undefined4 *)(in_ECX + 0x44c);
      *(undefined4 *)(in_ECX + 0x100) = *(undefined4 *)(in_ECX + 0x450);
      CWnd::ClientToScreen((CWnd *)in_ECX,(tagRECT *)(in_ECX + 0xf4));
      piVar2 = local_8;
      piVar3 = local_10;
    }
  }
  CAccessibilityData::Clear((CAccessibilityData *)(in_ECX + 0xd0));
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 0xc);
    guard_check_icall();
    (*pcVar1)();
    if (local_8 == *(int **)(in_ECX + 0x540)) {
      *(uint *)(in_ECX + 0xec) = *(uint *)(in_ECX + 0xec) | 0x200004;
    }
  }
  if (piVar3 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar3 + 0xc);
    guard_check_icall();
    (*pcVar1)();
    if (piVar3 == *(int **)(in_ECX + 0x460)) {
      *(uint *)(in_ECX + 0xec) = *(uint *)(in_ECX + 0xec) | 4;
    }
  }
  return 1;
}

