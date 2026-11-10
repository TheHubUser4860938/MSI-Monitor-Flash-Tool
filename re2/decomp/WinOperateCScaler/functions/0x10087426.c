// rea decompile_all
// name: CDrawingManager::GrayRect
// address: 0x10087426
// body: available
// range: 0x10087426-0x1008772b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10087504 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CDrawingManager::GrayRect(class CRect,int,unsigned long,unsigned long)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CDrawingManager::GrayRect
          (CDrawingManager *this,int param_2,int param_3,int param_4,int param_5,int param_6,
          uint param_7,uint param_8)

{
  AFX_GLOBAL_DATA *pAVar1;
  HDC pHVar2;
  int iVar3;
  HBITMAP pHVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  int cx;
  int cy;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 in_stack_ffffff84;
  undefined1 local_6c [8];
  undefined1 local_64 [8];
  undefined1 local_5c [8];
  int local_54;
  int local_50;
  HBITMAP__ *local_4c;
  CGdiObject *local_48;
  CDrawingManager *local_44;
  undefined8 local_40;
  CDC local_38 [4];
  HDC__ *local_34;
  uint local_28;
  uint local_24;
  undefined **local_20;
  void *local_1c;
  int local_18;
  uint *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x5c;
  local_8 = 0x10087432;
  if ((param_5 != param_3 && -1 < param_5 - param_3) &&
     (param_4 != param_2 && -1 < param_4 - param_2)) {
    local_44 = this;
    pAVar1 = GetGlobalData();
    if (8 < *(int *)(pAVar1 + 0x1ac)) {
      cx = param_4 - param_2;
      cy = param_5 - param_3;
      CDC::CDC(local_38);
      local_8 = 0;
      pHVar2 = (HDC)0x0;
      if (*(int *)(this + 4) != 0) {
        pHVar2 = *(HDC *)(*(int *)(this + 4) + 4);
      }
      pHVar2 = CreateCompatibleDC(pHVar2);
      iVar3 = CDC::Attach(local_38,pHVar2);
      if (iVar3 != 0) {
        local_1c = (void *)0x0;
        local_20 = CBitmap::vftable;
        local_8 = CONCAT31(local_8._1_3_,1);
        pHVar4 = CreateCompatibleBitmap(*(HDC *)(*(int *)(this + 4) + 4),cx,cy);
        iVar3 = CMenu::Attach((CMenu *)&local_20,(HMENU__ *)pHVar4);
        if (iVar3 != 0) {
          local_48 = CDC::SelectGdiObject(local_34,local_1c);
          if (local_48 == (CGdiObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_1001d023();
          }
          local_54 = cx;
          local_50 = cy;
          local_4c = CreateBitmap_32((CSize *)&local_54,local_14);
          if ((local_4c != (HBITMAP__ *)0x0) && (local_14[0] != (uint *)0x0)) {
            SelectObject(local_34,local_4c);
            pHVar2 = (HDC)0x0;
            if (*(int *)(this + 4) != 0) {
              pHVar2 = *(HDC *)(*(int *)(this + 4) + 4);
            }
            BitBlt(local_34,0,0,cx,cy,pHVar2,param_2,param_3,0xcc0020);
            uVar7 = param_7;
            if (param_7 != 0xffffffff) {
              uVar7 = param_7 >> 0x10 & 0xff | (param_7 >> 8 & 0xff | (param_7 & 0xff) << 8) << 8;
            }
            if (param_8 == 0xffffffff) {
              pAVar1 = GetGlobalData();
              param_8 = *(uint *)(pAVar1 + 0x24);
            }
            local_18 = cy * cx;
            if (0 < local_18) {
              do {
                if (*local_14[0] != uVar7) {
                  FUN_1008874f(*local_14[0],local_64,local_6c,local_5c);
                  uVar5 = FUN_1008772c(local_64._0_4_,local_64._4_4_,local_5c._0_4_,local_5c._4_4_,0
                                       ,0);
                  local_40 = (double)CONCAT44(uVar5,(undefined4)local_40);
                  if (param_6 == -1) {
                    iVar3 = (param_8 >> 0x10 & 0xff) - (uVar5 & 0xff);
                    if (iVar3 < 0) {
                      iVar3 = iVar3 + 1;
                    }
                    local_28 = (iVar3 >> 1) + (uVar5 & 0xff);
                    if (0xff < (int)local_28) {
                      local_28 = 0xff;
                    }
                    local_24 = uVar5 >> 8 & 0xff;
                    iVar3 = (param_8 >> 8 & 0xff) - local_24;
                    if (iVar3 < 0) {
                      iVar3 = iVar3 + 1;
                    }
                    local_24 = (iVar3 >> 1) + local_24;
                    if (0xff < (int)local_24) {
                      local_24 = 0xff;
                    }
                    uVar5 = uVar5 >> 0x10 & 0xff;
                    iVar3 = (param_8 & 0xff) - uVar5;
                    if (iVar3 < 0) {
                      iVar3 = iVar3 + 1;
                    }
                    uVar5 = (iVar3 >> 1) + uVar5;
                    if (0xff < (int)uVar5) {
                      uVar5 = 0xff;
                    }
                    *local_14[0] = ((uVar5 & 0xff | 0xffffff00) << 8 | local_24 & 0xff) << 8 |
                                   local_28 & 0xff;
                  }
                  else {
                    local_40 = (double)param_6;
                    uVar8 = SUB84(local_40 * 0.01,0);
                    uVar9 = (undefined4)((ulonglong)(local_40 * 0.01) >> 0x20);
                    uVar6 = PixelAlpha(uVar5,(double)CONCAT44(uVar8,uVar9),
                                       (double)CONCAT44(uVar8,uVar9),
                                       (double)CONCAT44(in_stack_ffffff84,uVar9));
                    *local_14[0] = uVar6 | 0xff000000;
                  }
                }
                local_14[0] = local_14[0] + 1;
                local_18 = local_18 + -1;
              } while (local_18 != 0);
            }
            BitBlt(*(HDC *)(*(int *)(local_44 + 4) + 4),param_2,param_3,cx,cy,local_34,0,0,0xcc0020)
            ;
            CDC::SelectGdiObject(local_34,*(void **)(local_48 + 4));
            DeleteObject(local_4c);
            local_20 = CBitmap::vftable;
            CImageList::~CImageList((CImageList *)&local_20);
            CDC::~CDC(local_38);
            return 1;
          }
        }
        local_20 = CBitmap::vftable;
        CImageList::~CImageList((CImageList *)&local_20);
      }
      CDC::~CDC(local_38);
      return 0;
    }
    CMFCToolBarImages::FillDitheredRect(*(CDC **)(this + 4),(CRect *)&param_2);
  }
  return 1;
}

