// rea decompile_all
// name: CMFCToolBarImages::Draw
// address: 0x1008544d
// body: available
// range: 0x1008544d-0x10085cbe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCToolBarImages::Draw(class CDC
   *,int,int,int,int,int,int,int,int,unsigned char)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCToolBarImages::Draw
          (CMFCToolBarImages *this,CDC *param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6,int param_7,int param_8,int param_9,uchar param_10)

{
  RECT *lprc;
  CMFCToolBarImages CVar1;
  CMFCToolBarImages CVar2;
  CMFCToolBarImages CVar3;
  code *pcVar4;
  bool bVar5;
  int3 iVar6;
  COLORREF CVar7;
  AFX_GLOBAL_DATA *pAVar8;
  BOOL BVar9;
  HBRUSH hbr;
  HBITMAP pHVar10;
  HDC pHVar11;
  CDC *pCVar12;
  CMFCVisualManager *pCVar13;
  undefined4 uVar14;
  HDC__ *pHVar15;
  HGDIOBJ h;
  int iVar16;
  void *pvVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  DWORD DVar21;
  CMFCToolBarImages *this_00;
  int iVar22;
  int iVar23;
  _BLENDFUNCTION _Var24;
  int iVar25;
  CDC local_c4 [4];
  HDC__ *local_c0;
  undefined **local_b4;
  HBRUSH local_b0;
  int local_ac;
  int local_a8;
  undefined **local_a4;
  void *local_a0;
  HGDIOBJ local_9c;
  int local_98;
  CDrawingManager local_94 [4];
  CGdiObject *local_90;
  int local_8c;
  CDC *local_88;
  CDC *local_84;
  int local_80;
  LONG local_7c;
  int local_78;
  COLORREF local_74;
  uint local_70;
  COLORREF local_6c;
  int local_68;
  int local_64;
  uint *local_60;
  _BLENDFUNCTION local_5c;
  int local_58;
  int local_54;
  BITMAPINFO local_50;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc4;
  local_8 = 0x1008545c;
  local_84 = param_1;
  local_80 = param_2;
  local_8c = param_3;
  if (((param_4 < 0) || (*(int *)(this + 4) <= param_4)) ||
     ((param_8 != 0 && (pAVar8 = GetGlobalData(), *(int *)(pAVar8 + 0x1ac) < 9))))
  goto LAB_10085cb7;
  local_24.right = *(int *)(this + 100) + local_80;
  local_24.top = param_3;
  local_24.bottom = param_3 + *(int *)(this + 0x68);
  *(int *)(this + 0x6c) = local_80;
  local_70 = ~-(uint)(*(int *)(this + 0x20) != 0) & param_5;
  *(int *)(this + 0x70) = param_3;
  local_5c = (_BLENDFUNCTION)(~-(uint)(*(int *)(this + 0x20) != 0) & param_7);
  *(LONG *)(this + 0x74) = local_24.right;
  *(LONG *)(this + 0x78) = local_24.bottom;
  local_9c = (HGDIOBJ)0x0;
  local_24.left = local_80;
  if ((((param_9 == 0) || (param_6 != 0)) && (*(int *)(this + 0x2c) != 0)) &&
     (*(int *)(this + 8) < 0x20)) {
    local_9c = SelectObject(DAT_1020e434,*(HGDIOBJ *)(this + 0x8c));
  }
  local_ac = *(int *)(this + 0x20);
  if ((*(int *)(this + 8) == 0x20) && (local_ac != 0)) {
    local_60 = (uint *)0x1;
    *(undefined4 *)(this + 0x20) = 0;
  }
  else {
    local_60 = (uint *)0x0;
  }
  if ((*(int *)(this + 8) == 0x20) || (DAT_1020e40c != 0)) {
    local_74 = 0xffffffff;
  }
  else {
    local_74 = *(COLORREF *)(this + 0xa8);
  }
  iVar16 = *(int *)(this + 0x20);
  if ((iVar16 != 0) || (this_00 = (CMFCToolBarImages *)local_84, local_74 != 0xffffffff)) {
    this_00 = this + 0x44;
  }
  if ((iVar16 != 0) || (local_68 = local_80, local_74 != 0xffffffff)) {
    local_68 = 0;
  }
  if ((iVar16 == 0) && (local_74 == 0xffffffff)) {
    local_64 = local_8c;
  }
  else {
    local_64 = 0;
  }
  lprc = (RECT *)(this + 0x7c);
  local_7c = lprc->left;
  local_78 = *(int *)(this + 0x80);
  local_88 = (CDC *)this_00;
  local_6c = local_74;
  BVar9 = IsRectEmpty(lprc);
  if (BVar9 == 0) {
    local_58 = *(int *)(this + 0x84) - lprc->left;
  }
  else {
    local_58 = *(int *)(this + 0x54);
  }
  BVar9 = IsRectEmpty(lprc);
  CVar7 = local_6c;
  if (BVar9 == 0) {
    local_54 = *(int *)(this + 0x88) - *(int *)(this + 0x80);
  }
  else {
    local_54 = *(int *)(this + 0x58);
  }
  if ((*(int *)(this + 0x20) != 0) || (local_6c != 0xffffffff)) {
    local_24.right = *(LONG *)(this + 0x54);
    local_24.bottom = *(LONG *)(this + 0x58);
    local_24.left = 0;
    local_24.top = 0;
    if ((local_6c == 0xffffffff) || (pAVar8 = GetGlobalData(), CVar7 == *(ulong *)(pAVar8 + 0x1c)))
    {
      pAVar8 = GetGlobalData();
      hbr = (HBRUSH)0x0;
      if (pAVar8 != (AFX_GLOBAL_DATA *)0xffffff68) {
        hbr = *(HBRUSH *)(pAVar8 + 0x9c);
      }
      FillRect(*(HDC *)(this_00 + 4),&local_24,hbr);
    }
    else {
      CBrush::CBrush((CBrush *)&local_b4,CVar7);
      FillRect(*(HDC *)(this_00 + 4),&local_24,local_b0);
      local_b4 = CBrush::vftable;
      CImageList::~CImageList((CImageList *)&local_b4);
    }
    if ((param_6 != 0) && (pAVar8 = GetGlobalData(), *(int *)(pAVar8 + 0x1ac) == 0x10)) {
      local_74 = GetPixel(*(HDC *)(this_00 + 4),local_24.left,local_24.top);
    }
  }
  local_98 = 0;
  bVar5 = false;
  if ((param_6 != 0) && (bVar5 = false, 0x17 < *(int *)(this + 8))) {
    param_6 = 0;
    bVar5 = true;
    local_98 = 1;
  }
  uVar20 = 0;
  if (param_8 != 0) {
    uVar20 = param_8 & -(uint)(*(int *)(this + 8) != 0x20);
  }
  if ((local_70 == 0) && (param_6 == 0)) {
    if (uVar20 == 0) {
      if ((*(int *)(this + 8) == 0x20) || (DAT_1020e40c != 0)) {
        if (bVar5) {
          param_10 = DAT_1020599c;
        }
        iVar6 = (uint3)param_10 << 0x10;
        local_5c.AlphaFormat = '\x01';
        local_5c.BlendOp = (char)iVar6;
        local_5c.BlendFlags = (char)((uint3)iVar6 >> 8);
        local_5c.SourceConstantAlpha = (char)((uint3)iVar6 >> 0x10);
        if ((param_9 != 0) && (*(int *)(this + 0x2c) != 0)) {
          local_5c._0_3_ = (uint3)DAT_1020599d << 0x10;
          local_5c.AlphaFormat = '\x01';
        }
        uVar20 = -(uint)(local_60 != (uint *)0x0) & 0x10;
        iVar16 = *(int *)(this + uVar20 + 0x54);
        local_70 = *(uint *)(this + uVar20 + 0x58);
        local_a8 = iVar16;
        if (*(int *)(this + 8) == 0x20) {
          iVar18 = *(int *)(this + 0x54) * param_4 + local_7c;
          iVar25 = local_78;
          iVar23 = local_58;
          iVar22 = local_54;
          _Var24 = local_5c;
          pCVar12 = CDC::FromHandle(DAT_1020e434);
          BVar9 = CDC::AlphaBlend((CDC *)this_00,local_68,local_64,iVar16,local_70,pCVar12,iVar18,
                                  iVar25,iVar23,iVar22,_Var24);
        }
        else {
          local_50.bmiHeader.biPlanes = 1;
          local_50.bmiHeader.biBitCount = 0x20;
          local_50.bmiHeader.biHeight = local_54;
          DVar21 = local_54 * local_58;
          local_50.bmiHeader.biSize = 0x28;
          local_50.bmiHeader.biWidth = local_58;
          local_50.bmiHeader.biCompression = 0;
          local_50.bmiHeader.biXPelsPerMeter = 0;
          local_50.bmiHeader.biYPelsPerMeter = 0;
          local_50.bmiHeader.biClrUsed = 0;
          local_50.bmiHeader.biClrImportant = 0;
          local_60 = (uint *)0x0;
          local_50.bmiHeader.biSizeImage = DVar21;
          pHVar10 = CreateDIBSection((HDC)0x0,&local_50,0,&local_60,(HANDLE)0x0,0);
          if (pHVar10 == (HBITMAP)0x0) goto LAB_10085cb7;
          local_a0 = (void *)0x0;
          local_a4 = CBitmap::vftable;
          local_8 = 0;
          CMenu::Attach((CMenu *)&local_a4,(HMENU__ *)pHVar10);
          CDC::CDC(local_c4);
          local_8 = CONCAT31(local_8._1_3_,1);
          pHVar11 = CreateCompatibleDC((HDC)0x0);
          CDC::Attach(local_c4,pHVar11);
          local_90 = CDC::SelectGdiObject(local_c0,local_a0);
          BitBlt(local_c0,0,0,local_58,local_54,DAT_1020e434,
                 *(int *)(this + 0x54) * param_4 + local_7c,local_78,0xcc0020);
          if (*(int *)(this + 0xa8) == -1) {
            if (0 < (int)DVar21) {
              do {
                *local_60 = *local_60 | 0xff000000;
                local_60 = local_60 + 1;
                DVar21 = DVar21 - 1;
              } while (DVar21 != 0);
            }
          }
          else {
            CVar1 = this[0xa8];
            CVar2 = this[0xa9];
            CVar3 = this[0xaa];
            if (0 < (int)DVar21) {
              do {
                if (*local_60 == (uint)CONCAT21(CONCAT11(CVar1,CVar2),CVar3)) {
                  *local_60 = 0;
                }
                else {
                  *local_60 = *local_60 | 0xff000000;
                }
                local_60 = local_60 + 1;
                DVar21 = DVar21 - 1;
              } while (DVar21 != 0);
            }
          }
          BVar9 = AlphaBlend(*(HDC *)(this_00 + 4),local_68,local_64,local_a8,local_70,local_c0,0,0,
                             local_58,local_54,local_5c);
          if (local_90 == (CGdiObject *)0x0) {
            pvVar17 = (void *)0x0;
          }
          else {
            pvVar17 = *(void **)(local_90 + 4);
          }
          CDC::SelectGdiObject(local_c0,pvVar17);
          CDC::~CDC(local_c4);
          local_8 = 0xffffffff;
          local_a4 = CBitmap::vftable;
          CImageList::~CImageList((CImageList *)&local_a4);
        }
        iVar16 = local_54;
        if (BVar9 != 0) goto LAB_10085a22;
      }
      iVar16 = local_54;
      BitBlt(*(HDC *)(this_00 + 4),local_68,local_64,local_58,local_54,DAT_1020e434,
             *(int *)(this + 0x54) * param_4 + local_7c,local_78,0xcc0020);
      if (local_98 != 0) {
        CDrawingManager::CDrawingManager(local_94,(CDC *)this_00);
        local_8 = 2;
        if (local_74 == 0xffffffff) {
          pAVar8 = GetGlobalData();
          local_74 = *(COLORREF *)(pAVar8 + 0x1c);
        }
        pCVar13 = CMFCVisualManager::GetInstance();
        iVar22 = local_64;
        iVar23 = local_68;
        iVar18 = local_68 + local_58 + 2;
        iVar25 = local_64 + 2;
        pcVar4 = *(code **)(*(int *)pCVar13 + 0xb8);
        guard_check_icall();
        uVar14 = (*pcVar4)();
        CDrawingManager::GrayRect
                  (local_94,iVar23,iVar22,iVar18,iVar25 + iVar16,0xffffffff,local_74,uVar14);
        local_8 = 0xffffffff;
        FUN_100afd36();
        iVar16 = local_54;
      }
    }
    else {
LAB_10085a55:
      if (*(HGDIOBJ *)(this + 0x94) == (HGDIOBJ)0x0) goto LAB_10085aae;
      h = SelectObject(DAT_1020e434,*(HGDIOBJ *)(this + 0x94));
      BitBlt(*(HDC *)(this_00 + 4),local_68,local_64,local_58,local_54,DAT_1020e434,
             *(int *)(this + 0x54) * param_4 + local_7c,local_78,0xcc0020);
      SelectObject(DAT_1020e434,h);
      iVar16 = local_54;
    }
  }
  else {
    if (uVar20 != 0) goto LAB_10085a55;
LAB_10085aae:
    if (((param_6 != 0) || (local_5c != (_BLENDFUNCTION)0x0)) || (uVar20 != 0)) {
      CreateMask(this,param_4,1,0);
      if (uVar20 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined4 *)(this + 0xb0);
      }
      pcVar4 = *(code **)(*(int *)this_00 + 0x30);
      guard_check_icall(uVar14);
      (*pcVar4)();
      pcVar4 = *(code **)(*(int *)this_00 + 0x2c);
      guard_check_icall(0xffffff);
      (*pcVar4)();
      if ((param_6 != 0) &&
         (pCVar13 = CMFCVisualManager::GetInstance(), *(int *)(pCVar13 + 0x58) != 0)) {
        pAVar8 = GetGlobalData();
        pvVar17 = CDC::SelectObject((CDC *)this_00,*(void **)(pAVar8 + 0x10));
        if (pvVar17 != (void *)0x0) {
          BitBlt(*(HDC *)(this_00 + 4),local_68 + 1,local_64 + 1,local_58 + 2,local_54 + 2,
                 DAT_1020e438,0,0,0xb8074a);
          CDC::SelectObject((CDC *)this_00,pvVar17);
        }
      }
      pAVar8 = GetGlobalData();
      pvVar17 = CDC::SelectObject((CDC *)this_00,*(void **)(pAVar8 + 0x14));
      if (pvVar17 != (void *)0x0) {
        BitBlt(*(HDC *)(this_00 + 4),local_68,local_64,local_58 + 2,local_54 + 2,DAT_1020e438,0,0,
               0xb8074a);
        CDC::SelectObject((CDC *)this_00,pvVar17);
      }
    }
    if ((local_70 != 0) || (iVar16 = local_54, local_5c != (_BLENDFUNCTION)0x0)) {
      pAVar8 = GetGlobalData();
      local_90 = (CGdiObject *)CDC::SelectObject((CDC *)this_00,(CPen *)(pAVar8 + 0xa8));
      iVar16 = local_54;
      if (local_90 != (CGdiObject *)0x0) {
        CreateMask(this,param_4,(uint)(local_5c == (_BLENDFUNCTION)0x0),param_6);
        pcVar4 = *(code **)(*(int *)this_00 + 0x30);
        guard_check_icall(0);
        (*pcVar4)();
        pcVar4 = *(code **)(*(int *)this_00 + 0x2c);
        guard_check_icall(0xffffff);
        (*pcVar4)();
        iVar16 = local_54;
        BitBlt(*(HDC *)(this_00 + 4),local_68,local_64,local_58,local_54,DAT_1020e438,0,0,0xe20746);
        CDC::SelectObject((CDC *)this_00,(CPen *)local_90);
      }
    }
  }
