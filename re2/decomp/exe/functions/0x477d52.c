// rea decompile_all
// name: CMFCRibbonPanel::ReposPalette
// address: 0x477d52
// body: available
// range: 0x477d52-0x478a2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonPanel::ReposPalette(class CDC *,class CRect const
   &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonPanel::ReposPalette(CMFCRibbonPanel *this,CDC *param_1,CRect *param_2)

{
  CMFCRibbonPanel *pCVar1;
  code *pcVar2;
  bool bVar3;
  tagSIZE tVar4;
  tagSIZE tVar5;
  bool bVar6;
  uint uVar7;
  CObject *pCVar8;
  BOOL BVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  CSize *pCVar13;
  int *piVar14;
  CMFCVisualManager *pCVar15;
  undefined4 *puVar16;
  CObject *pCVar17;
  CObject *pCVar18;
  RECT *pRVar19;
  undefined1 *puVar20;
  LONG LVar21;
  undefined1 local_e0 [8];
  CObject *local_d8;
  CObject *local_d4;
  CObject *local_d0;
  CObject *local_cc;
  RECT local_c8;
  int local_b8;
  uint local_b4;
  undefined1 local_b0 [4];
  CObject *local_ac;
  CObject *local_a8;
  undefined1 local_a4 [4];
  int local_a0;
  int local_9c;
  CObject *local_98;
  int local_94;
  CObject *local_90;
  int local_8c;
  CObject *local_88;
  CObject *local_84;
  CObject *local_80;
  CObject *local_7c;
  int local_78;
  CObject *local_74;
  undefined1 local_70 [4];
  CObject *local_6c;
  int local_68;
  CDC *local_64;
  int local_60;
  CObject *local_5c;
  CObject *local_58;
  CObject *local_54;
  RECT local_50;
  tagSCROLLINFO local_40;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xd0;
  local_8 = 0x477d61;
  local_64 = param_1;
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  local_88 = (CObject *)this;
  BVar9 = EqualRect((RECT *)param_2,&local_24);
  if (BVar9 != 0) goto LAB_00478a24;
  local_5c = (CObject *)FUN_0043970d(&PTR_s_CMFCRibbonUndoButton_005ca324);
  *(undefined4 *)(this + 0xb8) = 0;
  local_50.left = *(LONG *)param_2;
  local_98 = *(CObject **)(param_2 + 4);
  local_50.right = *(LONG *)(param_2 + 8);
  local_50.bottom = *(LONG *)(param_2 + 0xc);
  bVar3 = 0 < local_50.bottom;
  bVar6 = !bVar3;
  if (bVar6) {
    local_50.bottom = (LONG)(local_98 + 0x7fa4);
  }
  local_b4 = (uint)bVar6;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  local_84 = (CObject *)local_50.bottom;
  local_50.top = (LONG)local_98;
  if ((bVar3) || (*(int *)(*(int *)(this + 0x110) + 0x35c) != 0)) {
    local_b8 = GetSystemMetrics(2);
  }
  else {
    local_b8 = 0;
  }
  local_80 = (CObject *)0x0;
  local_90 = (CObject *)local_50.left;
  pCVar1 = this + 0xcc;
  *(LONG *)pCVar1 = local_50.left;
  *(LONG *)(this + 0xd0) = local_50.top;
  *(LONG *)(this + 0xd4) = local_50.right;
  *(LONG *)(this + 0xd8) = local_50.bottom;
  if (*(int *)(this + 0x94) == 0) {
    *(int *)(this + 0xd4) = *(int *)(this + 0xd4) + local_b8;
    local_a8 = (CObject *)local_50.right;
  }
  else {
    local_a8 = (CObject *)(local_50.right + -local_b8);
  }
  local_9c = 0;
  local_94 = 0;
  local_7c = (CObject *)0x0;
  local_68 = 0;
  *(int *)(this + 0xdc) = *(int *)pCVar1;
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(this + 0xd0);
  *(undefined4 *)(this + 0xe4) = *(undefined4 *)(this + 0xd4);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(this + 0xd8);
  local_54 = (CObject *)local_50.top;
  if (*(int *)(this + 0x94) == 0) {
    local_58 = (CObject *)0x0;
    if (*(int *)(this + 0x4e4) < 1) {
LAB_0047824b:
      if (local_5c == (CObject *)0x0) {
        pCVar15 = CMFCVisualManager::GetInstance();
        pcVar2 = *(code **)(*(int *)pCVar15 + 0x2dc);
        guard_check_icall();
        iVar11 = (*pcVar2)();
        piVar10 = (int *)FUN_00453431(&local_60);
        local_68 = *piVar10 + iVar11 * 2;
        if (*(CMFCRibbonCategory **)(this + 0x108) != (CMFCRibbonCategory *)0x0) {
          piVar10 = (int *)CMFCRibbonCategory::GetImageSize
                                     (*(CMFCRibbonCategory **)(this + 0x108),(int)&local_60);
          local_68 = *piVar10;
        }
      }
    }
    else {
      do {
        puVar16 = (undefined4 *)FUN_004ab4cd(local_58);
        piVar10 = (int *)*puVar16;
        iVar11 = FUN_0043970d(&PTR_s_CMFCRibbonGalleryIcon_005c9d90);
        if ((iVar11 == 0) && (iVar11 = FUN_0043970d(&PTR_s_CMFCRibbonLabel_005ca074), iVar11 == 0))
        {
          pcVar2 = *(code **)(*piVar10 + 0x180);
          guard_check_icall(local_64);
          (*pcVar2)();
          pcVar2 = *(code **)(*piVar10 + 0xec);
          guard_check_icall(1);
          (*pcVar2)();
          LVar21 = 0;
          pcVar2 = *(code **)(*piVar10 + 0x114);
          puVar20 = local_b0;
          guard_check_icall(puVar20,0,0,0);
          pCVar13 = (CSize *)(*pcVar2)();
          tVar5.cy = LVar21;
          tVar5.cx = (LONG)puVar20;
          iVar11 = CSize::operator==(pCVar13,tVar5);
          if (iVar11 != 0) {
            pcVar2 = *(code **)(*piVar10 + 0xec);
            guard_check_icall(0);
            (*pcVar2)();
          }
          pcVar2 = *(code **)(*piVar10 + 0xbc);
          guard_check_icall(1);
          (*pcVar2)();
          pcVar2 = *(code **)(*piVar10 + 0xf4);
          guard_check_icall(&local_78,local_64);
          (*pcVar2)();
          local_78 = local_78 + 6;
          if ((int)local_7c <= (int)local_74) {
            local_7c = local_74;
          }
          pcVar2 = *(code **)(*piVar10 + 0x114);
          guard_check_icall(local_a4,1);
          piVar14 = (int *)(*pcVar2)();
          if (local_68 <= *piVar14) {
            pcVar2 = *(code **)(*piVar10 + 0x114);
            guard_check_icall(local_70,1);
            piVar10 = (int *)(*pcVar2)();
            local_68 = *piVar10;
          }
        }
        local_58 = (CObject *)((int)local_58 + 1);
      } while ((int)local_58 < *(int *)(this + 0x4e4));
      if (local_68 == 0) goto LAB_0047824b;
    }
    local_58 = (CObject *)0x0;
    if (0 < *(int *)(this + 0x4e4)) {
      do {
        piVar10 = (int *)FUN_004ab4cd(local_58);
        piVar10 = (int *)*piVar10;
        iVar11 = FUN_0043970d(&PTR_s_CMFCRibbonGalleryIcon_005c9d90);
        if (((iVar11 == 0) && (iVar11 = FUN_0043970d(&PTR_s_CMFCRibbonLabel_005ca074), iVar11 == 0))
           && (piVar10[0x3e] != 0)) {
          pcVar2 = *(code **)(*piVar10 + 0xf4);
          guard_check_icall(&local_60,local_64);
          (*pcVar2)();
          if ((local_60 == 0) && (local_5c == (CObject *)0x0)) {
            local_24.left = 0;
            local_24.top = 0;
            local_24.right = 0;
            local_24.bottom = 0;
            piVar10[0x1d] = 0;
            piVar10[0x1e] = 0;
            piVar10[0x1f] = 0;
            piVar10[0x20] = 0;
          }
          else {
            piVar10[0x2b] = local_68;
            local_60 = *(int *)(this + 0xd4) - *(int *)(this + 0xcc);
            local_c8.right = local_50.left + local_60;
            local_5c = local_7c;
            local_c8.top = local_50.top + (int)local_54;
            local_c8.left = local_50.left;
            local_c8.bottom = (LONG)(local_7c + local_c8.top);
            piVar10[0x1d] = local_50.left;
            piVar10[0x1e] = local_c8.top;
            piVar10[0x1f] = local_c8.right;
            piVar10[0x20] = local_c8.bottom;
            local_54 = local_54 + (int)local_7c;
          }
        }
        local_58 = (CObject *)((int)local_58 + 1);
      } while ((int)local_58 < *(int *)(this + 0x4e4));
    }
    *(CObject **)(this + 0xe8) = local_54;
  }
  else {
    local_ac = local_84;
    local_a0 = 0;
    *(int *)(this + 0xec) = *(int *)pCVar1;
    *(undefined4 *)(this + 0xf0) = *(undefined4 *)(this + 0xd0);
    *(undefined4 *)(this + 0xf4) = *(undefined4 *)(this + 0xd4);
    *(undefined4 *)(this + 0xf8) = *(undefined4 *)(this + 0xd8);
    local_58 = (CObject *)local_50.top;
    if (0 < *(int *)(this + 0x4e4)) {
      do {
        piVar10 = (int *)FUN_004ab4cd(local_a0);
        pCVar17 = (CObject *)*piVar10;
        local_5c = pCVar17;
        iVar11 = FUN_0043970d(&PTR_s_CMFCRibbonLabel_005ca074);
        iVar12 = FUN_0043970d(&PTR_s_CMFCRibbonGalleryIcon_005c9d90);
        if ((iVar12 == 0) && (iVar11 == 0)) {
          if (*(int *)(pCVar17 + 0xf8) == 0) {
            local_9c = 1;
          }
          else {
            local_94 = 1;
          }
          pcVar2 = *(code **)(*(int *)pCVar17 + 0x180);
          guard_check_icall(local_64);
          (*pcVar2)();
          pcVar2 = *(code **)(*(int *)pCVar17 + 0xec);
          guard_check_icall(1);
          (*pcVar2)();
          LVar21 = 0;
          pcVar2 = *(code **)(*(int *)pCVar17 + 0x114);
          puVar20 = local_70;
          guard_check_icall(puVar20,0,0,0);
          pCVar13 = (CSize *)(*pcVar2)();
          tVar4.cy = LVar21;
          tVar4.cx = (LONG)puVar20;
          iVar11 = CSize::operator==(pCVar13,tVar4);
          if (iVar11 != 0) {
            pcVar2 = *(code **)(*(int *)pCVar17 + 0xec);
            guard_check_icall(0);
            (*pcVar2)();
          }
          pcVar2 = *(code **)(*(int *)pCVar17 + 0xbc);
          guard_check_icall(1);
          (*pcVar2)();
          pcVar2 = *(code **)(*(int *)pCVar17 + 0xf4);
          guard_check_icall(&local_78,local_64);
          (*pcVar2)();
          local_78 = *(int *)(this + 0xd4) - *(int *)(this + 0xcc);
          if (*(int *)(pCVar17 + 0xf8) == 0) {
            local_ac = local_ac + -(int)local_74;
            local_c8.left = local_50.left;
            local_c8.right = (LONG)(local_50.left + local_78);
            pRVar19 = &local_c8;
            local_c8.top = (LONG)local_ac;
            local_c8.bottom = (LONG)(local_74 + (int)local_ac);
            local_84 = local_ac + -4;
            *(CObject **)(this + 0xf0) = local_ac;
          }
          else {
            local_24.top = (LONG)local_58;
            local_24.left = local_50.left;
            local_24.right = (LONG)(local_50.left + local_78);
            pRVar19 = &local_24;
            local_58 = local_58 + (int)local_74;
            local_54 = local_54 + (int)local_74;
            local_24.bottom = (LONG)local_58;
            *(CObject **)(this + 0xe8) = local_58;
            local_98 = local_58 + 4;
          }
          local_40.nMax = (int)pRVar19->left;
          local_40.nPage = pRVar19->top;
          local_40.nPos = pRVar19->right;
          local_40.nTrackPos = pRVar19->bottom;
          *(CObject **)(local_5c + 0x74) = (CObject *)pRVar19->left;
          *(UINT *)(local_5c + 0x78) = local_40.nPage;
          *(int *)(local_5c + 0x7c) = local_40.nPos;
          *(int *)(local_5c + 0x80) = local_40.nTrackPos;
        }
        local_a0 = local_a0 + 1;
      } while (local_a0 < *(int *)(this + 0x4e4));
    }
  }
  local_ac = *(CObject **)(this + 0xd8);
  local_a0 = 1;
  if (*(int *)(this + 0x94) == 0) {
    *(CObject **)(this + 0xd8) = local_54;
  }
  local_58 = (CObject *)0x0;
  if (0 < *(int *)(this + 0x4e4)) {
    do {
      pCVar18 = local_54;
      piVar10 = (int *)FUN_004ab4cd(local_58);
      pCVar17 = (CObject *)*piVar10;
      local_6c = pCVar17;
      local_74 = (CObject *)FUN_0043970d(&PTR_s_CMFCRibbonLabel_005ca074);
      iVar11 = FUN_0043970d(&PTR_s_CMFCRibbonGalleryIcon_005c9d90);
      pCVar8 = local_90;
      if (iVar11 == 0) {
        if (local_74 != (CObject *)0x0) goto LAB_004783bf;
        if (*(int *)(pCVar17 + 0xf8) == 0) {
          local_9c = 1;
          goto LAB_004783b7;
        }
        local_94 = 1;
      }
      else {
LAB_004783b7:
        if (local_74 == (CObject *)0x0) {
          if (iVar11 != 0) {
            local_a0 = 0;
            pcVar2 = *(code **)(*(int *)pCVar17 + 0xec);
            guard_check_icall(0);
            (*pcVar2)();
            pcVar2 = *(code **)(*(int *)local_6c + 0xf4);
            guard_check_icall(&local_c8.right,local_64);
            piVar10 = (int *)(*pcVar2)();
            local_74 = (CObject *)*piVar10;
            if (((int)local_a8 < (int)(local_74 + (int)local_90)) &&
               (local_90 != (CObject *)local_50.left)) {
              pCVar18 = pCVar18 + piVar10[1];
              local_90 = (CObject *)local_50.left;
              local_54 = pCVar18;
            }
            local_ac = pCVar18 + piVar10[1];
            local_40.nPos = (int)(local_90 + *piVar10);
            *(CObject **)(local_6c + 0x74) = local_90;
            *(CObject **)(local_6c + 0x78) = pCVar18;
            *(int *)(local_6c + 0x7c) = local_40.nPos;
            *(CObject **)(local_6c + 0x80) = local_ac;
            if (*(int *)(this + 0x94) == 0) {
              *(CObject **)(this + 0xd8) = local_ac;
            }
            pCVar8 = local_90 + (int)local_74;
            local_80 = local_ac;
            local_40.nMax = (int)local_90;
            local_40.nPage = (UINT)pCVar18;
            local_40.nTrackPos = (int)local_ac;
          }
        }
        else {
LAB_004783bf:
          if (local_50.left < (int)local_90) {
            local_54 = local_ac;
            pCVar18 = local_ac;
          }
          if (0 < (int)local_58) {
            pCVar18 = pCVar18 + 1;
            local_54 = pCVar18;
          }
          FUN_00415a10(*(int *)(pCVar17 + 0x60));
          local_8 = 0;
          local_24.left = 0;
          local_24.top = 0;
          local_24.right = 0;
          local_80 = (CObject *)0x0;
          local_24.bottom = 0;
          if (*(int *)(local_5c + -0xc) == 0) {
            if (local_a0 == 0) {
              pcVar2 = *(code **)(**(int **)(this + 0x110) + 0x2a0);
              guard_check_icall();
              iVar11 = (*pcVar2)();
              local_54 = local_54 + iVar11;
              pCVar17 = local_6c;
            }
          }
          else {
            pcVar2 = *(code **)(*(int *)pCVar17 + 0x180);
            guard_check_icall(local_64);
            pCVar17 = local_6c;
            (*pcVar2)();
            pcVar2 = *(code **)(*(int *)pCVar17 + 0xf4);
            guard_check_icall(local_e0,local_64);
            iVar11 = (*pcVar2)();
            local_d8 = (CObject *)local_50.left;
            iVar11 = *(int *)(iVar11 + 4);
            local_d0 = local_a8;
            local_cc = pCVar18 + iVar11;
            local_24.left = local_50.left;
            pcVar2 = *(code **)(**(int **)(local_88 + 0x110) + 0x2a0);
            local_d4 = pCVar18;
            local_24.top = (LONG)pCVar18;
            local_24.right = (LONG)local_d0;
            local_24.bottom = (LONG)local_cc;
            guard_check_icall();
            iVar12 = (*pcVar2)();
            local_54 = local_54 + iVar12 + iVar11;
            local_a0 = 0;
            local_80 = (CObject *)local_24.bottom;
            this = (CMFCRibbonPanel *)local_88;
            pCVar17 = local_6c;
          }
          *(LONG *)(pCVar17 + 0x74) = local_24.left;
          *(LONG *)(pCVar17 + 0x78) = local_24.top;
          *(LONG *)(pCVar17 + 0x7c) = local_24.right;
          *(LONG *)(pCVar17 + 0x80) = local_24.bottom;
          if (*(int *)(this + 0x94) == 0) {
            *(CObject **)(this + 0xd8) = local_80;
          }
          local_8 = 0xffffffff;
          local_90 = (CObject *)local_50.left;
          local_ac = local_80;
          FUN_0040efa0();
          pCVar8 = local_90;
        }
      }
      local_90 = pCVar8;
      local_58 = (CObject *)((int)local_58 + 1);
    } while ((int)local_58 < *(int *)(this + 0x4e4));
  }
  if (*(int *)(this + 0x94) == 0) {
    pCVar17 = *(CObject **)(this + 0xd8);
    if ((int)local_84 <= (int)*(CObject **)(this + 0xd8)) {
      pCVar17 = local_84;
    }
    *(CObject **)(this + 0xd8) = pCVar17;
  }
  *(int *)(this + 0xa8) = *(int *)(this + 0xd4) - *(int *)(this + 0xcc);
  if (local_9c == 0) {
    SetRectEmpty((LPRECT)(this + 0xec));
  }
  else if (*(int *)(this + 0x94) == 0) {
    local_6c = (CObject *)(*(int *)(this + 0xd8) + 4);
    local_5c = (CObject *)0x0;
    *(int *)(this + 0xec) = *(int *)(this + 0xcc);
    *(int *)(this + 0xf0) = *(int *)(this + 0xd0);
    *(int *)(this + 0xf4) = *(int *)(this + 0xd4);
    *(int *)(this + 0xf8) = *(int *)(this + 0xd8);
    *(CObject **)(this + 0xf0) = local_6c;
    if (0 < *(int *)(this + 0x4e4)) {
      do {
        piVar10 = (int *)FUN_004ab4cd(local_5c);
        piVar10 = (int *)*piVar10;
        iVar11 = FUN_0043970d(&PTR_s_CMFCRibbonGalleryIcon_005c9d90);
        if (((iVar11 == 0) && (iVar11 = FUN_0043970d(&PTR_s_CMFCRibbonLabel_005ca074), iVar11 == 0))
           && (piVar10[0x3e] == 0)) {
          pcVar2 = *(code **)(*piVar10 + 0xf4);
          guard_check_icall(&local_8c,local_64);
          (*pcVar2)();
          if ((local_8c == 0) && (local_88 == (CObject *)0x0)) {
            local_40.nMax = 0;
            local_40.nPage = 0;
            local_40.nPos = 0;
            local_40.nTrackPos = 0;
            piVar10[0x1d] = 0;
            piVar10[0x1e] = 0;
            piVar10[0x1f] = 0;
            piVar10[0x20] = 0;
          }
          else {
            local_88 = local_7c;
            local_d8 = (CObject *)local_50.left;
            piVar10[0x2b] = local_68;
            local_8c = *(int *)(this + 0xd4) - *(int *)(this + 0xcc);
            local_d4 = local_6c + (int)local_98;
            local_d0 = (CObject *)(local_50.left + local_8c);
            local_cc = local_d4 + (int)local_7c;
            *(CObject **)(this + 0xd8) = local_cc;
            piVar10[0x1d] = local_50.left;
            piVar10[0x1e] = (int)local_d4;
            piVar10[0x1f] = (int)local_d0;
            piVar10[0x20] = (int)local_cc;
            local_6c = local_6c + (int)local_7c;
          }
        }
        local_5c = local_5c + 1;
      } while ((int)local_5c < *(int *)(this + 0x4e4));
    }
    *(CObject **)(this + 0xf8) = local_6c;
  }
  iVar11 = local_94;
  if (local_94 == 0) {
    SetRectEmpty((LPRECT)(this + 0xdc));
  }
  local_5c = (CObject *)0x0;
  if (0 < *(int *)(this + 0x4e4)) {
    do {
      puVar16 = (undefined4 *)FUN_004ab4cd(local_5c);
      local_88 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_005c9d90,
                                    (CObject *)*puVar16);
      if (local_88 != (CObject *)0x0) {
        *(undefined4 *)(local_88 + 0x1cc) = 0;
        *(undefined4 *)(local_88 + 0x1d0) = 0;
        *(undefined4 *)(local_88 + 0x1d4) = 0;
        *(undefined4 *)(local_88 + 0x1d8) = 0;
        local_50.left = *(LONG *)(local_88 + 0x74);
        local_50.top = *(LONG *)(local_88 + 0x78);
        local_50.right = *(LONG *)(local_88 + 0x7c);
        local_50.bottom = *(LONG *)(local_88 + 0x80);
        BVar9 = IsRectEmpty(&local_50);
        if (BVar9 == 0) {
          pcVar2 = *(code **)(*(int *)this + 0xb8);
          guard_check_icall((CObject *)(local_50.left + -2),
                            (int)(local_50.bottom + local_50.top) / 2,0);
          pCVar17 = (CObject *)(*pcVar2)();
          pCVar18 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_005c9d90,
                                       pCVar17);
          pCVar17 = local_88;
          *(uint *)(local_88 + 0x1cc) = (uint)(pCVar18 == (CObject *)0x0);
          pcVar2 = *(code **)(*(int *)this + 0xb8);
          guard_check_icall((CObject *)(local_50.right + 2),
                            (int)(local_50.bottom + local_50.top) / 2,0);
          pCVar18 = (CObject *)(*pcVar2)();
          pCVar18 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_005c9d90,
                                       pCVar18);
          *(uint *)(pCVar17 + 0x1d0) = (uint)(pCVar18 == (CObject *)0x0);
          pcVar2 = *(code **)(*(int *)this + 0xb8);
          guard_check_icall((int)(local_50.right + local_50.left) / 2,(CObject *)(local_50.top + -2)
                            ,0);
          pCVar18 = (CObject *)(*pcVar2)();
          pCVar18 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_005c9d90,
                                       pCVar18);
          *(uint *)(pCVar17 + 0x1d4) = (uint)(pCVar18 == (CObject *)0x0);
          pcVar2 = *(code **)(*(int *)this + 0xb8);
          guard_check_icall((int)(local_50.right + local_50.left) / 2,
                            (CObject *)(local_50.bottom + 2),0);
          pCVar18 = (CObject *)(*pcVar2)();
          pCVar18 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_005c9d90,
                                       pCVar18);
          *(uint *)(pCVar17 + 0x1d8) = (uint)(pCVar18 == (CObject *)0x0);
        }
      }
      local_5c = (CObject *)((int)local_5c + 1);
      iVar11 = local_94;
    } while ((int)local_5c < *(int *)(this + 0x4e4));
  }
  pCVar17 = local_98;
  uVar7 = local_b4;
  if ((local_b4 == 0) || (*(int *)(*(int *)(this + 0x110) + 0x35c) != 0)) {
    pCVar18 = local_98;
    if (iVar11 != 0) {
      pCVar18 = (CObject *)(*(int *)(this + 0xe8) + 1);
    }
    if (local_9c == 0) {
      iVar11 = *(int *)(this + 0xd8);
    }
    else {
      iVar11 = *(int *)(this + 0xf0) + -1;
    }
    CWnd::SetWindowPos(*(CWnd **)(this + 0x104),(CWnd *)0x0,*(int *)(this + 0xd4) - local_b8,
                       (int)pCVar18,local_b8,(iVar11 - (int)pCVar18) + -1,0x14);
    _memset(&local_40,0,0x1c);
    local_40.nMin = 0;
    local_40.cbSize = 0x1c;
    local_40.fMask = 7;
    if ((int)(local_84 + -(int)pCVar17) <
        (int)(local_80 + (*(int *)(this + 0xe0) - *(int *)(this + 0xe8)))) {
      local_40.nMax = (int)(local_80 + (*(int *)(this + 0xe0) - *(int *)(this + 0xe8)));
      local_40.nPage = (UINT)(local_84 + -(int)pCVar17);
      CWnd::SetScrollInfo(*(CWnd **)(this + 0x104),2,&local_40,1);
      EnableScrollBar(*(HWND *)(*(int *)(this + 0x104) + 0x20),2,0);
      CWnd::EnableWindow(*(CWnd **)(this + 0x104),1);
    }
    else if (uVar7 == 0) {
      EnableScrollBar(*(HWND *)(*(int *)(this + 0x104) + 0x20),2,3);
    }
  }
LAB_00478a24:
  FUN_0055bae6();
  return;
}

