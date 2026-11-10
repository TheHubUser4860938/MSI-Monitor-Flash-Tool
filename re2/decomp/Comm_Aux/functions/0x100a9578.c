// rea decompile_all
// name: FUN_100a9578
// address: 0x100a9578
// body: available
// range: 0x100a9578-0x100a96d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a96d3 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100a9578(void)

{
  HWND hWnd;
  int *piVar1;
  int iVar2;
  IMAGE_STATE IVar3;
  BOOL BVar4;
  int in_ECX;
  undefined4 *puVar5;
  bool bVar6;
  
  if (in_ECX == 0) {
    return;
  }
  if (*(int *)(in_ECX + 0x20) == 0) {
    return;
  }
  if (*(int *)(in_ECX + 0x264) == 0) {
    return;
  }
  if (*(int *)(in_ECX + 0x250) != 0) {
    return;
  }
  if (((*(int *)(in_ECX + 0x254) == 0) && (*(int *)(in_ECX + 600) == 0)) &&
     (*(int *)(in_ECX + 0x25c) == 0)) {
    CWnd::EnableWindow((CWnd *)(in_ECX + 0x3b0),(uint)(0 < *(int *)(in_ECX + 0x2a4)));
    if (*(int *)(in_ECX + 0x290) == 0) {
      bVar6 = SBORROW4(*(int *)(in_ECX + 0x2a4),*(int *)(in_ECX + 0x2a8));
      iVar2 = *(int *)(in_ECX + 0x2a4) - *(int *)(in_ECX + 0x2a8);
LAB_100a964b:
      if (bVar6 == iVar2 < 0) {
LAB_100a964d:
        iVar2 = 0;
        goto LAB_100a9655;
      }
    }
  }
  else {
    if (*(int *)(in_ECX + 0x9c) == 0) {
      CWnd::EnableWindow((CWnd *)(in_ECX + 0x3b0),0);
      iVar2 = 0;
      goto LAB_100a9655;
    }
    CWnd::EnableWindow((CWnd *)(in_ECX + 0x3b0),(uint)(0 < *(int *)(in_ECX + 0x2b0)));
    piVar1 = (int *)FUN_10151a1d(*(int *)(in_ECX + 0x9c) + -1);
    if (*(int *)(in_ECX + 0x290) == 0) {
      if (*(int *)(in_ECX + 0x2e4) < *(int *)(*piVar1 + 0x18)) {
        iVar2 = *(int *)(in_ECX + 0x9c) + -1;
        bVar6 = SBORROW4(*(int *)(in_ECX + 0x2b0),iVar2);
        iVar2 = *(int *)(in_ECX + 0x2b0) - iVar2;
        goto LAB_100a964b;
      }
      goto LAB_100a964d;
    }
  }
  iVar2 = 1;
LAB_100a9655:
  CWnd::EnableWindow((CWnd *)(in_ECX + 0xb58),iVar2);
  if (*(int *)(in_ECX + 0x290) != 0) {
    if (((*(int *)(in_ECX + 0x254) == 0) && (*(int *)(in_ECX + 600) == 0)) &&
       (*(int *)(in_ECX + 0x25c) == 0)) {
      IVar3 = 4;
    }
    else {
      IVar3 = 0;
    }
    CMFCButton::SetStdImage
              ((CMFCButton *)(in_ECX + 0xb58),(-(uint)(*(int *)(in_ECX + 0x294) != 0) & 0x14) + 0xd,
               IVar3,0xd);
  }
  puVar5 = *(undefined4 **)(in_ECX + 0x2a00);
  while( true ) {
    if (puVar5 == (undefined4 *)0x0) {
      return;
    }
    hWnd = (HWND)puVar5[2];
    puVar5 = (undefined4 *)*puVar5;
    if (hWnd == (HWND)0x0) break;
    BVar4 = IsWindowEnabled(hWnd);
    if (BVar4 == 0) {
      SendMessageW(hWnd,0x1f,0,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1004886a();
}

