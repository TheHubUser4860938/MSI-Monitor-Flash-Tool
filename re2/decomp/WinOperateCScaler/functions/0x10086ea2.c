// rea decompile_all
// name: CDrawingManager::FillGradient2
// address: 0x10086ea2
// body: available
// range: 0x10086ea2-0x1008724a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10086fc5 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CDrawingManager::FillGradient2(class CRect,unsigned long,unsigned
   long,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDrawingManager::FillGradient2
          (CDrawingManager *this,int param_2,int param_3,int param_4,int param_5,uint param_6,
          uint param_7,int param_8)

{
  CDrawingManager *pCVar1;
  int iVar2;
  HDC pHVar3;
  int iVar4;
  HBITMAP pHVar5;
  long lVar6;
  CPen *pCVar7;
  int iVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined **local_a0;
  HBRUSH local_9c;
  CGdiObject *local_98;
  CGdiObject *local_94;
  int local_90;
  uint local_8c;
  uint local_88;
  undefined **local_84 [2];
  undefined8 local_7c;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  CDC local_60 [4];
  HDC__ *local_5c;
  undefined **local_50;
  void *local_4c;
  CDrawingManager *local_48;
  ushort local_44;
  ushort local_42;
  int local_40;
  int local_3c;
  int local_38;
  POINT local_34;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uVar10 = param_6;
  uStack_4 = 0x90;
  local_8 = 0x10086eb1;
  local_48 = this;
  if (param_6 == param_7) {
    CBrush::CBrush((CBrush *)&local_a0,param_6);
    FillRect(*(HDC *)(*(int *)(local_48 + 4) + 4),(RECT *)&param_2,local_9c);
    local_a0 = CBrush::vftable;
    CImageList::~CImageList((CImageList *)&local_a0);
    goto LAB_10087243;
  }
  pvVar9 = (void *)0x0;
  if (param_8 == 0) {
LAB_1008722d:
    uVar12 = 0;
    uVar11 = param_7;
  }
  else if (param_8 == 0x5a) {
    uVar12 = 1;
    uVar11 = param_7;
  }
  else {
    uVar11 = param_6;
    if (param_8 == 0xb4) {
      uVar12 = 0;
      uVar10 = param_7;
    }
    else {
      if (param_8 != 0x10e) {
        if (param_8 != 0x168) {
          CDC::CDC(local_60);
          pCVar1 = local_48;
          local_8 = 0;
          if (*(int *)(local_48 + 4) == 0) {
            pHVar3 = (HDC)0x0;
          }
          else {
            pHVar3 = *(HDC *)(*(int *)(local_48 + 4) + 4);
          }
          pHVar3 = CreateCompatibleDC(pHVar3);
          iVar4 = CDC::Attach(local_60,pHVar3);
          if (iVar4 != 0) {
            local_4c = (void *)0x0;
            local_50 = CBitmap::vftable;
            local_8 = CONCAT31(local_8._1_3_,1);
            pHVar5 = CreateCompatibleBitmap
                               (*(HDC *)(*(int *)(pCVar1 + 4) + 4),param_4 - param_2,
                                param_5 - param_3);
            iVar4 = CMenu::Attach((CMenu *)&local_50,(HMENU__ *)pHVar5);
            if (iVar4 != 0) {
              local_98 = CDC::SelectGdiObject(local_5c,local_4c);
              if (local_98 == (CGdiObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_1001d023();
              }
              local_94 = CDC::SelectStockObject(local_60,8);
              local_7c = (double)(param_8 + 0xb4);
              local_38 = param_5 - param_3;
              FUN_1017d6c0((local_7c * 3.141592653589793) / 180.0);
              local_7c = (double)local_38;
              local_64 = FUN_101548f0();
              iVar4 = param_4 - param_2;
              lVar6 = _labs(local_64);
              local_74 = lVar6 + iVar4;
              if (local_64 < 1) {
                local_68 = 0;
              }
              else {
                local_68 = -local_64;
              }
              local_42 = (ushort)uVar10 >> 8;
              local_44 = (ushort)param_7 >> 8;
              local_7c = (double)(CONCAT44(param_7,(undefined4)local_7c) & 0xffffffffff);
              local_40 = 0x40;
              local_8c = param_7 >> 0x10;
              local_90 = -(uVar10 & 0xff);
              local_88 = uVar10 >> 0x10;
              local_6c = (uVar10 & 0xff) << 6;
              local_3c = 0;
              local_38 = 0;
              local_70 = 0;
              iVar4 = local_68;
              do {
                CBrush::CBrush((CBrush *)local_84,
                               (((int)((local_88 & 0xff) * local_40 + (local_8c & 0xff) * local_3c)
                                 >> 6 & 0xffU) << 8 |
                               (int)((uint)(byte)local_42 * local_40 +
                                    (uint)(byte)local_44 * local_3c) >> 6 & 0xffU) << 8 |
                               local_6c + local_70 >> 6 & 0xffU);
                iVar2 = local_38;
                iVar8 = (local_38 >> 6) + iVar4;
                local_8._0_1_ = 2;
                local_3c = local_3c + 1;
                local_38 = (local_38 + local_74 >> 6) + iVar4;
                if (iVar8 == local_38) {
                  local_8 = CONCAT31(local_8._1_3_,1);
                  local_84[0] = CBrush::vftable;
                  CImageList::~CImageList((CImageList *)local_84);
                }
                else {
                  local_34.y = 0;
                  local_1c = iVar8 + local_64;
                  local_24 = local_64 + local_38;
                  local_20 = param_5 - param_3;
                  local_28 = 0;
                  local_34.x = iVar8;
                  local_2c = local_38;
                  local_18 = local_20;
                  pCVar7 = CDC::SelectObject(local_60,(CPen *)local_84);
                  Polygon(local_5c,&local_34,4);
                  CDC::SelectObject(local_60,pCVar7);
                  local_8 = CONCAT31(local_8._1_3_,1);
                  local_84[0] = CBrush::vftable;
                  CImageList::~CImageList((CImageList *)local_84);
                  iVar4 = local_68;
                }
                local_6c = local_6c + local_90;
                local_40 = local_40 + -1;
                local_70 = local_70 + local_7c._4_4_;
                local_38 = iVar2 + local_74;
              } while (local_3c < 0x40);
              CDC::SelectObject(local_60,(CPen *)local_94);
              BitBlt(*(HDC *)(*(int *)(local_48 + 4) + 4),param_2,param_3,param_4 - param_2,
                     param_5 - param_3,local_5c,0,0,0xcc0020);
              if (local_98 != (CGdiObject *)0x0) {
                pvVar9 = *(void **)(local_98 + 4);
              }
              CDC::SelectGdiObject(local_5c,pvVar9);
            }
            local_50 = CBitmap::vftable;
            CImageList::~CImageList((CImageList *)&local_50);
          }
          CDC::~CDC(local_60);
          goto LAB_10087243;
        }
        goto LAB_1008722d;
      }
      uVar12 = 1;
      uVar10 = param_7;
    }
  }
  FillGradient(this,param_2,param_3,param_4,param_5,uVar10,uVar11,uVar12,0);
LAB_10087243:
  FUN_10154478();
  return;
}

