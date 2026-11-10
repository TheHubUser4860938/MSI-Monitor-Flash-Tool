// rea decompile_all
// name: FUN_10079a8d
// address: 0x10079a8d
// body: available
// range: 0x10079a8d-0x1007a5c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10079b89 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_10079a8d(int *param_1,uint param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  HDC pHVar7;
  int iVar8;
  HBITMAP pHVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  char cVar13;
  uint *puVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  float10 fVar18;
  float10 fVar19;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST1;
  undefined4 local_f8;
  undefined4 local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  double local_d8;
  HBITMAP__ *local_d0;
  CGdiObject *local_cc;
  double local_c8;
  CDC local_c0 [4];
  HDC__ *local_bc;
  double local_b0;
  CDrawingManager *local_a8;
  double local_a4;
  undefined **local_9c;
  void *local_98;
  double local_94;
  undefined8 local_8c;
  uint local_84;
  uint local_80;
  double local_7c;
  double local_74;
  uint local_6c;
  uint local_68;
  double local_64;
  uint local_5c;
  uint local_58;
  uint local_54;
  int local_50;
  int local_4c;
  double local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 local_34;
  uint local_2c;
  int local_28;
  uint local_24;
  double local_20;
  int local_18;
  char local_11;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xe8;
  local_8 = 0x10079a9c;
  if ((param_2 != 0xffffffff) || (param_3 != 0xffffffff)) {
    local_e8 = *param_1;
    local_e4 = param_1[1];
    local_e0 = param_1[2];
    local_dc = param_1[3];
    CRect::NormalizeRect((CRect *)&local_e8);
    iVar16 = local_dc - local_e4;
    iVar17 = local_e0 - local_e8;
    if ((iVar17 != 0) && (iVar16 != 0)) {
      local_50 = iVar17;
      local_4c = iVar16;
      CDC::CDC(local_c0);
      local_8 = 0;
      pHVar7 = (HDC)0x0;
      if (*(int *)(local_a8 + 4) != 0) {
        pHVar7 = *(HDC *)(*(int *)(local_a8 + 4) + 4);
      }
      pHVar7 = CreateCompatibleDC(pHVar7);
      iVar8 = CDC::Attach(local_c0,pHVar7);
      if (iVar8 != 0) {
        local_98 = (void *)0x0;
        local_9c = CBitmap::vftable;
        local_8 = CONCAT31(local_8._1_3_,1);
        pHVar9 = CreateCompatibleBitmap(*(HDC *)(*(int *)(local_a8 + 4) + 4),iVar17,iVar16);
        iVar16 = CMenu::Attach((CMenu *)&local_9c,(HMENU__ *)pHVar9);
        if (iVar16 != 0) {
          local_cc = CDC::SelectGdiObject(local_bc,local_98);
          if (local_cc == (CGdiObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_10012a3f();
          }
          local_d0 = CDrawingManager::CreateBitmap_32((CSize *)&local_50,&local_38);
          if ((local_d0 != (HBITMAP__ *)0x0) && (local_38 != (void *)0x0)) {
            SelectObject(local_bc,local_d0);
            iVar16 = local_50;
            if (param_3 == 0xffffffff) {
              param_3 = param_2;
            }
            local_54 = param_3 & 0xff;
            local_58 = param_3 >> 8 & 0xff;
            local_5c = param_3 >> 0x10 & 0xff;
            local_84 = param_2 >> 8 & 0xff;
            local_6c = param_2 >> 0x10 & 0xff;
            local_80 = param_2 & 0xff;
            local_68 = (uint)(param_2 != 0xffffffff);
            if (local_68 != 0) {
              param_2 = ((local_80 | 0xffffff00) << 8 | local_84) << 8 | local_6c;
            }
            dVar5 = 0.0;
            dVar4 = (double)(local_50 + -1);
            local_28 = local_4c + -1;
            dVar1 = (double)local_28;
            dVar6 = dVar5;
            dVar2 = dVar4;
            if (dVar4 < 0.0) {
              dVar2 = 0.0;
              dVar6 = dVar4;
            }
            dVar4 = dVar1;
            if (0.0 <= dVar1) {
              dVar4 = 0.0;
              dVar5 = dVar1;
            }
            local_11 = dVar5 - dVar4 <= dVar2 - dVar6;
            dVar1 = dVar5;
            dVar3 = dVar6;
            if ((bool)local_11) {
              dVar1 = dVar2;
              dVar2 = dVar5;
              dVar3 = dVar4;
              dVar4 = dVar6;
            }
            local_8c = (dVar2 - dVar3) * 0.5;
            local_b0 = (dVar1 - dVar4) * 0.5;
            local_a4 = (dVar2 + dVar3) * 0.5;
            local_7c = (dVar1 + dVar4) * 0.5;
            local_94 = local_8c;
            if (local_68 != 0) {
              FUN_1015afb0(local_a4 - local_8c);
              iVar17 = FUN_10149490();
              local_28 = iVar17;
              FUN_1015b0d0(local_a4 + local_94);
              local_24 = FUN_10149490();
              local_34 = (double)CONCAT44(iVar17,(undefined4)local_34);
              local_8c = local_94;
              if (iVar17 <= (int)local_24) {
                local_18 = iVar17 * iVar16;
                do {
                  iVar16 = local_50;
                  local_74 = (double)(int)local_34._4_4_;
                  dVar2 = (local_74 - local_a4) / local_8c;
                  dVar2 = 1.0 - dVar2 * dVar2;
                  if (0.0 <= dVar2) {
                    fVar18 = (float10)FUN_1015b584(dVar2);
                    local_74 = (double)(fVar18 * (float10)local_b0);
                    FUN_1015afb0((double)((float10)local_7c - fVar18 * (float10)local_b0));
                    uVar10 = FUN_10149490();
                    local_34 = (double)CONCAT44(uVar10,(undefined4)local_34);
                    FUN_1015b0d0(local_74 + local_7c);
                    iVar8 = FUN_10149490();
                    local_8c = local_94;
                    if (local_11 == '\0') {
                      puVar14 = (uint *)((int)local_38 + (local_34._4_4_ * iVar16 + iVar17) * 4);
                      if ((int)local_34._4_4_ <= iVar8) {
                        iVar8 = (iVar8 - local_34._4_4_) + 1;
                        do {
                          *puVar14 = param_2;
                          puVar14 = puVar14 + iVar16;
                          iVar8 = iVar8 + -1;
                          iVar17 = local_28;
                        } while (iVar8 != 0);
                      }
                    }
                    else if ((int)local_34._4_4_ <= iVar8) {
                      puVar14 = (uint *)((int)local_38 + (local_34._4_4_ + local_18) * 4);
                      for (iVar8 = (iVar8 - local_34._4_4_) + 1; iVar17 = local_28, iVar8 != 0;
                          iVar8 = iVar8 + -1) {
                        *puVar14 = param_2;
                        puVar14 = puVar14 + 1;
                      }
                    }
                  }
                  local_18 = local_18 + iVar16;
                  iVar17 = iVar17 + 1;
                  local_34 = (double)CONCAT44(iVar17,(undefined4)local_34);
                  local_28 = iVar17;
                } while (iVar17 <= (int)local_24);
              }
            }
            local_8c = local_8c * local_8c;
            local_74 = local_b0 * local_b0;
            local_20 = local_74 + local_8c;
            fVar19 = (float10)FUN_1015b584(local_20);
            fVar18 = (float10)local_8c;
            local_8c = (double)(fVar18 / fVar19);
            FUN_1015b0d0((double)((float10)local_a4 - fVar18 / fVar19));
            iVar17 = FUN_10149490();
            FUN_1015afb0(local_8c + local_a4);
            iVar8 = FUN_10149490();
            local_8c = (double)CONCAT44(iVar8,(undefined4)local_8c);
            local_18 = iVar17;
            if (iVar17 <= iVar8) {
              iVar8 = iVar17 * iVar16;
              do {
                local_40 = (double)iVar17;
                dVar2 = (local_40 - local_a4) / local_94;
                dVar2 = 1.0 - dVar2 * dVar2;
                if (0.0 <= dVar2) {
                  local_28 = iVar8;
                  local_18 = iVar17;
                  fVar18 = (float10)FUN_1015b584(dVar2);
                  local_34 = (double)(fVar18 * (float10)local_b0);
                  FUN_1015afb0((double)(fVar18 * (float10)local_b0 + (float10)local_7c));
                  local_18 = FUN_10149490();
                  local_d8 = (double)(int)local_5c;
                  local_40 = local_d8;
                  local_24 = FUN_10149490();
                  local_c8 = (double)(int)local_58;
                  local_40 = local_c8;
                  uVar10 = FUN_10149490();
                  local_48 = (double)(int)local_54;
                  local_34 = (double)CONCAT44(uVar10,(undefined4)local_34);
                  local_40 = local_48;
                  local_2c = FUN_10149490();
                  iVar16 = FUN_10149490();
                  local_40._4_4_ = iVar16;
                  if (local_68 == 0) {
                    cVar15 = (char)local_2c;
                    cVar13 = (char)local_24;
                    uVar12 = (iVar16 << 8 | local_2c & 0xff) << 8 | local_34._4_4_ & 0xff;
                    fVar18 = extraout_ST1;
                    fVar19 = extraout_ST0;
                    uVar11 = local_24;
                  }
                  else {
                    local_64 = (double)(int)local_2c;
                    uVar11 = FUN_101494d0();
                    local_64 = (double)(int)local_34._4_4_;
                    uVar12 = FUN_101494d0();
                    uVar12 = (uVar11 & 0xff | 0xffffff00) << 8 | uVar12 & 0xff;
                    local_64 = (double)(int)local_24;
                    uVar11 = FUN_101494d0();
                    fVar18 = (float10)local_7c;
                    cVar13 = (char)local_24;
                    cVar15 = (char)local_2c;
                    fVar19 = extraout_ST0_00;
                  }
                  uVar12 = uVar12 << 8 | uVar11 & 0xff;
                  uVar11 = (((uint)(byte)((char)local_54 - cVar15) | (-1 - local_40._4_4_) * 0x100)
                            << 8 | (uint)(byte)((char)local_58 - local_34._4_1_)) << 8 |
                           (uint)(byte)((char)local_5c - cVar13);
                  if (local_11 == '\0') {
                    *(uint *)((int)local_38 + (local_18 * local_50 + iVar17) * 4) = uVar11;
                    *(uint *)((int)local_38 + ((local_18 + -1) * local_50 + iVar17) * 4) = uVar12;
                  }
                  else {
                    *(uint *)((int)local_38 + (local_18 + iVar8) * 4) = uVar11;
                    *(uint *)((int)local_38 + (local_18 + iVar8) * 4 + -4) = uVar12;
                  }
                  local_40 = (double)(fVar18 - fVar19);
                  FUN_1015b0d0((double)(fVar18 - fVar19));
                  iVar16 = FUN_10149490();
                  local_64 = (double)iVar16;
                  local_18 = iVar16;
                  local_24 = FUN_10149490();
                  uVar10 = FUN_10149490();
                  local_34 = (double)CONCAT44(uVar10,(undefined4)local_34);
                  local_2c = FUN_10149490();
                  iVar8 = FUN_10149490();
                  local_40 = (double)CONCAT44(iVar8,(undefined4)local_40);
                  if (local_68 == 0) {
                    cVar15 = (char)local_2c;
                    cVar13 = (char)local_24;
                    uVar12 = (iVar8 << 8 | local_2c & 0xff) << 8 | local_34._4_4_ & 0xff;
                    uVar11 = local_24;
                  }
                  else {
                    local_48 = (double)(int)local_2c;
                    uVar11 = FUN_101494d0();
                    local_48 = (double)(int)local_34._4_4_;
                    uVar12 = FUN_101494d0();
                    uVar12 = (uVar11 & 0xff | 0xffffff00) << 8 | uVar12 & 0xff;
                    local_48 = (double)(int)local_24;
                    uVar11 = FUN_101494d0();
                    cVar13 = (char)local_24;
                    cVar15 = (char)local_2c;
                  }
                  uVar12 = uVar12 << 8 | uVar11 & 0xff;
                  uVar11 = (((uint)(byte)((char)local_54 - cVar15) | (-1 - local_40._4_4_) * 0x100)
                            << 8 | (uint)(byte)((char)local_58 - local_34._4_1_)) << 8 |
                           (uint)(byte)((char)local_5c - cVar13);
                  iVar8 = local_28;
                  if (local_11 == '\0') {
                    *(uint *)((int)local_38 + (iVar16 * local_50 + iVar17) * 4) = uVar11;
                    *(uint *)((int)local_38 + ((local_18 + 1) * local_50 + iVar17) * 4) = uVar12;
                  }
                  else {
                    *(uint *)((int)local_38 + (local_28 + iVar16) * 4 + 4) = uVar12;
                    *(uint *)((int)local_38 + (local_28 + iVar16) * 4) = uVar11;
                  }
                }
                iVar17 = iVar17 + 1;
                iVar8 = iVar8 + local_50;
                iVar16 = local_50;
                local_28 = iVar8;
                local_18 = iVar17;
              } while (iVar17 <= local_8c._4_4_);
            }
            fVar19 = (float10)FUN_1015b584(local_20);
            fVar18 = (float10)local_74;
            local_74 = (double)(fVar18 / fVar19);
            FUN_1015afb0((double)((float10)local_7c - fVar18 / fVar19));
            iVar17 = FUN_10149490();
            FUN_1015b0d0(local_74 + local_7c);
            iVar8 = FUN_10149490();
            local_40 = (double)CONCAT44(iVar8,(undefined4)local_40);
            local_f0 = iVar16;
            local_18 = iVar17;
            if (iVar17 <= iVar8) {
              iVar16 = iVar17 * iVar16;
              do {
                local_20 = (double)iVar17;
                dVar2 = (local_20 - local_7c) / local_b0;
                dVar2 = 1.0 - dVar2 * dVar2;
                if (0.0 <= dVar2) {
                  local_28 = iVar16;
                  local_18 = iVar17;
                  fVar18 = (float10)FUN_1015b584(dVar2);
                  local_74 = (double)(fVar18 * (float10)local_94);
                  fVar18 = (float10)local_a4 - fVar18 * (float10)local_94;
                  local_48 = (double)fVar18;
                  FUN_1015b0d0((double)fVar18);
                  local_18 = FUN_10149490();
                  local_48 = (double)(int)local_5c;
                  local_20 = local_48;
                  local_24 = FUN_10149490();
                  local_c8 = (double)(int)local_58;
                  local_20 = local_c8;
                  uVar10 = FUN_10149490();
                  local_d8 = (double)(int)local_54;
                  local_34 = (double)CONCAT44(uVar10,(undefined4)local_34);
                  local_20 = local_d8;
                  local_2c = FUN_10149490();
                  iVar8 = FUN_10149490();
                  local_8c._4_4_ = iVar8;
                  if (local_68 == 0) {
                    cVar15 = (char)local_2c;
                    cVar13 = (char)local_24;
                    uVar12 = (iVar8 << 8 | local_2c & 0xff) << 8 | local_34._4_4_ & 0xff;
                    uVar11 = local_24;
                  }
                  else {
                    local_20 = (double)(int)local_2c;
                    uVar11 = FUN_101494d0();
                    local_20 = (double)(int)local_34._4_4_;
                    uVar12 = FUN_101494d0();
                    uVar12 = (uVar11 & 0xff | 0xffffff00) << 8 | uVar12 & 0xff;
                    local_20 = (double)(int)local_24;
                    uVar11 = FUN_101494d0();
                    cVar13 = (char)local_24;
                    cVar15 = (char)local_2c;
                  }
                  uVar12 = uVar12 << 8 | uVar11 & 0xff;
                  uVar11 = (((uint)(byte)((char)local_54 - cVar15) | (-1 - local_8c._4_4_) * 0x100)
                            << 8 | (uint)(byte)((char)local_58 - local_34._4_1_)) << 8 |
                           (uint)(byte)((char)local_5c - cVar13);
                  if (local_11 == '\0') {
                    *(uint *)((int)local_38 + (local_18 + iVar16) * 4) = uVar11;
                    *(uint *)((int)local_38 + (local_18 + iVar16) * 4 + 4) = uVar12;
                  }
                  else {
                    *(uint *)((int)local_38 + (local_18 * local_50 + iVar17) * 4) = uVar11;
                    *(uint *)((int)local_38 + ((local_18 + 1) * local_50 + iVar17) * 4) = uVar12;
                  }
                  FUN_1015afb0(local_74 + local_a4);
                  iVar8 = FUN_10149490();
                  local_20 = (double)iVar8;
                  local_18 = iVar8;
                  local_24 = FUN_10149490();
                  uVar10 = FUN_10149490();
                  local_34 = (double)CONCAT44(uVar10,(undefined4)local_34);
                  local_2c = FUN_10149490();
                  iVar16 = FUN_10149490();
                  local_8c = (double)CONCAT44(iVar16,(undefined4)local_8c);
                  if (local_68 == 0) {
                    cVar15 = (char)local_2c;
                    cVar13 = (char)local_24;
                    uVar12 = (iVar16 << 8 | local_2c & 0xff) << 8 | local_34._4_4_ & 0xff;
                    uVar11 = local_24;
                  }
                  else {
                    local_20 = (double)(int)local_2c;
                    uVar11 = FUN_101494d0();
                    local_20 = (double)(int)local_34._4_4_;
                    uVar12 = FUN_101494d0();
                    uVar12 = (uVar11 & 0xff | 0xffffff00) << 8 | uVar12 & 0xff;
                    local_20 = (double)(int)local_24;
                    uVar11 = FUN_101494d0();
                    cVar13 = (char)local_24;
                    cVar15 = (char)local_2c;
                  }
                  uVar12 = uVar12 << 8 | uVar11 & 0xff;
                  uVar11 = (((uint)(byte)((char)local_54 - cVar15) | (-1 - local_8c._4_4_) * 0x100)
                            << 8 | (uint)(byte)((char)local_58 - local_34._4_1_)) << 8 |
                           (uint)(byte)((char)local_5c - cVar13);
                  iVar16 = local_28;
                  if (local_11 == '\0') {
                    *(uint *)((int)local_38 + (local_28 + iVar8) * 4 + -4) = uVar12;
                    *(uint *)((int)local_38 + (local_28 + iVar8) * 4) = uVar11;
                  }
                  else {
                    *(uint *)((int)local_38 + (iVar8 * local_50 + iVar17) * 4) = uVar11;
                    *(uint *)((int)local_38 + ((local_18 + -1) * local_50 + iVar17) * 4) = uVar12;
                  }
                }
                iVar17 = iVar17 + 1;
                iVar16 = iVar16 + local_50;
                local_f0 = local_50;
                local_28 = iVar16;
                local_18 = iVar17;
              } while (iVar17 <= local_40._4_4_);
            }
            local_f8 = 0;
            local_f4 = 0;
            local_ec = local_4c;
            CDrawingManager::DrawAlpha
                      (local_a8,*(CDC **)(local_a8 + 4),(CRect *)&local_e8,local_c0,
                       (CRect *)&local_f8);
            CDC::SelectGdiObject(local_bc,*(void **)(local_cc + 4));
            DeleteObject(local_d0);
          }
        }
        local_9c = CBitmap::vftable;
        CImageList::~CImageList((CImageList *)&local_9c);
      }
      CDC::~CDC(local_c0);
    }
  }
  return;
}

