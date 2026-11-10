// rea decompile_all
// name: CPaneContainer::AddPane
// address: 0x1012d645
// body: available
// range: 0x1012d645-0x1012ddb0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CDockablePane * __thiscall CPaneContainer::AddPane(class CDockablePane *)
   
   Library: Visual Studio 2015 Release */

CDockablePane * __thiscall CPaneContainer::AddPane(CPaneContainer *this,CDockablePane *param_1)

{
  code *pcVar1;
  int iVar2;
  CRect *pCVar3;
  BOOL BVar4;
  int iVar5;
  CDockablePane *pCVar6;
  CPaneContainer *pCVar7;
  int *piVar8;
  CRecentDockSiteInfo *pCVar9;
  undefined4 uVar10;
  int local_88;
  int local_84;
  int local_80;
  CPaneContainer *local_7c;
  CPaneContainer *local_78;
  int *local_74;
  CWnd *local_70;
  int local_6c;
  int local_68;
  CDockablePane *local_64;
  HDWP local_60;
  CRecentDockSiteInfo *local_5c;
  tagRECT local_58;
  tagRECT local_48;
  tagRECT local_38;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_64 = param_1;
  pcVar1 = *(code **)(**(int **)(this + 0x1c) + 0x74);
  local_78 = this;
  guard_check_icall();
  local_70 = (CWnd *)(*pcVar1)();
  iVar2 = FUN_100250d6(&PTR_s_CPaneFrameWnd_102018e4);
  local_74 = (int *)(uint)(iVar2 == 0);
  local_5c = (CRecentDockSiteInfo *)(local_64 + 0x1e4);
  pCVar3 = CRecentDockSiteInfo::GetRecentDockedRect(local_5c,(int)local_74);
  local_28.left = *(LONG *)pCVar3;
  local_28.top = *(LONG *)(pCVar3 + 4);
  local_28.right = *(LONG *)(pCVar3 + 8);
  local_28.bottom = *(LONG *)(pCVar3 + 0xc);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  SetRectEmpty(&local_18);
  pcVar1 = *(code **)(*(int *)this + 0xc);
  guard_check_icall(&local_18,0);
  (*pcVar1)();
  CWnd::ScreenToClient(local_70,&local_18);
  local_80 = IsEmpty(this);
  pCVar7 = *(CPaneContainer **)(this + 0x18);
  local_7c = pCVar7;
  while ((pCVar7 != (CPaneContainer *)0x0 && (iVar2 = IsEmpty(pCVar7), iVar2 != 0))) {
    pCVar7 = *(CPaneContainer **)(pCVar7 + 0x18);
  }
  local_58.left = 0;
  local_58.top = 0;
  local_58.right = 0;
  local_58.bottom = 0;
  local_7c = pCVar7;
  SetRectEmpty(&local_58);
  if (pCVar7 != (CPaneContainer *)0x0) {
    pcVar1 = *(code **)(*(int *)pCVar7 + 0xc);
    guard_check_icall(&local_58,0);
    (*pcVar1)();
    CWnd::ScreenToClient(local_70,&local_58);
  }
  local_6c = local_18.right - local_18.left;
  if (local_6c < 1) {
    local_6c = local_58.right - local_58.left;
  }
  local_68 = local_18.bottom - local_18.top;
  if (local_68 < 1) {
    local_68 = local_58.bottom - local_58.top;
  }
  if (local_6c == 0) {
    local_6c = local_28.right - local_28.left;
  }
  if (local_68 == 0) {
    local_68 = local_28.bottom - local_28.top;
  }
  iVar2 = local_68;
  BVar4 = IsRectEmpty(&local_18);
  if (BVar4 == 0) {
    local_28.left = local_18.left;
    local_28.top = local_18.top;
  }
  else {
    BVar4 = IsRectEmpty(&local_58);
    if (BVar4 == 0) {
      local_28.left = local_58.left;
      local_28.top = local_58.top;
    }
  }
  local_88 = 0;
  local_84 = 0;
  pcVar1 = *(code **)(*(int *)local_64 + 0x270);
  guard_check_icall(&local_88);
  (*pcVar1)();
  piVar8 = local_74;
  if (local_6c < local_88) {
    local_6c = local_88;
  }
  if (iVar2 < local_84) {
    local_68 = local_84;
  }
  iVar2 = CRecentDockSiteInfo::GetRecentDockedPercent(local_5c,(int)local_74);
  if ((iVar2 == 100) || (iVar2 == 0)) {
    iVar2 = 0x32;
  }
  iVar5 = IsEmpty(this);
  if ((iVar5 == 0) && (*(int *)(this + 0xc) != 0)) {
    iVar5 = IsPaneDividerHorz(this);
    if (iVar5 == 0) {
      iVar5 = CRecentDockSiteInfo::IsRecentLeftPane(local_5c,(int)piVar8);
      if (iVar5 == 0) {
        local_6c = ((local_18.right - ((local_18.right - local_18.left) * (100 - iVar2)) / 100) -
                   *(int *)(*(int *)(this + 0xc) + 0x118)) - local_18.left;
        local_28.left = local_18.right - local_6c;
      }
      else {
        local_28.left = local_18.left;
        local_6c = ((local_18.right - local_18.left) * iVar2) / 100;
      }
    }
    else {
      iVar5 = CRecentDockSiteInfo::IsRecentLeftPane(local_5c,(int)piVar8);
      if (iVar5 == 0) {
        local_68 = ((local_18.bottom - ((local_18.bottom - local_18.top) * (100 - iVar2)) / 100) -
                   *(int *)(*(int *)(this + 0xc) + 0x118)) - local_18.top;
        local_28.top = local_18.bottom - local_68;
      }
      else {
        local_28.top = local_18.top;
        local_68 = ((local_18.bottom - local_18.top) * iVar2) / 100;
      }
    }
  }
  local_28.bottom = local_28.top + local_68;
  local_28.right = local_28.left + local_6c;
  local_60 = BeginDeferWindowPos(10);
  pcVar1 = *(code **)(*(int *)local_64 + 0x234);
  guard_check_icall(&local_28,0,local_60);
  local_60 = (HDWP)(*pcVar1)();
  local_38.left = local_28.left;
  local_38.top = local_28.top;
  local_38.right = local_28.right;
  local_38.bottom = local_28.bottom;
  local_48.left = 0;
  local_48.top = 0;
  local_48.right = 0;
  local_48.bottom = 0;
  iVar2 = CRecentDockSiteInfo::IsRecentLeftPane(local_5c,(int)local_74);
  if (iVar2 == 0) {
    pCVar7 = *(CPaneContainer **)(this + 0x14);
    if (pCVar7 == (CPaneContainer *)0x0) {
      if (*(int *)(this + 8) != 0) {
        local_5c = (CRecentDockSiteInfo *)0x0;
        pcVar1 = *(code **)(*(int *)local_64 + 0x34c);
        guard_check_icall(*(undefined4 *)(this + 8),2,1,&local_5c);
        (*pcVar1)();
        if (local_5c == (CRecentDockSiteInfo *)0x0) goto LAB_1012dd9e;
        if (*(int *)(this + 8) == 0) {
          FUN_101335a9(local_5c);
          *(CRecentDockSiteInfo **)(this + 8) = local_5c;
          goto LAB_1012dd9e;
        }
        uVar10 = *(undefined4 *)(this + 8);
        goto LAB_1012d9a2;
      }
      *(CDockablePane **)(this + 8) = local_64;
      iVar2 = *(int *)(this + 4);
      if ((iVar2 != 0) || (local_5c = (CRecentDockSiteInfo *)0x0, *(int *)(this + 0x10) != 0)) {
        local_5c = (CRecentDockSiteInfo *)0x1;
      }
      if (iVar2 == 0) {
        if (*(int **)(this + 0x10) != (int *)0x0) {
          pcVar1 = *(code **)(**(int **)(this + 0x10) + 0xc);
          guard_check_icall(&local_48,0);
          (*pcVar1)();
        }
      }
      else {
        ::GetWindowRect(*(HWND *)(iVar2 + 0x20),&local_48);
      }
      CWnd::ScreenToClient(local_70,&local_48);
      if (*(int *)(this + 0xc) != 0) {
        iVar2 = IsPaneDividerHorz(this);
        if (iVar2 == 0) {
          local_38.right = local_28.left;
          local_48.right = local_28.left - *(int *)(*(int *)(this + 0xc) + 0x118);
          local_38.left = local_48.right;
        }
        else {
          local_38.bottom = local_28.top;
          local_48.bottom = local_28.top - *(int *)(*(int *)(this + 0xc) + 0x118);
          local_38.top = local_48.bottom;
        }
      }
      piVar8 = *(int **)(this + 4);
      if (piVar8 != (int *)0x0) goto LAB_1012da6c;
      local_74 = *(int **)(this + 0x10);
      if (local_74 != (int *)0x0) {
        iVar2 = *local_74;
        guard_check_icall(local_48.left,local_48.top,local_48.right,local_48.bottom,&local_60,0);
        goto LAB_1012dbe9;
      }
      goto LAB_1012dbf1;
    }
  }
  else {
    pCVar7 = *(CPaneContainer **)(this + 0x10);
    if (pCVar7 == (CPaneContainer *)0x0) {
      if (*(int *)(this + 4) != 0) {
        local_5c = (CRecentDockSiteInfo *)0x0;
        pcVar1 = *(code **)(*(int *)local_64 + 0x34c);
        guard_check_icall(*(undefined4 *)(this + 4),2,1,&local_5c);
        (*pcVar1)();
        if (local_5c == (CRecentDockSiteInfo *)0x0) goto LAB_1012dd9e;
        if (*(int *)(this + 4) == 0) {
          FUN_101335a9(local_5c);
          *(CRecentDockSiteInfo **)(this + 4) = local_5c;
          goto LAB_1012dd9e;
        }
        uVar10 = *(undefined4 *)(this + 4);
LAB_1012d9a2:
        pcVar1 = *(code **)(**(int **)(this + 0x1c) + 0x40);
        guard_check_icall(uVar10);
        (*pcVar1)();
        goto LAB_1012dd9e;
      }
      *(CDockablePane **)(this + 4) = local_64;
      iVar2 = *(int *)(this + 8);
      if ((iVar2 != 0) || (local_5c = (CRecentDockSiteInfo *)0x0, *(int *)(this + 0x14) != 0)) {
        local_5c = (CRecentDockSiteInfo *)0x1;
      }
      if (iVar2 == 0) {
        if (*(int **)(this + 0x14) != (int *)0x0) {
          pcVar1 = *(code **)(**(int **)(this + 0x14) + 0xc);
          guard_check_icall(&local_48,0);
          (*pcVar1)();
        }
      }
      else {
        ::GetWindowRect(*(HWND *)(iVar2 + 0x20),&local_48);
      }
      CWnd::ScreenToClient(local_70,&local_48);
      if (*(int *)(this + 0xc) != 0) {
        iVar2 = IsPaneDividerHorz(this);
        if (iVar2 == 0) {
          local_38.left = local_28.right;
          local_48.left = *(int *)(*(int *)(this + 0xc) + 0x118) + local_28.right;
          local_38.right = local_48.left;
        }
        else {
          local_38.top = local_28.bottom;
          local_48.top = *(int *)(*(int *)(this + 0xc) + 0x118) + local_28.bottom;
          local_38.bottom = local_48.top;
        }
      }
      piVar8 = *(int **)(this + 8);
      if (piVar8 == (int *)0x0) {
        local_74 = *(int **)(this + 0x14);
        if (local_74 != (int *)0x0) {
          iVar2 = *local_74;
          guard_check_icall(local_48.left,local_48.top,local_48.right,local_48.bottom,&local_60,0);
LAB_1012dbe9:
          (**(code **)(iVar2 + 0x48))();
          this = local_78;
        }
      }
      else {
LAB_1012da6c:
        pcVar1 = *(code **)(*piVar8 + 0x234);
        guard_check_icall(&local_48,0,local_60);
        local_60 = (HDWP)(*pcVar1)();
      }
LAB_1012dbf1:
      if (*(int **)(this + 0xc) != (int *)0x0) {
        if (local_5c == (CRecentDockSiteInfo *)0x0) {
          FUN_10132789(0);
        }
        else {
          pcVar1 = *(code **)(**(int **)(this + 0xc) + 0x234);
          guard_check_icall(&local_38,0,local_60);
          local_60 = (HDWP)(*pcVar1)();
        }
      }
      UnionRect(&local_18,&local_28,&local_48);
      CWnd::ClientToScreen(local_70,&local_18);
      if (((local_80 != 0) && (local_7c != (CPaneContainer *)0x0)) &&
         (piVar8 = *(int **)(local_7c + 0xc), piVar8 != (int *)0x0)) {
        iVar2 = *(int *)(local_7c + 0x14);
        if ((*(int *)(local_7c + 0x10) == 0) || (iVar5 = FUN_1012e9c0(this,3), iVar5 == 0)) {
          if ((iVar2 == 0) || (iVar2 = FUN_1012e9c0(this,3), iVar2 == 0)) goto LAB_1012dd9e;
          pCVar7 = (CPaneContainer *)0x0;
        }
        else {
          pCVar7 = (CPaneContainer *)0x1;
        }
        local_78 = pCVar7;
        ::GetWindowRect((HWND)piVar8[8],&local_38);
        local_80 = piVar8[0x46];
        pcVar1 = *(code **)(*piVar8 + 0x164);
        if (pCVar7 == (CPaneContainer *)0x0) {
          guard_check_icall();
          iVar2 = (*pcVar1)();
          if (iVar2 == 0) {
            local_38.right = local_18.left;
            local_38.left = local_18.left - piVar8[0x46];
            iVar2 = local_6c;
          }
          else {
            local_38.bottom = local_18.top;
            local_38.top = local_18.top - piVar8[0x46];
            iVar2 = local_68;
          }
          pCVar9 = (CRecentDockSiteInfo *)-(piVar8[0x46] + iVar2);
          local_5c = pCVar9;
        }
        else {
          guard_check_icall();
          iVar2 = (*pcVar1)();
          if (iVar2 == 0) {
            local_38.left = local_18.right;
            local_38.right = piVar8[0x46] + local_18.right;
            iVar2 = local_6c;
          }
          else {
            local_38.top = local_18.bottom;
            local_38.bottom = piVar8[0x46] + local_18.bottom;
            iVar2 = local_68;
          }
          pCVar9 = (CRecentDockSiteInfo *)(local_80 + iVar2);
        }
        CWnd::ScreenToClient(local_70,&local_38);
        if (*(int **)(this + 0xc) != (int *)0x0) {
          pcVar1 = *(code **)(**(int **)(this + 0xc) + 0x234);
          guard_check_icall(&local_38,0,local_60);
          local_60 = (HDWP)(*pcVar1)();
        }
        iVar2 = *(int *)local_7c;
        guard_check_icall(pCVar9,(uint)local_78 ^ 1,&local_60);
        (**(code **)(iVar2 + 0x4c))();
      }
      EndDeferWindowPos(local_60);
      goto LAB_1012dd9e;
    }
  }
  AddPane(pCVar7,local_64);
LAB_1012dd9e:
  pCVar6 = (CDockablePane *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar6;
}

