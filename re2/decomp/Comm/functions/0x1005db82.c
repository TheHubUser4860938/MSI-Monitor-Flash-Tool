// rea decompile_all
// name: FUN_1005db82
// address: 0x1005db82
// body: available
// range: 0x1005db82-0x1005e4ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005e3f3 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_1005db82(CDC *param_1)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  CMFCVisualManager *pCVar5;
  AFX_GLOBAL_DATA *pAVar6;
  CMFCToolBarImages *pCVar7;
  double *pdVar8;
  int iVar9;
  CFont *pCVar10;
  BOOL BVar11;
  CWnd *in_ECX;
  CDC *this;
  undefined4 uVar12;
  undefined1 local_128 [12];
  uint local_11c;
  int local_114;
  undefined4 local_110;
  int local_10c;
  CMFCToolBarImages *local_108;
  CMFCToolBarImages *local_104;
  CMFCToolBar *local_100;
  CMFCToolBar *local_fc;
  undefined8 local_f8;
  int local_f0;
  CMFCToolBarImages *local_ec;
  uint local_e4;
  uint local_e0;
  double local_dc;
  int *local_d4;
  int *local_d0;
  CWnd *local_cc;
  CMFCToolBarImages *local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined8 local_bc;
  CDC *local_b4;
  CMemDC local_b0 [4];
  CDC *local_ac;
  int local_a8;
  CDC local_a0 [44];
  tagRECT local_74;
  tagRECT local_64;
  tagRECT local_54;
  RECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x118;
  local_8 = 0x1005db91;
  local_44.left = 0;
  local_44.top = 0;
  local_44.right = 0;
  local_44.bottom = 0;
  pcVar1 = *(code **)(*(int *)param_1 + 0x50);
  local_cc = in_ECX;
  guard_check_icall(&local_44);
  (*pcVar1)();
  pcVar1 = *(code **)(*(int *)in_ECX + 0x194);
  guard_check_icall();
  local_e0 = (*pcVar1)();
  local_e0 = local_e0 & 0xa000;
  local_11c = (uint)(local_e0 != 0);
  local_54.left = 0;
  local_54.top = 0;
  local_54.right = 0;
  local_54.bottom = 0;
  GetClientRect(*(HWND *)(in_ECX + 0x20),&local_54);
  CMemDC::CMemDC(local_b0,param_1,in_ECX);
  local_8 = 0;
  this = local_a0;
  if (local_a8 == 0) {
    this = local_ac;
  }
  local_b4 = this;
  uVar4 = CWnd::GetExStyle(in_ECX);
  if ((uVar4 & 0x8000) == 0) {
    pCVar5 = CMFCVisualManager::GetInstance();
    this = local_b4;
    local_bc = (double)CONCAT44(pCVar5,(int)local_bc);
    iVar9 = *(int *)pCVar5;
    guard_check_icall(local_b4,local_cc,local_54.left,local_54.top,local_54.right,local_54.bottom,
                      local_44.left,local_44.top,local_44.right,local_44.bottom,0);
    (**(code **)(iVar9 + 0x34))();
    in_ECX = local_cc;
  }
  else {
    CMFCControlBarImpl::GetBackgroundFromParent((CMFCControlBarImpl *)(in_ECX + 0xbe0),this);
  }
  pcVar1 = *(code **)(*(int *)in_ECX + 0x3a4);
  guard_check_icall(this);
  (*pcVar1)();
  iVar9 = *(int *)this;
  pAVar6 = GetGlobalData();
  uVar12 = *(undefined4 *)(pAVar6 + 0x28);
  guard_check_icall(uVar12);
  (**(code **)(iVar9 + 0x30))();
  CDC::SetBkMode(this,1);
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  GetClientRect(*(HWND *)(in_ECX + 0x20),&local_24);
  if (local_e0 == 0) {
    pcVar1 = *(code **)(*(int *)in_ECX + 0x358);
    guard_check_icall(uVar12);
    local_24.right = (*pcVar1)();
    local_24.right = local_24.right + local_24.left;
  }
  else {
    pcVar1 = *(code **)(*(int *)in_ECX + 0x354);
    guard_check_icall(uVar12);
    local_24.bottom = (*pcVar1)();
    local_24.bottom = local_24.bottom + local_24.top;
  }
  iVar9 = DAT_101daf60;
  if (*(int *)(in_ECX + 0xb78) != 0) {
    iVar9 = *(int *)(in_ECX + 0xc30);
  }
  local_dc = 1.0;
  if (iVar9 == 0) {
    pAVar6 = GetGlobalData();
    if (*(int *)(pAVar6 + 0x1e8) == 0) {
      local_dc = 1.0;
    }
    else {
      local_dc = *(double *)(pAVar6 + 0x1e0);
    }
  }
  pCVar7 = CMFCToolBar::GetImageList
                     ((CMFCToolBar *)in_ECX,(CMFCToolBarImages *)&DAT_101db088,
                      (CMFCToolBarImages *)(in_ECX + 0x2b8),(CMFCToolBarImages *)&DAT_101db600,
                      (CMFCToolBarImages *)(in_ECX + 0x600));
  local_108 = pCVar7;
  local_c8 = pCVar7;
  local_ec = CMFCToolBar::GetImageList
                       ((CMFCToolBar *)in_ECX,(CMFCToolBarImages *)&DAT_101db1a0,
                        (CMFCToolBarImages *)(in_ECX + 0x3d0),(CMFCToolBarImages *)&DAT_101db718,
                        (CMFCToolBarImages *)(in_ECX + 0x718));
  local_104 = CMFCToolBar::GetImageList
                        ((CMFCToolBar *)in_ECX,(CMFCToolBarImages *)&DAT_101db3d0,
                         (CMFCToolBarImages *)(in_ECX + 0x4e8),(CMFCToolBarImages *)&DAT_101db830,
                         (CMFCToolBarImages *)(in_ECX + 0x830));
  if (*(int *)(in_ECX + 0xb78) == 0) {
    local_100 = (CMFCToolBar *)&DAT_101db2b8;
    local_fc = (CMFCToolBar *)&DAT_101db4e8;
  }
  else {
    local_100 = (CMFCToolBar *)(in_ECX + 0x948);
    local_fc = (CMFCToolBar *)(in_ECX + 0xa60);
  }
  local_c4 = *(int *)(pCVar7 + 0x8c);
  pAVar6 = GetGlobalData();
  CMFCToolBarImages::SetTransparentColor(pCVar7,*(ulong *)(pAVar6 + 0x1c));
  pCVar5 = CMFCVisualManager::GetInstance();
  iVar9 = *(int *)(in_ECX + 0xbac);
  local_cc = (CWnd *)*(undefined4 *)(pCVar5 + 0x5c);
  if (iVar9 == 0) {
    pdVar8 = (double *)CMFCToolBar::GetImageSize((CMFCToolBar *)in_ECX);
  }
  else {
    local_110 = DAT_101d35f0;
    local_10c = DAT_101d35f4;
    pdVar8 = (double *)&local_110;
  }
  local_114 = *(int *)((int)pdVar8 + 4);
  local_f0 = *(int *)pdVar8;
  local_bc = *pdVar8;
  if (local_dc != 1.0) {
    if (((iVar9 != 0) && (*(int *)pdVar8 == -1)) && (local_114 == -1)) {
      pdVar8 = (double *)CMFCToolBar::GetImageSize((CMFCToolBar *)in_ECX);
      local_bc = *pdVar8;
      if ((1.0 < local_dc) && (*(int *)(in_ECX + 0xb7c) != 0)) {
        local_bc = (double)CONCAT44(DAT_101d35e4,DAT_101d35e0);
      }
    }
    local_f8 = (double)(int)local_bc;
    local_f0 = FUN_10149490();
    local_bc = (double)local_bc._4_4_;
    local_114 = FUN_10149490();
  }
  pCVar7 = local_c8;
  if (local_c4 != 0) {
    if ((local_dc != 1.0) && (*(double *)(local_c8 + 0xb8) == 1.0)) {
      FUN_10052724(local_dc);
    }
    iVar9 = CMFCToolBarImages::PrepareDrawImage(pCVar7,local_128,local_f0,local_114,local_cc);
    if (iVar9 == 0) goto LAB_1005e4d8;
  }
  if (local_e0 == 0) {
    iVar9 = *(int *)this;
    GetGlobalData();
    guard_check_icall();
    pCVar10 = (CFont *)(**(code **)(iVar9 + 0x28))();
  }
  else {
    pCVar10 = CBasePane::SelectDefaultFont((CBasePane *)in_ECX,this);
  }
  local_bc = (double)CONCAT44(pCVar10,(int)local_bc);
  if (0 < *(int *)(local_ec + 4)) {
    pCVar5 = CMFCVisualManager::GetInstance();
    *(undefined4 *)(pCVar5 + 0x5c) = 0;
  }
  local_d4 = *(int **)(in_ECX + 0xc40);
  local_f8 = (double)((ulonglong)local_f8 & 0xffffffff);
  while (local_d4 != (int *)0x0) {
    local_d0 = (int *)FUN_1002466e();
    local_d0 = (int *)*local_d0;
    if (local_d0 == (int *)0x0) break;
    local_24.left = local_d0[0x15];
    local_24.top = local_d0[0x16];
    local_24.right = local_d0[0x17];
    local_24.bottom = local_d0[0x18];
    local_64.left = 0;
    local_64.top = 0;
    local_64.right = 0;
    local_64.bottom = 0;
    if ((*(byte *)(local_d0 + 9) & 1) == 0) {
      BVar11 = IntersectRect(&local_64,&local_24,&local_44);
      this = local_b4;
      if (BVar11 != 0) {
        local_10c = CMFCToolBar::IsButtonHighlighted
                              ((CMFCToolBar *)in_ECX,(int)((ulonglong)local_f8 >> 0x20));
        this = local_b4;
        if (((local_d0[9] & 0x40000U) == 0) || (local_e4 = 1, DAT_101daf90 != 0)) {
          local_e4 = 0;
        }
        pcVar1 = *(code **)(*(int *)local_b4 + 0x58);
        guard_check_icall();
        iVar9 = (*pcVar1)();
        if (iVar9 != 0) {
          local_c0 = 0;
          if (local_c4 != 0) {
            if (local_d0[1] == 0) {
              if (*(int *)(in_ECX + 0xbac) == 0) {
                if ((local_e4 == 0) || (*(int *)(local_104 + 4) < 1)) {
                  bVar2 = false;
                  local_c0 = 0;
                  pCVar7 = local_108;
                }
                else {
                  bVar2 = true;
                  local_c0 = 1;
                  pCVar7 = local_104;
                }
                if ((((local_10c == 0) && (!bVar2)) && ((local_d0[9] & 0x20000U) == 0)) &&
                   (0 < *(int *)(local_ec + 4))) {
                  pcVar1 = *(code **)(*local_d0 + 0x70);
                  guard_check_icall();
                  iVar9 = (*pcVar1)();
                  if (iVar9 == 0) {
                    pCVar7 = local_ec;
                  }
                }
              }
              else if ((local_e4 == 0) || (*(int *)(local_fc + 4) < 1)) {
                pCVar7 = (CMFCToolBarImages *)local_100;
                if (*(int *)(local_100 + 4) < 1) {
                  if ((local_e4 == 0) || (*(int *)(local_104 + 4) < 1)) {
                    local_c0 = 0;
                    pCVar7 = local_108;
                  }
                  else {
                    local_c0 = 1;
                    pCVar7 = local_104;
                  }
                }
              }
              else {
                local_c0 = 1;
                pCVar7 = (CMFCToolBarImages *)local_fc;
              }
            }
            else {
              pCVar7 = (CMFCToolBarImages *)0x0;
              if (-1 < local_d0[0xe]) {
                pCVar7 = DAT_101daf80;
              }
            }
            this = local_b4;
            if (((local_c4 != 0) && (pCVar7 != local_c8)) && (pCVar7 != (CMFCToolBarImages *)0x0)) {
              FUN_10050819();
              pAVar6 = GetGlobalData();
              CMFCToolBarImages::SetTransparentColor(pCVar7,*(ulong *)(pAVar6 + 0x1c));
              if ((local_dc != 1.0) && (*(double *)(pCVar7 + 0xb8) == 1.0)) {
                FUN_10052724(local_dc);
              }
              CMFCToolBarImages::PrepareDrawImage(pCVar7,local_128,local_f0,local_114,local_cc);
              this = local_b4;
              local_c8 = pCVar7;
            }
          }
          pcVar1 = *(code **)(*(int *)in_ECX + 0x3bc);
          guard_check_icall(this,local_d0,-(uint)(local_c4 != 0) & (uint)local_c8,local_10c);
          (*pcVar1)();
        }
      }
    }
    else {
      local_e4 = local_11c;
      local_34.left = 0;
      local_34.top = 0;
      local_34.right = 0;
      local_34.bottom = 0;
      SetRectEmpty(&local_34);
      piVar3 = local_d0;
      pcVar1 = *(code **)(*(int *)in_ECX + 0x410);
      guard_check_icall(local_d0,&local_34);
      (*pcVar1)();
      BVar11 = IntersectRect(&local_64,&local_34,&local_44);
      this = local_b4;
      if ((BVar11 != 0) && (piVar3[0x10] == 0)) {
        pcVar1 = *(code **)(*(int *)in_ECX + 0x3f8);
        guard_check_icall(local_b4,&local_34);
        (*pcVar1)();
      }
    }
    local_f8 = (double)CONCAT44(local_f8._4_4_ + 1,(undefined4)local_f8);
  }
  if (*(int *)(in_ECX + 0xc48) <= *(int *)(in_ECX + 0xbf4)) {
    *(undefined4 *)(in_ECX + 0xbf4) = 0xffffffff;
  }
  if ((DAT_101daf90 != 0) || (DAT_101daf94 != 0)) {
    if ((-1 < *(int *)(in_ECX + 0xbf4)) &&
       ((*(int *)(in_ECX + 0xb78) == 0 && (DAT_101daf74 == (CMFCToolBar *)in_ECX)))) {
      local_d4 = (int *)FUN_1005f070();
      if (local_d4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10012a3f();
      }
      pcVar1 = *(code **)(*local_d4 + 0x50);
      guard_check_icall();
      iVar9 = (*pcVar1)();
      if (iVar9 != 0) {
        local_74.left = local_d4[0x15];
        local_74.top = local_d4[0x16];
        local_74.right = local_d4[0x17];
        local_74.bottom = local_d4[0x18];
        pAVar6 = GetGlobalData();
        uVar4 = *(ulong *)(pAVar6 + 0x28);
        pAVar6 = GetGlobalData();
        this = local_b4;
        CDC::Draw3dRect(local_b4,&local_74,*(ulong *)(pAVar6 + 0x28),uVar4);
        InflateRect(&local_74,-1,-1);
        pAVar6 = GetGlobalData();
        uVar4 = *(ulong *)(pAVar6 + 0x28);
        pAVar6 = GetGlobalData();
        CDC::Draw3dRect(this,&local_74,*(ulong *)(pAVar6 + 0x28),uVar4);
      }
    }
    if (((DAT_101daf90 != 0) && (-1 < *(int *)(in_ECX + 0xc00))) && (*(int *)(in_ECX + 0xb78) == 0))
    {
      pcVar1 = *(code **)(*(int *)in_ECX + 0x3c0);
      guard_check_icall();
      (*pcVar1)();
    }
  }
  pcVar1 = *(code **)(*(int *)this + 0x28);
  guard_check_icall();
  (*pcVar1)();
  if (local_c4 != 0) {
    FUN_10050819();
  }
  pCVar5 = CMFCVisualManager::GetInstance();
  *(CWnd **)(pCVar5 + 0x5c) = local_cc;
LAB_1005e4d8:
  CMemDC::~CMemDC(local_b0);
  FUN_101490fe();
  return;
}

