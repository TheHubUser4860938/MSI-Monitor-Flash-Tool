// rea decompile_all
// name: CMFCToolBar::AdjustLocations
// address: 0x100920fa
// body: available
// range: 0x100920fa-0x1009265a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100921ad to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCToolBar::AdjustLocations(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBar::AdjustLocations(CMFCToolBar *this)

{
  code *pcVar1;
  uint uVar2;
  AFX_GLOBAL_DATA *pAVar3;
  CMFCToolBarButton *pCVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  undefined1 local_b4 [8];
  CClientDC local_ac [20];
  undefined1 local_98 [4];
  int local_94;
  CFont *local_90;
  uint local_8c;
  int local_88;
  CMFCToolBarButton *local_84;
  int local_80;
  CMFCToolBarButton *local_7c;
  int local_78;
  int local_74;
  CMFCToolBarButton *local_70;
  CMFCToolBarButton *local_6c;
  uint local_68;
  int local_64;
  int local_60;
  CMFCToolBarButton *local_5c;
  CMFCToolBarButton *local_58;
  CMFCToolBarButton *local_54;
  CMFCToolBarButton *local_50;
  CMFCToolBarButton *local_4c;
  uint local_48;
  int local_44;
  int local_40;
  CMFCToolBarButton *local_3c;
  CMFCToolBarButton *local_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa4;
  local_8 = 0x10092109;
  if ((*(int *)(this + 0xc48) == 0) || (*(int *)(this + 0x20) == 0)) goto LAB_10092655;
  pcVar1 = *(code **)(*(int *)this + 0x194);
  guard_check_icall();
  uVar2 = (*pcVar1)();
  local_24.left = 0;
  uVar2 = uVar2 & 0xa000;
  local_24.top = 0;
  local_8c = (uint)(uVar2 != 0);
  local_24.right = 0;
  local_24.bottom = 0;
  local_48 = uVar2;
  GetClientRect(*(HWND *)(this + 0x20),&local_24);
  local_70 = (CMFCToolBarButton *)local_24.right;
  CClientDC::CClientDC(local_ac,(CWnd *)this);
  local_8 = 0;
  if (uVar2 == 0) {
    pAVar3 = GetGlobalData();
    local_90 = (CFont *)CDC::SelectObject((CDC *)local_ac,(CPen *)(pAVar3 + 0x14c));
  }
  else {
    local_90 = CBasePane::SelectDefaultFont((CBasePane *)this,(CDC *)local_ac);
  }
  if (local_90 == (CFont *)0x0) {
LAB_100921ad:
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  local_6c = (CMFCToolBarButton *)local_24.top;
  local_5c = (CMFCToolBarButton *)local_24.top;
  if (uVar2 != 0) {
    local_5c = (CMFCToolBarButton *)local_24.left;
  }
  local_5c = local_5c + 1;
  pcVar1 = *(code **)(*(int *)this + 0x354);
  local_3c = local_5c;
  guard_check_icall();
  pCVar4 = (CMFCToolBarButton *)(*pcVar1)();
  pcVar1 = *(code **)(*(int *)this + 0x358);
  guard_check_icall();
  local_88 = (*pcVar1)();
  local_74 = 0;
  local_78 = 0;
  local_84 = pCVar4;
  if (*(int *)(this + 0xd14) != 0) {
    pcVar1 = *(code **)(*(int *)this + 0x170);
    guard_check_icall();
    iVar5 = (*pcVar1)();
    if ((iVar5 == 0) && (DAT_1020e500 == 0)) {
      CObList::RemoveAll((CObList *)(*(int *)(this + 0xd14) + 0x110));
      local_64 = *(int *)(*(int *)(this + 0xd14) + 0xfc);
      *(undefined4 *)(*(int *)(this + 0xd14) + 0xfc) = 0;
      if (local_48 == 0) {
        local_80 = local_24.right - local_24.left;
        local_7c = local_84;
      }
      else {
        local_80 = local_88;
        local_7c = (CMFCToolBarButton *)(local_24.bottom + -local_24.top);
      }
      iVar5 = **(int **)(this + 0xd14);
      guard_check_icall(local_98,local_ac,&local_80,local_8c);
      piVar6 = (int *)(**(code **)(iVar5 + 0x1c))();
      local_74 = *piVar6;
      local_78 = piVar6[1];
      *(int *)(*(int *)(this + 0xd14) + 0xfc) = local_64;
    }
  }
  local_68 = 0;
  local_94 = *(int *)(this + 0xc40);
  local_40 = 0;
  iVar5 = local_94;
  while (iVar5 != 0) {
    do {
      local_64 = iVar5;
      piVar6 = (int *)FUN_10034920(&local_94);
      pCVar4 = (CMFCToolBarButton *)*piVar6;
      local_38 = pCVar4;
      if (pCVar4 == (CMFCToolBarButton *)0x0) goto LAB_10092571;
      iVar5 = *(int *)pCVar4;
      local_44 = 1;
      guard_check_icall(local_b4,local_ac,&local_88,local_8c);
      piVar6 = (int *)(**(code **)(iVar5 + 0x1c))();
      uVar2 = local_48;
      iVar5 = *piVar6;
      local_4c = (CMFCToolBarButton *)piVar6[1];
      if ((*(int *)(pCVar4 + 0x18) != 0) && (local_48 != 0)) {
        local_4c = local_84;
      }
      if (((byte)local_38[0x24] & 1) != 0) {
        if ((local_3c == local_5c) || (local_68 != 0)) {
          local_4c = (CMFCToolBarButton *)0x0;
          iVar5 = 0;
          local_44 = 0;
        }
        else {
          local_68 = 1;
        }
      }
      local_7c = local_3c;
      if (local_48 == 0) {
        local_58 = (CMFCToolBarButton *)local_24.left;
        local_50 = (CMFCToolBarButton *)(local_24.left + iVar5);
        local_54 = local_3c;
        local_4c = local_3c + (int)local_4c;
        local_3c = local_4c;
      }
      else {
        local_58 = local_3c;
        local_50 = local_3c + iVar5;
        local_54 = local_6c;
        local_4c = local_6c + (int)local_4c;
        local_40 = local_40 + iVar5;
        local_3c = local_50;
      }
      local_60 = local_94;
      pCVar4 = local_38;
      if ((*(CMFCToolBarButton **)(this + 0xd14) != (CMFCToolBarButton *)0x0) &&
         (local_38 != *(CMFCToolBarButton **)(this + 0xd14))) {
        pcVar1 = *(code **)(*(int *)this + 0x170);
        guard_check_icall();
        iVar5 = (*pcVar1)();
        pCVar4 = local_38;
        if ((iVar5 == 0) && (DAT_1020e500 == 0)) {
          iVar5 = *(int *)(this + 0xd14);
          iVar8 = local_74;
          iVar9 = local_78;
          if ((((*(int *)(iVar5 + 0xe8) < 1) && (local_60 != 0)) &&
              (*(int *)(local_60 + 8) == iVar5)) && (*(int *)(iVar5 + 0x11c) == 0)) {
            iVar8 = 0;
            iVar9 = 0;
          }
          if (uVar2 == 0) {
            if (local_24.bottom - iVar9 < (int)local_4c) goto LAB_10092553;
          }
          else if ((int)local_70 - iVar8 < (int)local_50) {
LAB_10092553:
            local_44 = 0;
            local_3c = local_7c;
            CObList::AddTail((CObList *)(iVar5 + 0x110),(CObject *)local_38);
          }
        }
      }
      CMFCToolBarButton::Show(pCVar4,local_44);
      pCVar4 = local_38;
      CMFCToolBarButton::SetRect(local_38,local_58,local_54,local_50,local_4c);
      if (local_44 != 0) {
        local_68 = *(uint *)(pCVar4 + 0x24) & 1;
      }
      iVar5 = local_60;
    } while ((*(int *)(pCVar4 + 0x10) == 0) && (local_60 != 0));
    if (local_48 != 0) {
      pCVar4 = local_70 + (-(int)local_5c - local_40);
      pcVar1 = *(code **)(*(int *)this + 0x170);
      local_44 = (int)pCVar4 / 2;
      guard_check_icall();
      iVar5 = (*pcVar1)();
      if (((iVar5 != 0) && (0 < (int)pCVar4 / 2)) &&
         (local_40 = local_64, *(int *)(this + 0xb88) != 0)) {
        while (local_40 != 0) {
          local_7c = (CMFCToolBarButton *)(uint)(local_40 == local_64);
          puVar7 = (uint *)FUN_10069da3(&local_40);
          local_3c = (CMFCToolBarButton *)*puVar7;
          if (local_3c == (CMFCToolBarButton *)0x0) goto LAB_100921ad;
          if ((*(int *)(local_3c + 0x10) != 0) && (local_7c == (CMFCToolBarButton *)0x0)) break;
          local_34.left = *(LONG *)(local_3c + 0x54);
          local_34.top = *(LONG *)(local_3c + 0x58);
          local_34.right = *(LONG *)(local_3c + 0x5c);
          local_34.bottom = *(LONG *)(local_3c + 0x60);
          OffsetRect(&local_34,local_44,0);
          CMFCToolBarButton::SetRect
                    (local_3c,local_34.left,local_34.top,local_34.right,local_34.bottom);
        }
      }
      local_3c = local_5c;
      local_40 = 0;
      local_6c = local_6c + (int)(local_84 + 5);
      iVar5 = local_60;
    }
  }
LAB_10092571:
  iVar5 = *(int *)(this + 0xd14);
  if (iVar5 != 0) {
    local_58 = (CMFCToolBarButton *)local_24.left;
    local_54 = (CMFCToolBarButton *)local_24.top;
    local_50 = (CMFCToolBarButton *)local_24.right;
    local_4c = (CMFCToolBarButton *)local_24.bottom;
    if ((*(int *)(iVar5 + 0xe8) < 1) && (*(int *)(iVar5 + 0x11c) == 0)) {
LAB_100925f7:
      local_58 = (CMFCToolBarButton *)0x0;
      local_54 = (CMFCToolBarButton *)0x0;
      local_50 = (CMFCToolBarButton *)0x0;
      local_4c = (CMFCToolBarButton *)0x0;
      CMFCToolBarButton::SetRect(*(CMFCToolBarButton **)(this + 0xd14),0,0,0,0);
      iVar5 = 0;
    }
    else {
      pcVar1 = *(code **)(*(int *)this + 0x170);
      guard_check_icall();
      iVar5 = (*pcVar1)();
      if ((iVar5 != 0) || (DAT_1020e500 != 0)) goto LAB_100925f7;
      if (local_48 == 0) {
        local_4c = local_4c + -1;
        local_54 = local_4c + -local_78;
      }
      else {
        local_50 = local_70 + -1;
        local_58 = local_50 + (1 - local_74);
      }
      CMFCToolBarButton::SetRect
                (*(CMFCToolBarButton **)(this + 0xd14),local_58,local_54,local_50,local_4c);
      iVar5 = 1;
    }
    CMFCToolBarButton::Show(*(CMFCToolBarButton **)(this + 0xd14),iVar5);
  }
  CDC::SelectObject((CDC *)local_ac,(CPen *)local_90);
  UpdateTooltips(this);
  RedrawCustomizeButton(this);
  CClientDC::~CClientDC(local_ac);
LAB_10092655:
  FUN_1017f5f4();
  return;
}

