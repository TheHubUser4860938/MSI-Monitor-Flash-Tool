// rea decompile_all
// name: FUN_10104383
// address: 0x10104383
// body: available
// range: 0x10104383-0x10104534 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10104530 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10104383(void)

{
  code *pcVar1;
  uint uVar2;
  WPARAM wParam;
  int *piVar3;
  AFX_MODULE_STATE *pAVar4;
  int iVar5;
  CWnd *pCVar6;
  int in_ECX;
  HICON local_8;
  
  FUN_1002044a(1);
  if (*(int **)(in_ECX + 0x5d4) != (int *)0x0) {
    if (*(int *)(in_ECX + 0x5e4) != 0) {
      pcVar1 = *(code **)(**(int **)(in_ECX + 0x5d4) + 0x3b0);
      guard_check_icall(0xffffffff);
      (*pcVar1)();
      FUN_10091471(*(undefined4 *)(in_ECX + 0x5e4),*(undefined4 *)(in_ECX + 0x5d4));
    }
    wParam = SendMessageW(*(HWND *)(in_ECX + 0x560),0x147,0,0);
    if (wParam == 0xffffffff) {
      FUN_10003780(&DAT_101b5ebc);
      SendMessageW(*(HWND *)(in_ECX + 0x260),0x170,0,0);
      FUN_1002044a(0);
      *(undefined4 *)(in_ECX + 0x5e4) = 0;
      return;
    }
    local_8 = (HICON)0x0;
    piVar3 = (int *)SendMessageW(*(HWND *)(in_ECX + 0x560),0x150,wParam,0);
    if (piVar3 == (int *)0x0) {
      iVar5 = FUN_10012ca3(0x3eeb);
      if ((iVar5 == 0) || (iVar5 = FUN_100032f0(iVar5,0x3eeb), iVar5 == 0)) goto LAB_10104530;
      pCVar6 = AfxGetMainWnd();
      if (pCVar6 != (CWnd *)0x0) {
        local_8 = (HICON)GetClassLongW(*(HWND *)(pCVar6 + 0x20),-0xe);
      }
      iVar5 = *(int *)(*(int *)(in_ECX + 0x5d4) + 0xd50);
    }
    else {
      pcVar1 = *(code **)(*piVar3 + 100);
      guard_check_icall(in_ECX + 0x5c0,6);
      (*pcVar1)();
      uVar2 = piVar3[0x15];
      AfxGetModuleState();
      pAVar4 = AfxGetModuleState();
      local_8 = LoadIconW(*(HINSTANCE *)(pAVar4 + 0xc),(LPCWSTR)(uVar2 & 0xffff));
      if (local_8 == (HICON)0x0) {
        local_8 = LoadIconW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
      }
      iVar5 = piVar3[0x22];
    }
    if (iVar5 == 0) {
LAB_10104530:
                    /* WARNING: Subroutine does not return */
      FUN_10012a3f();
    }
    pcVar1 = *(code **)(**(int **)(in_ECX + 0x5d4) + 0x434);
    guard_check_icall(iVar5,0,0);
    (*pcVar1)();
    SendMessageW(*(HWND *)(in_ECX + 0x260),0x170,(WPARAM)local_8,0);
    *(int *)(in_ECX + 0x5e4) = iVar5;
    FUN_1002044a(0);
  }
  return;
}

