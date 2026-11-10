// rea decompile_all
// name: CDrawingManager::DrawShadow
// address: 0x100b18ea
// body: available
// range: 0x100b18ea-0x100b1d86 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b19ad to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CDrawingManager::DrawShadow(class CRect,int,int,int,class CBitmap *,class
   CBitmap *,unsigned long,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CDrawingManager::DrawShadow
          (CDrawingManager *this,int param_2,int param_3,uint param_4,int param_5,int param_6,
          int param_7,int param_8,CMenu *param_9,CMenu *param_10,undefined4 param_11,int param_12)

{
  CMenu *pCVar1;
  BOOL BVar2;
  HDC pHVar3;
  HBITMAP pHVar4;
  CGdiObject *pCVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_78;
  HBITMAP__ *local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  CDC local_60 [4];
  HDC__ *local_5c;
  undefined **local_50;
  void *local_4c;
  CMenu *local_48;
  int local_44;
  uint local_40;
  int local_3c;
  int local_38;
  CMenu *local_34;
  int local_30;
  void *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  pCVar1 = param_9;
  iVar6 = param_6;
  uStack_4 = 0x74;
  local_8 = 0x100b18f6;
  local_48 = param_9;
  local_34 = param_10;
  if ((param_6 == 0) || (BVar2 = IsRectEmpty((RECT *)&param_2), BVar2 != 0)) {
LAB_100b1d7c:
    iVar6 = 1;
  }
  else {
    local_3c = param_4 - param_2;
    local_44 = param_5 - param_3;
    local_40 = (uint)(param_12 == 0);
    if ((local_34 != (CMenu *)0x0) && (*(int *)(local_34 + 4) != 0)) {
      if ((pCVar1 != (CMenu *)0x0) && (*(int *)(pCVar1 + 4) != 0)) {
        uVar7 = param_4;
        if (param_12 == 0) {
          uVar7 = param_2 - iVar6;
        }
        CDC::DrawState(*(CDC **)(this + 4),uVar7,param_3,iVar6,local_44 + iVar6,local_34,0,0);
        iVar8 = param_2;
        if (param_12 == 0) {
          iVar8 = param_2 - iVar6;
        }
        CDC::DrawState(*(CDC **)(this + 4),iVar8,param_5,local_3c + iVar6,iVar6,local_48,0,0);
        goto LAB_100b1d7c;
      }
      if (*(int *)(local_34 + 4) != 0) goto LAB_100b19ad;
    }
    if ((pCVar1 != (CMenu *)0x0) && (*(int *)(pCVar1 + 4) != 0)) {
LAB_100b19ad:
                    /* WARNING: Subroutine does not return */
      FUN_1004886a();
    }
    CDC::CDC(local_60);
    local_8 = 0;
    if (*(int *)(this + 4) == 0) {
      pHVar3 = (HDC)0x0;
    }
    else {
      pHVar3 = *(HDC *)(*(int *)(this + 4) + 4);
    }
    pHVar3 = CreateCompatibleDC(pHVar3);
    iVar8 = CDC::Attach(local_60,pHVar3);
    if (iVar8 != 0) {
      local_4c = (void *)0x0;
      local_50 = CBitmap::vftable;
      local_28 = local_44 + iVar6;
      local_38 = local_3c + iVar6;
      local_8 = CONCAT31(local_8._1_3_,1);
      pHVar4 = CreateCompatibleBitmap(*(HDC *)(*(int *)(this + 4) + 4),local_38,local_28);
      iVar8 = CMenu::Attach((CMenu *)&local_50,(HMENU__ *)pHVar4);
      if (iVar8 != 0) {
        pCVar5 = CDC::SelectGdiObject(local_5c,local_4c);
        if (pCVar5 == (CGdiObject *)0x0) goto LAB_100b19ad;
        local_74 = (HBITMAP__ *)local_28;
        local_78 = local_38;
        local_74 = CreateBitmap_32((CSize *)&local_78,&local_2c);
        if ((local_74 != (HBITMAP__ *)0x0) && (local_2c != (void *)0x0)) {
          SelectObject(local_5c,local_74);
          iVar8 = param_2;
          if (param_12 == 0) {
            iVar8 = param_2 - iVar6;
          }
          if (*(int *)(this + 4) == 0) {
            pHVar3 = (HDC)0x0;
          }
          else {
            pHVar3 = *(HDC *)(*(int *)(this + 4) + 4);
          }
          BitBlt(local_5c,0,0,local_38,local_28,pHVar3,iVar8,param_3,0xcc0020);
          iVar8 = (param_8 - param_7) / iVar6;
          local_6c = iVar8;
          if (0 < iVar6) {
            local_20 = iVar6 * 2;
            local_30 = local_44 + 1;
            local_24 = iVar6 + local_3c;
            local_70 = iVar6;
            local_1c = param_8 - iVar6 * iVar8;
            local_64 = local_44 - local_3c;
            local_68 = iVar6 - local_3c;
            local_18 = local_3c;
            do {
              local_14 = local_44;
              if (local_44 < local_24 + local_64) {
                do {
                  SetAlphaPixel(local_2c,param_2,param_3,param_4,param_5,local_68 + local_18,
                                local_14,local_1c,iVar6,param_11,local_40);
                  local_14 = local_14 + 1;
                } while (local_14 < local_64 + local_24);
              }
              local_14 = local_20;
              if (local_20 < local_18) {
                do {
                  SetAlphaPixel(local_2c,param_2,param_3,param_4,param_5,local_14,local_30 + -1,
                                param_8,iVar6,param_11,local_40);
                  local_14 = local_14 + 1;
                } while (local_14 < local_18);
              }
              local_14 = local_20;
              if (local_20 < local_30) {
                do {
                  SetAlphaPixel(local_2c,param_2,param_3,param_4,param_5,local_18,local_14,param_8,
                                iVar6,param_11,local_40);
                  local_14 = local_14 + 1;
                } while (local_14 < local_30);
              }
              local_14 = local_3c;
              if (local_3c < local_24) {
                do {
                  SetAlphaPixel(local_2c,param_2,param_3,param_4,param_5,local_14,
                                local_18 + local_68,local_1c,iVar6,param_11,local_40);
                  local_14 = local_14 + 1;
                } while (local_14 < local_24);
              }
              local_30 = local_30 + 1;
              param_8 = param_8 - iVar8;
              local_18 = local_18 + 1;
              local_1c = local_1c + local_6c;
              local_20 = local_20 + -1;
              local_24 = local_24 + -1;
              local_70 = local_70 + -1;
            } while (local_70 != 0);
            local_70 = 0;
          }
          iVar8 = param_2;
          if (param_12 == 0) {
            iVar8 = param_2 - iVar6;
          }
          BitBlt(*(HDC *)(*(int *)(this + 4) + 4),iVar8,param_3,local_38,local_28,local_5c,0,0,
                 0xcc0020);
          if (local_34 != (CMenu *)0x0) {
            pHVar4 = CreateCompatibleBitmap(*(HDC *)(*(int *)(this + 4) + 4),iVar6 + 1,local_28);
            CMenu::Attach(local_34,(HMENU__ *)pHVar4);
            CDC::SelectGdiObject(local_5c,*(void **)(local_34 + 4));
            if (*(int *)(this + 4) == 0) {
              pHVar3 = (HDC)0x0;
            }
            else {
              pHVar3 = *(HDC *)(*(int *)(this + 4) + 4);
            }
            BitBlt(local_5c,0,0,iVar6,local_28,pHVar3,-(uint)(param_12 != 0) & param_4,param_3,
                   0xcc0020);
          }
          if (local_48 != (CMenu *)0x0) {
            pHVar4 = CreateCompatibleBitmap(*(HDC *)(*(int *)(this + 4) + 4),local_38,iVar6 + 1);
            CMenu::Attach(local_48,(HMENU__ *)pHVar4);
            CDC::SelectGdiObject(local_5c,*(void **)(local_48 + 4));
            iVar8 = param_2;
            if (param_12 == 0) {
              iVar8 = param_2 - iVar6;
            }
            if (*(int *)(this + 4) == 0) {
              pHVar3 = (HDC)0x0;
            }
            else {
              pHVar3 = *(HDC *)(*(int *)(this + 4) + 4);
            }
            BitBlt(local_5c,0,0,local_38,iVar6,pHVar3,iVar8,param_5,0xcc0020);
          }
          CDC::SelectGdiObject(local_5c,*(void **)(pCVar5 + 4));
          DeleteObject(local_74);
          local_50 = CBitmap::vftable;
          CImageList::~CImageList((CImageList *)&local_50);
          CDC::~CDC(local_60);
          goto LAB_100b1d7c;
        }
      }
      local_50 = CBitmap::vftable;
      CImageList::~CImageList((CImageList *)&local_50);
    }
    CDC::~CDC(local_60);
    iVar6 = 0;
  }
  return iVar6;
}

