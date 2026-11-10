// rea decompile_all
// name: FUN_100a8b5c
// address: 0x100a8b5c
// body: available
// range: 0x100a8b5c-0x100a8c73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a8c6f to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100a8b5c(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  HWND hWnd;
  bool bVar2;
  bool bVar3;
  HWND pHVar4;
  HWND pHVar5;
  int iVar6;
  int in_ECX;
  
  bVar2 = true;
  bVar3 = true;
  puVar1 = *(undefined4 **)(in_ECX + 0x2a00);
  do {
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    pHVar5 = (HWND)0x0;
    hWnd = (HWND)puVar1[2];
    puVar1 = (undefined4 *)*puVar1;
    if (hWnd == (HWND)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1004886a();
    }
    pHVar4 = pHVar5;
    if ((*(int *)(in_ECX + 0x268) != 0) && (*(int *)(in_ECX + 0x28c) == 0)) {
      pHVar4 = (HWND)0x1;
    }
    if (param_5 == 0) {
      if (pHVar4 == (HWND)0x0) {
        if (in_ECX != -0x2250) {
          pHVar5 = *(HWND *)(in_ECX + 0x2270);
        }
        if (hWnd == pHVar5) goto LAB_100a8c37;
      }
      if ((*(int *)(in_ECX + 0x290) != 0) && (bVar2)) goto LAB_100a8c37;
      iVar6 = param_1;
      if ((((*(int *)(in_ECX + 0x254) != 0) || (*(int *)(in_ECX + 600) != 0)) ||
          (*(int *)(in_ECX + 0x25c) != 0)) && (bVar2)) {
        iVar6 = (*(int *)(in_ECX + 0x2dc) - param_3) + -1;
      }
      SetWindowPos(hWnd,(HWND)0x0,iVar6,param_2,param_3,param_4,0x14);
      if ((((*(int *)(in_ECX + 0x254) == 0) && (*(int *)(in_ECX + 600) == 0)) &&
          (*(int *)(in_ECX + 0x25c) == 0)) || (!bVar3)) {
        param_1 = param_1 + param_3 + param_6;
      }
    }
    else {
LAB_100a8c37:
      SetWindowPos(hWnd,(HWND)0x0,0,0,0,0,0x14);
    }
    InvalidateRect(hWnd,(RECT *)0x0,1);
    UpdateWindow(hWnd);
    bVar2 = false;
    bVar3 = false;
  } while( true );
}

