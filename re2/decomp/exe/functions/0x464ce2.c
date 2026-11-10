// rea decompile_all
// name: FUN_00464ce2
// address: 0x464ce2
// body: available
// range: 0x464ce2-0x465187 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x464dde to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4
FUN_00464ce2(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,int param_7,
            uint param_8)

{
  AFX_GLOBAL_DATA *pAVar1;
  HDC pHVar2;
  int iVar3;
  HBITMAP pHVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  int in_ECX;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 in_stack_ffffff94;
  int local_5c;
  int local_58;
  HBITMAP__ *local_54;
  CGdiObject *local_50;
  int local_4c;
  int local_48;
  int local_44;
  CDC local_40 [4];
  HDC__ *local_3c;
  undefined8 local_30;
  undefined **local_28;
  void *local_24;
  uint local_20;
  uint *local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4c;
  local_8 = 0x464cee;
  if (((param_5 != 100) && (param_4 != param_2 && -1 < param_4 - param_2)) &&
     (param_3 != param_1 && -1 < param_3 - param_1)) {
    local_4c = in_ECX;
    pAVar1 = GetGlobalData();
    if (8 < *(int *)(pAVar1 + 0x1ac)) {
      if ((param_8 == 0xffffffff) || (param_5 < 0x65)) {
        iVar11 = param_3 - param_1;
        iVar10 = param_4 - param_2;
        local_48 = iVar10;
        local_44 = iVar11;
        CDC::CDC(local_40);
        local_8 = 0;
        pHVar2 = (HDC)0x0;
        if (*(int *)(in_ECX + 4) != 0) {
          pHVar2 = *(HDC *)(*(int *)(in_ECX + 4) + 4);
        }
        pHVar2 = CreateCompatibleDC(pHVar2);
        iVar3 = CDC::Attach(local_40,pHVar2);
        if (iVar3 != 0) {
          local_24 = (void *)0x0;
          local_28 = CBitmap::vftable;
          local_8 = CONCAT31(local_8._1_3_,1);
          pHVar4 = CreateCompatibleBitmap(*(HDC *)(*(int *)(in_ECX + 4) + 4),iVar11,iVar10);
          iVar3 = CMenu::Attach((CMenu *)&local_28,(HMENU__ *)pHVar4);
          if (iVar3 != 0) {
            local_50 = CDC::SelectGdiObject(local_3c,local_24);
            if (local_50 == (CGdiObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00429127();
            }
            local_5c = iVar11;
            local_58 = iVar10;
            local_54 = CDrawingManager::CreateBitmap_32((CSize *)&local_5c,&local_1c);
            if ((local_54 != (HBITMAP__ *)0x0) && (local_1c != (uint *)0x0)) {
              SelectObject(local_3c,local_54);
              pHVar2 = (HDC)0x0;
              if (*(int *)(in_ECX + 4) != 0) {
                pHVar2 = *(HDC *)(*(int *)(in_ECX + 4) + 4);
              }
              BitBlt(local_3c,0,0,iVar11,iVar10,pHVar2,param_1,param_2,0xcc0020);
              uVar9 = param_6;
              if (param_6 != 0xffffffff) {
                uVar9 = param_6 >> 0x10 & 0xff | (param_6 >> 8 & 0xff | (param_6 & 0xff) << 8) << 8;
              }
              iVar3 = iVar10 * iVar11;
              local_30 = (double)CONCAT44(iVar3,(undefined4)local_30);
              if (0 < iVar3) {
                do {
                  local_14 = *local_1c;
                  if (param_7 < 1) {
                    if (local_14 != uVar9) goto LAB_00464f77;
                  }
                  else {
                    lVar5 = _labs((local_14 & 0xff) - (uVar9 & 0xff));
                    uVar6 = local_14;
                    if (((param_7 <= lVar5) ||
                        (lVar5 = _labs((local_14 >> 8 & 0xff) - (uVar9 >> 8 & 0xff)),
                        param_7 <= lVar5)) ||
                       (lVar5 = _labs((uVar6 >> 0x10 & 0xff) - (uVar9 >> 0x10 & 0xff)),
                       param_7 <= lVar5)) {
LAB_00464f77:
                      iVar10 = param_5;
                      if (param_5 == -1) {
                        iVar10 = (local_14 & 0xff) * 2;
                        pAVar1 = GetGlobalData();
                        if (((uint)(byte)pAVar1[0x26] + iVar10) / 3 < 0x100) {
                          pAVar1 = GetGlobalData();
                          local_18 = ((uint)(byte)pAVar1[0x26] + iVar10) / 3;
                        }
                        else {
                          local_18 = 0xff;
                        }
                        iVar10 = (local_14 >> 8 & 0xff) * 2;
                        pAVar1 = GetGlobalData();
                        if (((uint)(byte)pAVar1[0x25] + iVar10) / 3 < 0x100) {
                          pAVar1 = GetGlobalData();
                          local_20 = ((uint)(byte)pAVar1[0x25] + iVar10) / 3;
                        }
                        else {
                          local_20 = 0xff;
                        }
                        iVar10 = (local_14 >> 0x10 & 0xff) * 2;
                        pAVar1 = GetGlobalData();
                        if (((uint)(byte)pAVar1[0x24] + iVar10) / 3 < 0x100) {
                          pAVar1 = GetGlobalData();
                          uVar6 = ((uint)(byte)pAVar1[0x24] + iVar10) / 3;
                        }
                        else {
                          uVar6 = 0xff;
                        }
                        uVar8 = (uVar6 & 0xff | 0xffffff00) << 8 | local_20 & 0xff;
                        uVar6 = local_18;
                      }
                      else {
                        if (param_8 == 0xffffffff) {
                          local_30 = (double)param_5;
                          uVar12 = SUB84(local_30 * 0.01,0);
                          uVar13 = (undefined4)((ulonglong)(local_30 * 0.01) >> 0x20);
                          uVar7 = CDrawingManager::PixelAlpha
                                            (local_14,(double)CONCAT44(uVar12,uVar13),
                                             (double)CONCAT44(uVar12,uVar13),
                                             (double)CONCAT44(in_stack_ffffff94,uVar13));
                          *local_1c = uVar7 | 0xff000000;
                          goto LAB_00464eea;
                        }
                        local_18 = local_14 & 0xff;
                        local_20 = local_14 >> 0x10 & 0xff;
                        iVar11 = (param_8 >> 0x10 & 0xff) - local_18;
                        local_14 = local_14 >> 8 & 0xff;
                        local_30._4_4_ = iVar11;
                        iVar11 = MulDiv(iVar11,param_5,100);
                        if ((int)(iVar11 + local_18) < 0x100) {
                          iVar11 = MulDiv(local_30._4_4_,iVar10,100);
                          local_30 = (double)CONCAT44(iVar11 + local_18,(undefined4)local_30);
                        }
                        else {
                          local_30 = (double)CONCAT44(0xff,(undefined4)local_30);
                        }
                        local_18 = (param_8 >> 8 & 0xff) - local_14;
                        iVar11 = MulDiv(local_18,iVar10,100);
                        if ((int)(iVar11 + local_14) < 0x100) {
                          iVar11 = MulDiv(local_18,iVar10,100);
                          local_18 = iVar11 + local_14;
                        }
                        else {
                          local_18 = 0xff;
                        }
                        local_14 = (param_8 & 0xff) - local_20;
                        iVar11 = MulDiv(local_14,iVar10,100);
                        if ((int)(iVar11 + local_20) < 0x100) {
                          iVar10 = MulDiv(local_14,iVar10,100);
                          uVar6 = iVar10 + local_20;
                        }
                        else {
                          uVar6 = 0xff;
                        }
                        uVar8 = (uVar6 & 0xff | 0xffffff00) << 8 | local_18 & 0xff;
                        uVar6 = local_30._4_4_;
                      }
                      *local_1c = uVar8 << 8 | uVar6 & 0xff;
                    }
                  }
LAB_00464eea:
                  local_1c = local_1c + 1;
                  iVar3 = iVar3 + -1;
                  iVar10 = local_48;
                  iVar11 = local_44;
                } while (iVar3 != 0);
              }
              BitBlt(*(HDC *)(*(int *)(local_4c + 4) + 4),param_1,param_2,iVar11,iVar10,local_3c,0,0
                     ,0xcc0020);
              CDC::SelectGdiObject(local_3c,*(void **)(local_50 + 4));
              DeleteObject(local_54);
              local_28 = CBitmap::vftable;
              FUN_0040ee80();
              CDC::~CDC(local_40);
              return 1;
            }
          }
          local_28 = CBitmap::vftable;
          FUN_0040ee80();
        }
        CDC::~CDC(local_40);
      }
      return 0;
    }
    CMFCToolBarImages::FillDitheredRect(*(CDC **)(in_ECX + 4),(CRect *)&param_1);
  }
  return 1;
}

