// rea decompile_all
// name: CMFCPopupMenu::OnKeyDown
// address: 0x100b7448
// body: available
// range: 0x100b7448-0x100b7879 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPopupMenu::OnKeyDown(unsigned int,unsigned int,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCPopupMenu::OnKeyDown(CMFCPopupMenu *this,uint param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  CMFCPopupMenuBar *this_00;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ANIMATION_TYPE AVar8;
  CMFCToolBarMenuButton *pCVar9;
  CMFCToolBarMenuButton *pCVar10;
  CMFCToolBar *pCVar11;
  CMFCPopupMenu *pCVar12;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  pcVar1 = *(code **)(*(int *)this + 0x1c8);
  guard_check_icall();
  this_00 = (CMFCPopupMenuBar *)(*pcVar1)();
  bVar2 = false;
  uVar4 = CWnd::GetExStyle((CWnd *)this);
  if ((uVar4 & 0x400000) == 0) {
LAB_100b74dc:
    if (0x25 < param_1) goto LAB_100b7494;
    if (param_1 == 0x25) {
      pCVar11 = GetParentToolBar(this);
      if (pCVar11 != (CMFCToolBar *)0x0) {
        pcVar1 = *(code **)(*(int *)pCVar11 + 0x398);
        guard_check_icall();
        (*pcVar1)();
        AVar8 = DAT_1020f904;
        goto LAB_100b7867;
      }
      AVar8 = DAT_1020f904;
      if (*(int **)(this + 0x158) == (int *)0x0) goto LAB_100b7867;
      pcVar1 = *(code **)(**(int **)(this + 0x158) + 0x70);
      guard_check_icall();
      iVar5 = (*pcVar1)();
      AVar8 = DAT_1020f904;
      if (iVar5 == 0) goto LAB_100b7867;
      iVar5 = 0;
LAB_100b7657:
      CloseMenu(this,iVar5);
      AVar8 = DAT_1020f904;
      goto LAB_100b7867;
    }
    if (param_1 == 0xd) goto LAB_100b750e;
    if (param_1 == 0x1b) {
      *(undefined4 *)(this + 0x1164) = 1;
      iVar5 = 1;
      goto LAB_100b7657;
    }
    if (param_1 < 0x21) goto LAB_100b74ad;
    if (0x22 < param_1) {
      if (0x24 < param_1) goto LAB_100b74ad;
      goto LAB_100b7507;
    }
    if (*(int *)(this + 0xf80) == 0) goto LAB_100b74ad;
    pcVar1 = *(code **)(*(int *)this_00 + 0x400);
    guard_check_icall(param_1);
    (*pcVar1)();
  }
  else {
    if (param_1 != 0x25) {
      if (param_1 == 0x27) {
        param_1 = 0x25;
      }
      goto LAB_100b74dc;
    }
    param_1 = 0x27;
LAB_100b7494:
    if (param_1 != 0x26) {
      if (param_1 == 0x27) {
        AVar8 = GetAnimationType(0);
        DAT_1020f904 = 0;
        pCVar9 = GetSelItem(this);
        if (pCVar9 != (CMFCToolBarMenuButton *)0x0) {
          if ((*(int *)(pCVar9 + 0x20) != -1) && (*(int *)(pCVar9 + 0x20) != 0)) {
            pcVar1 = *(code **)(*(int *)pCVar9 + 0xe0);
            guard_check_icall();
            iVar5 = (*pcVar1)();
            if (iVar5 == 0) goto LAB_100b7712;
          }
          pcVar1 = *(code **)(*(int *)pCVar9 + 0xcc);
          guard_check_icall(0);
          iVar5 = (*pcVar1)();
          if (iVar5 != 0) {
            if ((*(int *)(pCVar9 + 0x8c) != 0) && (pCVar10 = GetSelItem(this), pCVar10 == pCVar9)) {
              OnKeyDown(*(CMFCPopupMenu **)(pCVar9 + 0x8c),0x24,0,0);
            }
            goto LAB_100b7867;
          }
        }
LAB_100b7712:
        pCVar11 = GetParentToolBar(this);
        if ((pCVar11 == (CMFCToolBar *)0x0) ||
           (iVar5 = FUN_1004e58b(&PTR_s_CMFCPopupMenuBar_10205d98), iVar5 != 0)) {
          pCVar12 = GetParentPopupMenu(this);
          if (pCVar12 != (CMFCPopupMenu *)0x0) {
            SendMessageW(*(HWND *)(pCVar12 + 0x20),0x100,(uint)((uVar4 & 0x400000) == 0) * 2 + 0x25,
                         0);
          }
        }
        else {
          pcVar1 = *(code **)(*(int *)pCVar11 + 0x39c);
          guard_check_icall();
          (*pcVar1)();
        }
        goto LAB_100b7867;
      }
      if (param_1 != 0x28) {
LAB_100b74ad:
        pcVar1 = *(code **)(*(int *)this_00 + 0x400);
        guard_check_icall(param_1);
        iVar5 = (*pcVar1)();
        AVar8 = DAT_1020f904;
        if (iVar5 == 0) {
          FUN_100509af();
          AVar8 = DAT_1020f904;
        }
        goto LAB_100b7867;
      }
      uVar3 = GetAsyncKeyState(0x11);
      if (((uVar3 & 0x8000) != 0) && (*(int *)(this_00 + 0xd68) == 0)) {
        ShowAllCommands(this);
        AVar8 = DAT_1020f904;
        goto LAB_100b7867;
      }
    }
LAB_100b7507:
    bVar2 = true;
LAB_100b750e:
    if (DAT_1020e500 == 0) {
      pcVar1 = *(code **)(*(int *)this_00 + 0x400);
      guard_check_icall(param_1);
      (*pcVar1)();
    }
    AVar8 = DAT_1020f904;
    if (!bVar2) goto LAB_100b7867;
  }
  if ((*(int *)(this + 0xf7c) != 0) && (-1 < *(int *)(this_00 + 0xbf0))) {
    iVar5 = FUN_10094903(*(int *)(this_00 + 0xbf0));
    if (iVar5 == 0) {
      pcVar1 = *(code **)(*(int *)this_00 + 0x354);
      guard_check_icall();
      iVar6 = (*pcVar1)();
      if (iVar6 == 0) goto LAB_100b7845;
    }
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this_00 + 0x20),&local_18);
    iVar6 = *(int *)(this_00 + 0xd4c);
    if (*(int *)(iVar5 + 0x58) < local_18.top) {
      pcVar1 = *(code **)(*(int *)this_00 + 0x354);
      guard_check_icall();
      iVar7 = (*pcVar1)();
      iVar5 = (*(int *)(iVar5 + 0x58) - local_18.top) / iVar7 + -1;
    }
    else {
      if (*(int *)(iVar5 + 0x60) <= local_18.bottom) goto LAB_100b7845;
      pcVar1 = *(code **)(*(int *)this_00 + 0x354);
      guard_check_icall();
      iVar7 = (*pcVar1)();
      iVar5 = (*(int *)(iVar5 + 0x60) - local_18.bottom) / iVar7 + 1;
    }
    if (iVar5 != 0) {
      pcVar1 = *(code **)(*(int *)this_00 + 0x354);
      guard_check_icall();
      iVar7 = (*pcVar1)();
      iVar6 = iVar6 + iVar5;
      iVar5 = iVar6;
      if (iVar6 < 0) {
        iVar5 = 0;
      }
      iVar7 = (*(int *)(this_00 + 0xc48) - (*(int *)(this + 0x14c) / iVar7 + -2)) + -1;
      if ((iVar5 < iVar7) && (iVar7 = iVar6, iVar6 < 0)) {
        iVar7 = 0;
      }
      CMFCPopupMenuBar::SetOffset(this_00,iVar7);
      iVar5 = AdjustScroll(this,0);
      if (((*(int *)(this + 0xf80) == 0) || (this == (CMFCPopupMenu *)0xfffff048)) ||
         (*(int *)(this + 0xfd8) == 0)) {
        if (iVar5 != 0) {
          AdjustScroll(this,0);
        }
      }
      else {
        SetScrollPos(*(HWND *)(this + 0xfd8),2,iVar7,1);
      }
    }
  }
LAB_100b7845:
  AVar8 = DAT_1020f904;
  if (*(int *)(this_00 + 0xd80) != 0) {
    pcVar1 = *(code **)(*(int *)this + 0x204);
    guard_check_icall(*(undefined4 *)(this_00 + 0xbf0));
    (*pcVar1)();
    AVar8 = DAT_1020f904;
  }
LAB_100b7867:
  DAT_1020f904 = AVar8;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

