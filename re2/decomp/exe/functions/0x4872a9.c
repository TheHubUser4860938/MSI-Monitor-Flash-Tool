// rea decompile_all
// name: FUN_004872a9
// address: 0x4872a9
// body: available
// range: 0x4872a9-0x48746e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x48746a to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004872a9(undefined4 param_1,int *param_2)

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
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_00616464) {
    FUN_0055b543(&DAT_00616464);
    if (DAT_00616464 == -1) {
      uVar4 = FUN_004295fe();
      FUN_0040eb30(uVar4);
      _atexit((_func_4879 *)&LAB_005abf92);
      FUN_0055b504(&DAT_00616464);
    }
  }
  if (param_2 == (int *)0x0) goto LAB_0048746a;
  iVar3 = 0;
  if (*(int *)(in_ECX + 0xfc) != 0) {
    iVar3 = *(int *)(*(int *)(in_ECX + 0xfc) + 0x20);
  }
  if (*param_2 == iVar3) {
    iVar3 = FUN_00435fce(0x3ea0);
    if (iVar3 == 0) {
LAB_0048746a:
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    iVar3 = FUN_004160f0(iVar3,0x3ea0);
    if (iVar3 == 0) goto LAB_0048746a;
    param_2[3] = DAT_00616458;
LAB_00487321:
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
        pCVar6 = DAT_0061620c;
        if (DAT_0061620c == (CFrameWnd *)0x0) {
          pCVar6 = CWnd::GetTopLevelFrame(in_ECX);
        }
        pHVar7 = GetParent(*(HWND *)(in_ECX + 0x20));
        local_8 = (CFrameWnd *)CWnd::FromHandle(pHVar7);
        local_10.x = 0;
        local_10.y = 0;
        _DAT_0061645c = in_ECX;
        GetCursorPos(&local_10);
        ScreenToClient(*(HWND *)(in_ECX + 0x20),&local_10);
        pt.y = local_10.y;
        pt.x = local_10.x;
        BVar8 = PtInRect((RECT *)(in_ECX + 0x200),pt);
        if (BVar8 == 0) {
          pcVar1 = *(code **)(*(int *)in_ECX + 0x218);
          guard_check_icall(&local_10);
          _DAT_00616460 = (*pcVar1)();
          FUN_00415d60();
          pCVar2 = local_8;
          SendMessageW(*(HWND *)(local_8 + 0x20),DAT_00616454,0,0x616458);
          if ((pCVar2 != pCVar6) && (pCVar6 != (CFrameWnd *)0x0)) {
            SendMessageW(*(HWND *)(pCVar6 + 0x20),DAT_00616454,0,0x616458);
          }
          if (*(int *)(DAT_00616458 + -0xc) != 0) {
            param_2[3] = DAT_00616458;
            goto LAB_00487321;
          }
        }
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

