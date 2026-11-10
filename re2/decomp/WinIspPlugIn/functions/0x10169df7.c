// rea decompile_all
// name: FUN_10169df7
// address: 0x10169df7
// body: available
// range: 0x10169df7-0x10169f8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10169f8b to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10169df7(int param_1)

{
  code *pcVar1;
  POINT Point;
  SHORT SVar2;
  int iVar3;
  int iVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  BOOL BVar7;
  CWnd *in_ECX;
  tagPOINT local_18;
  CWnd *local_10;
  int local_c;
  AFX_MODULE_THREAD_STATE *local_8;
  
  SVar2 = GetKeyState(1);
  if (SVar2 < 0) {
    return;
  }
  local_8 = AfxGetModuleThreadState();
  local_18.x = 0;
  local_18.y = 0;
  GetCursorPos(&local_18);
  ScreenToClient(*(HWND *)(in_ECX + 0x20),&local_18);
  pcVar1 = *(code **)(*(int *)in_ECX + 0x74);
  guard_check_icall(local_18.x,local_18.y,0);
  iVar3 = (*pcVar1)();
  if (iVar3 < 0) {
    *(undefined4 *)(local_8 + 0x4c) = 0xffffffff;
  }
  else {
    local_10 = CWnd::GetTopLevelParent(in_ECX);
    iVar4 = FUN_10054e4e();
    if (iVar4 == 0) {
LAB_10169e85:
      iVar3 = -1;
    }
    else {
      if (local_10 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1004a383();
      }
      iVar4 = CWnd::IsWindowEnabled(local_10);
      if (iVar4 == 0) goto LAB_10169e85;
    }
    if (*(int *)(local_8 + 0x3c) == 0) {
      local_c = 0;
    }
    else {
      local_c = *(int *)(*(int *)(local_8 + 0x3c) + 0x20);
    }
    pHVar5 = GetCapture();
    pCVar6 = CWnd::FromHandle(pHVar5);
    if (pCVar6 != in_ECX) {
      if (pCVar6 == (CWnd *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(pCVar6 + 0x20);
      }
      if ((iVar4 != local_c) && (pCVar6 = CWnd::GetTopLevelParent(pCVar6), pCVar6 == local_10)) {
        iVar3 = -1;
      }
    }
  }
  if (-1 < iVar3) {
    ClientToScreen(*(HWND *)(in_ECX + 0x20),&local_18);
    Point.y = local_18.y;
    Point.x = local_18.x;
    local_10 = (CWnd *)WindowFromPoint(Point);
    if (local_10 == (CWnd *)0x0) {
LAB_10169f23:
      iVar3 = -1;
      *(undefined4 *)(local_8 + 0x4c) = 0xffffffff;
    }
    else if ((local_10 != *(CWnd **)(in_ECX + 0x20)) &&
            (BVar7 = IsChild(*(HWND *)(in_ECX + 0x20),(HWND)local_10), BVar7 == 0)) {
      pCVar6 = (CWnd *)0x0;
      if (*(int *)(local_8 + 0x3c) != 0) {
        pCVar6 = *(CWnd **)(*(int *)(local_8 + 0x3c) + 0x20);
      }
      if (pCVar6 != local_10) goto LAB_10169f23;
    }
    if (-1 < iVar3) goto LAB_10169f56;
  }
  if (*(int *)(local_8 + 0x4c) == -1) {
    KillTimer(*(HWND *)(in_ECX + 0x20),0xec0a);
  }
  pcVar1 = *(code **)(*(int *)in_ECX + 0x1a0);
  guard_check_icall(0xffffffff);
  (*pcVar1)();
LAB_10169f56:
  if ((param_1 == 0xec09) && (KillTimer(*(HWND *)(in_ECX + 0x20),0xec09), -1 < iVar3)) {
    pcVar1 = *(code **)(*(int *)in_ECX + 0x1a0);
    guard_check_icall(iVar3);
    (*pcVar1)();
  }
  return;
}

