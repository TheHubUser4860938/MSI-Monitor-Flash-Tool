// rea decompile_all
// name: FUN_0051bf3d
// address: 0x51bf3d
// body: available
// range: 0x51bf3d-0x51c0c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x51bf77 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_0051bf3d(CWnd *param_1)

{
  code *pcVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  AFX_GLOBAL_DATA *pAVar4;
  int iVar5;
  WPARAM wParam;
  undefined4 uVar6;
  CMFCToolBarButton *in_ECX;
  int local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x51bf49;
  CMFCToolBarButton::OnChangeParentWnd(in_ECX,param_1);
  iVar5 = *(int *)(in_ECX + 0x78);
  if ((iVar5 != 0) && (*(int *)(iVar5 + 0x20) != 0)) {
    pHVar2 = GetParent(*(HWND *)(iVar5 + 0x20));
    pCVar3 = CWnd::FromHandle(pHVar2);
    if (pCVar3 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    if (param_1 != (CWnd *)0x0) {
      iVar5 = 0;
      if (pCVar3 != (CWnd *)0x0) {
        iVar5 = *(int *)(pCVar3 + 0x20);
      }
      if (iVar5 == *(int *)(param_1 + 0x20)) goto LAB_0051c0bd;
    }
    CWnd::GetWindowTextW
              (*(CWnd **)(in_ECX + 0x78),
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(in_ECX + 0x7c)
              );
    pcVar1 = *(code **)(**(int **)(in_ECX + 0x78) + 0x60);
    guard_check_icall();
    (*pcVar1)();
    if (*(int **)(in_ECX + 0x78) != (int *)0x0) {
      pcVar1 = *(code **)(**(int **)(in_ECX + 0x78) + 4);
      guard_check_icall(1);
      (*pcVar1)();
    }
    *(undefined4 *)(in_ECX + 0x78) = 0;
  }
  if ((param_1 != (CWnd *)0x0) && (*(int *)(param_1 + 0x20) != 0)) {
    local_24.left = *(LONG *)(in_ECX + 0x54);
    local_24.top = *(LONG *)(in_ECX + 0x58);
    local_24.right = *(LONG *)(in_ECX + 0x5c);
    local_24.bottom = *(LONG *)(in_ECX + 0x60);
    InflateRect(&local_24,-3,-1);
    pAVar4 = GetGlobalData();
    local_24.bottom = *(int *)(pAVar4 + 0x1cc) + local_24.top;
    pcVar1 = *(code **)(*(int *)in_ECX + 0xcc);
    guard_check_icall(param_1,&local_24);
    iVar5 = (*pcVar1)();
    *(int *)(in_ECX + 0x78) = iVar5;
    if (iVar5 != 0) {
      pcVar1 = *(code **)(*(int *)in_ECX + 0x30);
      guard_check_icall();
      (*pcVar1)();
      pAVar4 = GetGlobalData();
      if (pAVar4 == (AFX_GLOBAL_DATA *)0xfffffee4) {
        wParam = 0;
      }
      else {
        wParam = *(WPARAM *)(pAVar4 + 0x120);
      }
      SendMessageW(*(HWND *)(*(int *)(in_ECX + 0x78) + 0x20),0x30,wParam,1);
      uVar6 = FUN_004295fe();
      FUN_0040eb30(uVar6);
      local_8 = 0;
      CWnd::GetWindowTextW
                (*(CWnd **)(in_ECX + 0x78),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_28);
      if (*(int *)(local_28 + -0xc) == 0) {
        *(undefined4 *)(in_ECX + 0x80) = 1;
        FUN_004349b3(*(undefined4 *)(in_ECX + 0x7c));
        *(undefined4 *)(in_ECX + 0x80) = 0;
      }
      else {
        FUN_00415f50(&local_28);
      }
      FUN_0040efa0();
    }
  }
LAB_0051c0bd:
  FUN_0055bae6();
  return;
}

