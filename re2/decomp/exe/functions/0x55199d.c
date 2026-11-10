// rea decompile_all
// name: CMFCTasksPane::ReposTasks
// address: 0x55199d
// body: available
// range: 0x55199d-0x5526aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x551af2 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCTasksPane::ReposTasks(int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCTasksPane::ReposTasks(CMFCTasksPane *this,int param_1)

{
  code *pcVar1;
  CWnd *pCVar2;
  AFX_GLOBAL_DATA *pAVar3;
  CMFCVisualManager *pCVar4;
  int *piVar5;
  __POSITION *p_Var6;
  CPen *pCVar7;
  int iVar8;
  RECT *pRVar9;
  BOOL BVar10;
  int iVar11;
  RECT *pRVar12;
  int iVar13;
  int iVar14;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_130 [4];
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  RECT *local_e4;
  int local_e0;
  int local_dc;
  CPen *local_d8;
  int local_d4 [2];
  HDC local_cc;
  int local_c0;
  int local_bc;
  CMFCTasksPane *local_b8;
  int local_b4;
  int local_b0;
  RECT *local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  RECT *local_9c;
  CWnd *local_98;
  int local_94;
  tagRECT local_90;
  tagTEXTMETRICW local_80;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x120;
  local_8 = 0x5519ac;
  local_b8 = this;
  pAVar3 = GetGlobalData();
  if (*(int *)(pAVar3 + 0x180) != 0) {
    *(undefined4 *)(this + 0x378) = 0;
  }
  if ((((this != (CMFCTasksPane *)0x0) && (*(int *)(this + 0x20) != 0)) &&
      (*(int *)(this + 0x48c) != 0)) &&
     ((-1 < *(int *)(this + 0x448) && (*(int *)(this + 0x448) < *(int *)(this + 0x450))))) {
    iVar13 = *(int *)(this + 0x444);
    if ((-1 < iVar13) && (iVar13 < *(int *)(this + 0x44c))) {
      local_90.left = *(LONG *)(this + 0x444);
      local_90.top = *(LONG *)(this + 0x448);
      local_90.right = *(LONG *)(this + 0x44c);
      local_90.bottom = *(LONG *)(this + 0x450);
      iVar13 = *(int *)(this + 0x3ac);
      if (iVar13 == -1) {
        pCVar4 = CMFCVisualManager::GetInstance();
        iVar13 = *(int *)(pCVar4 + 0x80);
      }
      iVar8 = *(int *)(this + 0x3b0);
      if (iVar8 == -1) {
        pCVar4 = CMFCVisualManager::GetInstance();
        iVar8 = *(int *)(pCVar4 + 0x84);
      }
      InflateRect(&local_90,-iVar8,-iVar13);
      CClientDC::CClientDC((CClientDC *)local_d4,(CWnd *)this);
      local_8 = 0;
      local_d8 = CDC::SelectObject((CDC *)local_d4,(CPen *)(this + 0x3dc));
      GetTextMetricsW(local_cc,&local_80);
      if (local_80.tmHeight <= *(int *)(this + 0x3f8)) {
        local_80.tmHeight = *(int *)(this + 0x3f8);
      }
      *(undefined4 *)(this + 0x3a8) = 0;
      *(LONG *)(this + 0x3a4) = local_80.tmHeight;
      iVar13 = local_90.top - *(int *)(this + 0x398) * local_80.tmHeight;
      local_94 = iVar13;
      piVar5 = (int *)FUN_004ab4cd(*(undefined4 *)(this + 0x38c));
      p_Var6 = CObList::FindIndex((CObList *)(this + 0x464),*piVar5);
      if (p_Var6 == (__POSITION *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00429127();
      }
      local_c0 = *(int *)(p_Var6 + 8);
      local_b4 = *(int *)(this + 0x484);
      while (local_b4 != 0) {
        piVar5 = (int *)FUN_004ead48(&local_b4);
        iVar8 = *piVar5;
        local_b0 = iVar8;
        if (*(int *)(iVar8 + 4) == local_c0) {
          CDC::SelectObject((CDC *)local_d4,(CPen *)(this + 0x3dc));
          local_98 = (CWnd *)(iVar8 + 8);
          if (*(int *)(*(int *)local_98 + -0xc) == 0) {
            pRVar12 = (RECT *)0x0;
          }
          else {
            pAVar3 = GetGlobalData();
            pCVar7 = CDC::SelectObject((CDC *)local_d4,(CPen *)(pAVar3 + 300));
            CDC::GetTextExtent((CDC *)local_d4,local_130);
            CDC::SelectObject((CDC *)local_d4,pCVar7);
            local_a0 = *(int *)(this + 0x3c0);
            if (local_a0 == -1) {
              pCVar4 = CMFCVisualManager::GetInstance();
              local_a0 = *(int *)(pCVar4 + 0x94);
            }
            local_9c = *(RECT **)(this + 0x3b8);
            if (local_9c == (RECT *)0xffffffff) {
              pCVar4 = CMFCVisualManager::GetInstance();
              local_9c = *(RECT **)(pCVar4 + 0x8c);
            }
            pcVar1 = *(code **)(*(int *)this + 0x3c4);
            guard_check_icall();
            iVar8 = (*pcVar1)();
            if (iVar8 != 0) {
              if (local_a0 < 5) {
                local_a0 = 5;
              }
              if (*(int *)(this + 0x3b8) == -1) {
                local_9c = (RECT *)0x12;
              }
            }
            pRVar12 = (RECT *)(local_a0 + local_12c);
            iVar8 = local_b0;
            if (local_a0 + local_12c <= (int)local_9c) {
              pRVar12 = local_9c;
            }
          }
          if (((*(int *)(iVar8 + 0x5c) != 0) &&
              (*(int *)(iVar8 + 0x54) < (local_90.right - local_90.left) - (int)pRVar12)) &&
             ((int)pRVar12 < *(int *)(iVar8 + 0x58))) {
            iVar13 = iVar13 + (*(int *)(iVar8 + 0x58) - (int)pRVar12);
            local_94 = iVar13;
          }
          iVar14 = iVar13;
          if (param_1 == 0) {
            local_f8 = local_90.left;
            local_ec = (int)pRVar12 + iVar13;
            local_f0 = local_90.right;
            *(LONG *)(iVar8 + 0x34) = local_90.left;
            *(int *)(iVar8 + 0x38) = iVar13;
            *(LONG *)(iVar8 + 0x3c) = local_90.right;
            *(int *)(iVar8 + 0x40) = local_ec;
            iVar8 = local_b0;
            iVar14 = local_94;
            local_f4 = iVar13;
          }
          iVar14 = iVar14 + (int)pRVar12;
          local_a4 = iVar14;
          local_94 = iVar14;
          SetFont(this,(CDC *)local_d4);
          if ((((*(int *)(this + 0x368) == 0) || (*(int *)(iVar8 + 0x30) == 0)) ||
              (*(int *)(*(int *)(iVar8 + 8) + -0xc) == 0)) ||
             (((*(int *)(this + 0x378) != 0 && (iVar8 == *(int *)(this + 0x544))) &&
              ((0 < *(int *)(this + 0x410) && (param_1 == 0)))))) {
            local_9c = (RECT *)0x1;
            local_a0 = 1;
            pcVar1 = *(code **)(*(int *)this + 0x3d8);
            guard_check_icall(&local_e0);
            (*pcVar1)();
            local_98 = *(CWnd **)(local_b0 + 0x10);
            while (iVar13 = iVar14, local_98 != (CWnd *)0x0) {
              piVar5 = (int *)FUN_004ead48(&local_98);
              iVar8 = *piVar5;
              local_a8 = iVar8;
              if (*(int *)(iVar8 + 0x2c) == 0) {
                if (*(int *)(iVar8 + 0x34) == 0) {
                  if (param_1 == 0) {
                    SetRectEmpty((LPRECT)(iVar8 + 0xc));
                  }
                  goto LAB_005520db;
                }
                if (local_9c != (RECT *)0x0) {
                  iVar14 = *(int *)(this + 0x3cc);
                  if (iVar14 == -1) {
                    pCVar4 = CMFCVisualManager::GetInstance();
                    iVar14 = *(int *)(pCVar4 + 0xa0);
                  }
                  iVar13 = iVar13 + iVar14;
                  local_94 = iVar13;
                }
                local_a0 = *(int *)(this + 0x3c4);
                if (local_a0 == -1) {
                  pCVar4 = CMFCVisualManager::GetInstance();
                  local_a0 = *(int *)(pCVar4 + 0x98);
                }
                local_9c = *(RECT **)(this + 0x3c8);
                if (local_9c == (RECT *)0xffffffff) {
                  pCVar4 = CMFCVisualManager::GetInstance();
                  local_9c = *(RECT **)(pCVar4 + 0x9c);
                }
                if (*(int *)(iVar8 + 0x24) == 0) {
                  iVar8 = *(int *)(this + 0x388);
                }
                else {
                  iVar8 = *(int *)(this + 900);
                }
                if (iVar8 == 0) {
                  pAVar3 = GetGlobalData();
                  pCVar7 = CDC::SelectObject((CDC *)local_d4,(CPen *)(pAVar3 + 0x13c));
                  CDC::GetTextExtent((CDC *)local_d4,
                                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                      *)&local_e8);
                  CDC::SelectObject((CDC *)local_d4,pCVar7);
                  local_ac = local_e4;
                  if ((int)local_e4 <= (int)*(RECT **)(this + 0x3f8)) {
                    local_ac = *(RECT **)(this + 0x3f8);
                  }
                  if ((*(int *)(local_a8 + 0x3c) != 0) && ((int)local_ac < 0xb)) {
                    local_ac = (RECT *)0xa;
                  }
                  pRVar12 = local_ac;
                  iVar8 = iVar13;
                  if (param_1 == 0) {
                    local_118 = local_a0 + local_90.left;
                    local_110 = *(int *)(this + 0x3f4) + local_e8 + (int)local_9c + local_a0 +
                                local_90.left;
                    local_10c = (int)&local_ac->left + iVar13;
                    *(int *)(local_a8 + 0xc) = local_118;
                    *(int *)(local_a8 + 0x10) = iVar13;
                    *(int *)(local_a8 + 0x14) = local_110;
                    *(int *)(local_a8 + 0x18) = local_10c;
                    iVar8 = *(int *)(local_a8 + 0xc);
                    if (*(int *)(local_a8 + 0xc) <= local_90.right - local_a0) {
                      iVar8 = local_90.right - local_a0;
                    }
                    *(int *)(local_a8 + 0x14) = iVar8;
                    iVar8 = local_94;
                    local_114 = iVar13;
                  }
                  iVar13 = *(int *)(this + 0x3cc);
                  if (iVar13 == -1) {
                    pCVar4 = CMFCVisualManager::GetInstance();
                    iVar13 = *(int *)(pCVar4 + 0xa0);
                  }
                }
                else {
                  local_24.left = local_90.left;
                  local_24.top = local_90.top;
                  local_24.right = local_90.right;
                  local_24.bottom = local_90.bottom;
                  InflateRect(&local_24,-local_a0,0);
                  iStack_38 = *(int *)(this + 0x3f8) + local_94;
                  local_24.top = local_94;
                  local_44 = *(int *)(this + 0x3f4) + local_24.left + (int)local_9c;
                  iStack_40 = local_94;
                  iStack_3c = local_24.right;
                  local_24.bottom = iStack_38;
                  pAVar3 = GetGlobalData();
                  pCVar7 = CDC::SelectObject((CDC *)local_d4,(CPen *)(pAVar3 + 0x13c));
                  pcVar1 = *(code **)(local_d4[0] + 0x68);
                  guard_check_icall(*(int *)(local_a8 + 8),
                                    *(undefined4 *)(*(int *)(local_a8 + 8) + -0xc),&local_44,0x410);
                  pRVar12 = (RECT *)(*pcVar1)();
                  local_9c = pRVar12;
                  CDC::SelectObject((CDC *)local_d4,pCVar7);
                  if ((*(int *)(local_a8 + 0x3c) != 0) && ((int)pRVar12 < 0xb)) {
                    pRVar12 = (RECT *)0xa;
                    local_9c = (RECT *)0xa;
                  }
                  pRVar9 = *(RECT **)(this + 0x3f8);
                  if ((int)pRVar12 <= (int)pRVar9) {
                    pRVar12 = pRVar9;
                    local_9c = pRVar9;
                  }
                  local_24.bottom = (int)&pRVar12->left + local_24.top;
                  if (param_1 == 0) {
                    *(LONG *)(local_a8 + 0xc) = local_24.left;
                    *(LONG *)(local_a8 + 0x10) = local_24.top;
                    *(LONG *)(local_a8 + 0x14) = local_24.right;
                    *(LONG *)(local_a8 + 0x18) = local_24.bottom;
                    pRVar12 = local_9c;
                  }
                  iVar13 = *(int *)(this + 0x3cc);
                  iVar8 = local_94;
                  if (iVar13 == -1) {
                    pCVar4 = CMFCVisualManager::GetInstance();
                    iVar13 = *(int *)(pCVar4 + 0xa0);
                    iVar8 = local_94;
                  }
                }
                local_a0 = 0;
                iVar13 = (int)&pRVar12->left + iVar8 + iVar13;
                local_9c = (RECT *)0x0;
                iVar8 = local_a8;
                local_94 = iVar13;
              }
              else {
                if ((local_9c != (RECT *)0x0) && (*(int *)(iVar8 + 0x34) != 0)) {
                  iVar14 = local_dc;
                  if ((*(int *)(this + 0x37c) != 0) &&
                     (iVar14 = *(int *)(this + 0x3cc), iVar14 == -1)) {
                    pCVar4 = CMFCVisualManager::GetInstance();
                    iVar14 = *(int *)(pCVar4 + 0xa0);
                  }
                  iVar13 = iVar13 + iVar14;
                  local_94 = iVar13;
                }
                CWnd::FromHandle(*(HWND__ **)(iVar8 + 0x2c));
                iVar14 = local_a8;
                if (param_1 == 0) {
                  local_34.left = local_90.left;
                  local_34.right = local_90.right;
                  if (*(int *)(local_a8 + 0x34) == 0) {
                    local_34.bottom = 0;
                  }
                  else {
                    local_34.bottom = *(int *)(local_a8 + 0x20);
                  }
                  local_34.bottom = local_34.bottom + local_94;
                  local_34.top = *(int *)(this + 0x448) + 1;
                  if (*(int *)(this + 0x448) + 1 <= local_94) {
                    local_34.top = local_94;
                  }
                  local_bc = (*(int *)(local_a8 + 0x20) - local_34.bottom) + local_34.top;
                  if (*(int *)(this + 0x450) < local_34.bottom) {
                    local_34.bottom = *(int *)(this + 0x450);
                  }
                  iVar13 = local_e0;
                  if ((*(int *)(this + 0x37c) != 0) &&
                     (iVar13 = *(int *)(this + 0x3c4), *(int *)(this + 0x3c4) == -1)) {
                    pCVar4 = CMFCVisualManager::GetInstance();
                    iVar13 = *(int *)(pCVar4 + 0x98);
                  }
                  InflateRect(&local_34,-iVar13,0);
                  local_ac = (RECT *)(iVar14 + 0xc);
                  local_ac->left = local_34.left;
                  *(LONG *)(iVar14 + 0x10) = local_34.top;
                  *(LONG *)(iVar14 + 0x14) = local_34.right;
                  *(LONG *)(iVar14 + 0x18) = local_34.bottom;
                  pcVar1 = *(code **)(*(int *)this + 0x3c4);
                  guard_check_icall();
                  iVar14 = (*pcVar1)();
                  iVar8 = local_a8;
                  iVar13 = local_94;
                  if (iVar14 != 0) {
                    BVar10 = IsRectEmpty(local_ac);
                    pcVar1 = *(code **)(*(int *)this + 0x3dc);
                    iVar13 = local_bc;
                    if (BVar10 != 0) {
                      iVar13 = 0;
                    }
                    guard_check_icall(*(undefined4 *)(local_a8 + 0x2c),iVar13);
                    (*pcVar1)();
                    iVar8 = local_a8;
                    iVar13 = local_94;
                  }
                }
                if (*(int *)(iVar8 + 0x34) != 0) {
                  iVar13 = iVar13 + *(int *)(iVar8 + 0x20);
                  local_9c = (RECT *)0x1;
                  local_a0 = 1;
                  local_94 = iVar13;
                }
LAB_005520db:
                if ((local_a0 != 0) && (*(int *)(iVar8 + 0x34) != 0)) {
                  if (*(int *)(this + 0x37c) == 0) {
                    iVar13 = iVar13 + local_dc;
                    local_94 = iVar13;
                  }
                  else {
                    iVar14 = *(int *)(this + 0x3cc);
                    if (iVar14 == -1) {
                      pCVar4 = CMFCVisualManager::GetInstance();
                      iVar14 = *(int *)(pCVar4 + 0xa0);
                    }
                    iVar13 = iVar13 + iVar14;
                    local_94 = iVar13;
                  }
                }
              }
              iVar14 = iVar13;
              if ((((param_1 == 0) && (*(int *)(this + 0x378) != 0)) &&
                  (local_b0 == *(int *)(this + 0x544))) &&
                 (iVar11 = *(int *)(this + 0x410), local_a4 + iVar11 < iVar13)) {
                if (iVar11 < 0) {
                  iVar11 = 0;
                }
                local_94 = local_a4 + iVar11;
                pRVar12 = (RECT *)(local_94 + -1);
                local_ac = pRVar12;
                if (*(int *)(iVar8 + 0x18) < (int)pRVar12) {
                  local_ac = *(RECT **)(iVar8 + 0x18);
                }
                pRVar9 = *(RECT **)(iVar8 + 0x10);
                if (((int)*(RECT **)(iVar8 + 0x10) <= (int)local_ac) &&
                   (pRVar9 = pRVar12, *(int *)(iVar8 + 0x18) < (int)pRVar12)) {
                  pRVar9 = *(RECT **)(iVar8 + 0x18);
                }
                *(RECT **)(iVar8 + 0x18) = pRVar9;
                *(int *)(this + 0x3a8) = *(int *)(this + 0x3a8) + (iVar13 - local_94);
                iVar14 = local_94;
                local_bc = iVar13;
              }
            }
            local_98 = (CWnd *)0x0;
            if (param_1 == 0) {
              *(LONG *)(local_b0 + 0x44) = local_90.left;
              *(int *)(local_b0 + 0x48) = local_a4;
              *(LONG *)(local_b0 + 0x4c) = local_90.right;
              *(int *)(local_b0 + 0x50) = iVar13;
              local_128 = local_90.left;
              local_124 = local_a4;
              local_120 = local_90.right;
              local_11c = iVar13;
            }
          }
          else if (param_1 == 0) {
            local_104 = iVar14 + -1;
            *(LONG *)(iVar8 + 0x44) = local_90.left;
            local_a4 = *(int *)(local_b0 + 0x10);
            *(int *)(iVar8 + 0x48) = local_104;
            *(LONG *)(iVar8 + 0x4c) = local_90.right;
            *(int *)(iVar8 + 0x50) = local_104;
            local_fc = local_104;
            local_108 = local_90.left;
            local_100 = local_90.right;
            while (local_a4 != 0) {
              piVar5 = (int *)FUN_004ead48(&local_a4);
              if (*(int *)(*piVar5 + 0x2c) == 0) {
                SetRectEmpty((LPRECT)(*piVar5 + 0xc));
              }
            }
          }
          iVar13 = *(int *)(this + 0x3b4);
          if (iVar13 == -1) {
            pCVar4 = CMFCVisualManager::GetInstance();
            iVar13 = *(int *)(pCVar4 + 0x88);
          }
          iVar13 = local_94 + iVar13;
          local_94 = iVar13;
        }
      }
      local_b4 = 0;
      if (param_1 == 0) {
        local_98 = *(CWnd **)(this + 0x488);
        local_b4 = 0;
        do {
          if (local_98 == (CWnd *)0x0) goto LAB_005524cc;
          piVar5 = (int *)FUN_00434304(&local_98);
          iVar13 = *piVar5;
        } while (*(int *)(iVar13 + 4) != local_c0);
        if (((*(int *)(iVar13 + 0x28) != 0) && (*(int *)(iVar13 + 0x18) != 0)) &&
           (*(int *)(this + 0x39c) == 0)) {
          local_98 = *(CWnd **)(iVar13 + 0x14);
          do {
            if (local_98 == (CWnd *)0x0) goto LAB_005524cc;
            piVar5 = (int *)FUN_00434304(&local_98);
          } while (*(int *)(*piVar5 + 0x34) == 0);
          iVar8 = local_90.bottom - *(int *)(iVar13 + 0x50);
          local_a4 = iVar8;
          if (0 < iVar8) {
            local_98 = *(CWnd **)(iVar13 + 0x10);
            while (local_98 != (CWnd *)0x0) {
              piVar5 = (int *)FUN_004ead48(&local_98);
              this = local_b8;
              if (*(int *)(*piVar5 + 0x34) != 0) {
                OffsetRect((LPRECT)(*piVar5 + 0xc),0,iVar8);
                this = local_b8;
              }
            }
            OffsetRect((LPRECT)(iVar13 + 0x34),0,local_a4);
            OffsetRect((LPRECT)(iVar13 + 0x44),0,local_a4);
          }
        }
LAB_005524cc:
        local_b4 = *(int *)(this + 0x484);
        pRVar12 = local_ac;
        while (local_ac = pRVar12, local_b4 != 0) {
          piVar5 = (int *)FUN_004ead48(&local_b4);
          iVar13 = *piVar5;
          pRVar12 = local_ac;
          if (*(int *)(iVar13 + 4) == local_c0) {
            if (((*(int *)(this + 0x368) == 0) || (*(int *)(iVar13 + 0x30) == 0)) ||
               (local_a4 = 1, *(int *)(*(int *)(iVar13 + 8) + -0xc) == 0)) {
              local_a4 = 0;
            }
            iVar8 = local_a4;
            if (((*(int *)(this + 0x378) == 0) || (iVar13 != *(int *)(this + 0x544))) ||
               (local_98 = (CWnd *)0x1, *(int *)(this + 0x410) < 1)) {
              local_98 = (CWnd *)0x0;
            }
            pCVar2 = local_98;
            local_ac = *(RECT **)(iVar13 + 0x10);
            pRVar12 = (RECT *)0x0;
            if (local_ac != (RECT *)0x0) {
              local_9c = (RECT *)(iVar13 + 0xc);
              do {
                piVar5 = (int *)FUN_004ead48(&local_ac);
                iVar13 = *piVar5;
                local_bc = iVar13;
                if (*(int *)(iVar13 + 0x2c) != 0) {
                  local_98 = CWnd::FromHandle(*(HWND__ **)(iVar13 + 0x2c));
                  if (((iVar8 == 0) || (pCVar2 != (CWnd *)0x0)) && (*(int *)(iVar13 + 0x34) != 0)) {
                    pRVar12 = (RECT *)(iVar13 + 0xc);
                    BVar10 = IsRectEmpty(pRVar12);
                    if (BVar10 != 0) goto LAB_005525f7;
                    CWnd::SetWindowPos(local_98,(CWnd *)0x0,pRVar12->left,*(int *)(local_bc + 0x10),
                                       *(int *)(iVar13 + 0x14) - pRVar12->left,
                                       *(int *)(iVar13 + 0x18) - *(int *)(iVar13 + 0x10),0x14);
                    iVar13 = 4;
                  }
                  else {
LAB_005525f7:
                    iVar13 = 0;
                  }
                  CWnd::ShowWindow(local_98,iVar13);
                }
                this = local_b8;
                pRVar12 = (RECT *)0x0;
              } while (local_ac != (RECT *)0x0);
            }
          }
        }
      }
      CDC::SelectObject((CDC *)local_d4,local_d8);
      local_b8 = *(CMFCTasksPane **)(this + 0x3b4);
      if (local_b8 == (CMFCTasksPane *)0xffffffff) {
        pCVar4 = CMFCVisualManager::GetInstance();
        local_b8 = *(CMFCTasksPane **)(pCVar4 + 0x88);
      }
      if (*(int *)(this + 0x3ac) == -1) {
        CMFCVisualManager::GetInstance();
      }
      CClientDC::~CClientDC((CClientDC *)local_d4);
    }
  }
  iVar13 = FUN_0055bae6();
  return iVar13;
}

