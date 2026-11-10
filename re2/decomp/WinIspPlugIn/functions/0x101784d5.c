// rea decompile_all
// name: FUN_101784d5
// address: 0x101784d5
// body: available
// range: 0x101784d5-0x10178617 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10178613 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_101784d5(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  __POSITION *p_Var5;
  CWnd *this;
  CMFCTasksPane *in_ECX;
  int local_c;
  int local_8;
  
  piVar4 = (int *)FUN_100efaed(param_1);
  iVar1 = *piVar4;
  piVar4 = (int *)FUN_100efaed(param_2);
  if (iVar1 != *piVar4) {
    if ((in_ECX == (CMFCTasksPane *)0x0) || (*(int *)(in_ECX + 0x20) == 0)) {
      pcVar2 = *(code **)(*(int *)in_ECX + 0x3d0);
      guard_check_icall();
      (*pcVar2)();
      CMFCTasksPane::RebuildMenu(in_ECX);
    }
    else {
      p_Var5 = CObList::FindIndex((CObList *)(in_ECX + 0x464),*piVar4);
      if (p_Var5 == (__POSITION *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1004a383();
      }
      iVar1 = *(int *)(p_Var5 + 8);
      local_c = *(int *)(in_ECX + 0x484);
      iVar3 = local_8;
      while (local_8 = iVar3, local_c != 0) {
        piVar4 = (int *)FUN_100c321b(&local_c);
        iVar3 = local_8;
        if (*(int *)(*piVar4 + 4) == iVar1) {
          local_8 = *(int *)(*piVar4 + 0x10);
          while (iVar3 = 0, local_8 != 0) {
            piVar4 = (int *)FUN_100c321b(&local_8);
            if (*(int *)(*piVar4 + 0x2c) != 0) {
              this = CWnd::FromHandle(*(HWND__ **)(*piVar4 + 0x2c));
              CWnd::ShowWindow(this,0);
            }
          }
        }
      }
      FUN_1017cc57();
      pcVar2 = *(code **)(*(int *)in_ECX + 0x3d0);
      guard_check_icall();
      (*pcVar2)();
      CMFCTasksPane::RebuildMenu(in_ECX);
      *(undefined4 *)(in_ECX + 0x398) = 0;
      CMFCTasksPane::AdjustScroll(in_ECX);
      pcVar2 = *(code **)(*(int *)in_ECX + 0x3e0);
      guard_check_icall(0);
      (*pcVar2)();
      InvalidateRect(*(HWND *)(in_ECX + 0x20),(RECT *)0x0,1);
      UpdateWindow(*(HWND *)(in_ECX + 0x20));
    }
  }
  return;
}

