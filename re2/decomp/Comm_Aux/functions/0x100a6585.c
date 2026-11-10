// rea decompile_all
// name: CMFCTabCtrl::OnDraw
// address: 0x100a6585
// body: available
// range: 0x100a6585-0x100a70f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a6620 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCTabCtrl::OnDraw(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCTabCtrl::OnDraw(CMFCTabCtrl *this,CDC *param_1)

{
  RECT *lprc;
  CMFCTabCtrl *pCVar1;
  CMFCVisualManager *pCVar2;
  CPen *pCVar3;
  HBRUSH pHVar4;
  tagRECT *ptVar5;
  AFX_GLOBAL_DATA *pAVar6;
  HRGN pHVar7;
  int *piVar8;
  undefined4 uVar9;
  ulong uVar10;
  BOOL BVar11;
  int iVar12;
  int iVar13;
  code *pcVar14;
  int iVar15;
  CDC *pCVar16;
  undefined **local_ac [2];
  CPen *local_a4;
  int local_a0;
  ulong local_9c;
  ulong local_98;
  CPen *local_94;
  CPen *local_90;
  undefined **local_8c [2];
  undefined **local_84 [2];
  ulong local_7c;
  ulong local_78;
  ulong local_74;
  CMFCTabCtrl *local_70;
  undefined **local_6c;
  int local_68;
  undefined **local_64;
  undefined4 local_60;
  undefined1 local_5c [4];
  int local_58;
  CPen *local_54;
  ulong local_50;
  int local_4c;
  CDC *local_48;
  tagRECT local_44;
  tagRECT local_34;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x9c;
  local_8 = 0x100a6594;
  local_54 = (CPen *)0x0;
  local_90 = (CPen *)0x0;
  local_48 = param_1;
  local_70 = this;
  pCVar2 = CMFCVisualManager::GetInstance();
  pcVar14 = *(code **)(*(int *)pCVar2 + 0x10c);
  guard_check_icall(this,&local_50,&local_98,&local_78,&local_74,&local_7c,&local_9c,&local_54,
                    &local_90);
  (*pcVar14)();
  local_44.left = 0;
  local_44.top = 0;
  local_44.right = 0;
  local_44.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_44);
  pCVar16 = local_48;
  local_a4 = CDC::SelectObject(local_48,local_54);
  if (local_a4 == (CPen *)0x0) goto LAB_100a6620;
  CPen::CPen((CPen *)local_8c,0,1,local_50);
  local_8 = 0;
  CPen::CPen((CPen *)local_84,0,1,local_98);
  local_8._0_1_ = 1;
  CPen::CPen((CPen *)local_ac,0,1,local_78);
  local_8 = CONCAT31(local_8._1_3_,2);
  local_94 = CDC::SelectObject(pCVar16,(CPen *)local_8c);
  if (local_94 == (CPen *)0x0) goto LAB_100a6620;
  pcVar14 = *(code **)(*(int *)this + 0x248);
  guard_check_icall();
  local_4c = (*pcVar14)();
  local_34.left = local_44.left;
  local_34.top = local_44.top;
  local_34.right = local_44.right;
  local_34.bottom = local_44.bottom;
  if (*(int *)(this + 0x90) == 0) {
    local_34.top = *(LONG *)(this + 0x2e0);
  }
  else {
    local_34.bottom = *(LONG *)(this + 0x2e8);
  }
  CDC::ExcludeClipRect(local_48,(tagRECT *)(this + 0x2ec));
  pCVar2 = CMFCVisualManager::GetInstance();
  pCVar16 = local_48;
  pcVar14 = *(code **)(*(int *)pCVar2 + 0x110);
  guard_check_icall(local_48,local_44.left,local_44.top,local_44.right,local_44.bottom,local_70);
  local_68 = (*pcVar14)();
  pCVar1 = local_70;
  if ((*(int *)(local_70 + 0x280) == 0) && (local_68 == 0)) {
    pHVar4 = (HBRUSH)0x0;
    if (local_54 != (CPen *)0x0) {
      pHVar4 = *(HBRUSH *)(local_54 + 4);
    }
    FillRect(*(HDC *)(pCVar16 + 4),&local_44,pHVar4);
  }
  pCVar2 = CMFCVisualManager::GetInstance();
  pcVar14 = *(code **)(*(int *)pCVar2 + 0xf0);
  guard_check_icall(local_48,local_34.left,local_34.top,local_34.right,local_34.bottom,pCVar1);
  (*pcVar14)();
  pCVar16 = local_48;
  iVar15 = local_4c;
  pCVar1 = local_70;
  local_24.left = local_44.left;
  local_24.top = local_44.top;
  local_24.right = local_44.right;
  local_24.bottom = local_44.bottom;
  if (local_4c == 0) {
    if (*(int *)(local_70 + 0x90) == 0) {
      local_24.bottom = *(int *)(local_70 + 0x2e0) + 1;
    }
    else {
      local_24.top = *(int *)(local_70 + 0x2e8) + -1;
    }
    pCVar3 = local_90;
    if (*(int *)(local_70 + 0x250) == 0) {
      pCVar3 = local_54;
    }
    pHVar4 = (HBRUSH)0x0;
    if (pCVar3 != (CPen *)0x0) {
      pHVar4 = *(HBRUSH *)(pCVar3 + 4);
    }
    FrameRect(*(HDC *)(local_48 + 4),&local_24,pHVar4);
  }
  else {
    iVar12 = *(int *)(local_70 + 0x90);
    if (iVar12 == 0) {
      local_58 = *(int *)(local_70 + 0x2e0);
    }
    else {
      local_58 = *(int *)(local_70 + 0x2e8);
    }
    if (*(int *)(local_70 + 0x250) == 0) {
      if (iVar12 == 0) {
        local_24.bottom = *(LONG *)(local_70 + 0x2e0);
      }
      else {
        local_24.top = *(LONG *)(local_70 + 0x2e8);
      }
    }
    if (*(int *)(local_70 + 0x270) == 0) {
      if (*(int *)(local_70 + 0x280) != 0) {
        CDC::Draw3dRect(local_48,&local_24,local_78,local_7c);
        InflateRect(&local_24,-1,-1);
        CDC::Draw3dRect(pCVar16,&local_24,local_9c,local_50);
        InflateRect(&local_24,-1,-1);
        if (((local_68 == 0) &&
            (local_24.right != local_24.left && -1 < local_24.right - local_24.left)) &&
           (0 < local_24.bottom - local_24.top)) {
          PatBlt(*(HDC *)(pCVar16 + 4),local_24.left,local_24.top,iVar15,
                 local_24.bottom - local_24.top,0xf00021);
          PatBlt(*(HDC *)(pCVar16 + 4),local_24.left,local_24.top,local_24.right - local_24.left,
                 iVar15,0xf00021);
          PatBlt(*(HDC *)(pCVar16 + 4),local_24.right - iVar15,local_24.top,iVar15,
                 local_24.bottom - local_24.top,0xf00021);
          PatBlt(*(HDC *)(pCVar16 + 4),local_24.left,local_24.bottom - iVar15,
                 local_24.right - local_24.left,iVar15,0xf00021);
          if (*(int *)(pCVar1 + 0x90) == 0) {
            iVar13 = local_24.bottom - *(int *)(pCVar1 + 0x2f8);
            iVar12 = *(int *)(pCVar1 + 0x2f8);
          }
          else {
            iVar13 = *(int *)(pCVar1 + 0x2f0) - local_24.top;
            iVar12 = local_24.top;
          }
          PatBlt(*(HDC *)(pCVar16 + 4),local_24.left,iVar12,local_24.right - local_24.left,iVar13,
                 0xf00021);
          if (*(int *)(pCVar1 + 0x250) != 0) {
            CDC::SelectObject(pCVar16,(CPen *)local_84);
            CDC::MoveTo(pCVar16,(int)&local_64,local_24.left + iVar15);
            CDC::LineTo(pCVar16,local_24.right - iVar15,local_58);
          }
          if (2 < iVar15) {
            InflateRect(&local_24,2 - iVar15,2 - iVar15);
          }
          if ((local_24.right != local_24.left && -1 < local_24.right - local_24.left) &&
             (local_24.bottom != local_24.top && -1 < local_24.bottom - local_24.top)) {
            ptVar5 = &local_24;
            local_74 = local_7c;
            uVar10 = local_78;
            goto LAB_100a6bad;
          }
        }
        else {
          InflateRect(&local_24,-2,-2);
        }
      }
    }
    else {
      local_34.left = local_44.left;
      local_34.top = local_24.top;
      local_34.right = local_44.right;
      local_34.bottom = local_24.bottom;
      if (*(int *)(local_70 + 0x250) != 0) {
        if (iVar12 == 0) {
          local_34.bottom = *(int *)(local_70 + 0x2e0) + 1;
        }
        else {
          local_34.top = *(int *)(local_70 + 0x2e8) + -1;
        }
      }
      InflateRect(&local_24,-1,-1);
      pCVar16 = local_48;
      iVar15 = local_4c;
      if (((*(int *)(pCVar1 + 0x280) != 0) && (local_68 == 0)) &&
         ((local_24.right != local_24.left && -1 < local_24.right - local_24.left &&
          (0 < local_24.bottom - local_24.top)))) {
        PatBlt(*(HDC *)(local_48 + 4),local_24.left,local_24.top,local_4c,
               local_24.bottom - local_24.top,0xf00021);
        PatBlt(*(HDC *)(pCVar16 + 4),local_24.left,local_24.top,local_24.right - local_24.left,
               iVar15,0xf00021);
        PatBlt(*(HDC *)(pCVar16 + 4),(local_24.right - iVar15) + -1,local_24.top,iVar15 + 1,
               local_24.bottom - local_24.top,0xf00021);
        PatBlt(*(HDC *)(pCVar16 + 4),local_24.left,local_24.bottom - iVar15,
               local_24.right - local_24.left,iVar15,0xf00021);
        if (*(int *)(pCVar1 + 0x90) == 0) {
          iVar13 = local_24.bottom - *(int *)(pCVar1 + 0x2f8);
          iVar12 = *(int *)(pCVar1 + 0x2f8);
        }
        else {
          iVar13 = *(int *)(pCVar1 + 0x2f0) - local_24.top;
          iVar12 = local_24.top;
        }
        PatBlt(*(HDC *)(pCVar16 + 4),local_24.left,iVar12,local_24.right - local_24.left,iVar13,
               0xf00021);
      }
      if (*(int *)(pCVar1 + 0x250) != 0) {
        CDC::SelectObject(pCVar16,(CPen *)local_84);
        CDC::MoveTo(pCVar16,(int)&local_64,local_24.left + iVar15);
        CDC::LineTo(pCVar16,local_24.right - iVar15,local_58);
      }
      CDC::Draw3dRect(pCVar16,&local_34,local_74,local_74);
      pcVar14 = *(code **)(*(int *)pCVar1 + 0x17c);
      guard_check_icall();
      iVar15 = (*pcVar14)();
      if (iVar15 == 0) {
        ptVar5 = &local_34;
        uVar10 = local_74;
LAB_100a6bad:
        CDC::Draw3dRect(pCVar16,ptVar5,local_74,uVar10);
      }
      else {
        if (*(int *)(pCVar1 + 0x280) != 0) {
          CDC::Draw3dRect(pCVar16,&local_34,local_50,local_50);
        }
        if (*(int *)(pCVar1 + 0x254) == 0) {
          iVar15 = local_34.right + -1;
          if (*(int *)(pCVar1 + 0x280) == 0) {
            iVar15 = iVar15 - local_4c;
          }
          if (*(int *)(pCVar1 + 0x90) == 0) {
            CDC::SelectObject(pCVar16,(CPen *)local_84);
            CDC::MoveTo(pCVar16,(int)&local_64,local_34.left);
            iVar12 = local_34.bottom + -1;
          }
          else {
            CDC::SelectObject(pCVar16,(CPen *)local_ac);
            CDC::MoveTo(pCVar16,(int)&local_64,local_34.left);
            iVar12 = local_34.top;
          }
          CDC::LineTo(pCVar16,iVar15,iVar12);
        }
      }
    }
  }
  if ((*(int *)(pCVar1 + 0x27c) != 0) && (*(int *)(pCVar1 + 0x90) == 1)) {
    CDC::SelectObject(pCVar16,(CPen *)local_8c);
    CDC::MoveTo(pCVar16,(int)&local_64,local_44.left);
    CDC::LineTo(pCVar16,local_44.left,local_44.top);
    CDC::LineTo(pCVar16,local_44.right + -1,local_44.top);
    CDC::LineTo(pCVar16,local_44.right + -1,*(int *)(pCVar1 + 0x2e8));
  }
  iVar15 = *(int *)pCVar16;
  pAVar6 = GetGlobalData();
  guard_check_icall(pAVar6 + 0x11c);
  local_a0 = (**(code **)(iVar15 + 0x28))();
  if (local_a0 != 0) {
    CDC::SetBkMode(pCVar16,1);
    iVar15 = *(int *)pCVar16;
    pAVar6 = GetGlobalData();
    guard_check_icall(*(undefined4 *)(pAVar6 + 0x28));
    (**(code **)(iVar15 + 0x30))();
    if ((5 < *(int *)(pCVar1 + 0x2e4) - *(int *)(pCVar1 + 0x2dc)) &&
       (5 < *(int *)(pCVar1 + 0x2e8) - *(int *)(pCVar1 + 0x2e0))) {
      local_34.left = *(LONG *)(pCVar1 + 0x2dc);
      local_34.top = *(LONG *)(pCVar1 + 0x2e0);
      local_34.right = *(LONG *)(pCVar1 + 0x2e4);
      local_34.bottom = *(LONG *)(pCVar1 + 0x2e8);
      InflateRect(&local_34,1,local_4c);
      local_60 = 0;
      local_64 = CRgn::vftable;
      local_8 = CONCAT31(local_8._1_3_,3);
      pHVar7 = CreateRectRgnIndirect(&local_34);
      CMenu::Attach((CMenu *)&local_64,(HMENU__ *)pHVar7);
      iVar15 = *(int *)(pCVar1 + 0xbc);
      while (pCVar16 = local_48, iVar15 = iVar15 + -1, -1 < iVar15) {
        iVar12 = iVar15;
        if (*(int *)(pCVar1 + 0xb0) == *(int *)(pCVar1 + 0xbc)) {
          piVar8 = (int *)FUN_10151a1d(iVar15);
          iVar12 = *piVar8;
        }
        piVar8 = (int *)FUN_10151a1d(iVar12);
        pCVar16 = local_48;
        local_68 = *piVar8;
        if ((*(int *)(local_68 + 0x34) != 0) &&
           (*(int *)(pCVar1 + 0x104) = iVar12, iVar12 != *(int *)(pCVar1 + 0xc0))) {
          CDC::SelectClipRgn(local_48,(CRgn *)&local_64);
          if (*(int *)(pCVar1 + 0x250) == 0) {
            pcVar14 = *(code **)(*(int *)pCVar1 + 0x2f4);
          }
          else {
            CDC::SelectObject(pCVar16,(CPen *)local_84);
            pcVar14 = *(code **)(*(int *)pCVar1 + 0x2f8);
          }
          guard_check_icall(pCVar16,local_68,0);
          (*pcVar14)();
        }
      }
      if (-1 < *(int *)(pCVar1 + 0xc0)) {
        iVar15 = *(int *)local_48;
        pAVar6 = GetGlobalData();
        uVar9 = *(undefined4 *)(pAVar6 + 0x70);
        guard_check_icall(uVar9);
        (**(code **)(iVar15 + 0x30))();
        piVar8 = (int *)FUN_10151a1d(*(int *)(pCVar1 + 0xc0));
        local_58 = *piVar8;
        *(int *)(pCVar1 + 0x104) = *(int *)(pCVar1 + 0xc0);
        CDC::SelectClipRgn(pCVar16,(CRgn *)&local_64);
        if (*(int *)(pCVar1 + 0x250) == 0) {
          if (*(int *)(pCVar1 + 0x288) != 0) {
            pcVar14 = *(code **)(*(int *)pCVar1 + 0x2f0);
            guard_check_icall(uVar9);
            iVar15 = (*pcVar14)();
            if ((iVar15 == 0) || (*(int *)(pCVar1 + 0x298) != 0)) {
              iVar15 = *(int *)pCVar16;
              pAVar6 = GetGlobalData();
              guard_check_icall(pAVar6 + 300);
              (**(code **)(iVar15 + 0x28))();
            }
          }
          pcVar14 = *(code **)(*(int *)pCVar1 + 0x2f4);
          guard_check_icall(pCVar16,local_58,1);
          (*pcVar14)();
        }
        else {
          CDC::SelectObject(pCVar16,(CPen *)(pCVar1 + 0x144));
          iVar15 = *(int *)pCVar16;
          pAVar6 = GetGlobalData();
          guard_check_icall(pAVar6 + 300);
          (**(code **)(iVar15 + 0x28))();
          iVar15 = *(int *)pCVar16;
          pcVar14 = *(code **)(*(int *)pCVar1 + 0x234);
          guard_check_icall();
          uVar9 = (*pcVar14)();
          guard_check_icall(uVar9);
          (**(code **)(iVar15 + 0x30))();
          pCVar16 = local_48;
          CDC::SelectObject(local_48,(CPen *)local_84);
          pcVar14 = *(code **)(*(int *)pCVar1 + 0x2f8);
          guard_check_icall(pCVar16,local_58,1);
          (*pcVar14)();
          local_68 = *(int *)(pCVar1 + 0x2dc) + 1;
          local_4c = *(int *)(pCVar1 + 0x2dc);
          if (local_68 <= *(int *)(local_58 + 0x10) + 1) {
            local_4c = *(int *)(local_58 + 0x10);
          }
          if (local_68 < *(int *)(local_58 + 0x18)) {
            pcVar14 = *(code **)(*(int *)pCVar1 + 0x230);
            guard_check_icall();
            uVar10 = (*pcVar14)();
            CPen::CPen((CPen *)&local_6c,0,1,uVar10);
            local_8 = CONCAT31(local_8._1_3_,4);
            CDC::SelectObject(pCVar16,(CPen *)&local_6c);
            iVar15 = local_58;
            if (*(int *)(pCVar1 + 0x90) == 0) {
              CDC::MoveTo(pCVar16,(int)local_5c,local_4c + 1);
              iVar12 = *(int *)(iVar15 + 0x14);
            }
            else {
              CDC::MoveTo(pCVar16,(int)local_5c,local_4c + 1);
              iVar12 = *(int *)(iVar15 + 0x1c);
            }
            CDC::LineTo(pCVar16,*(int *)(iVar15 + 0x18),iVar12);
            CDC::SelectObject(pCVar16,local_94);
            local_8 = CONCAT31(local_8._1_3_,3);
            local_6c = CPen::vftable;
            CImageList::~CImageList((CImageList *)&local_6c);
          }
        }
      }
      CDC::SelectClipRgn(pCVar16,(CRgn *)0x0);
      local_8 = CONCAT31(local_8._1_3_,2);
      local_64 = CRgn::vftable;
      CImageList::~CImageList((CImageList *)&local_64);
    }
    lprc = (RECT *)(pCVar1 + 700);
    BVar11 = IsRectEmpty(lprc);
    if (BVar11 == 0) {
      CDC::FillRect(pCVar16,lprc,(CBrush *)local_54);
      pCVar16 = local_48;
      local_34.left = lprc->left;
      local_34.top = *(LONG *)(pCVar1 + 0x2c0);
      local_34.right = *(LONG *)(pCVar1 + 0x2c4);
      local_34.bottom = *(LONG *)(pCVar1 + 0x2c8);
      CDC::Draw3dRect(local_48,&local_34,local_7c,local_50);
      InflateRect(&local_34,-1,-1);
      CDC::Draw3dRect(pCVar16,&local_34,local_78,local_50);
    }
    if ((*(int *)(pCVar1 + 0x250) != 0) && (0 < *(int *)(pCVar1 + 0x2a4))) {
      CDC::SelectObject(pCVar16,(CPen *)local_8c);
      iVar15 = *(int *)(pCVar1 + 0x2dc) + -1;
      if (*(int *)(pCVar1 + 0x90) == 0) {
        CDC::MoveTo(pCVar16,(int)&local_64,iVar15);
        iVar12 = *(int *)(pCVar1 + 0x2e8) + -2;
      }
      else {
        CDC::MoveTo(pCVar16,(int)&local_64,iVar15);
        iVar12 = *(int *)(pCVar1 + 0x2e0) + 2;
      }
      CDC::LineTo(pCVar16,iVar15,iVar12);
    }
    BVar11 = IsRectEmpty((RECT *)(pCVar1 + 0x2fc));
    if (BVar11 == 0) {
      pCVar2 = CMFCVisualManager::GetInstance();
      pCVar16 = local_48;
      pcVar14 = *(code **)(*(int *)pCVar2 + 0x124);
      guard_check_icall(local_48,local_70,*(int *)(local_70 + 0x29f8) == 1,
                        ((RECT *)(pCVar1 + 0x2fc))->left,*(int *)(pCVar1 + 0x300),
                        *(int *)(pCVar1 + 0x304),*(int *)(pCVar1 + 0x308),local_54,local_8c);
      (*pcVar14)();
    }
    pcVar14 = *(code **)(*(int *)pCVar16 + 0x28);
    guard_check_icall(local_a0);
    (*pcVar14)();
    CDC::SelectObject(pCVar16,local_a4);
    CDC::SelectObject(pCVar16,local_94);
    local_ac[0] = CPen::vftable;
    CImageList::~CImageList((CImageList *)local_ac);
    local_84[0] = CPen::vftable;
    CImageList::~CImageList((CImageList *)local_84);
    local_8c[0] = CPen::vftable;
    CImageList::~CImageList((CImageList *)local_8c);
    FUN_1017f5f4();
    return;
  }
LAB_100a6620:
                    /* WARNING: Subroutine does not return */
  FUN_1004886a();
}

