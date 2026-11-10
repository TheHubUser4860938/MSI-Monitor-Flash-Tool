// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnFillRibbonButton
// address: 0x100d14ca
// body: available
// range: 0x100d14ca-0x100d20e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual unsigned long __thiscall CMFCVisualManagerOffice2007::OnFillRibbonButton(class
   CDC *,class CMFCRibbonButton *)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManagerOffice2007::OnFillRibbonButton
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,CMFCRibbonButton *param_2)

{
  code *pcVar1;
  CMFCVisualManagerBitmapCache *this_00;
  int iVar2;
  BOOL BVar3;
  CMFCVisualManagerBitmapCacheItem *pCVar4;
  int iVar5;
  ulong uVar6;
  CMFCVisualManagerOffice2007 *pCVar7;
  int iVar8;
  uint uVar9;
  CDC *pCVar10;
  CMFCRibbonButton *pCVar11;
  int iVar12;
  CMFCVisualManagerOffice2007 *pCVar13;
  uint uVar14;
  CDC *pCVar15;
  LONG LVar16;
  int iVar17;
  LONG LVar18;
  int iVar19;
  LONG LVar20;
  LONG LVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  uint local_84;
  int local_80;
  CMFCVisualManagerOffice2007 *local_7c;
  int local_78;
  CMFCVisualManagerOffice2007 *local_74;
  CDrawingManager local_70 [4];
  CMFCVisualManagerOffice2007 *local_6c;
  undefined8 local_68;
  CDC *local_60;
  int local_5c;
  CMFCVisualManagerOffice2007 *local_58;
  uint local_54;
  int local_50;
  uint local_4c;
  int local_48;
  uint local_44;
  CMFCVisualManagerOffice2007 *local_40;
  uint local_3c;
  CMFCRibbonButton *local_38;
  RECT local_34;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x90;
  local_8 = 0x100d14d9;
  local_60 = param_1;
  local_38 = param_2;
  local_58 = this;
  iVar2 = CanDrawImage(this);
  if (iVar2 == 0) {
    CMFCVisualManagerOfficeXP::OnFillRibbonButton((CMFCVisualManagerOfficeXP *)this,param_1,param_2)
    ;
    goto LAB_100d20e1;
  }
  local_4c = CMFCRibbonBaseElement::IsMenuMode((CMFCRibbonBaseElement *)param_2);
  local_98 = *(int *)(param_2 + 0x74);
  pCVar7 = (CMFCVisualManagerOffice2007 *)0x0;
  local_3c = 0;
  local_40 = (CMFCVisualManagerOffice2007 *)0x0;
  local_94 = *(int *)(param_2 + 0x78);
  local_90 = *(int *)(param_2 + 0x7c);
  local_8c = *(int *)(param_2 + 0x80);
  pcVar1 = *(code **)(*(int *)local_38 + 0xdc);
  uVar14 = 0;
  guard_check_icall();
  local_74 = (CMFCVisualManagerOffice2007 *)(*pcVar1)();
  pcVar1 = *(code **)(*(int *)local_38 + 0xd4);
  guard_check_icall();
  local_50 = (*pcVar1)();
  pcVar1 = *(code **)(*(int *)local_38 + 0xe4);
  guard_check_icall();
  local_84 = (*pcVar1)();
  pcVar1 = *(code **)(*(int *)local_38 + 0xd8);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if ((iVar2 == 0) || (local_5c = 1, local_4c != 0)) {
    local_5c = 0;
  }
  pcVar1 = *(code **)(*(int *)local_38 + 0xe0);
  guard_check_icall();
  local_44 = (*pcVar1)();
  pcVar1 = *(code **)(*(int *)local_38 + 0xd0);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if ((iVar2 != 0) || (local_48 = 0, local_50 != 0)) {
    local_48 = 1;
  }
  pcVar1 = *(code **)(*(int *)local_38 + 0x24c);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
LAB_100d160b:
    local_68 = (double)((ulonglong)local_68 & 0xffffffff);
  }
  else {
    local_68 = (double)CONCAT44(1,(undefined4)local_68);
    if (*(int *)(local_38 + 0xc4) != 0) goto LAB_100d160b;
  }
  local_54 = ~-(uint)(local_50 != 0) & (uint)local_74;
  pcVar1 = *(code **)(*(int *)local_38 + 0xe4);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  pCVar11 = local_38;
  if ((iVar2 != 0) && (local_4c == 0)) {
    local_44 = 1;
    local_5c = 0;
    local_48 = 0;
  }
  local_6c = *(CMFCVisualManagerOffice2007 **)(local_38 + 0x98);
  iVar2 = FUN_1004e58b(&PTR_s_CMFCRibbonEdit_101caee0);
  if (iVar2 != 0) {
    local_98 = *(int *)(pCVar11 + 0x134);
    local_24.top = *(LONG *)(pCVar11 + 0x138);
    local_24.right = *(LONG *)(pCVar11 + 0x13c);
    local_24.bottom = *(LONG *)(pCVar11 + 0x140);
    uVar22 = *(undefined4 *)(local_58 + 0x90a8);
    if (local_54 == 0) {
      if ((local_44 != 0) || (local_48 != 0)) {
        uVar22 = *(undefined4 *)(local_58 + 0x90b0);
      }
    }
    else {
      uVar22 = *(undefined4 *)(local_58 + 0x90ac);
    }
    local_24.left = local_98;
    CDrawingManager::CDrawingManager(local_70,local_60);
    local_8 = 0;
    CDrawingManager::FillGradient(local_70,local_98,local_94,local_90,local_8c,uVar22,uVar22,1,0,0);
    FUN_100afd36();
    goto LAB_100d20e1;
  }
  if ((local_44 != 0) && (local_4c != 0)) {
    pcVar1 = *(code **)(*(int *)pCVar11 + 0x204);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    local_44 = -(uint)(iVar2 != 0) & local_44;
    pCVar11 = local_38;
  }
  if ((local_6c == (CMFCVisualManagerOffice2007 *)0x0) || (*(int *)(pCVar11 + 0xe4) == 0)) {
    if (local_68._4_4_ != (CMFCVisualManagerBitmapCache *)0x0) {
      if (local_5c == 0) {
        if (local_48 == 0) {
          if (local_44 != 0) {
            uVar14 = 2;
          }
        }
        else {
          uVar14 = 1;
        }
      }
      else {
        uVar14 = -(uint)(local_48 != 0) & 2;
      }
      if (((local_50 != 0) && (local_84 == 0)) &&
         (iVar2 = CMFCControlRenderer::GetImageCount((CMFCControlRenderer *)(local_58 + 0x6d40)),
         3 < iVar2)) {
        uVar14 = 3;
      }
      pCVar13 = local_58 + 0x6d40;
      local_6c = local_58 + 0xbe1c;
      if (*(int *)(*(int *)(pCVar11 + 0x88) + 0x19c) != 0) {
        iVar2 = *(int *)(*(int *)(pCVar11 + 0x88) + 0x19c) * 0x648;
        pCVar13 = local_58 + iVar2 + 0x8f68;
        local_6c = local_58 + iVar2 + 0x9118;
      }
      local_40 = pCVar13;
      if (local_6c != (CMFCVisualManagerOffice2007 *)0x0) {
        local_80 = *(int *)(pCVar13 + 0x130) - *(int *)(pCVar13 + 0x128);
        local_7c = (CMFCVisualManagerOffice2007 *)(local_8c - local_94);
        local_68 = (double)CONCAT44(local_7c,(undefined4)local_68);
        iVar2 = CMFCVisualManagerBitmapCache::FindIndex
                          ((CMFCVisualManagerBitmapCache *)local_6c,(CSize *)&local_80);
        if (iVar2 == -1) {
          iVar2 = CMFCVisualManagerBitmapCache::CacheY
                            ((CMFCVisualManagerBitmapCache *)local_6c,(int)local_68._4_4_,
                             (CMFCControlRenderer *)pCVar13);
          if (iVar2 == -1) goto LAB_100d208c;
        }
        iVar5 = *(int *)(pCVar13 + 0x130) - *(int *)(pCVar13 + 0x160);
        uVar23 = 0xff;
        uVar22 = *(undefined4 *)(pCVar13 + 0x158);
        pCVar10 = local_60;
        iVar8 = local_98;
        iVar12 = local_94;
        iVar17 = local_90;
        iVar19 = local_8c;
        pCVar4 = CMFCVisualManagerBitmapCache::Get((CMFCVisualManagerBitmapCache *)local_6c,iVar2);
        CMFCVisualManagerBitmapCache::CMFCVisualManagerBitmapCacheItem::DrawY
                  (pCVar4,pCVar10,iVar8,iVar12,iVar17,iVar19,uVar22,iVar5,uVar14,uVar23);
        goto LAB_100d20e1;
      }
LAB_100d208c:
      if (local_54 == 0) goto LAB_100d1cd8;
LAB_100d2094:
      local_50 = *(int *)(local_58 + 0x8f98);
LAB_100d1cdc:
      pCVar13 = local_40;
      if ((local_40 != (CMFCVisualManagerOffice2007 *)0x0) && (uVar14 != 0xffffffff)) {
        if (pCVar7 != (CMFCVisualManagerOffice2007 *)0x0) {
          local_a0 = local_90 - local_98;
          local_9c = local_8c - local_94;
          iVar2 = CMFCVisualManagerBitmapCache::FindIndex
                            ((CMFCVisualManagerBitmapCache *)pCVar7,(CSize *)&local_a0);
          if ((iVar2 != -1) ||
             (iVar2 = CMFCVisualManagerBitmapCache::Cache
                                ((CMFCVisualManagerBitmapCache *)pCVar7,(CSize *)&local_a0,
                                 (CMFCControlRenderer *)pCVar13), iVar2 != -1)) {
            uVar22 = 0xff;
            pCVar10 = local_60;
            iVar8 = local_98;
            iVar12 = local_94;
            iVar17 = local_90;
            iVar19 = local_8c;
            pCVar4 = CMFCVisualManagerBitmapCache::Get((CMFCVisualManagerBitmapCache *)pCVar7,iVar2)
            ;
            CMFCVisualManagerBitmapCache::CMFCVisualManagerBitmapCacheItem::Draw
                      (pCVar4,pCVar10,iVar8,iVar12,iVar17,iVar19,uVar14,uVar22);
            goto LAB_100d20e1;
          }
        }
        iVar2 = *(int *)pCVar13;
        guard_check_icall(local_60,local_98,local_94,local_90,local_8c,uVar14,0xff);
        (**(code **)(iVar2 + 0x10))();
      }
      goto LAB_100d20e1;
    }
    if (local_54 == 0) {
      if (((local_5c != 0) || (local_44 != 0)) || (local_48 != 0)) goto LAB_100d1d7c;
LAB_100d1cd8:
      local_50 = -1;
      goto LAB_100d1cdc;
    }
    if (local_50 == 0) goto LAB_100d208c;
LAB_100d1d7c:
    local_34.left = *(LONG *)(pCVar11 + 0x124);
    local_34.top = *(LONG *)(pCVar11 + 0x128);
    local_34.right = *(LONG *)(pCVar11 + 300);
    local_34.bottom = *(LONG *)(pCVar11 + 0x130);
    BVar3 = IsRectEmpty(&local_34);
    pCVar11 = local_38;
    if (BVar3 != 0) {
      local_40 = local_58 + 0x6180;
      uVar14 = 0xffffffff;
      local_68 = (double)(*(int *)(local_58 + 0x62b4) - *(int *)(local_58 + 0x62ac));
      if ((local_68 * 1.5 < (double)(local_8c - local_94)) && (*(int *)(local_58 + 0x638c) != 0)) {
        local_40 = local_58 + 0x62f8;
      }
      if (local_54 != 0) {
        if (local_50 != 0) {
          iVar2 = CMFCControlRenderer::GetImageCount((CMFCControlRenderer *)local_40);
          uVar14 = 4;
          if (iVar2 < 5) {
            uVar14 = 0;
          }
        }
        goto LAB_100d2094;
      }
      if (local_44 != 0) {
        uVar14 = 2;
      }
      if (local_5c == 0) {
        if (local_48 != 0) {
          uVar14 = uVar14 + 1;
          goto LAB_100d208c;
        }
      }
      else if (local_48 != 0) {
        uVar14 = 1;
      }
      goto LAB_100d1cd8;
    }
    local_34.left = *(LONG *)(local_38 + 0x134);
    local_34.top = *(LONG *)(local_38 + 0x138);
    local_34.right = *(LONG *)(local_38 + 0x13c);
    local_34.bottom = *(LONG *)(local_38 + 0x140);
    local_24.left = *(LONG *)(local_38 + 0x124);
    local_24.top = *(LONG *)(local_38 + 0x128);
    local_24.right = *(LONG *)(local_38 + 300);
    local_24.bottom = *(LONG *)(local_38 + 0x130);
    local_68 = (double)CONCAT44(local_58 +
                                (-(uint)(*(int *)(local_38 + 0x170) != 0) & 0x2f0) + 0x6470,
                                (undefined4)local_68);
    local_84 = 0xffffffff;
    local_74 = local_58 + (-(uint)(*(int *)(local_38 + 0x170) != 0) & 0x2f0) + 0x65e8;
    local_3c = 0xffffffff;
    pcVar1 = *(code **)(*(int *)local_38 + 0xe4);
    guard_check_icall();
    local_6c = (CMFCVisualManagerOffice2007 *)(*pcVar1)();
    pcVar1 = *(code **)(*(int *)pCVar11 + 0x254);
    guard_check_icall();
    local_7c = (CMFCVisualManagerOffice2007 *)(*pcVar1)();
    pcVar1 = *(code **)(*(int *)pCVar11 + 600);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (*(int *)(local_58 + 0xc000) < 0x14) {
      uVar9 = -(uint)(local_44 != 0) & 3;
      local_3c = uVar9 - 1;
      uVar14 = local_3c;
      if (local_54 == 0) {
        if ((local_6c == (CMFCVisualManagerOffice2007 *)0x0) || (local_4c != 0)) {
          if (local_5c == 0) {
            if (local_48 != 0) {
              uVar14 = uVar9;
              local_3c = uVar9;
            }
          }
          else if (local_48 != 0) {
            if (local_7c == (CMFCVisualManagerOffice2007 *)0x0) {
              uVar14 = -(uint)(local_44 != 0) & local_3c;
            }
            else {
              uVar14 = 1;
            }
            local_3c = -(uint)(local_44 != 0) & local_3c;
          }
        }
        else {
          local_3c = 2;
          uVar14 = (uint)(local_44 == 0) * 2 + 2;
        }
      }
LAB_100d1f82:
      if (uVar14 != 0xffffffff) goto LAB_100d1f87;
    }
    else {
      if (local_54 == 0) {
        if ((local_6c == (CMFCVisualManagerOffice2007 *)0x0) || (local_4c != 0)) {
          uVar14 = local_84;
          if (local_50 != 0) {
            local_3c = 4;
            uVar14 = 5;
          }
          if (local_44 != 0) {
            uVar14 = 2;
            local_3c = 2;
          }
          if ((local_7c != (CMFCVisualManagerOffice2007 *)0x0) || (iVar2 != 0)) {
            local_3c = 4;
            if (local_5c == 0) {
              uVar14 = -(uint)(local_44 != 0) & 3;
              if (iVar2 != 0) {
                local_3c = 0;
LAB_100d1f74:
                uVar14 = (uint)(local_44 == 0) * 2 + 3;
              }
            }
            else {
              if (local_7c != (CMFCVisualManagerOffice2007 *)0x0) {
                uVar14 = 1;
                goto LAB_100d1f87;
              }
              if (iVar2 != 0) goto LAB_100d1f74;
            }
          }
          goto LAB_100d1f82;
        }
LAB_100d1f03:
        uVar14 = 5;
        local_3c = 2;
      }
      else {
        if ((local_7c == (CMFCVisualManagerOffice2007 *)0x0) && (iVar2 == 0)) goto LAB_100d20e1;
        uVar14 = 4;
        local_3c = 4;
        if (iVar2 != 0) {
          local_3c = 0;
          if ((local_6c != (CMFCVisualManagerOffice2007 *)0x0) && (local_4c == 0))
          goto LAB_100d1f03;
          if (local_5c != 0) {
            local_3c = 1;
          }
        }
      }
LAB_100d1f87:
      iVar2 = *(int *)local_68._4_4_;
      guard_check_icall(local_60,local_34.left,local_34.top,local_34.right,local_34.bottom,uVar14,
                        0xff);
      (**(code **)(iVar2 + 0x10))();
    }
    if (local_3c == 0xffffffff) goto LAB_100d20e1;
    iVar2 = *(int *)local_74;
    guard_check_icall(local_60,local_24.left,local_24.top,local_24.right,local_24.bottom,local_3c,
                      0xff);
  }
  else {
    local_68 = (double)CONCAT44(pCVar11 + 0x124,(undefined4)local_68);
    local_24.left = *(LONG *)(pCVar11 + 0x124);
    local_24.top = *(LONG *)(pCVar11 + 0x128);
    local_24.right = *(LONG *)(pCVar11 + 300);
    local_24.bottom = *(LONG *)(pCVar11 + 0x130);
    BVar3 = IsRectEmpty(&local_24);
    if (BVar3 != 0) {
      if (local_6c == (CMFCVisualManagerOffice2007 *)0x1) {
        iVar2 = 0x52d0;
        iVar8 = 0xbe48;
      }
      else if (local_6c == (CMFCVisualManagerOffice2007 *)0x2) {
        iVar2 = 0x5448;
        iVar8 = 0xbe74;
      }
      else if (local_6c == (CMFCVisualManagerOffice2007 *)0x3) {
        iVar2 = 0x5738;
        iVar8 = 0xbecc;
      }
      else {
        iVar2 = 0x55c0;
        iVar8 = 0xbea0;
      }
      pCVar7 = local_58 + iVar8;
      local_40 = local_58 + iVar2;
      local_4c = -(uint)(local_44 != 0) & 3;
      if ((local_54 == 0) || (local_50 != 0)) {
        if (local_5c == 0) {
          uVar14 = local_4c;
          if (local_48 != 0) {
            uVar14 = local_4c + 1;
          }
        }
        else {
          uVar14 = 2;
          if (local_48 == 0) {
            uVar14 = local_4c;
          }
        }
      }
      else {
        uVar14 = 0;
      }
      goto LAB_100d208c;
    }
    local_98 = *(int *)(local_38 + 0x134);
    local_94 = *(int *)(local_38 + 0x138);
    local_90 = *(int *)(local_38 + 0x13c);
    local_8c = *(int *)(local_38 + 0x140);
    local_24.left = *(LONG *)local_68._4_4_;
    local_24.top = *(int *)((int)local_68._4_4_ + 4);
    local_24.right = *(int *)((int)local_68._4_4_ + 8);
    local_24.bottom = *(int *)((int)local_68._4_4_ + 0xc);
    uVar14 = 2;
    if (local_6c == (CMFCVisualManagerOffice2007 *)0x1) {
      iVar2 = 0x58b0;
      local_40 = (CMFCVisualManagerOffice2007 *)0xbef8;
LAB_100d17a3:
      iVar12 = 0x6008;
      iVar8 = 0xbfd4;
    }
    else if (local_6c == (CMFCVisualManagerOffice2007 *)0x2) {
      iVar2 = 0x58b0;
      local_40 = (CMFCVisualManagerOffice2007 *)0xbef8;
      iVar12 = 0x5a28;
      iVar8 = 0xbf24;
    }
    else {
      if (local_6c == (CMFCVisualManagerOffice2007 *)0x3) {
        iVar2 = 0x5e90;
        local_40 = (CMFCVisualManagerOffice2007 *)0xbfa8;
        goto LAB_100d17a3;
      }
      iVar2 = 0x5ba0;
      local_40 = (CMFCVisualManagerOffice2007 *)0xbf50;
      iVar12 = 0x5d18;
      iVar8 = 0xbf7c;
    }
    local_68 = (double)CONCAT44(local_58 + iVar8,(undefined4)local_68);
    local_74 = local_58 + (int)local_40;
    local_6c = local_58 + iVar12;
    uVar9 = 0;
    local_7c = local_58 + iVar2;
    local_40 = (CMFCVisualManagerOffice2007 *)0x0;
    pcVar1 = *(code **)(*(int *)local_38 + 0x254);
    guard_check_icall();
    local_9c = (*pcVar1)();
    pcVar1 = *(code **)(*(int *)local_38 + 600);
    guard_check_icall();
    local_84 = (*pcVar1)();
    pCVar11 = local_38;
    if (*(int *)(local_58 + 0xc000) < 0x14) {
      local_44 = -(uint)(local_44 != 0) & 3;
      if (local_54 == 0) {
        pcVar1 = *(code **)(*(int *)local_38 + 0xe4);
        guard_check_icall();
        iVar2 = (*pcVar1)();
        if ((iVar2 != 0) && (local_4c == 0)) {
          pcVar1 = *(code **)(*(int *)pCVar11 + 0xe0);
          guard_check_icall();
          iVar2 = (*pcVar1)();
          local_40 = (CMFCVisualManagerOffice2007 *)0x3;
          uVar14 = -(uint)(iVar2 != 0) & 3;
          goto LAB_100d19b2;
        }
        uVar9 = local_44;
        if (local_5c == 0) {
          local_3c = local_44;
          if (local_48 != 0) {
            local_40 = (CMFCVisualManagerOffice2007 *)0x1;
            uVar14 = local_44 + 1;
            goto LAB_100d19b2;
          }
        }
        else {
          local_3c = local_44;
          if (local_9c != 0) {
            local_40 = (CMFCVisualManagerOffice2007 *)0x1;
            goto LAB_100d19b2;
          }
        }
        goto LAB_100d19b5;
      }
      local_3c = 0;
    }
    else {
      if (local_44 != 0) {
        uVar9 = 3;
        local_3c = 3;
        if (local_48 != 0) {
          local_40 = (CMFCVisualManagerOffice2007 *)&DAT_00000005;
        }
      }
      if (local_54 == 0) {
        pcVar1 = *(code **)(*(int *)local_38 + 0xe4);
        guard_check_icall();
        iVar2 = (*pcVar1)();
        if ((iVar2 == 0) || (local_4c != 0)) {
          if (local_50 != 0) {
            uVar9 = 6;
            local_3c = 6;
            local_40 = (CMFCVisualManagerOffice2007 *)&DAT_00000005;
          }
          if ((local_9c != 0) || (local_84 != 0)) {
            if (local_44 == 0) {
              uVar9 = (-(uint)(local_9c != 0) & 0xfffffffb) + 6;
            }
            else {
              uVar9 = (local_9c != 0) + 3;
            }
            local_40 = (CMFCVisualManagerOffice2007 *)((uint)(local_84 == 0) * 4 + 1);
            local_3c = uVar9;
          }
          if ((local_5c == 0) || (local_9c == 0)) goto LAB_100d19b5;
        }
        else {
          pcVar1 = *(code **)(*(int *)local_38 + 0xe0);
          guard_check_icall();
          iVar2 = (*pcVar1)();
          local_40 = (CMFCVisualManagerOffice2007 *)0x3;
          uVar14 = (-(uint)(iVar2 != 0) & 0xfffffffd) + 6;
        }
      }
      else {
        if (local_44 == 0) goto LAB_100d19b5;
        local_40 = (CMFCVisualManagerOffice2007 *)0x4;
        uVar14 = 5;
      }
LAB_100d19b2:
      uVar9 = uVar14;
      local_3c = uVar14;
LAB_100d19b5:
      if (uVar9 == 0xffffffff) goto LAB_100d20e1;
    }
    pCVar13 = local_74;
    pCVar7 = local_7c;
    if (local_74 == (CMFCVisualManagerOffice2007 *)0x0) {
LAB_100d1a3e:
      iVar2 = *(int *)pCVar7;
      guard_check_icall(local_60,local_98,local_94,local_90,local_8c,local_3c,0xff);
      (**(code **)(iVar2 + 0x10))();
      pCVar10 = local_60;
    }
    else {
      local_88 = local_90 - local_98;
      local_84 = local_8c - local_94;
      iVar2 = CMFCVisualManagerBitmapCache::FindIndex
                        ((CMFCVisualManagerBitmapCache *)local_74,(CSize *)&local_88);
      pCVar7 = local_7c;
      if ((iVar2 == -1) &&
         (iVar2 = CMFCVisualManagerBitmapCache::Cache
                            ((CMFCVisualManagerBitmapCache *)pCVar13,(CSize *)&local_88,
                             (CMFCControlRenderer *)local_7c), iVar2 == -1)) goto LAB_100d1a3e;
      pCVar10 = local_60;
      uVar22 = 0xff;
      pCVar15 = local_60;
      iVar8 = local_98;
      iVar12 = local_94;
      iVar17 = local_90;
      iVar19 = local_8c;
      pCVar4 = CMFCVisualManagerBitmapCache::Get((CMFCVisualManagerBitmapCache *)local_74,iVar2);
      CMFCVisualManagerBitmapCache::CMFCVisualManagerBitmapCacheItem::Draw
                (pCVar4,pCVar15,iVar8,iVar12,iVar17,iVar19,uVar9,uVar22);
    }
    this_00 = local_68._4_4_;
    pCVar7 = local_6c;
    if (local_68._4_4_ != (CMFCVisualManagerBitmapCache *)0x0) {
      local_78 = local_24.right - local_24.left;
      local_74 = (CMFCVisualManagerOffice2007 *)(local_24.bottom - local_24.top);
      iVar2 = CMFCVisualManagerBitmapCache::FindIndex(local_68._4_4_,(CSize *)&local_78);
      pCVar7 = local_6c;
      if ((iVar2 != -1) ||
         (iVar2 = CMFCVisualManagerBitmapCache::Cache
                            (this_00,(CSize *)&local_78,(CMFCControlRenderer *)local_6c),
         iVar2 != -1)) {
        uVar22 = 0xff;
        LVar16 = local_24.left;
        LVar18 = local_24.top;
        LVar20 = local_24.right;
        LVar21 = local_24.bottom;
        pCVar7 = local_40;
        pCVar4 = CMFCVisualManagerBitmapCache::Get(local_68._4_4_,iVar2);
        CMFCVisualManagerBitmapCache::CMFCVisualManagerBitmapCacheItem::Draw
                  (pCVar4,pCVar10,LVar16,LVar18,LVar20,LVar21,pCVar7,uVar22);
        goto LAB_100d20e1;
      }
    }
    iVar2 = *(int *)pCVar7;
    guard_check_icall(local_60,local_24.left,local_24.top,local_24.right,local_24.bottom,local_40,
                      0xff);
  }
  (**(code **)(iVar2 + 0x10))();
LAB_100d20e1:
  uVar6 = FUN_1017f5f4();
  return uVar6;
}

