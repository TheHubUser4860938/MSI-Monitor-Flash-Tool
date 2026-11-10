// rea decompile_all
// name: FUN_100b0b89
// address: 0x100b0b89
// body: available
// range: 0x100b0b89-0x100b13d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b0c4d to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4
FUN_100b0b89(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,uint param_6,
            ulong param_7,int param_8,int param_9,ulong param_10)

{
  double dVar1;
  double dVar2;
  HDC pHVar3;
  int iVar4;
  HBITMAP pHVar5;
  CPen *pCVar6;
  CGdiObject *pCVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  void *pvVar11;
  int iVar12;
  int iVar13;
  float10 extraout_ST0;
  int local_ac;
  int local_a8;
  CGdiObject *local_a4;
  ulong local_a0;
  double local_9c;
  double local_94;
  undefined **local_8c [2];
  HBITMAP__ *local_84;
  double local_80;
  int local_78;
  int local_74;
  undefined8 local_70;
  int local_68;
  undefined **local_64;
  void *local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulong *local_48;
  int local_44;
  CDC local_40 [4];
  HDC__ *local_3c;
  int local_30;
  undefined8 local_2c;
  byte local_22;
  byte local_21;
  double local_20;
  undefined8 local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xdc;
  local_8 = 0x100b0b98;
  local_a0 = param_10;
  iVar13 = param_3 - param_1;
  local_78 = param_1;
  iVar12 = param_4 - param_2;
  local_74 = param_2;
  if ((4 < iVar13) && (4 < iVar12)) {
    local_58 = iVar13;
    local_54 = iVar12;
    CDC::CDC(local_40);
    local_8 = 0;
    if (*(int *)(local_5c + 4) == 0) {
      pHVar3 = (HDC)0x0;
    }
    else {
      pHVar3 = *(HDC *)(*(int *)(local_5c + 4) + 4);
    }
    pHVar3 = CreateCompatibleDC(pHVar3);
    iVar4 = CDC::Attach(local_40,pHVar3);
    if (iVar4 != 0) {
      local_60 = (void *)0x0;
      local_64 = CBitmap::vftable;
      local_8 = CONCAT31(local_8._1_3_,1);
      pHVar5 = CreateCompatibleBitmap(*(HDC *)(*(int *)(local_5c + 4) + 4),iVar13,iVar12);
      iVar4 = CMenu::Attach((CMenu *)&local_64,(HMENU__ *)pHVar5);
      if (iVar4 != 0) {
        local_a4 = CDC::SelectGdiObject(local_3c,local_60);
        if (local_a4 == (CGdiObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_1004886a();
        }
        local_ac = iVar13;
        local_a8 = iVar12;
        local_84 = CDrawingManager::CreateBitmap_32((CSize *)&local_ac,&local_48);
        if ((local_84 != (HBITMAP__ *)0x0) && (local_48 != (ulong *)0x0)) {
          SelectObject(local_3c,local_84);
          if (*(int *)(local_5c + 4) == 0) {
            pHVar3 = (HDC)0x0;
          }
          else {
            pHVar3 = *(HDC *)(*(int *)(local_5c + 4) + 4);
          }
          BitBlt(local_3c,0,0,iVar13,iVar12,pHVar3,param_1,param_2,0xcc0020);
          OffsetRect((LPRECT)&param_1,-local_78,-local_74);
          local_44 = (param_3 + param_1) / 2;
          local_68 = (param_4 + param_2) / 2;
          dVar1 = ((double)param_8 * 3.141592653589793) / 180.0;
          local_80 = dVar1 + 6.283185307179586;
          local_18 = (double)(CONCAT44(param_6 >> 0x10,(undefined4)local_18) & 0xffffffffff);
          local_20 = (double)local_18._4_4_;
          local_50 = 0;
          if (0 < param_9) {
            local_9c = local_80 + 0.017453292519943295;
            do {
              local_4c = 0;
              iVar12 = param_3 - param_1;
              if (param_4 - param_2 <= param_3 - param_1) {
                iVar12 = param_4 - param_2;
              }
              iVar13 = ((param_3 - param_4) - param_1) + param_2;
              local_2c = (double)CONCAT44(iVar12 / 2,(undefined4)local_2c);
              local_30 = iVar13;
              if ((local_a0 != 0xffffffff) && (local_50 == 0)) {
                CBrush::CBrush((CBrush *)local_8c,local_a0);
                local_8 = CONCAT31(local_8._1_3_,2);
                pCVar6 = CDC::SelectObject(local_40,(CPen *)local_8c);
                pCVar7 = CDC::SelectStockObject(local_40,8);
                local_18 = (double)CONCAT44(pCVar7,(undefined4)local_18);
                if (iVar13 == 0) {
                  Ellipse(local_3c,param_1,param_2,param_3,param_4);
                }
                else {
                  if (iVar13 < 1) {
                    Ellipse(local_3c,param_1,param_2,param_3,(param_3 - param_1) + param_2);
                    Ellipse(local_3c,param_1,(param_4 - param_3) + param_1,param_3,param_4);
                    iVar13 = (param_3 - param_1) / 2;
                    iVar9 = param_4 - iVar13;
                    iVar13 = param_2 + iVar13;
                    iVar12 = param_1;
                    iVar4 = param_3;
                  }
                  else {
                    Ellipse(local_3c,param_1,param_2,(param_4 - param_2) + param_1,param_4);
                    Ellipse(local_3c,(param_3 - param_4) + param_2,param_2,param_3,param_4);
                    iVar4 = (param_4 - param_2) / 2;
                    iVar12 = param_1 + iVar4;
                    iVar13 = param_2;
                    iVar4 = param_3 - iVar4;
                    iVar9 = param_4;
                  }
                  Rectangle(local_3c,iVar12,iVar13,iVar4,iVar9);
                }
                CDC::SelectObject(local_40,pCVar6);
                CDC::SelectObject(local_40,(CPen *)((ulonglong)local_18 >> 0x20));
                local_8 = CONCAT31(local_8._1_3_,1);
                local_8c[0] = CBrush::vftable;
                CImageList::~CImageList((CImageList *)local_8c);
              }
              local_70 = (double)CONCAT44(0xffffffff,(undefined4)local_70);
              local_18 = (double)CONCAT44(0xffffffff,(undefined4)local_18);
              local_94 = dVar1;
              if (dVar1 < local_9c) {
                dVar2 = local_80 + dVar1;
                local_20 = (double)local_2c._4_4_;
                do {
                  if (dVar2 * 0.5 < local_94) {
                    local_2c._4_4_ = 0x168 - local_4c;
                  }
                  else {
                    local_2c._4_4_ = local_4c;
                  }
                  local_2c = (double)local_2c._4_4_;
                  local_22 = FUN_1017f8e0();
                  local_21 = FUN_1017f8e0();
                  uVar8 = FUN_1017f8e0();
                  if ((local_50 != 0) || (uVar10 = param_7, param_7 == 0xffffffff)) {
                    uVar10 = ((uVar8 & 0xff) << 8 | (uint)local_21) << 8 | (uint)local_22;
                  }
                  FUN_10192550((double)extraout_ST0);
                  iVar13 = FUN_1017f8a0();
                  iVar13 = iVar13 + local_44;
                  FUN_10192200(local_94);
                  iVar12 = FUN_1017f8a0();
                  iVar12 = local_68 + iVar12;
                  if (local_30 < 1) {
                    if (local_30 < 0) {
                      local_70 = (double)local_30;
                      iVar4 = FUN_1017f8a0();
                      iVar12 = iVar12 + iVar4;
                      if ((local_18._4_4_ != -1) && (local_68 < local_18._4_4_ != local_68 < iVar12)
                         ) {
                        if (iVar12 < local_18._4_4_) {
                          local_2c = (double)CONCAT44(iVar12,(undefined4)local_2c);
                          iVar4 = iVar12;
                        }
                        else {
                          local_2c = (double)CONCAT44(local_18._4_4_,(undefined4)local_2c);
                          iVar4 = local_18._4_4_;
                        }
                        while( true ) {
                          iVar9 = local_18._4_4_;
                          if (local_18._4_4_ < iVar12) {
                            iVar9 = iVar12;
                          }
                          if (iVar9 <= iVar4) break;
                          CDrawingManager::SetPixel(local_48,local_58,local_54,iVar13,iVar4,uVar10);
                          iVar4 = local_2c._4_4_ + 1;
                          local_2c = (double)CONCAT44(iVar4,(undefined4)local_2c);
                        }
                      }
                    }
                  }
                  else {
                    local_18 = (double)local_30;
                    iVar4 = FUN_1017f8a0();
                    iVar13 = iVar13 + iVar4;
                    if ((local_70._4_4_ != -1) && (local_44 < local_70._4_4_ != local_44 < iVar13))
                    {
                      if (iVar13 < local_70._4_4_) {
                        local_2c = (double)CONCAT44(iVar13,(undefined4)local_2c);
                        iVar4 = iVar13;
                      }
                      else {
                        local_2c = (double)CONCAT44(local_70._4_4_,(undefined4)local_2c);
                        iVar4 = local_70._4_4_;
                      }
                      while( true ) {
                        iVar9 = local_70._4_4_;
                        if (local_70._4_4_ < iVar13) {
                          iVar9 = iVar13;
                        }
                        if (iVar9 <= iVar4) break;
                        CDrawingManager::SetPixel(local_48,local_58,local_54,iVar4,iVar12,uVar10);
                        iVar4 = local_2c._4_4_ + 1;
                        local_2c = (double)CONCAT44(iVar4,(undefined4)local_2c);
                      }
                    }
                  }
                  CDrawingManager::SetPixel(local_48,local_58,local_54,iVar13,iVar12,uVar10);
                  local_94 = local_94 + 0.017453292519943295;
                  local_4c = local_4c + 1;
                  local_70 = (double)CONCAT44(iVar13,(undefined4)local_70);
                  local_18 = (double)CONCAT44(iVar12,(undefined4)local_18);
                } while (local_94 < local_9c);
              }
              InflateRect((LPRECT)&param_1,-1,-1);
              local_50 = local_50 + 1;
              iVar12 = local_54;
              iVar13 = local_58;
            } while (local_50 < param_9);
          }
          pvVar11 = (void *)0x0;
          BitBlt(*(HDC *)(*(int *)(local_5c + 4) + 4),local_78,local_74,iVar13,iVar12,local_3c,0,0,
                 0xcc0020);
          if (local_a4 != (CGdiObject *)0x0) {
            pvVar11 = *(void **)(local_a4 + 4);
          }
          CDC::SelectGdiObject(local_3c,pvVar11);
          DeleteObject(local_84);
          local_64 = CBitmap::vftable;
          CImageList::~CImageList((CImageList *)&local_64);
          CDC::~CDC(local_40);
          return 1;
        }
      }
      local_64 = CBitmap::vftable;
      CImageList::~CImageList((CImageList *)&local_64);
    }
    CDC::~CDC(local_40);
  }
  return 0;
}

