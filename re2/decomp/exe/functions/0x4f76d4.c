// rea decompile_all
// name: FUN_004f76d4
// address: 0x4f76d4
// body: available
// range: 0x4f76d4-0x4f7957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4f7953 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f76d4(undefined4 param_1,int param_2,int param_3)

{
  CSize *this;
  code *pcVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  CWnd *pCVar6;
  CMFCToolBar *in_ECX;
  uint uVar7;
  tagTRACKMOUSEEVENT local_1c;
  int local_c;
  int local_8;
  
  this = (CSize *)(in_ECX + 0xcfc);
  iVar2 = CSize::operator!=(this,(tagSIZE)0xffffffffffffffff);
  if (((iVar2 != 0) && (lVar3 = _labs(*(int *)this - param_2), lVar3 < 1)) &&
     (lVar3 = _labs(*(int *)(in_ECX + 0xd00) - param_3), lVar3 < 1)) {
    *(int *)this = param_2;
    *(int *)(in_ECX + 0xd00) = param_3;
    return;
  }
  iVar2 = *(int *)(in_ECX + 0xbf0);
  *(int *)(in_ECX + 0xd00) = param_3;
  *(int *)this = param_2;
  pcVar1 = *(code **)(*(int *)in_ECX + 0x390);
  guard_check_icall(param_2,param_3);
  iVar4 = (*pcVar1)();
  *(int *)(in_ECX + 0xbf0) = iVar4;
  if (iVar4 == -1) {
    local_8 = 0;
  }
  else {
    local_8 = FUN_00452f94(iVar4);
    if (local_8 != 0) {
      if ((*(byte *)(local_8 + 0x24) & 1) == 0) {
        if ((*(uint *)(local_8 + 0x24) & 0x40000) != 0) {
          pcVar1 = *(code **)(*(int *)in_ECX + 0x3ec);
          guard_check_icall(param_2,param_3);
          iVar4 = (*pcVar1)();
          if (iVar4 == 0) goto LAB_004f7796;
        }
      }
      else {
LAB_004f7796:
        *(undefined4 *)(in_ECX + 0xbf0) = 0xffffffff;
      }
    }
  }
  if (*(int *)(in_ECX + 0xba8) == 0) {
    local_1c.hwndTrack = *(HWND *)(in_ECX + 0x20);
    *(undefined4 *)(in_ECX + 0xba8) = 1;
    local_1c.cbSize = 0x10;
    local_1c.dwFlags = 2;
    TrackMouseEvent(&local_1c);
  }
  if (iVar2 != *(int *)(in_ECX + 0xbf0)) {
    *(int *)(in_ECX + 0xbec) = *(int *)(in_ECX + 0xbf0);
    local_c = 0;
    iVar4 = 0;
    if (iVar2 != -1) {
      iVar5 = FUN_00452f94(iVar2);
      if (iVar5 == 0) goto LAB_004f7953;
      uVar7 = *(uint *)(iVar5 + 0x24) & 0xfffdffff;
      if (uVar7 != *(uint *)(iVar5 + 0x24)) {
        pcVar1 = *(code **)(*(int *)in_ECX + 0x374);
        guard_check_icall(iVar2,uVar7);
        (*pcVar1)();
        iVar4 = local_c;
      }
    }
    if (*(int *)(in_ECX + 0xbec) != -1) {
      iVar5 = FUN_00452f94(*(int *)(in_ECX + 0xbec));
      if (iVar5 == 0) goto LAB_004f7953;
      uVar7 = *(uint *)(iVar5 + 0x24) & 0xfffdffff;
      if (*(int *)(in_ECX + 0xbf0) == *(int *)(in_ECX + 0xbec)) {
        uVar7 = uVar7 | 0x20000;
      }
      if (uVar7 != *(uint *)(iVar5 + 0x24)) {
        pcVar1 = *(code **)(*(int *)in_ECX + 0x374);
        guard_check_icall(*(int *)(in_ECX + 0xbec),uVar7);
        (*pcVar1)();
        iVar4 = 1;
      }
    }
    if (((*(int *)(in_ECX + 0xbec) == -1) || (iVar2 == *(int *)(in_ECX + 0xbec))) && (iVar2 != -1))
    {
      CMFCToolBar::InvalidateButton(in_ECX,iVar2);
      iVar4 = 1;
    }
    if (((*(int *)(in_ECX + 0xbec) == -1) || (*(int *)(in_ECX + 0xbf0) == *(int *)(in_ECX + 0xbec)))
       && (*(int *)(in_ECX + 0xbf0) != -1)) {
      CMFCToolBar::InvalidateButton(in_ECX,*(int *)(in_ECX + 0xbf0));
      iVar4 = 1;
    }
    if (iVar4 != 0) {
      UpdateWindow(*(HWND *)(in_ECX + 0x20));
    }
    if ((*(int *)(in_ECX + 0xbf0) == -1) ||
       ((*(int *)(in_ECX + 0xbf0) != *(int *)(in_ECX + 0xbec) && (*(int *)(in_ECX + 0xbec) != -1))))
    {
      if ((*(int *)(in_ECX + 0xbec) == -1) && (DAT_00614ed0 == 0)) {
        pCVar6 = CWnd::GetOwner((CWnd *)in_ECX);
        SendMessageW(*(HWND *)(pCVar6 + 0x20),0x362,0xe001,0);
      }
    }
    else {
      if (local_8 == 0) {
LAB_004f7953:
                    /* WARNING: Subroutine does not return */
        FUN_00429127();
      }
      pcVar1 = *(code **)(*(int *)in_ECX + 0x418);
      guard_check_icall(*(undefined4 *)(local_8 + 0x20));
      (*pcVar1)();
    }
    pcVar1 = *(code **)(*(int *)in_ECX + 0x3b0);
    guard_check_icall(*(undefined4 *)(in_ECX + 0xbf0));
    (*pcVar1)();
  }
  return;
}

