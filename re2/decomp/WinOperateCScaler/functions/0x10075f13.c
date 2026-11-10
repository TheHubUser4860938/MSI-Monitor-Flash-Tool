// rea decompile_all
// name: FUN_10075f13
// address: 0x10075f13
// body: available
// range: 0x10075f13-0x100760d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100760d4 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10075f13(undefined4 param_1,int *param_2)

{
  code *pcVar1;
  POINT pt;
  CFrameWnd *pCVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  CFrameWnd *pCVar6;
  HWND pHVar7;
  BOOL BVar8;
  CWnd *in_ECX;
  tagPOINT local_10;
  CFrameWnd *local_8;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_1020a708) {
    FUN_10153ede(&DAT_1020a708);
    if (DAT_1020a708 == -1) {
      uVar4 = FUN_1001e20a();
      FUN_1001d224(uVar4);
      _atexit((_func_4879 *)&LAB_101a4456);
      FUN_10153e9f(&DAT_1020a708);
    }
  }
  if (param_2 == (int *)0x0) goto LAB_100760d4;
  iVar3 = 0;
  if (*(int *)(in_ECX + 0xfc) != 0) {
    iVar3 = *(int *)(*(int *)(in_ECX + 0xfc) + 0x20);
  }
  if (*param_2 == iVar3) {
    iVar3 = FUN_1001de45(0x3ea0);
    if (iVar3 == 0) {
LAB_100760d4:
                    /* WARNING: Subroutine does not return */
      FUN_1001d023();
    }
    iVar3 = FUN_10018c20(iVar3,0x3ea0);
    if (iVar3 == 0) goto LAB_100760d4;
    param_2[3] = DAT_1020a6fc;
LAB_10075f8b:
    uVar4 = 1;
  }
  else {
    iVar3 = *(int *)(in_ECX + 0xf8);
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x20) != 0)) {
      iVar5 = 0;
      if (iVar3 != 0) {
        iVar5 = *(int *)(iVar3 + 0x20);
      }
      if (*param_2 == iVar5) {
        pCVar6 = DAT_1020b224;
        if (DAT_1020b224 == (CFrameWnd *)0x0) {
          pCVar6 = CWnd::GetTopLevelFrame(in_ECX);
        }
        pHVar7 = GetParent(*(HWND *)(in_ECX + 0x20));
        local_8 = (CFrameWnd *)CWnd::FromHandle(pHVar7);
        local_10.x = 0;
        local_10.y = 0;
        _DAT_1020a700 = in_ECX;
        GetCursorPos(&local_10);
        ScreenToClient(*(HWND *)(in_ECX + 0x20),&local_10);
        pt.y = local_10.y;
        pt.x = local_10.x;
        BVar8 = PtInRect((RECT *)(in_ECX + 0x200),pt);
        if (BVar8 == 0) {
          pcVar1 = *(code **)(*(int *)in_ECX + 0x218);
          guard_check_icall(&local_10);
          _DAT_1020a704 = (*pcVar1)();
          FUN_10018940();
          pCVar2 = local_8;
          SendMessageW(*(HWND *)(local_8 + 0x20),DAT_1020a6f8,0,0x1020a6fc);
          if ((pCVar2 != pCVar6) && (pCVar6 != (CFrameWnd *)0x0)) {
            SendMessageW(*(HWND *)(pCVar6 + 0x20),DAT_1020a6f8,0,0x1020a6fc);
          }
          if (*(int *)(DAT_1020a6fc + -0xc) != 0) {
            param_2[3] = DAT_1020a6fc;
            goto LAB_10075f8b;
          }
        }
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

