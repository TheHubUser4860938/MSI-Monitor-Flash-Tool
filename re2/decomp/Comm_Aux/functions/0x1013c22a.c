// rea decompile_all
// name: FUN_1013c22a
// address: 0x1013c22a
// body: available
// range: 0x1013c22a-0x1013c773 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1013c76f to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1013c22a(int *param_1,int param_2,int param_3)

{
  code *pcVar1;
  BOOL BVar2;
  CFrameWnd *pCVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  CBasePane *in_ECX;
  int iVar7;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int *local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  CControlBar *local_5c;
  HDWP local_58 [8];
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_74 = param_1;
  if (in_ECX == (CBasePane *)0x0) {
LAB_1013c76f:
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  CBasePane::CalcFixedLayout(in_ECX,(int)param_1,param_2);
  BVar2 = IsRectEmpty((RECT *)(in_ECX + 0xe4));
  if (BVar2 == 0) {
    local_28.left = ((RECT *)(in_ECX + 0xe4))->left;
    local_28.top = *(LONG *)(in_ECX + 0xe8);
    local_28.right = *(LONG *)(in_ECX + 0xec);
    local_28.bottom = *(LONG *)(in_ECX + 0xf0);
    pcVar1 = *(code **)(*(int *)in_ECX + 0x170);
    guard_check_icall(&local_28,param_3);
    (*pcVar1)();
  }
  else {
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    pCVar3 = CWnd::GetParentFrame((CWnd *)in_ECX);
    if (pCVar3 == (CFrameWnd *)0x0) goto LAB_1013c76f;
    GetClientRect(*(HWND *)(pCVar3 + 0x20),&local_28);
  }
  local_78 = local_28.right - local_28.left;
  local_7c = local_28.bottom - local_28.top;
  if (*(int *)(in_ECX + 0xe0) == 0) {
    local_58[0] = BeginDeferWindowPos(*(int *)(in_ECX + 0xd4));
  }
  else {
    local_58[0] = (HDWP)0x0;
  }
  iVar7 = -DAT_1020db30;
  local_68 = 0;
  local_6c = -DAT_1020db34;
  local_60 = 0;
  local_64 = 0;
  local_70 = iVar7;
  if (0 < *(int *)(in_ECX + 0xd4)) {
    do {
      iVar5 = local_6c;
      local_5c = CDockBar::GetDockedControlBar((CDockBar *)in_ECX,local_64);
      piVar4 = (int *)FUN_10151a1d(local_64);
      if (local_5c == (CControlBar *)0x0) {
        if (*piVar4 == 0) {
LAB_1013c652:
          if (local_68 != 0) {
            if (param_3 == 0) {
              iVar7 = iVar7 + (local_68 - DAT_1020db30);
              iVar6 = *local_74;
              if (*local_74 <= iVar7) {
                iVar6 = iVar7;
              }
              *local_74 = iVar6;
              iVar6 = local_74[1];
              if (local_74[1] <= iVar5) {
                iVar6 = iVar5;
              }
              local_74[1] = iVar6;
              local_6c = -DAT_1020db34;
            }
            else {
              local_6c = iVar5 + (local_68 - DAT_1020db34);
              iVar5 = *local_74;
              if (*local_74 <= iVar7) {
                iVar5 = iVar7;
              }
              *local_74 = iVar5;
              iVar7 = local_74[1];
              if (local_74[1] <= local_6c) {
                iVar7 = local_6c;
              }
              local_74[1] = iVar7;
              iVar7 = -DAT_1020db30;
            }
            local_68 = 0;
            local_70 = iVar7;
          }
        }
      }
      else {
        pcVar1 = *(code **)(*(int *)local_5c + 400);
        guard_check_icall();
        iVar5 = (*pcVar1)();
        if (iVar5 == 0) {
LAB_1013c627:
          if (local_60 != 0) goto LAB_1013c6bf;
        }
        else {
          if (((byte)*(uint *)(local_5c + 0xb0) & 5) == 5) {
            iVar5 = 6;
          }
          else {
            iVar5 = (-(uint)((*(uint *)(local_5c + 0xb0) & 0xa000) != 0) & 0xfffffffa) + 0x10;
          }
          pcVar1 = *(code **)(*(int *)local_5c + 0x168);
          guard_check_icall(&local_84,0xffffffff,iVar5);
          (*pcVar1)();
          iVar5 = local_6c;
          local_18.right = local_84 + iVar7;
          local_18.bottom = local_80 + local_6c;
          local_28.left = 0;
          local_28.top = 0;
          local_28.right = 0;
          local_28.bottom = 0;
          local_18.top = local_6c;
          local_18.left = iVar7;
          GetWindowRect(*(HWND *)(local_5c + 0x20),&local_28);
          CWnd::ScreenToClient((CWnd *)in_ECX,&local_28);
          if (param_3 == 0) {
            if ((local_18.top < local_28.top) && (*(int *)(in_ECX + 200) == 0)) {
              OffsetRect(&local_18,0,local_28.top - local_18.top);
            }
            if ((local_7c < local_18.bottom) && (*(int *)(in_ECX + 200) == 0)) {
              iVar6 = local_7c - ((local_18.bottom - local_18.top) - DAT_1020db34);
              if (iVar6 <= iVar5) {
                iVar6 = iVar5;
              }
              OffsetRect(&local_18,0,iVar6 - local_18.top);
            }
            if (local_60 == 0) {
              if (((local_7c - DAT_1020db34 <= local_18.top) && (0 < local_64)) &&
                 (piVar4 = (int *)FUN_10151a1d(local_64 + -1), *piVar4 != 0)) goto LAB_1013c4fc;
            }
            else {
              local_60 = 0;
              OffsetRect(&local_18,0,-(DAT_1020db34 + local_18.top));
            }
            BVar2 = EqualRect(&local_18,&local_28);
            if (BVar2 == 0) {
              if ((*(int *)(in_ECX + 0xe0) == 0) && (((byte)local_5c[0xb0] & 1) == 0)) {
                iVar7 = *(int *)(local_5c + 0xc0);
                *(LONG *)(iVar7 + 0x94) = local_18.left;
                *(LONG *)(iVar7 + 0x98) = local_18.top;
                *(LONG *)(iVar7 + 0x9c) = local_18.right;
                *(LONG *)(iVar7 + 0xa0) = local_18.bottom;
                iVar7 = local_70;
              }
              AfxRepositionWindow((AFX_SIZEPARENTPARAMS *)local_58,*(HWND__ **)(local_5c + 0x20),
                                  &local_18);
            }
            local_6c = (local_18.top - DAT_1020db34) + local_80;
            if (local_68 <= local_84) {
              local_68 = local_84;
              goto LAB_1013c627;
            }
          }
          else {
            if ((local_18.left < local_28.left) && (*(int *)(in_ECX + 200) == 0)) {
              OffsetRect(&local_18,local_28.left - local_18.left,0);
            }
            if ((local_78 < local_18.right) && (*(int *)(in_ECX + 200) == 0)) {
              iVar6 = local_78 - ((local_18.right - DAT_1020db30) - local_18.left);
              if (iVar6 <= iVar7) {
                iVar6 = iVar7;
              }
              OffsetRect(&local_18,iVar6 - local_18.left,0);
            }
            if (local_60 == 0) {
              if (((local_78 - DAT_1020db30 <= local_18.left) && (0 < local_64)) &&
                 (piVar4 = (int *)FUN_10151a1d(local_64 + -1), *piVar4 != 0)) {
LAB_1013c4fc:
                FUN_10067c9f(local_64,0,1);
                local_60 = 1;
                goto LAB_1013c652;
              }
            }
            else {
              local_60 = 0;
              OffsetRect(&local_18,-(DAT_1020db30 + local_18.left),0);
            }
            BVar2 = EqualRect(&local_18,&local_28);
            if (BVar2 == 0) {
              if ((*(int *)(in_ECX + 0xe0) == 0) && (((byte)local_5c[0xb0] & 1) == 0)) {
                iVar7 = *(int *)(local_5c + 0xc0);
                *(LONG *)(iVar7 + 0x94) = local_18.left;
                *(LONG *)(iVar7 + 0x98) = local_18.top;
                *(LONG *)(iVar7 + 0x9c) = local_18.right;
                *(LONG *)(iVar7 + 0xa0) = local_18.bottom;
              }
              AfxRepositionWindow((AFX_SIZEPARENTPARAMS *)local_58,*(HWND__ **)(local_5c + 0x20),
                                  &local_18);
            }
            iVar7 = (local_84 - DAT_1020db30) + local_18.left;
            local_70 = iVar7;
            if (local_68 <= local_80) {
              local_68 = local_80;
            }
          }
        }
        pcVar1 = *(code **)(*(int *)local_5c + 0x194);
        guard_check_icall(local_58);
        (*pcVar1)();
      }
LAB_1013c6bf:
      local_64 = local_64 + 1;
    } while (local_64 < *(int *)(in_ECX + 0xd4));
  }
  if ((*(int *)(in_ECX + 0xe0) == 0) && (local_58[0] != (HDWP)0x0)) {
    EndDeferWindowPos(local_58[0]);
  }
  local_38.left = 0;
  local_38.top = 0;
  local_38.right = 0;
  local_38.bottom = 0;
  SetRectEmpty(&local_38);
  pcVar1 = *(code **)(*(int *)in_ECX + 0x170);
  guard_check_icall(&local_38,param_3);
  (*pcVar1)();
  if (((param_2 == 0) || (param_3 == 0)) && (*local_74 != 0)) {
    *local_74 = (*local_74 - local_38.right) + local_38.left;
  }
  if (((param_2 == 0) || (param_3 != 0)) && (local_74[1] != 0)) {
    local_74[1] = (local_74[1] - local_38.bottom) + local_38.top;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

