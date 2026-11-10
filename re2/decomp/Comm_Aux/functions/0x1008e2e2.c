// rea decompile_all
// name: CMFCVisualManager::OnDrawTab
// address: 0x1008e2e2
// body: available
// range: 0x1008e2e2-0x1008f558 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1008edfe to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawTab(class CDC *,class
   CRect,int,int,class CMFCBaseTabCtrl const *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawTab
          (undefined4 param_1_00,CDC *param_1,CPen *param_3,CPen *param_4,CPen *param_5,
          CPen *param_6,int param_7,int param_8,int *param_9)

{
  code *pcVar1;
  tagPOINT tVar2;
  tagPOINT tVar3;
  tagPOINT tVar4;
  tagPOINT tVar5;
  tagPOINT tVar6;
  tagPOINT tVar7;
  tagPOINT tVar8;
  tagPOINT tVar9;
  tagPOINT tVar10;
  tagPOINT tVar11;
  tagPOINT tVar12;
  tagPOINT tVar13;
  tagPOINT tVar14;
  tagPOINT tVar15;
  tagPOINT tVar16;
  tagPOINT tVar17;
  tagPOINT tVar18;
  tagPOINT tVar19;
  int iVar20;
  __POSITION *p_Var21;
  AFX_GLOBAL_DATA *pAVar22;
  ulong uVar23;
  HBRUSH hbr;
  int iVar24;
  HRGN pHVar25;
  CImageList *pCVar26;
  CPen *pCVar27;
  LONG *pLVar28;
  CPen *pCVar29;
  CPen *pCVar30;
  int *piVar31;
  CPen *pCVar32;
  int *piVar33;
  RECT *pRVar34;
  undefined **local_124;
  HBRUSH local_120;
  undefined **local_11c;
  undefined4 local_118;
  undefined **local_114;
  CPen *local_110;
  undefined **local_10c;
  CPen *local_108;
  undefined **local_104;
  CPen *local_100;
  undefined **local_fc;
  undefined4 local_f8;
  undefined **local_f4;
  __POSITION *local_f0;
  undefined1 local_ec [4];
  CPen *local_e8;
  undefined **local_e4 [2];
  ulong local_dc;
  int *local_d8;
  CDC *local_d4;
  int *local_d0;
  POINT *local_cc;
  CPen *local_c8;
  RECT local_c4;
  undefined1 local_b4 [8];
  CPen *local_ac;
  CPen *local_a8;
  tagRECT local_a4;
  tagRECT local_94;
  int local_84;
  CPen *local_80;
  CDC *local_7c;
  CPen *local_78;
  POINT local_74;
  CPen *local_6c;
  CPen *local_68;
  CPen *local_64;
  CPen *local_60;
  CPen *local_5c;
  CPen *local_58;
  CPen *local_54;
  CPen *local_50;
  CPen *local_4c;
  CPen *local_48;
  CPen *local_44;
  CPen *local_40;
  CPen *local_3c;
  CPen *local_38;
  undefined8 local_34;
  CPen *local_2c;
  CPen *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  piVar31 = param_9;
  uStack_4 = 0x114;
  local_8 = 0x1008e2f1;
  local_d4 = param_1;
  local_d8 = param_9;
  pcVar1 = *(code **)(*param_9 + 0x1dc);
  guard_check_icall(param_7);
  local_dc = (*pcVar1)();
  local_c4.left = 0;
  local_c4.top = 0;
  pcVar1 = *(code **)(*(int *)param_1 + 0x50);
  local_c4.right = 0;
  local_c4.bottom = 0;
  pRVar34 = &local_c4;
  guard_check_icall(pRVar34);
  (*pcVar1)();
  pcVar1 = *(code **)(*piVar31 + 0x280);
  guard_check_icall();
  iVar20 = (*pcVar1)();
  if (iVar20 == 0) {
    pcVar1 = *(code **)(*piVar31 + 0x290);
    guard_check_icall(pRVar34);
    iVar20 = (*pcVar1)();
    if (iVar20 == 0) {
      local_10c = CRgn::vftable;
      local_108 = (CPen *)0x0;
      local_84 = 0;
      piVar33 = &local_84;
      local_80 = (CPen *)0x0;
      local_7c = (CDC *)0x0;
      local_78 = (CPen *)0x0;
      local_8 = 6;
      pcVar1 = *(code **)(*piVar31 + 0x180);
      guard_check_icall(piVar33);
      (*pcVar1)();
      local_cc = (POINT *)0x0;
      pcVar1 = *(code **)(*piVar31 + 0x288);
      guard_check_icall();
      iVar20 = (*pcVar1)();
      if (iVar20 == 0) {
        pcVar1 = *(code **)(*piVar31 + 0x28c);
        guard_check_icall(piVar33);
        iVar20 = (*pcVar1)();
        if (iVar20 != 0) goto LAB_1008ea31;
        local_e8 = (CPen *)0x0;
LAB_1008e9c9:
        iVar20 = 0;
      }
      else {
LAB_1008ea31:
        local_e8 = (CPen *)0x1;
        iVar20 = FUN_1008a7b0(param_7);
        if ((iVar20 != 0) || (param_8 != 0)) goto LAB_1008e9c9;
        pcVar1 = *(code **)(*piVar31 + 0x28c);
        guard_check_icall();
        iVar20 = (*pcVar1)();
        if (iVar20 != 0) goto LAB_1008e9c9;
        iVar20 = (int)param_6 - (int)param_4;
      }
      if (((int)local_7c < (int)(param_3 + iVar20 + 10)) || ((int)(param_5 + -10) <= local_84)) {
        local_10c = CRgn::vftable;
        pCVar26 = (CImageList *)&local_10c;
        goto LAB_1008f54c;
      }
      pcVar1 = *(code **)(*piVar31 + 0x28c);
      guard_check_icall();
      local_d4 = (CDC *)(*pcVar1)();
      if ((param_8 == 0) || (local_e8 != (CPen *)0x0)) {
LAB_1008ea7e:
        if (((local_dc != 0xffffffff) || (local_e8 != (CPen *)0x0)) || (local_d0[0x1d] != 0)) {
LAB_1008ea90:
          local_f8 = 0;
          local_fc = CRgn::vftable;
          local_8._0_1_ = 7;
          uVar23 = local_dc;
          if (local_dc == 0xffffffff) {
            pAVar22 = GetGlobalData();
            uVar23 = *(ulong *)(pAVar22 + 0x1c);
          }
          CBrush::CBrush((CBrush *)local_e4,uVar23);
          piVar31 = local_d8;
          local_94.left = (LONG)param_3;
          local_8 = CONCAT31(local_8._1_3_,8);
          local_94.top = (LONG)param_4;
          local_94.right = (LONG)param_5;
          local_94.bottom = (LONG)param_6;
          if (local_e8 == (CPen *)0x0) {
            InflateRect(&local_94,-1,0);
            if (local_d8[0x24] == 0) {
              local_94.bottom = local_94.bottom + -1;
            }
            else {
              local_94.top = local_94.top + 1;
            }
            piVar31 = local_d8;
            if ((int)local_7c <= local_94.right) {
              local_94.right = (LONG)local_7c;
            }
          }
          else {
            local_74.x = (LONG)param_3;
            local_6c = param_3;
            local_50 = param_4;
            local_64 = param_3 + 2;
            local_5c = param_3 + ((int)param_6 - (int)param_4);
            local_54 = param_3 + ((int)param_6 - (int)param_4) + 4;
            local_58 = param_4 + 2;
            local_48 = param_4;
            local_4c = param_5 + -2;
            local_44 = param_5;
            local_40 = param_4 + 2;
            local_3c = param_5;
            iVar20 = 0;
            local_74.y = (LONG)param_6;
            local_68 = param_6;
            local_60 = param_6;
            local_38 = param_6;
            do {
              if ((int)local_7c < (&local_74)[iVar20].x) {
                (&local_74)[iVar20].x = (LONG)local_7c;
                local_cc = (POINT *)0x1;
              }
              if (local_d8[0x24] == 0) {
                (&local_74)[iVar20].y =
                     (LONG)(param_6 + (int)(param_4 + (-1 - (&local_74)[iVar20].y)));
              }
              iVar20 = iVar20 + 1;
            } while (iVar20 < 8);
            pHVar25 = CreatePolygonRgn(&local_74,8,2);
            CMenu::Attach((CMenu *)&local_fc,(HMENU__ *)pHVar25);
            CDC::SelectClipRgn(param_1,(CRgn *)&local_fc);
          }
          pcVar1 = *(code **)(*local_d0 + 0xf8);
          guard_check_icall(param_1,local_94.left,local_94.top,local_94.right,local_94.bottom,
                            local_e4,param_7,param_8,piVar31);
          (*pcVar1)();
          CDC::SelectClipRgn(param_1,(CRgn *)0x0);
          piVar31 = local_d8;
          if (local_e8 != (CPen *)0x0) {
            local_a4.left = 0;
            local_a4.top = 0;
            local_a4.right = 0;
            local_a4.bottom = 0;
            GetClientRect((HWND)local_d8[8],&local_a4);
            local_a4.right = local_84 + -1;
            CDC::ExcludeClipRect(param_1,&local_a4);
            iVar20 = FUN_1008a7b0(param_7);
            if ((iVar20 == 0) && (param_8 == 0)) {
              pcVar1 = *(code **)(*piVar31 + 0x29c);
              guard_check_icall();
              iVar20 = (*pcVar1)();
              if (param_7 != iVar20) {
                local_b4._0_4_ = local_84;
                local_ac = (CPen *)(local_94.bottom + (int)(local_94.left + (-10 - local_94.top)));
                local_b4._4_4_ = local_80;
                local_a8 = local_78;
                iVar20 = (local_d4 != (CDC *)0x0) + 1;
                if (local_d8[0x24] == 0) {
                  local_b4._4_4_ = local_80 + -iVar20;
                }
                else {
                  local_a8 = local_78 + iVar20;
                }
                CDC::ExcludeClipRect(param_1,(tagRECT *)local_b4);
              }
            }
            Polyline(*(HDC *)(param_1 + 4),&local_74,8);
            if (local_cc != (POINT *)0x0) {
              CDC::MoveTo(param_1,(int)&local_ac,(int)local_7c);
              CDC::LineTo(param_1,(int)local_7c,(int)param_6);
            }
            local_24.top = (LONG)local_80;
            local_24.right = (LONG)local_7c;
            local_24.bottom = (LONG)local_78;
            local_24.left = local_94.right;
            CDC::ExcludeClipRect(param_1,&local_24);
          }
          local_e4[0] = CBrush::vftable;
          CImageList::~CImageList((CImageList *)local_e4);
          local_8 = CONCAT31(local_8._1_3_,6);
          local_fc = CRgn::vftable;
          CImageList::~CImageList((CImageList *)&local_fc);
          piVar31 = local_d8;
        }
      }
      else {
        if (local_dc != 0xffffffff) goto LAB_1008ea90;
        if (local_d0[0x1d] != 0) goto LAB_1008ea7e;
      }
      iVar20 = param_8;
      pAVar22 = GetGlobalData();
      CPen::CPen((CPen *)&local_104,0,1,*(ulong *)(pAVar22 + 0x5c));
      local_8._0_1_ = 9;
      pAVar22 = GetGlobalData();
      CPen::CPen((CPen *)&local_114,0,1,*(ulong *)(pAVar22 + 0x58));
      local_8._0_1_ = 10;
      pAVar22 = GetGlobalData();
      CPen::CPen((CPen *)&local_f4,0,1,*(ulong *)(pAVar22 + 0x60));
      local_8 = CONCAT31(local_8._1_3_,0xb);
      if (local_e8 == (CPen *)0x0) {
        if ((int)local_7c < (int)param_5) {
          local_24.left = (LONG)param_3;
          local_24.top = (LONG)param_4;
          local_24.bottom = (LONG)param_6;
          local_24.right = (LONG)local_7c;
          pHVar25 = CreateRectRgnIndirect(&local_24);
          CMenu::Attach((CMenu *)&local_10c,(HMENU__ *)pHVar25);
          CDC::SelectClipRgn(param_1,(CRgn *)&local_10c);
          piVar31 = local_d8;
        }
        if (piVar31[0x24] != 0) {
          pCVar32 = (CPen *)&local_f4;
          if (local_d0[0x1e] == 0) {
            pCVar32 = (CPen *)&local_114;
          }
          local_c8 = CDC::SelectObject(param_1,pCVar32);
          if (local_c8 == (CPen *)0x0) goto LAB_1008edfe;
          CDC::MoveTo(param_1,(int)local_e4,(int)param_5);
          CDC::LineTo(param_1,(int)param_5,(int)(param_4 + 2));
          CDC::LineTo(param_1,(int)(param_5 + -2),(int)param_4);
          if (local_d0[0x1e] != 0) {
            CDC::SelectObject(param_1,(CPen *)&local_104);
          }
          CDC::LineTo(param_1,(int)(param_3 + 2),(int)param_4);
          CDC::LineTo(param_1,(int)param_3,(int)(param_4 + 2));
          CDC::LineTo(param_1,(int)param_3,(int)param_6);
          if (local_d0[0x1e] == 0) goto LAB_1008f1a7;
          CDC::SelectObject(param_1,(CPen *)&local_114);
          CDC::MoveTo(param_1,(int)local_e4,(int)(param_5 + -1));
          pCVar32 = param_5;
          pCVar27 = param_4 + 1;
          goto LAB_1008f19e;
        }
        local_c8 = CDC::SelectObject(param_1,(CPen *)&local_104);
        piVar33 = local_d0;
        if (local_c8 == (CPen *)0x0) {
LAB_1008edfe:
                    /* WARNING: Subroutine does not return */
          FUN_1004886a();
        }
        if (local_d0[0x1e] == 0) {
          CDC::SelectObject(param_1,(CPen *)&local_114);
        }
        CDC::MoveTo(param_1,(int)local_e4,(int)param_3);
        CDC::LineTo(param_1,(int)param_3,(int)(param_6 + -2));
        if (piVar33[0x1e] != 0) {
          CDC::SelectObject(param_1,(CPen *)&local_f4);
        }
        CDC::LineTo(param_1,(int)(param_3 + 2),(int)param_6);
        CDC::LineTo(param_1,(int)(param_5 + -2),(int)param_6);
        CDC::LineTo(param_1,(int)param_5,(int)(param_6 + -2));
        CDC::LineTo(param_1,(int)param_5,(int)(param_4 + -1));
        CDC::SelectObject(param_1,(CPen *)&local_114);
        if (piVar33[0x1e] != 0) {
          CDC::MoveTo(param_1,(int)local_e4,(int)(param_3 + 3));
          CDC::LineTo(param_1,(int)(param_5 + -2),(int)(param_6 + -1));
          CDC::LineTo(param_1,(int)(param_5 + -1),(int)(param_6 + -2));
          pCVar32 = param_5;
          pCVar27 = param_4 + -1;
          goto LAB_1008f19e;
        }
      }
      else {
        local_c8 = CDC::SelectObject(param_1,(CPen *)&local_104);
        if (local_c8 == (CPen *)0x0) goto LAB_1008edfe;
        if (piVar31[0x24] == 0) {
          if (local_cc != (POINT *)0x0) goto LAB_1008f1a7;
          pCVar27 = local_38;
          if (iVar20 != 0) {
            pCVar27 = local_38 + -1;
          }
          CDC::MoveTo(param_1,(int)local_e4,(int)(local_44 + -1));
          pCVar32 = local_3c;
        }
        else {
          CDC::MoveTo(param_1,(int)local_e4,(int)(local_64 + 1));
          CDC::LineTo(param_1,(int)(local_5c + 1),(int)local_58);
          CDC::MoveTo(param_1,(int)local_e4,(int)(local_5c + 1));
          CDC::LineTo(param_1,(int)(local_5c + 2),(int)local_58);
          CDC::MoveTo(param_1,(int)local_e4,(int)(local_5c + 2));
          CDC::LineTo(param_1,(int)(local_5c + 3),(int)local_58);
          CDC::MoveTo(param_1,(int)local_e4,(int)(local_54 + -1));
          CDC::LineTo(param_1,(int)(local_4c + 1),(int)(local_48 + 1));
          if (((iVar20 == 0) && (local_cc == (POINT *)0x0)) && (local_d0[0x1e] != 0)) {
            CDC::SelectObject(param_1,(CPen *)&local_114);
            CDC::MoveTo(param_1,(int)local_e4,(int)(local_44 + -2));
            CDC::LineTo(param_1,(int)(local_44 + -1),(int)(local_40 + -1));
          }
          CDC::MoveTo(param_1,(int)local_e4,(int)(local_44 + -1));
          pCVar32 = local_3c;
          pCVar27 = local_38;
        }
LAB_1008f19e:
        CDC::LineTo(param_1,(int)(pCVar32 + -1),(int)pCVar27);
      }
LAB_1008f1a7:
      if (param_8 != 0) {
        local_94.top = (LONG)param_6;
        if (piVar31[0x24] == 0) {
          local_94.top = (LONG)(param_4 + -2);
        }
        local_94.left = (LONG)param_3;
        local_94.right = (LONG)param_5;
        local_94.bottom = local_94.top + 2;
        pcVar1 = *(code **)(*piVar31 + 0x1dc);
        guard_check_icall(param_7);
        uVar23 = (*pcVar1)();
        if (local_e8 == (CPen *)0x0) {
LAB_1008f241:
          if (uVar23 == 0xffffffff) {
            pAVar22 = GetGlobalData();
            hbr = (HBRUSH)0x0;
            if (pAVar22 != (AFX_GLOBAL_DATA *)0xffffff30) {
              hbr = *(HBRUSH *)(pAVar22 + 0xd4);
            }
            FillRect(*(HDC *)(param_1 + 4),&local_94,hbr);
            goto LAB_1008f29f;
          }
        }
        else {
          if (local_d4 == (CDC *)0x0) {
            OffsetRect(&local_94,1,0);
            local_94.left = local_94.left + 1;
          }
          else {
            local_94.left = local_94.left + 3;
          }
          if (uVar23 == 0xffffffff) {
            pAVar22 = GetGlobalData();
            uVar23 = *(ulong *)(pAVar22 + 0x6c);
            goto LAB_1008f241;
          }
        }
        CBrush::CBrush((CBrush *)&local_124,uVar23);
        FillRect(*(HDC *)(param_1 + 4),&local_94,local_120);
        local_124 = CBrush::vftable;
        CImageList::~CImageList((CImageList *)&local_124);
      }
LAB_1008f29f:
      CDC::SelectObject(param_1,local_c8);
      if (local_e8 != (CPen *)0x0) {
        pcVar1 = *(code **)(*piVar31 + 0x28c);
        guard_check_icall();
        iVar20 = (*pcVar1)();
        if ((iVar20 == 0) || (param_8 == 0)) {
          local_d4 = (CDC *)(param_6 + -(int)param_4);
        }
        else {
          iVar20 = ((int)param_6 - (int)param_4) * 3;
          local_d4 = (CDC *)((int)(iVar20 + (iVar20 >> 0x1f & 3U)) >> 2);
        }
        pcVar1 = *(code **)(*piVar31 + 0x28c);
        guard_check_icall();
        iVar24 = (*pcVar1)();
        iVar20 = DAT_10205ad0;
        if ((iVar24 != 0) && (param_8 != 0)) {
          iVar20 = (int)((DAT_10205ad0 * 3 >> 0x1f & 3U) + DAT_10205ad0 * 3) >> 2;
        }
        param_3 = param_3 + (int)local_d4;
        param_5 = param_5 + -iVar20;
        pcVar1 = *(code **)(*piVar31 + 0x28c);
        guard_check_icall();
        iVar20 = (*pcVar1)();
        if ((iVar20 != 0) && (param_8 != 0)) {
          pcVar1 = *(code **)(*piVar31 + 0x240);
          guard_check_icall(param_7);
          iVar20 = (*pcVar1)();
          if (iVar20 != 0) {
            OffsetRect((LPRECT)&param_3,DAT_10205ad0,0);
          }
        }
      }
      CDC::SelectClipRgn(param_1,(CRgn *)0x0);
      local_f4 = CPen::vftable;
      CImageList::~CImageList((CImageList *)&local_f4);
      local_114 = CPen::vftable;
      CImageList::~CImageList((CImageList *)&local_114);
      local_104 = CPen::vftable;
      CImageList::~CImageList((CImageList *)&local_104);
      local_10c = CRgn::vftable;
      pCVar26 = (CImageList *)&local_10c;
      goto LAB_1008f3d2;
    }
    CList<tagPOINT,tagPOINT>::CList<tagPOINT,tagPOINT>
              ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),10);
    local_8 = 1;
    tVar2.y = (LONG)param_4;
    tVar2.x = (LONG)param_3;
    p_Var21 = CList<tagPOINT,tagPOINT>::AddHead
                        ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),tVar2);
    tVar3.y = (LONG)(param_4 + 2);
    tVar3.x = (LONG)param_3;
    local_f0 = CList<tagPOINT,tagPOINT>::InsertAfter
                         ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),p_Var21,tVar3);
    tVar4.y = (LONG)param_4;
    tVar4.x = (LONG)param_5;
    p_Var21 = CList<tagPOINT,tagPOINT>::AddTail
                        ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),tVar4);
    tVar5.y = (LONG)(param_4 + 2);
    tVar5.x = (LONG)param_5;
    local_cc = (POINT *)CList<tagPOINT,tagPOINT>::InsertBefore
                                  ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),p_Var21,tVar5);
    pCVar32 = param_4 + 2;
    pCVar27 = param_3 + 1;
    pCVar29 = param_5 + -1;
    local_c8 = pCVar29;
    local_78 = pCVar27;
    if ((int)pCVar32 < (int)(param_6 + -4)) {
      do {
        tVar6.y = (LONG)pCVar32;
        tVar6.x = (LONG)pCVar27;
        local_e8 = pCVar32;
        p_Var21 = CList<tagPOINT,tagPOINT>::InsertAfter
                            ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),local_f0,tVar6);
        pCVar32 = local_e8 + 2;
        tVar7.y = (LONG)pCVar32;
        tVar7.x = (LONG)pCVar27;
        local_f0 = CList<tagPOINT,tagPOINT>::InsertAfter
                             ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),p_Var21,tVar7);
        tVar8.y = (LONG)local_e8;
        tVar8.x = (LONG)pCVar29;
        p_Var21 = CList<tagPOINT,tagPOINT>::InsertBefore
                            ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),(__POSITION *)local_cc
                             ,tVar8);
        tVar9.y = (LONG)pCVar32;
        tVar9.x = (LONG)pCVar29;
        local_cc = (POINT *)CList<tagPOINT,tagPOINT>::InsertBefore
                                      ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),p_Var21,
                                       tVar9);
        pCVar27 = pCVar27 + 1;
        pCVar29 = pCVar29 + -1;
        param_1 = local_d4;
        piVar31 = local_d8;
      } while ((int)pCVar32 < (int)(param_6 + -4));
    }
    pCVar30 = pCVar29;
    local_78 = pCVar27;
    if (piVar31[0x24] == 1) {
      local_78 = pCVar27 + -1;
      pCVar30 = pCVar29 + 1;
    }
    local_108 = local_78 + -1;
    local_110 = pCVar30 + 1;
    pCVar27 = local_78;
    local_e8 = pCVar32;
    local_c8 = pCVar29;
    if ((int)pCVar32 < (int)(param_6 + -1)) {
      do {
        tVar10.y = (LONG)local_e8;
        tVar10.x = (LONG)pCVar27;
        p_Var21 = CList<tagPOINT,tagPOINT>::InsertAfter
                            ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),local_f0,tVar10);
        local_c8 = pCVar27 + 1;
        pCVar32 = local_e8 + 1;
        tVar11.y = (LONG)pCVar32;
        tVar11.x = (LONG)local_c8;
        local_78 = pCVar32;
        local_f0 = CList<tagPOINT,tagPOINT>::InsertAfter
                             ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),p_Var21,tVar11);
        tVar12.y = (LONG)local_e8;
        tVar12.x = (LONG)pCVar30;
        p_Var21 = CList<tagPOINT,tagPOINT>::InsertBefore
                            ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),(__POSITION *)local_cc
                             ,tVar12);
        local_100 = pCVar30 + -1;
        tVar13.y = (LONG)pCVar32;
        tVar13.x = (LONG)local_100;
        local_cc = (POINT *)CList<tagPOINT,tagPOINT>::InsertBefore
                                      ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),p_Var21,
                                       tVar13);
        pCVar32 = local_78;
        if (local_e8 == param_6 + -2) {
          tVar14.y = (LONG)local_78;
          tVar14.x = (LONG)local_c8;
          p_Var21 = CList<tagPOINT,tagPOINT>::InsertAfter
                              ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),local_f0,tVar14);
          tVar15.y = (LONG)pCVar32;
          tVar15.x = (LONG)(pCVar27 + 3);
          local_f0 = CList<tagPOINT,tagPOINT>::InsertAfter
                               ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),p_Var21,tVar15);
          tVar16.y = (LONG)pCVar32;
          tVar16.x = (LONG)pCVar30;
          p_Var21 = CList<tagPOINT,tagPOINT>::InsertBefore
                              ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),
                               (__POSITION *)local_cc,tVar16);
          tVar17.y = (LONG)pCVar32;
          tVar17.x = (LONG)(pCVar30 + -2);
          local_cc = (POINT *)CList<tagPOINT,tagPOINT>::InsertBefore
                                        ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),p_Var21,
                                         tVar17);
        }
        local_e8 = local_78;
        pCVar27 = local_c8;
        pCVar30 = local_100;
      } while ((int)local_78 < (int)(param_6 + -1));
      local_78 = local_c8;
      param_1 = local_d4;
      piVar31 = local_d8;
    }
    tVar18.y = (LONG)param_6;
    tVar18.x = (LONG)(local_78 + 2);
    CList<tagPOINT,tagPOINT>::InsertAfter
              ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),local_f0,tVar18);
    tVar19.y = (LONG)param_6;
    tVar19.x = (LONG)(pCVar30 + -2);
    CList<tagPOINT,tagPOINT>::InsertBefore
              ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),(__POSITION *)local_cc,tVar19);
    local_cc = (POINT *)FUN_10047ef0(-(uint)((int)((ulonglong)(uint)local_24.left * 8 >> 0x20) != 0)
                                     | (uint)((ulonglong)(uint)local_24.left * 8));
    if (local_2c != (CPen *)0x0) {
      pLVar28 = &local_cc->y;
      pCVar32 = local_2c;
      do {
        pCVar27 = *(CPen **)pCVar32;
        ((POINT *)(pLVar28 + -1))->x = *(int *)(pCVar32 + 8);
        *pLVar28 = *(int *)(pCVar32 + 0xc);
        if (piVar31[0x24] == 1) {
          *pLVar28 = (LONG)(param_6 + ((int)param_4 - *pLVar28));
        }
        pLVar28 = pLVar28 + 2;
        pCVar32 = pCVar27;
      } while (pCVar27 != (CPen *)0x0);
    }
    local_f8 = 0;
    local_fc = CRgn::vftable;
    local_8 = CONCAT31(local_8._1_3_,2);
    pHVar25 = CreatePolygonRgn(local_cc,local_24.left,2);
    CMenu::Attach((CMenu *)&local_fc,(HMENU__ *)pHVar25);
    CDC::SelectClipRgn(param_1,(CRgn *)&local_fc);
    uVar23 = local_dc;
    if (local_dc == 0xffffffff) {
      pAVar22 = GetGlobalData();
      uVar23 = *(ulong *)(pAVar22 + 0x1c);
    }
    CBrush::CBrush((CBrush *)local_e4,uVar23);
    local_8._0_1_ = 3;
    pcVar1 = *(code **)(*local_d0 + 0xf8);
    guard_check_icall(param_1,param_3,param_4,param_5,param_6,local_e4,param_7,param_8,piVar31);
    (*pcVar1)();
    CDC::SelectClipRgn(param_1,(CRgn *)0x0);
    pAVar22 = GetGlobalData();
    CPen::CPen((CPen *)&local_ac,0,1,*(ulong *)(pAVar22 + 0x58));
    local_8 = CONCAT31(local_8._1_3_,4);
    local_100 = CDC::SelectObject(param_1,(CPen *)&local_ac);
    local_dc = 0;
    if (0 < local_24.left) {
      pLVar28 = &local_cc[-1].y;
      do {
        if ((local_dc & 1) != 0) {
          local_c8 = (CPen *)((POINT *)(pLVar28 + -1))->x;
          pCVar32 = (CPen *)pLVar28[1];
          local_f0 = (__POSITION *)*pLVar28;
          local_d4 = (CDC *)pLVar28[2];
          if (((int)(param_5 + (int)param_3) / 2 < (int)local_c8) &&
             ((int)(param_5 + (int)param_3) / 2 < (int)pCVar32)) {
            local_c8 = local_c8 + -1;
            pCVar32 = pCVar32 + -1;
          }
          if ((int)local_d4 < (int)local_f0) {
            CDC::MoveTo(param_1,(int)local_ec,(int)pCVar32);
            pCVar32 = local_c8;
            p_Var21 = local_f0;
          }
          else {
            CDC::MoveTo(param_1,(int)&local_7c,(int)local_c8);
            p_Var21 = (__POSITION *)local_d4;
          }
          CDC::LineTo(param_1,(int)pCVar32,(int)p_Var21);
        }
        local_dc = local_dc + 1;
        pLVar28 = pLVar28 + 2;
      } while ((int)local_dc < local_24.left);
    }
    FID_conflict__free(local_cc);
    CDC::SelectObject(param_1,local_100);
    param_3 = local_108;
    param_5 = local_110;
    local_ac = (CPen *)CPen::vftable;
    CImageList::~CImageList((CImageList *)&local_ac);
    local_e4[0] = CBrush::vftable;
    CImageList::~CImageList((CImageList *)local_e4);
    local_fc = CRgn::vftable;
    CImageList::~CImageList((CImageList *)&local_fc);
    local_8 = 5;
    local_34._4_4_ = CList<tagPOINT,tagPOINT>::vftable;
    CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4));
    local_8 = 0xffffffff;
  }
  else {
    pcVar1 = *(code **)(*piVar31 + 0x17c);
    guard_check_icall(pRVar34);
    iVar20 = (*pcVar1)();
    uVar23 = local_dc;
    local_c8 = (CPen *)(iVar20 / 2);
    if (piVar31[0x24] == 0) {
      param_6 = param_6 + -1;
      local_34._0_4_ = param_3;
      local_2c = param_3 + (int)local_c8;
      local_24.left = (LONG)(param_5 + -(int)local_c8);
      local_24.right = (LONG)param_5;
    }
    else {
      param_4 = param_4 + 1;
      local_2c = param_3;
      local_34._0_4_ = param_3 + (int)local_c8;
      local_24.left = (LONG)param_5;
      local_24.right = (LONG)(param_5 + -(int)local_c8);
      param_3 = param_3 + 2;
    }
    pCVar32 = (CPen *)0x0;
    local_34._4_4_ = (undefined **)param_4;
    local_28 = param_6;
    local_24.top = (LONG)param_6;
    local_24.bottom = (LONG)param_4;
    CBrush::CBrush((CBrush *)&local_fc,local_dc);
    local_8 = 0;
    if ((param_8 == 0) && (uVar23 != 0xffffffff)) {
      pCVar32 = CDC::SelectObject(param_1,(CPen *)&local_fc);
    }
    Polygon(*(HDC *)(param_1 + 4),(POINT *)&local_34,4);
    if (pCVar32 != (CPen *)0x0) {
      CDC::SelectObject(param_1,pCVar32);
    }
    local_fc = CBrush::vftable;
    pCVar26 = (CImageList *)&local_fc;
LAB_1008f3d2:
    local_8 = 0xffffffff;
    CImageList::~CImageList(pCVar26);
  }
  piVar31 = local_d8;
  pcVar1 = *(code **)(*local_d8 + 0x1e4);
  iVar20 = param_7;
  guard_check_icall(param_7);
  iVar24 = (*pcVar1)();
  local_d4 = (CDC *)0xffffffff;
  if ((param_8 == 0) && (iVar24 != -1)) {
    pcVar1 = *(code **)(*(int *)param_1 + 0x30);
    guard_check_icall(iVar24);
    local_d4 = (CDC *)(*pcVar1)();
  }
  pcVar1 = *(code **)(*piVar31 + 0x288);
  guard_check_icall(iVar20);
  iVar20 = (*pcVar1)();
  if (iVar20 == 0) {
    pcVar1 = *(code **)(*piVar31 + 0x28c);
    guard_check_icall();
    iVar20 = (*pcVar1)();
    if (iVar20 != 0) goto LAB_1008f44e;
  }
  else {
LAB_1008f44e:
    local_a4.left = 0;
    local_a4.top = 0;
    local_a4.right = 0;
    local_a4.bottom = 0;
    pcVar1 = *(code **)(*piVar31 + 0x180);
    guard_check_icall(&local_a4);
    (*pcVar1)();
    if ((int)(local_a4.right + -2) <= (int)param_5) {
      param_5 = (CPen *)(local_a4.right + -2);
    }
  }
  local_118 = 0;
  local_11c = CRgn::vftable;
  local_8 = 0xc;
  pHVar25 = CreateRectRgnIndirect(&local_c4);
  CMenu::Attach((CMenu *)&local_11c,(HMENU__ *)pHVar25);
  CDC::SelectClipRgn(param_1,(CRgn *)&local_11c);
  pcVar1 = *(code **)(*local_d0 + 0xfc);
  guard_check_icall(param_1,param_3,param_4,param_5,param_6,param_7,param_8,piVar31,0xffffffff);
  (*pcVar1)();
  if (local_d4 != (CDC *)0xffffffff) {
    pcVar1 = *(code **)(*(int *)param_1 + 0x30);
    guard_check_icall(local_d4);
    (*pcVar1)();
  }
  CDC::SelectClipRgn(param_1,(CRgn *)0x0);
  local_11c = CRgn::vftable;
  pCVar26 = (CImageList *)&local_11c;
LAB_1008f54c:
  CImageList::~CImageList(pCVar26);
  FUN_1017f5f4();
  return;
}