LAB_10085a22:
  uVar19 = local_6c;
  if (*(int *)(this + 0x20) == 0) {
    if (local_6c != 0xffffffff) {
      if (local_84 == (CDC *)0x0) {
        pHVar15 = (HDC__ *)0x0;
      }
      else {
        pHVar15 = *(HDC__ **)(local_84 + 4);
      }
      iVar25 = -1;
      iVar23 = -1;
      goto LAB_10085c74;
    }
  }
  else {
    if (local_6c == 0xffffffff) {
      pAVar8 = GetGlobalData();
      uVar19 = *(ulong *)(pAVar8 + 0x1c);
    }
    if (local_84 == (CDC *)0x0) {
      pHVar15 = (HDC__ *)0x0;
    }
    else {
      pHVar15 = *(HDC__ **)(local_84 + 4);
    }
    iVar25 = *(int *)(this + 0x68);
    iVar23 = *(int *)(this + 100);
LAB_10085c74:
    TransparentBlt(pHVar15,local_80,local_8c,local_58,iVar16,local_88,0,0,uVar19,iVar23,iVar25);
  }
  if (local_9c != (HGDIOBJ)0x0) {
    SelectObject(DAT_1020e434,local_9c);
  }
  *(int *)(this + 0x20) = local_ac;
LAB_10085cb7:
  iVar16 = FUN_1017f5f4();
  return iVar16;
}

