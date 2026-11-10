// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnUpdateSystemColors
// address: 0x1009cbb7
// body: available
// range: 0x1009cbb7-0x100a3ef4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnUpdateSystemColors(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCVisualManagerOffice2007::OnUpdateSystemColors(CMFCVisualManagerOffice2007 *this)

{
  CMFCVisualManagerOffice2007 *pCVar1;
  CGdiObject *this_00;
  code *pcVar2;
  COLORREF CVar3;
  AFX_GLOBAL_DATA *pAVar4;
  int iVar5;
  AFX_MODULE_STATE *pAVar6;
  undefined4 *puVar7;
  HBRUSH pHVar8;
  AFX_GLOBAL_DATA *pAVar9;
  HFONT pHVar10;
  int iVar11;
  wchar_t *pwVar12;
  undefined4 uVar13;
  ulong uVar14;
  HPEN pHVar15;
  CMFCVisualManagerOffice2007 *pCVar16;
  CMFCVisualManagerOffice2007 *pCVar17;
  CMFCVisualManagerOffice2007 *pCVar18;
  CMFCToolBarImages *pCVar19;
  wchar_t *pwVar20;
  double dVar21;
  tagNONCLIENTMETRICSW *ptVar22;
  HINSTANCE__ *local_428;
  CTagManager local_424 [4];
  CMFCVisualManagerOffice2007 *local_420;
  CTagManager local_41c [4];
  CMFCVisualManagerOffice2007 *local_418;
  CMFCVisualManagerOffice2007 *local_414;
  CMFCVisualManagerOffice2007 *local_410;
  CTagManager local_40c [4];
  int local_408;
  char local_401;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_400 [4];
  CMFCVisualManagerOffice2007 *local_3fc;
  CMFCVisualManagerOffice2007 *local_3f8;
  CMFCVisualManagerOffice2007 *local_3f4;
  wchar_t *local_3f0;
  CTagManager local_3ec [4];
  CMFCVisualManagerOffice2007 *local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  CMFCVisualManagerOffice2007 *local_3dc;
  wchar_t *local_3d8;
  CMFCVisualManagerOffice2007 *local_3d4;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_3d0 [4];
  wchar_t *local_3cc;
  wchar_t *local_3c8;
  ulong local_3c4;
  ulong local_3c0;
  CMFCVisualManagerOffice2007 *local_3bc;
  wchar_t *local_3b8;
  CTagManager local_3b4 [8];
  ulong local_3ac;
  wchar_t *local_3a8;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_3a4 [4];
  wchar_t **local_3a0;
  undefined4 local_39c [6];
  tagLOGFONTW local_384 [5];
  CMFCControlRendererInfo local_1a4 [80];
  CMFCControlRendererInfo local_154 [80];
  CMFCControlRendererInfo local_104 [80];
  CMFCControlRendererInfo local_b4 [80];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  CMFCVisualManagerOffice2007 *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  IMAGE_STATE local_34;
  wchar_t *local_30;
  undefined4 local_2c;
  wchar_t *local_28;
  undefined4 local_24;
  wchar_t *local_20;
  undefined4 local_1c;
  wchar_t *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x420;
  local_8._0_1_ = 0xc6;
  local_8._1_3_ = 0x1009cb;
  local_3cc = (wchar_t *)0x0;
  pcVar2 = *(code **)(*(int *)this + 0x328);
  local_3fc = this;
  guard_check_icall();
  (*pcVar2)();
  CMFCVisualManagerOffice2003::OnUpdateSystemColors((CMFCVisualManagerOffice2003 *)this);
  pAVar4 = GetGlobalData();
  iVar5 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar4);
  if ((iVar5 != 0) || (pAVar4 = GetGlobalData(), *(int *)(pAVar4 + 0x1ac) < 9)) goto LAB_100a3eef;
  *(undefined4 *)(this + 0xa4) = 1;
  local_428 = (HINSTANCE__ *)0x0;
  if ((DAT_101dc72c != 0) || (SetStyle(0,0), DAT_101dc72c != 0)) {
    pAVar6 = AfxGetModuleState();
    iVar5 = DAT_101dc72c;
    local_428 = *(HINSTANCE__ **)(pAVar6 + 0xc);
    pAVar6 = AfxGetModuleState();
    *(int *)(pAVar6 + 0xc) = iVar5;
  }
  CTagManager::CTagManager(local_40c,(wchar_t *)0x0);
  local_8 = 0;
  puVar7 = (undefined4 *)GetStyleResourceID(&local_3a0,DAT_101dc728);
  local_8._0_1_ = 1;
  iVar5 = FUN_10076bf0(*puVar7,L"STYLE_XML");
  local_8._0_1_ = 0;
  FUN_10003460();
  if (iVar5 == 0) {
    if (local_428 != (HINSTANCE__ *)0x0) {
      pAVar6 = AfxGetModuleState();
      *(HINSTANCE__ **)(pAVar6 + 0xc) = local_428;
    }
  }
  else {
    FUN_10013071();
    FUN_10003190();
    local_8._0_1_ = 2;
    CTagManager::ExcludeTag
              (local_40c,L"STYLE",
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3cc,0);
    SetBuffer();
    local_8._0_1_ = 0;
    FUN_10003460();
    FUN_10013071();
    FUN_10003190();
    pCVar18 = local_3fc;
    local_8._0_1_ = 3;
    pCVar16 = local_3fc + 0xc000;
    *(int *)pCVar16 = 0x14;
    if (*(int *)(local_408 + -0xc) != 0) {
      local_3d8 = (wchar_t *)0x0;
      iVar5 = CTagManager::ExcludeTag
                        (local_40c,L"VERSION",
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3f0,0);
      if (iVar5 != 0) {
        CTagManager::CTagManager(local_3b4,local_3f0);
        local_8._0_1_ = 4;
        FUN_100037c0();
        local_8._0_1_ = 5;
        CTagManager::ReadInt
                  (local_3b4,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3a8,
                   (int *)&local_3d8);
        local_8._0_1_ = 4;
        FUN_10003460();
        if (local_3d8 == (wchar_t *)0x7d7) {
          FUN_100037c0();
          local_8._0_1_ = 6;
          CTagManager::ReadInt
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3a8,(int *)pCVar16);
          local_8._0_1_ = 4;
          FUN_10003460();
          if (*(int *)pCVar16 < 10) {
            *(int *)pCVar16 = *(int *)pCVar16 * 10;
          }
          *(undefined4 *)(pCVar18 + 0x20c) = 1;
        }
        if ((*(int *)(pCVar18 + 0x20c) != 0) &&
           (iVar5 = CTagManager::ExcludeTag
                              (local_3b4,L"ID_PREFIX",
                               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *
                               )&local_3f0,0), iVar5 != 0)) {
          FUN_10011160();
          FUN_100110b0();
          FUN_100030d0();
        }
        local_8._0_1_ = 3;
        CTagManager::~CTagManager(local_3b4);
      }
    }
    if (*(int *)(pCVar18 + 0x20c) == 0) {
      if (local_428 != (HINSTANCE__ *)0x0) {
        pAVar6 = AfxGetModuleState();
        *(HINSTANCE__ **)(pAVar6 + 0xc) = local_428;
      }
    }
    else {
      iVar5 = CTagManager::ExcludeTag
                        (local_40c,L"GLOBALS",
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3f0,0);
      if (iVar5 != 0) {
        CTagManager::CTagManager((CTagManager *)&local_3c,local_3f0);
        local_8._0_1_ = 7;
        FUN_100037c0();
        local_8._0_1_ = 8;
        pAVar4 = GetGlobalData();
        CTagManager::ReadColor
                  ((CTagManager *)&local_3c,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3a8,
                   (ulong *)(pAVar4 + 0x68));
        local_8._0_1_ = 7;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 9;
        pAVar4 = GetGlobalData();
        iVar5 = CTagManager::ReadColor
                          ((CTagManager *)&local_3c,
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3a8,(ulong *)(pAVar4 + 0x54));
        local_8 = CONCAT31(local_8._1_3_,7);
        FUN_10003460();
        if (iVar5 != 0) {
          pAVar4 = GetGlobalData();
          CGdiObject::DeleteObject((CGdiObject *)(pAVar4 + 0xd0));
          pAVar4 = GetGlobalData();
          CVar3 = *(COLORREF *)(pAVar4 + 0x54);
          pAVar4 = GetGlobalData();
          pHVar8 = CreateSolidBrush(CVar3);
          CMenu::Attach((CMenu *)(pAVar4 + 0xd0),(HMENU__ *)pHVar8);
          pAVar4 = GetGlobalData();
          *(undefined4 *)(pCVar18 + 0xa8) = *(undefined4 *)(pAVar4 + 0x54);
        }
        FUN_100037c0();
        local_8._0_1_ = 10;
        pAVar4 = GetGlobalData();
        iVar5 = CTagManager::ReadColor
                          ((CTagManager *)&local_3c,
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3a8,(ulong *)(pAVar4 + 0x7c));
        local_8 = CONCAT31(local_8._1_3_,7);
        FUN_10003460();
        if (iVar5 != 0) {
          pAVar4 = GetGlobalData();
          pAVar9 = GetGlobalData();
          *(undefined4 *)(pAVar9 + 0x80) = *(undefined4 *)(pAVar4 + 0x7c);
          pAVar4 = GetGlobalData();
          CGdiObject::DeleteObject((CGdiObject *)(pAVar4 + 0xb8));
          pAVar4 = GetGlobalData();
          CVar3 = *(COLORREF *)(pAVar4 + 0x7c);
          pAVar4 = GetGlobalData();
          pHVar8 = CreateSolidBrush(CVar3);
          CMenu::Attach((CMenu *)(pAVar4 + 0xb8),(HMENU__ *)pHVar8);
        }
        FUN_100037c0();
        local_8._0_1_ = 0xb;
        pAVar4 = GetGlobalData();
        iVar5 = CTagManager::ReadColor
                          ((CTagManager *)&local_3c,
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3a8,(ulong *)(pAVar4 + 0x74));
        local_8 = CONCAT31(local_8._1_3_,7);
        FUN_10003460();
        if (iVar5 != 0) {
          pAVar4 = GetGlobalData();
          pAVar9 = GetGlobalData();
          *(undefined4 *)(pAVar9 + 0x84) = *(undefined4 *)(pAVar4 + 0x74);
        }
        FUN_100037c0();
        local_8._0_1_ = 0xc;
        pAVar4 = GetGlobalData();
        CTagManager::ReadColor
                  ((CTagManager *)&local_3c,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3a8,
                   (ulong *)(pAVar4 + 0x80));
        local_8._0_1_ = 7;
        FUN_10003460();
        pAVar4 = GetGlobalData();
        CGdiObject::DeleteObject((CGdiObject *)(pAVar4 + 0xc0));
        pAVar4 = GetGlobalData();
        CVar3 = *(COLORREF *)(pAVar4 + 0x80);
        pAVar4 = GetGlobalData();
        pHVar8 = CreateSolidBrush(CVar3);
        CMenu::Attach((CMenu *)(pAVar4 + 0xc0),(HMENU__ *)pHVar8);
        FUN_100037c0();
        local_8._0_1_ = 0xd;
        pAVar4 = GetGlobalData();
        CTagManager::ReadColor
                  ((CTagManager *)&local_3c,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3a8,
                   (ulong *)(pAVar4 + 0x84));
        local_8._0_1_ = 7;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0xe;
        pAVar4 = GetGlobalData();
        CTagManager::ReadColor
                  ((CTagManager *)&local_3c,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3a8,
                   (ulong *)(pAVar4 + 0x58));
        local_8._0_1_ = 7;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0xf;
        pAVar4 = GetGlobalData();
        CTagManager::ReadColor
                  ((CTagManager *)&local_3c,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3a8,
                   (ulong *)(pAVar4 + 0x60));
        local_8._0_1_ = 7;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0x10;
        pAVar4 = GetGlobalData();
        CTagManager::ReadColor
                  ((CTagManager *)&local_3c,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3a8,
                   (ulong *)(pAVar4 + 100));
        local_8._0_1_ = 7;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0x11;
        CTagManager::ReadColor
                  ((CTagManager *)&local_3c,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3a8,
                   (ulong *)&local_3a0);
        local_8._0_1_ = 7;
        FUN_10003460();
        CGdiObject::DeleteObject((CGdiObject *)(pCVar18 + 0x134));
        pHVar8 = CreateSolidBrush((COLORREF)local_3a0);
        CMenu::Attach((CMenu *)(pCVar18 + 0x134),(HMENU__ *)pHVar8);
        FUN_100037c0();
        local_8._0_1_ = 0x12;
        CTagManager::ReadColor
                  ((CTagManager *)&local_3c,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3a8,
                   (ulong *)(pCVar18 + 0x194));
        local_8._0_1_ = 7;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0x13;
        CTagManager::ReadColor
                  ((CTagManager *)&local_3c,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3a8,
                   (ulong *)(pCVar18 + 400));
        local_8._0_1_ = 7;
        FUN_10003460();
        *(ulong *)(pCVar18 + 0x19c) = *(ulong *)(pCVar18 + 400);
        pCVar16 = pCVar18 + 0x198;
        *(ulong *)pCVar16 = *(ulong *)(pCVar18 + 0x194);
        FUN_100037c0();
        pCVar1 = local_3fc;
        local_8._0_1_ = 0x14;
        CTagManager::ReadColor
                  ((CTagManager *)&local_3c,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3a8,
                   (ulong *)(local_3fc + 0x19c));
        local_8._0_1_ = 7;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0x15;
        CTagManager::ReadColor
                  ((CTagManager *)&local_3c,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3a8,
                   (ulong *)pCVar16);
        local_8._0_1_ = 7;
        FUN_10003460();
        pCVar18 = local_3fc;
        *(undefined4 *)(pCVar1 + 0x1a4) = *(undefined4 *)pCVar16;
        pCVar16 = local_3fc + 0x1a0;
        *(ulong *)pCVar16 = *(ulong *)(local_3fc + 0x19c);
        FUN_100037c0();
        local_8._0_1_ = 0x16;
        CTagManager::ReadColor
                  ((CTagManager *)&local_3c,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3a8,
                   (ulong *)(pCVar1 + 0x1a4));
        local_8._0_1_ = 7;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0x17;
        CTagManager::ReadColor
                  ((CTagManager *)&local_3c,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3a8,
                   (ulong *)pCVar16);
        local_8._0_1_ = 7;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0x18;
        CTagManager::ReadColor
                  ((CTagManager *)&local_3c,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3a8,
                   (ulong *)(pCVar18 + 0xd4));
        local_8._0_1_ = 7;
        FUN_10003460();
        pAVar4 = GetGlobalData();
        local_3b8 = *(wchar_t **)(pAVar4 + 0x3c);
        pAVar4 = GetGlobalData();
        local_3c8 = *(wchar_t **)(pAVar4 + 0x40);
        FUN_100037c0();
        local_8 = CONCAT31(local_8._1_3_,0x19);
        local_3cc = (wchar_t *)0x1;
        iVar5 = CTagManager::ReadColor
                          ((CTagManager *)&local_3c,
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3d8,(ulong *)&local_3b8);
        if (iVar5 == 0) {
LAB_1009d49f:
          local_401 = '\0';
        }
        else {
          FUN_100037c0();
          local_8 = 0x1a;
          local_3cc = (wchar_t *)0x3;
          iVar5 = CTagManager::ReadColor
                            ((CTagManager *)&local_3c,
                             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_3a8,(ulong *)&local_3c8);
          local_401 = '\x01';
          if (iVar5 == 0) goto LAB_1009d49f;
        }
        if (((uint)local_3cc & 2) != 0) {
          FUN_10003460();
        }
        local_8 = 7;
        FUN_10003460();
        if (local_401 != '\0') {
          pAVar4 = GetGlobalData();
          *(wchar_t **)(pAVar4 + 0x3c) = local_3b8;
          pAVar4 = GetGlobalData();
          CGdiObject::DeleteObject((CGdiObject *)(pAVar4 + 0xa0));
          pwVar20 = local_3b8;
          pAVar4 = GetGlobalData();
          pHVar8 = CreateSolidBrush((COLORREF)pwVar20);
          CMenu::Attach((CMenu *)(pAVar4 + 0xa0),(HMENU__ *)pHVar8);
          pAVar4 = GetGlobalData();
          *(wchar_t **)(pAVar4 + 0x40) = local_3c8;
        }
        FUN_100037c0();
        local_8._0_1_ = 0x1b;
        CTagManager::ReadColor
                  ((CTagManager *)&local_3c,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3a8,
                   (ulong *)(pCVar18 + 0xa8));
        local_8._0_1_ = 7;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0x1c;
        iVar5 = CTagManager::ReadToolTipInfo
                          ((CTagManager *)&local_3c,
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3a8,(CMFCToolTipInfo *)(pCVar18 + 0xc004));
        *(int *)(pCVar18 + 0x218) = iVar5;
        FUN_10003460();
        local_8._0_1_ = 3;
        CTagManager::~CTagManager((CTagManager *)&local_3c);
      }
      iVar5 = CTagManager::ExcludeTag
                        (local_40c,L"MAINWND",
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3f0,0);
      if (iVar5 != 0) {
        CTagManager::CTagManager(local_3b4,local_3f0);
        local_8._0_1_ = 0x1d;
        FUN_10013071();
        FUN_10003190();
        local_8._0_1_ = 0x1e;
        iVar5 = CTagManager::ExcludeTag
                          (local_3b4,L"CAPTION",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3a8,0);
        if (iVar5 != 0) {
          CTagManager::CTagManager((CTagManager *)&local_3c,local_3a8);
          ptVar22 = (tagNONCLIENTMETRICSW *)local_39c;
          local_8._0_1_ = 0x1f;
          local_39c[0] = 0x1f8;
          pAVar4 = GetGlobalData();
          iVar5 = AFX_GLOBAL_DATA::GetNonClientMetrics(pAVar4,ptVar22);
          if (iVar5 != 0) {
            FUN_100037c0();
            local_8._0_1_ = 0x20;
            CTagManager::ReadFont
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3c8,local_384);
            local_8._0_1_ = 0x1f;
            FUN_10003460();
            CGdiObject::DeleteObject((CGdiObject *)(pCVar18 + 0x8f38));
            pHVar10 = CreateFontIndirectW(local_384);
            CMenu::Attach((CMenu *)(pCVar18 + 0x8f38),(HMENU__ *)pHVar10);
          }
          FUN_100037c0();
          local_8._0_1_ = 0x21;
          CTagManager::ReadColor
                    ((CTagManager *)&local_3c,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3c8,(ulong *)(pCVar18 + 0x8f50));
          local_8._0_1_ = 0x1f;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x22;
          CTagManager::ReadColor
                    ((CTagManager *)&local_3c,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3c8,(ulong *)(pCVar18 + 0x8f54));
          local_8._0_1_ = 0x1f;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x23;
          CTagManager::ReadColor
                    ((CTagManager *)&local_3c,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3c8,(ulong *)(pCVar18 + 0x8f58));
          local_8._0_1_ = 0x1f;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x24;
          CTagManager::ReadColor
                    ((CTagManager *)&local_3c,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3c8,(ulong *)(pCVar18 + 0x8f5c));
          local_8._0_1_ = 0x1f;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x25;
          CTagManager::ReadColor
                    ((CTagManager *)&local_3c,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3c8,(ulong *)(pCVar18 + 0x8f60));
          local_8._0_1_ = 0x1f;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x26;
          CTagManager::ReadColor
                    ((CTagManager *)&local_3c,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3c8,(ulong *)(pCVar18 + 0x8f64));
          local_8._0_1_ = 0x1f;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x27;
          CTagManager::ReadColor
                    ((CTagManager *)&local_3c,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3c8,(ulong *)(pCVar18 + 0x8f68));
          local_8._0_1_ = 0x1f;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x28;
          CTagManager::ReadColor
                    ((CTagManager *)&local_3c,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3c8,(ulong *)(pCVar18 + 0x8f6c));
          local_8._0_1_ = 0x1f;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x29;
          CTagManager::ReadBool
                    ((CTagManager *)&local_3c,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3c8,(int *)(pCVar18 + 0x210));
          local_8._0_1_ = 0x1f;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x2a;
          puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_MAINBORDER_CAPTION");
          local_8._0_1_ = 0x2b;
          CTagManager::ReadControlRenderer
                    ((CTagManager *)&local_3c,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3c8,(CMFCControlRenderer *)(pCVar18 + 0x23d0),(wchar_t *)*puVar7);
          FUN_10003460();
          local_8._0_1_ = 0x1f;
          FUN_10003460();
          iVar5 = GetSystemMetrics(0x1f);
          iVar11 = GetSystemMetrics(0x1e);
          *(int *)(pCVar18 + 0x21c) = iVar11;
          *(int *)(pCVar18 + 0x220) = iVar5;
          iVar5 = GetSystemMetrics(0x35);
          iVar11 = GetSystemMetrics(0x34);
          *(int *)(pCVar18 + 0x224) = iVar11;
          *(int *)(pCVar18 + 0x228) = iVar5;
          FUN_10013071();
          FUN_10003190();
          local_8._0_1_ = 0x2c;
          iVar5 = CTagManager::ExcludeTag
                            ((CTagManager *)&local_3c,L"BUTTONS",
                             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_3d8,0);
          if (iVar5 != 0) {
            CTagManager::CTagManager(local_424,local_3d8);
            local_8._0_1_ = 0x2d;
            local_3cc = (wchar_t *)0x0;
            do {
              pwVar20 = local_3cc;
              FUN_10013071();
              FUN_10003190();
              local_8._0_1_ = 0x2e;
              FUN_10013071();
              FUN_10003190();
              local_8._0_1_ = 0x2f;
              if (pwVar20 == (wchar_t *)0x1) {
                FUN_10003780();
              }
              pwVar12 = L"NORMAL";
              if (pwVar20 != (wchar_t *)0x0) {
                pwVar12 = L"SMALL";
              }
              iVar5 = CTagManager::ExcludeTag
                                (local_424,pwVar12,
                                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                  *)&local_3c8,0);
              if (iVar5 != 0) {
                CTagManager::CTagManager(local_3ec,local_3c8);
                local_8._0_1_ = 0x30;
                FUN_100037c0();
                local_8._0_1_ = 0x31;
                CTagManager::ReadSize
                          (local_3ec,local_400,(CSize *)(pCVar18 + (int)pwVar20 * 8 + 0x21c));
                local_8._0_1_ = 0x30;
                FUN_10003460();
                local_3e4 = 0;
                local_3e0 = 0;
                FUN_100037c0();
                local_8._0_1_ = 0x32;
                iVar5 = CTagManager::ReadSize
                                  (local_3ec,
                                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                    *)&local_3f8,(CSize *)&local_3e4);
                local_8._0_1_ = 0x30;
                FUN_10003460();
                if (iVar5 != 0) {
                  iVar5 = (int)pwVar20 * 0x118;
                  FUN_1004ebad();
                  *(undefined4 *)(pCVar18 + iVar5 + 0x6cc) = 1;
                  pCVar19 = (CMFCToolBarImages *)(pCVar18 + (int)(local_3cc + 3) * 0x118);
                  *(undefined4 *)(pCVar19 + 0x54) = local_3e4;
                  *(undefined4 *)(pCVar19 + 0x58) = local_3e0;
                  puVar7 = (undefined4 *)
                           ATL::operator+((wchar_t *)&local_3bc,
                                          (CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>
                                           *)L"IDB_OFFICE2007_SYS_BTN_CLOSE");
                  local_8._0_1_ = 0x33;
                  puVar7 = (undefined4 *)MakeResourceID(&local_3a0,*puVar7);
                  local_8._0_1_ = 0x34;
                  CMFCToolBarImages::LoadStr(pCVar19,(char *)*puVar7,(HINSTANCE__ *)0x0,0);
                  FUN_10003460();
                  local_8._0_1_ = 0x30;
                  FUN_10003460();
                  FUN_1004ebad();
                  *(undefined4 *)(pCVar18 + iVar5 + 0x8fc) = 1;
                  pCVar19 = (CMFCToolBarImages *)(pCVar18 + (int)(local_3cc + 4) * 0x118);
                  *(undefined4 *)(pCVar19 + 0x54) = local_3e4;
                  *(undefined4 *)(pCVar19 + 0x58) = local_3e0;
                  puVar7 = (undefined4 *)
                           ATL::operator+((wchar_t *)&local_3ac,
                                          (CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>
                                           *)L"IDB_OFFICE2007_SYS_BTN_RESTORE");
                  local_8._0_1_ = 0x35;
                  puVar7 = (undefined4 *)MakeResourceID(local_3a4,*puVar7);
                  local_8._0_1_ = 0x36;
                  CMFCToolBarImages::LoadStr(pCVar19,(char *)*puVar7,(HINSTANCE__ *)0x0,0);
                  FUN_10003460();
                  local_8._0_1_ = 0x30;
                  FUN_10003460();
                  FUN_1004ebad();
                  *(undefined4 *)(pCVar18 + iVar5 + 0xb2c) = 1;
                  pCVar19 = (CMFCToolBarImages *)(pCVar18 + (int)(local_3cc + 5) * 0x118);
                  *(undefined4 *)(pCVar19 + 0x54) = local_3e4;
                  *(undefined4 *)(pCVar19 + 0x58) = local_3e0;
                  puVar7 = (undefined4 *)
                           ATL::operator+((wchar_t *)&local_3c4,
                                          (CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>
                                           *)L"IDB_OFFICE2007_SYS_BTN_MAXIMIZE");
                  local_8._0_1_ = 0x37;
                  puVar7 = (undefined4 *)MakeResourceID(&local_3c0,*puVar7);
                  local_8._0_1_ = 0x38;
                  CMFCToolBarImages::LoadStr(pCVar19,(char *)*puVar7,(HINSTANCE__ *)0x0,0);
                  FUN_10003460();
                  local_8._0_1_ = 0x30;
                  FUN_10003460();
                  FUN_1004ebad();
                  pwVar20 = local_3cc;
                  *(undefined4 *)(pCVar18 + iVar5 + 0xd5c) = 1;
                  pCVar19 = (CMFCToolBarImages *)(pCVar18 + (int)(local_3cc + 6) * 0x118);
                  *(undefined4 *)(pCVar19 + 0x54) = local_3e4;
                  *(undefined4 *)(pCVar19 + 0x58) = local_3e0;
                  puVar7 = (undefined4 *)
                           ATL::operator+((wchar_t *)&local_3d4,
                                          (CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>
                                           *)L"IDB_OFFICE2007_SYS_BTN_MINIMIZE");
                  local_8._0_1_ = 0x39;
                  puVar7 = (undefined4 *)MakeResourceID(local_3d0,*puVar7);
                  local_8._0_1_ = 0x3a;
                  CMFCToolBarImages::LoadStr(pCVar19,(char *)*puVar7,(HINSTANCE__ *)0x0,0);
                  FUN_10003460();
                  local_8._0_1_ = 0x30;
                  FUN_10003460();
                }
                FUN_100037c0();
                local_8._0_1_ = 0x3b;
                MakeResourceID(&local_3f4,L"IDB_OFFICE2007_SYS_BTN_BACK");
                local_8._0_1_ = 0x3c;
                ParseControlRenderer();
                FUN_10003460();
                FUN_10003460();
                CTagManager::~CTagManager(local_3ec);
              }
              FUN_10003460();
              local_8._0_1_ = 0x2d;
              FUN_10003460();
              local_3cc = (wchar_t *)((int)pwVar20 + 1);
            } while ((int)local_3cc < 2);
            CTagManager::~CTagManager(local_424);
          }
          FUN_10003460();
          local_8._0_1_ = 0x1e;
          CTagManager::~CTagManager((CTagManager *)&local_3c);
        }
        FUN_100037c0();
        local_8._0_1_ = 0x3d;
        puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_MAINBORDER");
        local_8._0_1_ = 0x3e;
        CTagManager::ReadControlRenderer
                  (local_3b4,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3dc,
                   (CMFCControlRenderer *)(pCVar18 + 0x20e0),(wchar_t *)*puVar7);
        FUN_10003460();
        local_8._0_1_ = 0x1e;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0x3f;
        puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_MDICHILDBORDER");
        local_8._0_1_ = 0x40;
        CTagManager::ReadControlRenderer
                  (local_3b4,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3f8,
                   (CMFCControlRenderer *)(pCVar18 + 0x2258),(wchar_t *)*puVar7);
        FUN_10003460();
        local_8._0_1_ = 0x1e;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0x41;
        iVar5 = CTagManager::ReadColor(local_3b4,local_400,(ulong *)(pCVar18 + 0x8f70));
        local_8 = CONCAT31(local_8._1_3_,0x1e);
        FUN_10003460();
        if (iVar5 != 0) {
          CGdiObject::DeleteObject((CGdiObject *)(pCVar18 + 0x8f40));
          pHVar8 = CreateSolidBrush(*(COLORREF *)(pCVar18 + 0x8f70));
          CMenu::Attach((CMenu *)(pCVar18 + 0x8f40),(HMENU__ *)pHVar8);
        }
        FUN_10003460();
        local_8._0_1_ = 3;
        CTagManager::~CTagManager(local_3b4);
      }
      iVar5 = CTagManager::ExcludeTag
                        (local_40c,L"MENU",
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3f0,0);
      if (iVar5 != 0) {
        CTagManager::CTagManager((CTagManager *)&local_3c,local_3f0);
        local_8._0_1_ = 0x42;
        FUN_100037c0();
        local_8._0_1_ = 0x43;
        iVar5 = CTagManager::ReadColor
                          ((CTagManager *)&local_3c,
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3dc,(ulong *)(pCVar18 + 0xc0));
        local_8 = CONCAT31(local_8._1_3_,0x42);
        FUN_10003460();
        if (iVar5 != 0) {
          CGdiObject::DeleteObject((CGdiObject *)(pCVar18 + 0x10c));
          pHVar8 = CreateSolidBrush(*(COLORREF *)(pCVar18 + 0xc0));
          CMenu::Attach((CMenu *)(pCVar18 + 0x10c),(HMENU__ *)pHVar8);
        }
        *(ulong *)(pCVar18 + 0xbc) = 0xff000000;
        FUN_100037c0();
        local_8._0_1_ = 0x44;
        CTagManager::ReadColor
                  ((CTagManager *)&local_3c,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3dc,
                   (ulong *)(pCVar18 + 0xbc));
        local_8._0_1_ = 0x42;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0x45;
        CTagManager::ReadColor
                  ((CTagManager *)&local_3c,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3f8,
                   (ulong *)(pCVar18 + 0xe4));
        local_8._0_1_ = 0x42;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0x46;
        iVar5 = CTagManager::ReadColor
                          ((CTagManager *)&local_3c,local_400,(ulong *)(pCVar18 + 0x9034));
        local_8 = CONCAT31(local_8._1_3_,0x42);
        FUN_10003460();
        if (iVar5 != 0) {
          CGdiObject::DeleteObject((CGdiObject *)(pCVar18 + 0x13c));
          CPen::CreatePen((CPen *)(pCVar18 + 0x13c),0,1,*(ulong *)(pCVar18 + 0x9034));
        }
        FUN_100037c0();
        local_8._0_1_ = 0x47;
        iVar5 = CTagManager::ReadColor
                          ((CTagManager *)&local_3c,
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3dc,(ulong *)(pCVar18 + 0x9038));
        local_8 = CONCAT31(local_8._1_3_,0x42);
        FUN_10003460();
        if (iVar5 != 0) {
          CGdiObject::DeleteObject((CGdiObject *)(pCVar18 + 0x8f28));
          CPen::CreatePen((CPen *)(pCVar18 + 0x8f28),0,1,*(ulong *)(pCVar18 + 0x9038));
        }
        local_3d8 = (wchar_t *)0xffffffff;
        FUN_100037c0();
        local_8._0_1_ = 0x48;
        iVar5 = CTagManager::ReadColor
                          ((CTagManager *)&local_3c,
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3dc,(ulong *)&local_3d8);
        local_8 = CONCAT31(local_8._1_3_,0x42);
        FUN_10003460();
        if (iVar5 != 0) {
          CGdiObject::DeleteObject((CGdiObject *)(pCVar18 + 0x8f48));
          CBrush::CreateSolidBrush((CBrush *)(pCVar18 + 0x8f48),(ulong)local_3d8);
        }
        FUN_100037c0();
        local_8._0_1_ = 0x49;
        CTagManager::ReadColor
                  ((CTagManager *)&local_3c,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3dc,
                   (ulong *)(pCVar18 + 0x903c));
        local_8._0_1_ = 0x42;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0x4a;
        iVar5 = CTagManager::ReadColor
                          ((CTagManager *)&local_3c,
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3f8,(ulong *)(pCVar18 + 0xe8));
        local_8 = CONCAT31(local_8._1_3_,0x42);
        FUN_10003460();
        if (iVar5 != 0) {
          CGdiObject::DeleteObject((CGdiObject *)(pCVar18 + 0x144));
          CPen::CreatePen((CPen *)(pCVar18 + 0x144),0,1,*(ulong *)(pCVar18 + 0xe8));
        }
        FUN_100037c0();
        local_8._0_1_ = 0x4b;
        CTagManager::ReadInt
                  ((CTagManager *)&local_3c,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3dc,
                   (int *)(pCVar18 + 0xa4));
        local_8._0_1_ = 0x42;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0x4c;
        puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_MENU_ITEM_BACK");
        local_8._0_1_ = 0x4d;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)&local_3c,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3f8,
                   (CMFCControlRenderer *)(pCVar18 + 0x29b0),(wchar_t *)*puVar7);
        FUN_10003460();
        local_8._0_1_ = 0x42;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0x4e;
        puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_MENU_ITEM_MARKER_C");
        local_8._0_1_ = 0x4f;
        CTagManager::ReadToolBarImages
                  ((CTagManager *)&local_3c,local_400,(CMFCToolBarImages *)(pCVar18 + 0x1298),
                   (wchar_t *)*puVar7);
        FUN_10003460();
        local_8._0_1_ = 0x42;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0x50;
        puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_MENU_ITEM_MARKER_R");
        local_8._0_1_ = 0x51;
        CTagManager::ReadToolBarImages
                  ((CTagManager *)&local_3c,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3c8,
                   (CMFCToolBarImages *)(pCVar18 + 0x13b0),(wchar_t *)*puVar7);
        FUN_10003460();
        local_8._0_1_ = 0x42;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0x52;
        puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_MENU_ITEM_SHOWALL");
        local_8._0_1_ = 0x53;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)&local_3c,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3cc,
                   (CMFCControlRenderer *)(pCVar18 + 0x2b28),(wchar_t *)*puVar7);
        FUN_10003460();
        local_8._0_1_ = 0x42;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0x54;
        puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_MENU_BTN");
        local_8._0_1_ = 0x55;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)&local_3c,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_58,
                   (CMFCControlRenderer *)(pCVar18 + 0x2ca0),(wchar_t *)*puVar7);
        FUN_10003460();
        local_8._0_1_ = 0x42;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0x56;
        puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_MENU_BTN_DISABLED");
        local_8._0_1_ = 0x57;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)&local_3c,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3f4,
                   (CMFCControlRenderer *)(pCVar18 + 0x2e18),(wchar_t *)*puVar7);
        FUN_10003460();
        local_8._0_1_ = 0x42;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0x58;
        puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_MENU_BTN_VERT_SEPARATOR");
        local_8._0_1_ = 0x59;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)&local_3c,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3d4,
                   (CMFCControlRenderer *)(pCVar18 + 0x2f90),(wchar_t *)*puVar7);
        FUN_10003460();
        local_8._0_1_ = 0x42;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0x5a;
        puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_MENU_BTN_SCROLL_T");
        local_8._0_1_ = 0x5b;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)&local_3c,local_3d0,(CMFCControlRenderer *)(pCVar18 + 0x3108),
                   (wchar_t *)*puVar7);
        FUN_10003460();
        local_8._0_1_ = 0x42;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0x5c;
        puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_MENU_BTN_SCROLL_B");
        local_8._0_1_ = 0x5d;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)&local_3c,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3c4,
                   (CMFCControlRenderer *)(pCVar18 + 0x3280),(wchar_t *)*puVar7);
        FUN_10003460();
        local_8._0_1_ = 0x42;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0x5e;
        CTagManager::ReadColor
                  ((CTagManager *)&local_3c,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3c0,
                   (ulong *)(pCVar18 + 0x8f9c));
        local_8._0_1_ = 0x42;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0x5f;
        CTagManager::ReadColor
                  ((CTagManager *)&local_3c,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3ac,
                   (ulong *)(pCVar18 + 0x8fa0));
        local_8._0_1_ = 0x42;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0x60;
        CTagManager::ReadColor((CTagManager *)&local_3c,local_3a4,(ulong *)(pCVar18 + 0x8fa4));
        FUN_10003460();
        local_3b8 = *(wchar_t **)(pCVar18 + 0x8f9c);
        FUN_10003140();
        local_8._0_1_ = 0x61;
        iVar5 = CTagManager::ExcludeTag
                          ((CTagManager *)&local_3c,L"COLORS",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3a8,0);
        if (iVar5 == 0) {
          FUN_100037c0();
          local_8._0_1_ = 0x66;
          CTagManager::ReadColor((CTagManager *)&local_3c,local_3a4,(ulong *)&local_3b8);
          local_8 = CONCAT31(local_8._1_3_,0x61);
          FUN_10003460();
          CMenuImages::SetColor(0,(ulong)local_3b8);
          CMenuImages::SetColor(5,(ulong)local_3b8);
        }
        else {
          CTagManager::CTagManager(local_3b4,local_3a8);
          local_8._0_1_ = 0x62;
          FUN_100037c0();
          local_8._0_1_ = 99;
          CTagManager::ReadColor(local_3b4,local_3a4,(ulong *)&local_3b8);
          local_8._0_1_ = 0x62;
          FUN_10003460();
          CMenuImages::SetColor(0,(ulong)local_3b8);
          FUN_100037c0();
          local_8._0_1_ = 100;
          CTagManager::ReadColor
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3ac,(ulong *)&local_3b8);
          local_8 = CONCAT31(local_8._1_3_,0x62);
          FUN_10003460();
          CMenuImages::SetColor(5,(ulong)local_3b8);
          local_34 = 1;
          iVar5 = 0;
          local_30 = L"Gray";
          local_2c = 2;
          local_28 = L"LtGray";
          local_24 = 3;
          local_20 = L"White";
          local_1c = 4;
          local_18[0] = L"DkGray";
          do {
            FUN_100037c0();
            local_8._0_1_ = 0x65;
            iVar11 = CTagManager::ReadColor(local_3b4,local_3a4,(ulong *)&local_3b8);
            local_8 = CONCAT31(local_8._1_3_,0x62);
            FUN_10003460();
            if (iVar11 != 0) {
              CMenuImages::SetColor((&local_34)[iVar5 * 2],(ulong)local_3b8);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < 4);
          CTagManager::~CTagManager(local_3b4);
        }
        FUN_10003460();
        local_8._0_1_ = 3;
        CTagManager::~CTagManager((CTagManager *)&local_3c);
      }
      iVar5 = CTagManager::ExcludeTag
                        (local_40c,L"BARS",
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3f0,0);
      if (iVar5 != 0) {
        CTagManager::CTagManager(local_3ec,local_3f0);
        FUN_10003140();
        local_8._0_1_ = 0x68;
        iVar5 = CTagManager::ExcludeTag
                          (local_3ec,L"DEFAULT",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3b8,0);
        if (iVar5 != 0) {
          CTagManager::CTagManager(local_3b4,local_3b8);
          local_8._0_1_ = 0x69;
          FUN_100037c0();
          local_8._0_1_ = 0x6a;
          iVar5 = CTagManager::ReadColor(local_3b4,local_3a4,(ulong *)(pCVar18 + 0xb8));
          local_8 = CONCAT31(local_8._1_3_,0x69);
          FUN_10003460();
          if (iVar5 != 0) {
            CGdiObject::DeleteObject((CGdiObject *)(pCVar18 + 0xfc));
            CBrush::CreateSolidBrush((CBrush *)(pCVar18 + 0xfc),*(ulong *)(pCVar18 + 0xb8));
          }
          FUN_100037c0();
          local_8._0_1_ = 0x6b;
          CTagManager::ReadColor(local_3b4,local_3a4,(ulong *)(pCVar18 + 0x160));
          local_8._0_1_ = 0x69;
          FUN_10003460();
          *(ulong *)(pCVar18 + 0x15c) = *(ulong *)(pCVar18 + 0x160);
          FUN_100037c0();
          local_8._0_1_ = 0x6c;
          CTagManager::ReadColor
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3ac,(ulong *)(pCVar18 + 0x15c));
          FUN_10003460();
          local_8._0_1_ = 0x68;
          CTagManager::~CTagManager(local_3b4);
        }
        iVar5 = CTagManager::ExcludeTag
                          (local_3ec,L"TOOLBAR",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3b8,0);
        if (iVar5 != 0) {
          CTagManager::CTagManager((CTagManager *)&local_3c,local_3b8);
          pCVar16 = pCVar18 + 0x168;
          pCVar17 = pCVar18 + 0x164;
          local_8._0_1_ = 0x6d;
          *(ulong *)pCVar16 = *(ulong *)(pCVar18 + 0x160);
          *(undefined4 *)pCVar17 = *(undefined4 *)(pCVar18 + 0x15c);
          uVar13 = FUN_1007d63d(*(undefined4 *)(pCVar18 + 0x15c),*(ulong *)(pCVar18 + 0x160),
                                0x3ff0000000000000,1,1);
          pCVar1 = local_3fc;
          *(undefined4 *)(local_3fc + 0x16c) = uVar13;
          FUN_100037c0();
          local_8._0_1_ = 0x6e;
          CTagManager::ReadColor((CTagManager *)&local_3c,local_3a4,(ulong *)pCVar16);
          local_8._0_1_ = 0x6d;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x6f;
          CTagManager::ReadColor
                    ((CTagManager *)&local_3c,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3ac,(ulong *)pCVar17);
          local_8._0_1_ = 0x6d;
          FUN_10003460();
          pCVar18 = pCVar1 + 0x170;
          pCVar1 = pCVar1 + 0x174;
          *(ulong *)pCVar18 = *(ulong *)pCVar16;
          *(ulong *)pCVar1 = *(ulong *)pCVar17;
          FUN_100037c0();
          local_8._0_1_ = 0x70;
          CTagManager::ReadColor
                    ((CTagManager *)&local_3c,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3c0,(ulong *)pCVar18);
          local_8._0_1_ = 0x6d;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x71;
          CTagManager::ReadColor
                    ((CTagManager *)&local_3c,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3c4,(ulong *)pCVar1);
          local_8._0_1_ = 0x6d;
          FUN_10003460();
          FUN_100037c0();
          pCVar18 = local_3fc;
          local_8._0_1_ = 0x72;
          CTagManager::ReadColor((CTagManager *)&local_3c,local_3d0,(ulong *)(local_3fc + 0x17c));
          local_8._0_1_ = 0x6d;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x73;
          CTagManager::ReadColor
                    ((CTagManager *)&local_3c,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3d4,(ulong *)(pCVar18 + 0x178));
          local_8._0_1_ = 0x6d;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x74;
          puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_GRIPPER");
          local_8._0_1_ = 0x75;
          CTagManager::ReadToolBarImages
                    ((CTagManager *)&local_3c,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3f4,(CMFCToolBarImages *)(pCVar18 + 0x230),(wchar_t *)*puVar7);
          FUN_10003460();
          local_8._0_1_ = 0x6d;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x76;
          puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_TEAR");
          local_8._0_1_ = 0x77;
          CTagManager::ReadToolBarImages
                    ((CTagManager *)&local_3c,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_58
                     ,(CMFCToolBarImages *)(pCVar18 + 0x348),(wchar_t *)*puVar7);
          FUN_10003460();
          local_8._0_1_ = 0x6d;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x78;
          puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_TOOLBAR_BTN");
          local_8._0_1_ = 0x79;
          CTagManager::ReadControlRenderer
                    ((CTagManager *)&local_3c,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3dc,(CMFCControlRenderer *)(pCVar18 + 0x33f8),(wchar_t *)*puVar7);
          FUN_10003460();
          local_8._0_1_ = 0x6d;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x7a;
          puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_TOOLBAR_BORDER");
          local_8._0_1_ = 0x7b;
          CTagManager::ReadControlRenderer
                    ((CTagManager *)&local_3c,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3f8,(CMFCControlRenderer *)(pCVar18 + 0x1810),(wchar_t *)*puVar7);
          FUN_10003460();
          local_8._0_1_ = 0x6d;
          FUN_10003460();
          pAVar4 = GetGlobalData();
          uVar14 = *(ulong *)(pAVar4 + 0x68);
          *(ulong *)(pCVar18 + 0x8f90) = uVar14;
          *(ulong *)(pCVar18 + 0x8f94) = uVar14;
          FUN_100037c0();
          local_8._0_1_ = 0x7c;
          CTagManager::ReadColor((CTagManager *)&local_3c,local_400,(ulong *)(pCVar18 + 0x8f90));
          local_8._0_1_ = 0x6d;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x7d;
          CTagManager::ReadColor
                    ((CTagManager *)&local_3c,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3a8,(ulong *)(pCVar18 + 0x8f94));
          local_8._0_1_ = 0x6d;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x7e;
          CTagManager::ReadColor
                    ((CTagManager *)&local_3c,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3d8,(ulong *)(pCVar18 + 0x8f98));
          local_8._0_1_ = 0x6d;
          FUN_10003460();
          FUN_100037c0();
          pCVar16 = pCVar18 + 0x180;
          local_8._0_1_ = 0x7f;
          iVar5 = CTagManager::ReadColor
                            ((CTagManager *)&local_3c,
                             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_3c8,(ulong *)pCVar16);
          local_8 = CONCAT31(local_8._1_3_,0x6d);
          FUN_10003460();
          if (iVar5 != 0) {
            CGdiObject::DeleteObject((CGdiObject *)(pCVar18 + 0x1e0));
            CPen::CreatePen((CPen *)(pCVar18 + 0x1e0),0,1,*(ulong *)pCVar16);
          }
          CGdiObject::DeleteObject((CGdiObject *)(pCVar18 + 0x8f30));
          uVar14 = CDrawingManager::PixelAlpha(*(ulong *)pCVar16,0xffffff,0x5f);
          CPen::CreatePen((CPen *)(pCVar18 + 0x8f30),0,1,uVar14);
          CGdiObject::DeleteObject((CGdiObject *)(pCVar18 + 0x1e8));
          pHVar15 = CreatePen(0,1,0xffffff);
          CMenu::Attach((CMenu *)(pCVar18 + 0x1e8),(HMENU__ *)pHVar15);
          local_8._0_1_ = 0x68;
          CTagManager::~CTagManager((CTagManager *)&local_3c);
        }
        iVar5 = CTagManager::ExcludeTag
                          (local_3ec,L"MENUBAR",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3b8,0);
        if (iVar5 != 0) {
          CTagManager::CTagManager((CTagManager *)&local_3e4,local_3b8);
          pCVar1 = local_3fc;
          pCVar16 = pCVar18 + 0x8f74;
          pCVar17 = pCVar18 + 0x8f78;
          *(ulong *)pCVar16 = *(ulong *)(pCVar18 + 0x168);
          local_8._0_1_ = 0x80;
          *(undefined4 *)pCVar17 = *(undefined4 *)(local_3fc + 0x164);
          FUN_100037c0();
          local_8._0_1_ = 0x81;
          CTagManager::ReadColor((CTagManager *)&local_3e4,local_3a4,(ulong *)pCVar16);
          local_8._0_1_ = 0x80;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x82;
          CTagManager::ReadColor
                    ((CTagManager *)&local_3e4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3ac,(ulong *)pCVar17);
          local_8._0_1_ = 0x80;
          FUN_10003460();
          pCVar18 = pCVar1 + 0x8f7c;
          pCVar1 = pCVar1 + 0x8f80;
          *(ulong *)pCVar18 = *(ulong *)pCVar16;
          *(ulong *)pCVar1 = *(ulong *)pCVar17;
          FUN_100037c0();
          local_8._0_1_ = 0x83;
          CTagManager::ReadColor
                    ((CTagManager *)&local_3e4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3c0,(ulong *)pCVar18);
          local_8._0_1_ = 0x80;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x84;
          CTagManager::ReadColor
                    ((CTagManager *)&local_3e4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3c4,(ulong *)pCVar1);
          local_8._0_1_ = 0x80;
          FUN_10003460();
          pCVar16 = local_3fc + 0x8f84;
          *(ulong *)pCVar16 = *(ulong *)(local_3fc + 0x8f90);
          pCVar18 = local_3fc + 0x8f88;
          *(ulong *)pCVar18 = *(ulong *)(local_3fc + 0x8f94);
          pCVar1 = local_3fc + 0x8f8c;
          *(ulong *)pCVar1 = *(ulong *)(local_3fc + 0x8f98);
          FUN_100037c0();
          local_8._0_1_ = 0x85;
          CTagManager::ReadColor((CTagManager *)&local_3e4,local_3d0,(ulong *)pCVar16);
          local_8._0_1_ = 0x80;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x86;
          CTagManager::ReadColor
                    ((CTagManager *)&local_3e4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3d4,(ulong *)pCVar18);
          local_8._0_1_ = 0x80;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x87;
          CTagManager::ReadColor
                    ((CTagManager *)&local_3e4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3f4,(ulong *)pCVar1);
          local_8._0_1_ = 0x80;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x88;
          puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_MENUBAR_BTN");
          pCVar18 = local_3fc;
          local_8._0_1_ = 0x89;
          CTagManager::ReadControlRenderer
                    ((CTagManager *)&local_3e4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_58
                     ,(CMFCControlRenderer *)(local_3fc + 0x2838),(wchar_t *)*puVar7);
          FUN_10003460();
          FUN_10003460();
          local_8._0_1_ = 0x68;
          CTagManager::~CTagManager((CTagManager *)&local_3e4);
        }
        iVar5 = CTagManager::ExcludeTag
                          (local_3ec,L"POPUPBAR",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3b8,0);
        if (iVar5 != 0) {
          CTagManager::CTagManager((CTagManager *)&local_3e4,local_3b8);
          local_8._0_1_ = 0x8a;
          FUN_100037c0();
          local_8._0_1_ = 0x8b;
          puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_POPUPMENU_BORDER");
          local_8._0_1_ = 0x8c;
          CTagManager::ReadControlRenderer
                    ((CTagManager *)&local_3e4,local_3a4,(CMFCControlRenderer *)(pCVar18 + 0x2548),
                     (wchar_t *)*puVar7);
          FUN_10003460();
          FUN_10003460();
          FUN_10003140();
          local_8._0_1_ = 0x8d;
          iVar5 = CTagManager::ExcludeTag
                            ((CTagManager *)&local_3e4,L"RESIZEBAR",
                             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_3a8,0);
          if (iVar5 != 0) {
            CTagManager::CTagManager(local_3b4,local_3a8);
            local_8._0_1_ = 0x8e;
            FUN_100037c0();
            local_8._0_1_ = 0x8f;
            puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_POPUPMENU_RESIZEBAR");
            local_8._0_1_ = 0x90;
            CTagManager::ReadControlRenderer
                      (local_3b4,local_3a4,(CMFCControlRenderer *)(pCVar18 + 0x26c0),
                       (wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0x8e;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x91;
            puVar7 = (undefined4 *)
                     MakeResourceID(&local_3a0,L"IDB_OFFICE2007_POPUPMENU_RESIZEBAR_ICON_HV");
            local_8._0_1_ = 0x92;
            CTagManager::ReadToolBarImages
                      (local_3b4,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3ac,(CMFCToolBarImages *)(pCVar18 + 0xf50),(wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0x8e;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x93;
            puVar7 = (undefined4 *)
                     MakeResourceID(&local_3a0,L"IDB_OFFICE2007_POPUPMENU_RESIZEBAR_ICON_HVT");
            local_8._0_1_ = 0x94;
            CTagManager::ReadToolBarImages
                      (local_3b4,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3c0,(CMFCToolBarImages *)(pCVar18 + 0x1068),(wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0x8e;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x95;
            puVar7 = (undefined4 *)
                     MakeResourceID(&local_3a0,L"IDB_OFFICE2007_POPUPMENU_RESIZEBAR_ICON_V");
            local_8._0_1_ = 0x96;
            CTagManager::ReadToolBarImages
                      (local_3b4,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3c4,(CMFCToolBarImages *)(pCVar18 + 0x1180),(wchar_t *)*puVar7);
            FUN_10003460();
            FUN_10003460();
            CTagManager::~CTagManager(local_3b4);
          }
          FUN_10003460();
          local_8._0_1_ = 0x68;
          CTagManager::~CTagManager((CTagManager *)&local_3e4);
        }
        iVar5 = CTagManager::ExcludeTag
                          (local_3ec,L"STATUSBAR",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3b8,0);
        if (iVar5 != 0) {
          CTagManager::CTagManager(local_3b4,local_3b8);
          local_8._0_1_ = 0x97;
          FUN_100037c0();
          local_8._0_1_ = 0x98;
          puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_STATUSBAR_BACK");
          local_8._0_1_ = 0x99;
          CTagManager::ReadControlRenderer
                    (local_3b4,local_3a4,(CMFCControlRenderer *)(pCVar18 + 0x1988),
                     (wchar_t *)*puVar7);
          FUN_10003460();
          local_8._0_1_ = 0x97;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x9a;
          puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_STATUSBAR_BACK_EXT");
          local_8._0_1_ = 0x9b;
          CTagManager::ReadControlRenderer
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3ac,(CMFCControlRenderer *)(pCVar18 + 0x1b00),(wchar_t *)*puVar7);
          FUN_10003460();
          local_8._0_1_ = 0x97;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x9c;
          puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_STATUSBAR_PANEBORDER");
          local_8._0_1_ = 0x9d;
          CTagManager::ReadToolBarImages
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3c0,(CMFCToolBarImages *)(pCVar18 + 0x460),(wchar_t *)*puVar7);
          FUN_10003460();
          local_8._0_1_ = 0x97;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x9e;
          puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_STATUSBAR_SIZEBOX");
          local_8._0_1_ = 0x9f;
          CTagManager::ReadToolBarImages
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3c4,(CMFCToolBarImages *)(pCVar18 + 0x578),(wchar_t *)*puVar7);
          FUN_10003460();
          local_8._0_1_ = 0x97;
          FUN_10003460();
          *(ulong *)(pCVar18 + 0x8fa8) = *(ulong *)(pCVar18 + 0x8f84);
          *(ulong *)(pCVar18 + 0x8fac) = *(ulong *)(pCVar18 + 0x8f8c);
          *(ulong *)(pCVar18 + 0x8fb0) = *(ulong *)(pCVar18 + 0x8f8c);
          FUN_100037c0();
          local_8._0_1_ = 0xa0;
          CTagManager::ReadColor(local_3b4,local_3d0,(ulong *)(pCVar18 + 0x8fa8));
          local_8._0_1_ = 0x97;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0xa1;
          CTagManager::ReadColor
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3d4,(ulong *)(pCVar18 + 0x8fac));
          local_8._0_1_ = 0x97;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0xa2;
          CTagManager::ReadColor
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3f4,(ulong *)(pCVar18 + 0x8fb0));
          FUN_10003460();
          local_8._0_1_ = 0x68;
          CTagManager::~CTagManager(local_3b4);
        }
        iVar5 = CTagManager::ExcludeTag
                          (local_3ec,L"CAPTIONBAR",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3b8,0);
        if (iVar5 != 0) {
          CTagManager::CTagManager(local_3b4,local_3b8);
          local_8._0_1_ = 0xa3;
          FUN_100037c0();
          pCVar16 = local_3fc;
          local_8._0_1_ = 0xa4;
          CTagManager::ReadColor(local_3b4,local_3a4,(ulong *)(local_3fc + 0x1ac));
          local_8._0_1_ = 0xa3;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0xa5;
          CTagManager::ReadColor
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3ac,(ulong *)(pCVar16 + 0x1b0));
          local_8._0_1_ = 0xa3;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0xa6;
          CTagManager::ReadColor
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3c0,(ulong *)(pCVar16 + 0x9040));
          FUN_10003460();
          CTagManager::~CTagManager(local_3b4);
        }
        FUN_10003460();
        local_8._0_1_ = 3;
        CTagManager::~CTagManager(local_3ec);
      }
      pCVar16 = local_3fc;
      if (*(int *)(local_3fc + 0xbc) == -0x1000000) {
        *(undefined4 *)(local_3fc + 0xbc) = *(undefined4 *)(local_3fc + 0xb8);
      }
      this_00 = (CGdiObject *)(local_3fc + 0x104);
      CGdiObject::DeleteObject(this_00);
      CBrush::CreateSolidBrush((CBrush *)this_00,*(ulong *)(pCVar16 + 0xbc));
      pAVar4 = GetGlobalData();
      *(ulong *)(pCVar16 + 0x8fb4) = *(ulong *)(pAVar4 + 0x6c);
      pAVar4 = GetGlobalData();
      *(ulong *)(pCVar16 + 0x8fb8) = *(ulong *)(pAVar4 + 0x20);
      *(undefined4 *)(pCVar16 + 0x8fbc) = *(undefined4 *)(pCVar16 + 0xe8);
      pAVar4 = GetGlobalData();
      *(undefined4 *)(pCVar16 + 0x8fc0) = *(undefined4 *)(pAVar4 + 0x3c);
      iVar5 = CTagManager::ExcludeTag
                        (local_40c,L"EDIT",
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3f0,0);
      if (iVar5 != 0) {
        CTagManager::CTagManager(local_3b4,local_3f0);
        local_8._0_1_ = 0xa7;
        FUN_100037c0();
        local_8._0_1_ = 0xa8;
        CTagManager::ReadColor(local_3b4,local_3a4,(ulong *)(pCVar16 + 0x8fb4));
        local_8._0_1_ = 0xa7;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0xa9;
        CTagManager::ReadColor
                  (local_3b4,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3ac,
                   (ulong *)(pCVar16 + 0x8fbc));
        local_8._0_1_ = 0xa7;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0xaa;
        CTagManager::ReadColor
                  (local_3b4,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3c0,
                   (ulong *)(pCVar16 + 0x8fb8));
        local_8._0_1_ = 0xa7;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0xab;
        CTagManager::ReadColor
                  (local_3b4,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3c4,
                   (ulong *)(pCVar16 + 0x8fc0));
        FUN_10003460();
        local_8._0_1_ = 3;
        CTagManager::~CTagManager(local_3b4);
      }
      pAVar4 = GetGlobalData();
      *(undefined4 *)(pCVar16 + 0x8fc4) = *(undefined4 *)(pAVar4 + 0x6c);
      pAVar4 = GetGlobalData();
      uVar14 = *(ulong *)(pCVar16 + 0xe8);
      pCVar18 = pCVar16 + 0x8ff4;
      *(undefined4 *)(pCVar16 + 0x8fc8) = *(undefined4 *)(pAVar4 + 0x20);
      pCVar1 = pCVar16 + 0x9000;
      *(ulong *)(pCVar16 + 0x8fd0) = uVar14;
      *(ulong *)(pCVar16 + 0x8fcc) = uVar14;
      *(undefined4 *)(pCVar16 + 0x8fdc) = *(undefined4 *)(pCVar16 + 0x8fc4);
      *(ulong *)pCVar1 = uVar14;
      *(ulong *)pCVar18 = uVar14;
      pAVar4 = GetGlobalData();
      *(undefined4 *)(pCVar16 + 0x9004) = *(undefined4 *)(pAVar4 + 0x3c);
      *(undefined4 *)(pCVar16 + 0x8fd4) = *(undefined4 *)(pCVar16 + 0x164);
      *(undefined4 *)(pCVar16 + 0x8fd8) = *(undefined4 *)(pCVar16 + 0x168);
      pAVar4 = GetGlobalData();
      local_3f4 = pCVar16 + 0x8fe0;
      uVar13 = *(undefined4 *)(pAVar4 + 0x1c);
      *(undefined4 *)local_3f4 = uVar13;
      local_58 = pCVar16 + 0x8fe4;
      *(undefined4 *)local_58 = uVar13;
      local_3bc = pCVar16 + 0x8ff8;
      *(undefined4 *)local_3bc = *(undefined4 *)(pCVar16 + 0x194);
      local_3d4 = pCVar16 + 0x8ffc;
      *(undefined4 *)local_3d4 = *(undefined4 *)(pCVar16 + 400);
      local_3dc = pCVar16 + 0x8fec;
      *(undefined4 *)local_3dc = *(undefined4 *)(pCVar16 + 0x19c);
      local_3f8 = pCVar16 + 0x8ff0;
      *(undefined4 *)local_3f8 = *(undefined4 *)(pCVar16 + 0x198);
      iVar5 = CTagManager::ExcludeTag
                        (local_40c,L"COMBO",
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3f0,0);
      if (iVar5 != 0) {
        CTagManager::CTagManager(local_3b4,local_3f0);
        local_8._0_1_ = 0xac;
        FUN_100037c0();
        local_8._0_1_ = 0xad;
        CTagManager::ReadColor(local_3b4,local_3a4,(ulong *)(pCVar16 + 0x8fc4));
        local_8._0_1_ = 0xac;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0xae;
        CTagManager::ReadColor
                  (local_3b4,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3ac,
                   (ulong *)(pCVar16 + 0x8fd0));
        local_8._0_1_ = 0xac;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0xaf;
        CTagManager::ReadColor
                  (local_3b4,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3c0,
                   (ulong *)(pCVar16 + 0x8fc8));
        local_8._0_1_ = 0xac;
        FUN_10003460();
        *(undefined4 *)(pCVar16 + 0x8fcc) = *(undefined4 *)(pCVar16 + 0x8fd0);
        FUN_100037c0();
        local_8._0_1_ = 0xb0;
        CTagManager::ReadColor
                  (local_3b4,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3c4,
                   (ulong *)(pCVar16 + 0x8fcc));
        local_8._0_1_ = 0xac;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0xb1;
        CTagManager::ReadColor(local_3b4,local_3d0,(ulong *)(pCVar16 + 0x9004));
        FUN_10003460();
        FUN_10003140();
        local_8._0_1_ = 0xb2;
        iVar5 = CTagManager::ExcludeTag
                          (local_3b4,L"BUTTON",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3a8,0);
        if (iVar5 != 0) {
          CTagManager::CTagManager((CTagManager *)&local_3c,local_3a8);
          local_8._0_1_ = 0xb3;
          FUN_100037c0();
          local_8._0_1_ = 0xb4;
          CTagManager::ReadColor((CTagManager *)&local_3c,local_3a4,(ulong *)(pCVar16 + 0x8fd4));
          local_8._0_1_ = 0xb3;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0xb5;
          CTagManager::ReadColor
                    ((CTagManager *)&local_3c,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3ac,(ulong *)(pCVar16 + 0x8fd8));
          local_8._0_1_ = 0xb3;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0xb6;
          CTagManager::ReadColor
                    ((CTagManager *)&local_3c,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3c0,(ulong *)(pCVar16 + 0x8fdc));
          local_8._0_1_ = 0xb3;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0xb7;
          puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_COMBOBOX_BTN");
          local_8._0_1_ = 0xb8;
          iVar5 = CTagManager::ReadControlRenderer
                            ((CTagManager *)&local_3c,
                             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_3c4,(CMFCControlRenderer *)(pCVar16 + 0x1f68),(wchar_t *)*puVar7
                            );
          FUN_10003460();
          local_8._0_1_ = 0xb3;
          FUN_10003460();
          pCVar16 = local_3fc;
          if (iVar5 == 0) {
            FUN_100037c0();
            local_8._0_1_ = 0xb9;
            CTagManager::ReadColor((CTagManager *)&local_3c,local_3a4,(ulong *)local_3bc);
            local_8._0_1_ = 0xb3;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0xba;
            CTagManager::ReadColor
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3ac,(ulong *)local_3d4);
            local_8._0_1_ = 0xb3;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0xbb;
            CTagManager::ReadColor
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3c0,(ulong *)local_3f4);
            local_8._0_1_ = 0xb3;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0xbc;
            CTagManager::ReadColor
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3c4,(ulong *)local_58);
            local_8._0_1_ = 0xb3;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0xbd;
            CTagManager::ReadColor((CTagManager *)&local_3c,local_3d0,(ulong *)local_3dc);
            local_8._0_1_ = 0xb3;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0xbe;
            CTagManager::ReadColor
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3d4,(ulong *)local_3f8);
            local_8._0_1_ = 0xb3;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0xbf;
            CTagManager::ReadColor
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3f4,(ulong *)pCVar1);
            local_8._0_1_ = 0xb3;
            FUN_10003460();
            FUN_100037c0();
            pCVar16 = local_3fc;
            local_8._0_1_ = 0xc0;
            CTagManager::ReadColor
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_58,(ulong *)(local_3fc + 0x8fe8));
            local_8._0_1_ = 0xb3;
            FUN_10003460();
            *(ulong *)pCVar18 = *(ulong *)pCVar1;
            FUN_100037c0();
            local_8._0_1_ = 0xc1;
            CTagManager::ReadColor
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3dc,(ulong *)pCVar18);
            FUN_10003460();
          }
          CTagManager::~CTagManager((CTagManager *)&local_3c);
        }
        FUN_10003460();
        local_8._0_1_ = 3;
        CTagManager::~CTagManager(local_3b4);
      }
      local_3e8 = pCVar16 + 0x90f8;
      *(undefined4 *)(pCVar16 + 0x90b8) = *(undefined4 *)(pCVar16 + 0x8fb4);
      *(undefined4 *)(pCVar16 + 0x90bc) = *(undefined4 *)(pCVar16 + 0x8fb8);
      *(undefined4 *)(pCVar16 + 0x90c0) = *(undefined4 *)(pCVar16 + 0x8fbc);
      *(undefined4 *)(pCVar16 + 0x90c4) = *(undefined4 *)(pCVar16 + 0x8fbc);
      *(undefined4 *)(pCVar16 + 0x90c8) = *(undefined4 *)(pCVar16 + 0x8fc0);
      *(undefined4 *)(pCVar16 + 0x90d4) = *(undefined4 *)(pCVar16 + 0x8fdc);
      *(ulong *)local_3e8 = *(ulong *)pCVar1;
      *(ulong *)(pCVar16 + 0x90ec) = *(ulong *)pCVar18;
      *(undefined4 *)(pCVar16 + 0x90cc) = *(undefined4 *)(pCVar16 + 0x8fd4);
      local_418 = pCVar16 + 0x90d8;
      *(undefined4 *)(pCVar16 + 0x90d0) = *(undefined4 *)(pCVar16 + 0x8fd8);
      *(undefined4 *)local_418 = *(undefined4 *)(pCVar16 + 0x8fe0);
      local_410 = pCVar16 + 0x90dc;
      *(undefined4 *)local_410 = *(undefined4 *)(pCVar16 + 0x8fe4);
      pCVar18 = pCVar16 + 0x90f0;
      *(ulong *)pCVar18 = *(ulong *)(pCVar16 + 0x8ff8);
      pCVar1 = pCVar16 + 0x90f4;
      *(ulong *)pCVar1 = *(ulong *)(pCVar16 + 0x8ffc);
      local_414 = pCVar16 + 0x90e4;
      *(undefined4 *)local_414 = *(undefined4 *)(pCVar16 + 0x8fec);
      local_420 = pCVar16 + 0x90e8;
      *(undefined4 *)local_420 = *(undefined4 *)(pCVar16 + 0x8ff0);
      *(ulong *)(pCVar16 + 0x1b4) = *(ulong *)(pCVar16 + 0x160);
      *(ulong *)(pCVar16 + 0x1b8) = *(ulong *)(pCVar16 + 0x160);
      iVar5 = CTagManager::ExcludeTag
                        (local_40c,L"TASK",
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3f0,0);
      if (iVar5 != 0) {
        CTagManager::CTagManager((CTagManager *)&local_3e4,local_3f0);
        local_8._0_1_ = 0xc2;
        FUN_100037c0();
        local_8._0_1_ = 0xc3;
        CTagManager::ReadColor((CTagManager *)&local_3e4,local_3a4,(ulong *)(pCVar16 + 0x1b4));
        local_8._0_1_ = 0xc2;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0xc4;
        CTagManager::ReadColor
                  ((CTagManager *)&local_3e4,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3ac,
                   (ulong *)(pCVar16 + 0x1b8));
        FUN_10003460();
        FUN_10003140();
        local_8._0_1_ = 0xc5;
        iVar5 = CTagManager::ExcludeTag
                          ((CTagManager *)&local_3e4,L"GROUP",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3a8,0);
        if (iVar5 != 0) {
          CTagManager::CTagManager((CTagManager *)&local_3c,local_3a8);
          FUN_10003140();
          local_8._0_1_ = 199;
          iVar5 = CTagManager::ExcludeTag
                            ((CTagManager *)&local_3c,L"NORMAL",
                             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_3b8,0);
          if (iVar5 != 0) {
            CTagManager::CTagManager((CTagManager *)&local_4c,local_3b8);
            FUN_10003140();
            local_8._0_1_ = 0xc9;
            iVar5 = CTagManager::ExcludeTag
                              ((CTagManager *)&local_4c,L"CAPTION",
                               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *
                               )&local_3cc,0);
            if (iVar5 != 0) {
              CTagManager::CTagManager(local_3b4,local_3cc);
              local_8._0_1_ = 0xca;
              FUN_100037c0();
              local_8._0_1_ = 0xcb;
              CTagManager::ReadColor(local_3b4,local_3a4,(ulong *)(pCVar16 + 0x1bc));
              local_8._0_1_ = 0xca;
              FUN_10003460();
              FUN_100037c0();
              local_8._0_1_ = 0xcc;
              CTagManager::ReadColor
                        (local_3b4,
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3ac,(ulong *)(pCVar16 + 0x1c0));
              local_8._0_1_ = 0xca;
              FUN_10003460();
              FUN_100037c0();
              local_8._0_1_ = 0xcd;
              CTagManager::ReadColor
                        (local_3b4,
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3c0,(ulong *)(pCVar16 + 0x9044));
              local_8._0_1_ = 0xca;
              FUN_10003460();
              FUN_100037c0();
              local_8._0_1_ = 0xce;
              CTagManager::ReadColor
                        (local_3b4,
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3c4,(ulong *)(pCVar16 + 0x9048));
              local_8._0_1_ = 0xca;
              FUN_10003460();
              FUN_100037c0();
              local_8._0_1_ = 0xcf;
              CTagManager::ReadColor(local_3b4,local_3d0,(ulong *)(pCVar16 + 0x905c));
              local_8._0_1_ = 0xca;
              FUN_10003460();
              FUN_100037c0();
              local_8._0_1_ = 0xd0;
              CTagManager::ReadColor
                        (local_3b4,
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3d4,(ulong *)(pCVar16 + 0x9060));
              FUN_10003460();
              local_8._0_1_ = 0xc9;
              CTagManager::~CTagManager(local_3b4);
            }
            iVar5 = CTagManager::ExcludeTag
                              ((CTagManager *)&local_4c,L"AREA",
                               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *
                               )&local_3cc,0);
            if (iVar5 != 0) {
              CTagManager::CTagManager(local_3b4,local_3cc);
              local_8._0_1_ = 0xd1;
              FUN_100037c0();
              local_8._0_1_ = 0xd2;
              CTagManager::ReadColor(local_3b4,local_3a4,(ulong *)(pCVar16 + 0x1d0));
              local_8._0_1_ = 0xd1;
              FUN_10003460();
              FUN_100037c0();
              local_8._0_1_ = 0xd3;
              CTagManager::ReadColor
                        (local_3b4,
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3ac,(ulong *)(pCVar16 + 0x1cc));
              FUN_10003460();
              CTagManager::~CTagManager(local_3b4);
            }
            FUN_10003460();
            local_8._0_1_ = 199;
            CTagManager::~CTagManager((CTagManager *)&local_4c);
          }
          iVar5 = CTagManager::ExcludeTag
                            ((CTagManager *)&local_3c,L"SPECIAL",
                             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_3b8,0);
          if (iVar5 != 0) {
            CTagManager::CTagManager((CTagManager *)&local_4c,local_3b8);
            FUN_10003140();
            local_8._0_1_ = 0xd5;
            iVar5 = CTagManager::ExcludeTag
                              ((CTagManager *)&local_4c,L"CAPTION",
                               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *
                               )&local_3cc,0);
            if (iVar5 != 0) {
              CTagManager::CTagManager(local_3b4,local_3cc);
              local_8._0_1_ = 0xd6;
              FUN_100037c0();
              local_8._0_1_ = 0xd7;
              CTagManager::ReadColor(local_3b4,local_3a4,(ulong *)(pCVar16 + 0x1c4));
              local_8._0_1_ = 0xd6;
              FUN_10003460();
              FUN_100037c0();
              local_8._0_1_ = 0xd8;
              CTagManager::ReadColor
                        (local_3b4,
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3ac,(ulong *)(pCVar16 + 0x1c8));
              local_8._0_1_ = 0xd6;
              FUN_10003460();
              FUN_100037c0();
              local_8._0_1_ = 0xd9;
              CTagManager::ReadColor
                        (local_3b4,
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3c0,(ulong *)(pCVar16 + 0x904c));
              local_8._0_1_ = 0xd6;
              FUN_10003460();
              FUN_100037c0();
              local_8._0_1_ = 0xda;
              CTagManager::ReadColor
                        (local_3b4,
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3c4,(ulong *)(pCVar16 + 0x9050));
              local_8._0_1_ = 0xd6;
              FUN_10003460();
              FUN_100037c0();
              local_8._0_1_ = 0xdb;
              CTagManager::ReadColor(local_3b4,local_3d0,(ulong *)(pCVar16 + 0x9054));
              local_8._0_1_ = 0xd6;
              FUN_10003460();
              FUN_100037c0();
              local_8._0_1_ = 0xdc;
              CTagManager::ReadColor
                        (local_3b4,
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3d4,(ulong *)(pCVar16 + 0x9058));
              FUN_10003460();
              local_8._0_1_ = 0xd5;
              CTagManager::~CTagManager(local_3b4);
            }
            iVar5 = CTagManager::ExcludeTag
                              ((CTagManager *)&local_4c,L"AREA",
                               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *
                               )&local_3cc,0);
            if (iVar5 != 0) {
              CTagManager::CTagManager(local_3b4,local_3cc);
              local_8._0_1_ = 0xdd;
              FUN_100037c0();
              local_8._0_1_ = 0xde;
              CTagManager::ReadColor(local_3b4,local_3a4,(ulong *)(pCVar16 + 0x1d8));
              local_8._0_1_ = 0xdd;
              FUN_10003460();
              FUN_100037c0();
              local_8._0_1_ = 0xdf;
              CTagManager::ReadColor
                        (local_3b4,
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3ac,(ulong *)(pCVar16 + 0x1d4));
              FUN_10003460();
              CTagManager::~CTagManager(local_3b4);
            }
            FUN_10003460();
            local_8._0_1_ = 199;
            CTagManager::~CTagManager((CTagManager *)&local_4c);
          }
          FUN_100037c0();
          local_8._0_1_ = 0xe0;
          iVar5 = CTagManager::ReadColor
                            ((CTagManager *)&local_3c,local_3a4,(ulong *)(pCVar16 + 0x1dc));
          local_8 = CONCAT31(local_8._1_3_,199);
          FUN_10003460();
          if (iVar5 != 0) {
            CGdiObject::DeleteObject((CGdiObject *)(pCVar16 + 0x1f0));
            CPen::CreatePen((CPen *)(pCVar16 + 0x1f0),0,1,*(ulong *)(pCVar16 + 0x1dc));
          }
          FUN_10003460();
          local_8._0_1_ = 0xc5;
          CTagManager::~CTagManager((CTagManager *)&local_3c);
        }
        FUN_100037c0();
        local_8._0_1_ = 0xe1;
        puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_TASKPANE_SCROLL_BTN");
        local_8._0_1_ = 0xe2;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)&local_3e4,local_3a4,(CMFCControlRenderer *)(pCVar16 + 0x3570),
                   (wchar_t *)*puVar7);
        FUN_10003460();
        FUN_10003460();
        FUN_10003460();
        local_8._0_1_ = 3;
        CTagManager::~CTagManager((CTagManager *)&local_3e4);
      }
      iVar5 = CTagManager::ExcludeTag
                        (local_40c,L"TABS",
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3f0,0);
      if (iVar5 != 0) {
        CTagManager::CTagManager((CTagManager *)&local_3e4,local_3f0);
        local_8._0_1_ = 0xe3;
        FUN_100037c0();
        local_8._0_1_ = 0xe4;
        CTagManager::ReadColor((CTagManager *)&local_3e4,local_3a4,(ulong *)(pCVar16 + 0x906c));
        local_8._0_1_ = 0xe3;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0xe5;
        CTagManager::ReadColor
                  ((CTagManager *)&local_3e4,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3ac,
                   (ulong *)(pCVar16 + 0x9070));
        FUN_10003460();
        FUN_10003140();
        local_8._0_1_ = 0xe6;
        iVar5 = CTagManager::ExcludeTag
                          ((CTagManager *)&local_3e4,L"3D",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3cc,0);
        if (iVar5 != 0) {
          CTagManager::CTagManager(local_3b4,local_3cc);
          FUN_10003140();
          local_8._0_1_ = 0xe8;
          iVar5 = CTagManager::ExcludeTag
                            (local_3b4,L"BUTTON",
                             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_3a8,0);
          if (iVar5 != 0) {
            puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_TAB_3D");
            local_8._0_1_ = 0xe9;
            local_44 = 0;
            local_40 = 0;
            local_3c = 0;
            local_38 = 0;
            local_54 = 0;
            local_50 = 0;
            local_4c = 0;
            local_48 = 0;
            local_64 = 0;
            local_60 = 0;
            local_5c = 0;
            local_58 = (CMFCVisualManagerOffice2007 *)0x0;
            local_24 = 0;
            local_20 = (wchar_t *)0x0;
            local_1c = 0;
            local_18[0] = (wchar_t *)0x0;
            CMFCControlRendererInfo(*puVar7,&local_24,&local_64,&local_54,&local_44);
            local_8._0_1_ = 0xeb;
            FUN_10003460();
            iVar5 = ParseControlRendererInfo(&local_3a8,local_b4);
            if (iVar5 != 0) {
              pcVar2 = *(code **)(*(int *)(pCVar16 + 0x36e8) + 0xc);
              guard_check_icall(local_b4);
              (*pcVar2)();
              pcVar2 = *(code **)(*(int *)(pCVar16 + 0x3860) + 0xc);
              guard_check_icall(local_b4);
              (*pcVar2)();
            }
            FUN_10100b79();
          }
          FUN_10003460();
          local_8._0_1_ = 0xe6;
          CTagManager::~CTagManager(local_3b4);
        }
        iVar5 = CTagManager::ExcludeTag
                          ((CTagManager *)&local_3e4,L"FLAT",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3cc,0);
        if (iVar5 != 0) {
          CTagManager::CTagManager(local_3b4,local_3cc);
          FUN_10003140();
          local_8._0_1_ = 0xed;
          iVar5 = CTagManager::ExcludeTag
                            (local_3b4,L"BUTTON",
                             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_3a8,0);
          if (iVar5 != 0) {
            puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_TAB_FLAT");
            local_8._0_1_ = 0xee;
            local_24 = 0;
            local_20 = (wchar_t *)0x0;
            local_1c = 0;
            local_18[0] = (wchar_t *)0x0;
            local_44 = 0;
            local_40 = 0;
            local_3c = 0;
            local_38 = 0;
            local_54 = 0;
            local_50 = 0;
            local_4c = 0;
            local_48 = 0;
            local_64 = 0;
            local_60 = 0;
            local_5c = 0;
            local_58 = (CMFCVisualManagerOffice2007 *)0x0;
            CMFCControlRendererInfo(*puVar7,&local_64,&local_54,&local_44,&local_24);
            local_8 = CONCAT31(local_8._1_3_,0xf0);
            FUN_10003460();
            iVar5 = ParseControlRendererInfo(&local_3a8,local_b4);
            if (iVar5 != 0) {
              pcVar2 = *(code **)(*(int *)(pCVar16 + 0x39d8) + 0xc);
              guard_check_icall(local_b4);
              (*pcVar2)();
              pcVar2 = *(code **)(*(int *)(pCVar16 + 0x3b50) + 0xc);
              guard_check_icall(local_b4);
              (*pcVar2)();
            }
            local_8._0_1_ = 0xed;
            FUN_10100b79();
          }
          FUN_100037c0();
          local_8._0_1_ = 0xf1;
          CTagManager::ReadColor(local_3b4,local_3a4,(ulong *)(pCVar16 + 0x9064));
          local_8._0_1_ = 0xed;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0xf2;
          CTagManager::ReadColor
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3ac,(ulong *)(pCVar16 + 0x9068));
          local_8._0_1_ = 0xed;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0xf3;
          iVar5 = CTagManager::ReadColor
                            (local_3b4,
                             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_3c0,(ulong *)&local_3b8);
          local_8 = CONCAT31(local_8._1_3_,0xed);
          FUN_10003460();
          if (iVar5 != 0) {
            CGdiObject::DeleteObject((CGdiObject *)(pCVar16 + 0x8f08));
            CPen::CreatePen((CPen *)(pCVar16 + 0x8f08),0,1,(ulong)local_3b8);
          }
          FUN_100037c0();
          local_8._0_1_ = 0xf4;
          iVar5 = CTagManager::ReadColor(local_3b4,local_3a4,(ulong *)&local_3b8);
          local_8 = CONCAT31(local_8._1_3_,0xed);
          FUN_10003460();
          if (iVar5 != 0) {
            CGdiObject::DeleteObject((CGdiObject *)(pCVar16 + 0x8f10));
            CPen::CreatePen((CPen *)(pCVar16 + 0x8f10),0,1,(ulong)local_3b8);
          }
          FUN_100037c0();
          local_8._0_1_ = 0xf5;
          iVar5 = CTagManager::ReadColor(local_3b4,local_3a4,(ulong *)&local_3b8);
          local_8 = CONCAT31(local_8._1_3_,0xed);
          FUN_10003460();
          if (iVar5 != 0) {
            CGdiObject::DeleteObject((CGdiObject *)(pCVar16 + 0x8f18));
            CPen::CreatePen((CPen *)(pCVar16 + 0x8f18),0,1,(ulong)local_3b8);
          }
          FUN_100037c0();
          local_8._0_1_ = 0xf6;
          iVar5 = CTagManager::ReadColor(local_3b4,local_3a4,(ulong *)&local_3b8);
          local_8._0_1_ = 0xed;
          FUN_10003460();
          if (iVar5 != 0) {
            CGdiObject::DeleteObject((CGdiObject *)(pCVar16 + 0x8f20));
            CPen::CreatePen((CPen *)(pCVar16 + 0x8f20),0,1,(ulong)local_3b8);
          }
          FUN_10003460();
          CTagManager::~CTagManager(local_3b4);
        }
        FUN_10003460();
        local_8._0_1_ = 3;
        CTagManager::~CTagManager((CTagManager *)&local_3e4);
      }
      iVar5 = CTagManager::ExcludeTag
                        (local_40c,L"HEADER",
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3f0,0);
      if (iVar5 != 0) {
        CTagManager::CTagManager((CTagManager *)&local_3e4,local_3f0);
        local_8._0_1_ = 0xf7;
        FUN_100037c0();
        local_8._0_1_ = 0xf8;
        CTagManager::ReadColor((CTagManager *)&local_3e4,local_3a4,(ulong *)(pCVar16 + 0x9008));
        local_8._0_1_ = 0xf7;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0xf9;
        CTagManager::ReadColor
                  ((CTagManager *)&local_3e4,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3ac,
                   (ulong *)(pCVar16 + 0x900c));
        local_8._0_1_ = 0xf7;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0xfa;
        CTagManager::ReadColor
                  ((CTagManager *)&local_3e4,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3c0,
                   (ulong *)(pCVar16 + 0x9010));
        local_8._0_1_ = 0xf7;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0xfb;
        CTagManager::ReadColor
                  ((CTagManager *)&local_3e4,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3c4,
                   (ulong *)(pCVar16 + 0x9014));
        local_8._0_1_ = 0xf7;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0xfc;
        CTagManager::ReadColor((CTagManager *)&local_3e4,local_3d0,(ulong *)(pCVar16 + 0x9018));
        local_8._0_1_ = 0xf7;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0xfd;
        CTagManager::ReadColor
                  ((CTagManager *)&local_3e4,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3d4,
                   (ulong *)(pCVar16 + 0x901c));
        local_8._0_1_ = 0xf7;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0xfe;
        CTagManager::ReadColor
                  ((CTagManager *)&local_3e4,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3f4,
                   (ulong *)(pCVar16 + 0x9020));
        local_8._0_1_ = 0xf7;
        FUN_10003460();
        FUN_100037c0();
        local_8._0_1_ = 0xff;
        CTagManager::ReadColor
                  ((CTagManager *)&local_3e4,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_58,
                   (ulong *)(pCVar16 + 0x9024));
        local_8 = CONCAT31(local_8._1_3_,0xf7);
        FUN_10003460();
        FUN_100037c0();
        local_8 = 0x100;
        CTagManager::ReadColor
                  ((CTagManager *)&local_3e4,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3dc,
                   (ulong *)(pCVar16 + 0x9028));
        local_8 = 0xf7;
        FUN_10003460();
        local_8._0_1_ = 3;
        CTagManager::~CTagManager((CTagManager *)&local_3e4);
      }
      *(undefined4 *)(pCVar16 + 0x9084) = *(undefined4 *)(pCVar16 + 0x8f84);
      *(undefined4 *)(pCVar16 + 37000) = *(undefined4 *)(pCVar16 + 0x8f88);
      *(ulong *)(pCVar16 + 0x908c) = *(ulong *)(pCVar16 + 0x8f8c);
      *(ulong *)(pCVar16 + 0x9090) = *(ulong *)(pCVar16 + 0x8f90);
      *(undefined4 *)(pCVar16 + 0x9094) = *(undefined4 *)(pCVar16 + 0x8f94);
      *(ulong *)(pCVar16 + 0x9098) = *(ulong *)(pCVar16 + 0x8f90);
      *(undefined4 *)(pCVar16 + 0x909c) = *(undefined4 *)(pCVar16 + 0x8f94);
      pAVar4 = GetGlobalData();
      *(undefined4 *)(pCVar16 + 0x90a8) = *(undefined4 *)(pAVar4 + 100);
      pAVar4 = GetGlobalData();
      uVar13 = *(undefined4 *)(pAVar4 + 0x6c);
      *(undefined4 *)(pCVar16 + 0x90b0) = uVar13;
      *(undefined4 *)(pCVar16 + 0x90b4) = uVar13;
      pAVar4 = GetGlobalData();
      *(undefined4 *)(pCVar16 + 0x90ac) = *(undefined4 *)(pAVar4 + 0x1c);
      iVar5 = CTagManager::ExcludeTag
                        (local_40c,L"RIBBON",
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3f0,0);
      if (iVar5 != 0) {
        CTagManager::CTagManager((CTagManager *)&local_3e4,local_3f0);
        local_8 = 0x101;
        FUN_10003140();
        local_8._0_1_ = 2;
        iVar5 = CTagManager::ExcludeTag
                          ((CTagManager *)&local_3e4,L"CATEGORY",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3b8,0);
        if (iVar5 != 0) {
          CTagManager::CTagManager(local_3b4,local_3b8);
          local_8._0_1_ = 3;
          FUN_100037c0();
          local_8._0_1_ = 4;
          puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_RIBBON_CATEGORY_BACK");
          local_8._0_1_ = 5;
          CTagManager::ReadControlRenderer
                    (local_3b4,local_3a4,(CMFCControlRenderer *)(pCVar16 + 0x42a8),
                     (wchar_t *)*puVar7);
          FUN_10003460();
          FUN_10003460();
          FUN_10003140();
          local_8._0_1_ = 6;
          iVar5 = CTagManager::ExcludeTag
                            (local_3b4,L"TAB",
                             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_3a8,0);
          if (iVar5 != 0) {
            CTagManager::CTagManager((CTagManager *)&local_3c,local_3a8);
            local_8._0_1_ = 7;
            FUN_100037c0();
            local_8._0_1_ = 8;
            puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_RIBBON_CATEGORY_TAB");
            local_8._0_1_ = 9;
            CTagManager::ReadControlRenderer
                      ((CTagManager *)&local_3c,local_3a4,(CMFCControlRenderer *)(pCVar16 + 0x4420),
                       (wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 7;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 10;
            CTagManager::ReadColor
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3ac,(ulong *)(pCVar16 + 0x9084));
            local_8._0_1_ = 7;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0xb;
            CTagManager::ReadColor
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3c0,(ulong *)(pCVar16 + 37000));
            local_8._0_1_ = 7;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0xc;
            CTagManager::ReadColor
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3c4,(ulong *)(pCVar16 + 0x908c));
            FUN_10003460();
            local_8._0_1_ = 6;
            CTagManager::~CTagManager((CTagManager *)&local_3c);
          }
          FUN_100037c0();
          local_8._0_1_ = 0xd;
          puVar7 = (undefined4 *)
                   MakeResourceID(&local_3a0,L"IDB_OFFICE2007_RIBBON_CATEGORY_TAB_SEP");
          local_8._0_1_ = 0xe;
          CTagManager::ReadControlRenderer
                    (local_3b4,local_3a4,(CMFCControlRenderer *)(pCVar16 + 0x4598),
                     (wchar_t *)*puVar7);
          FUN_10003460();
          local_8._0_1_ = 6;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0xf;
          puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_RIBBON_BTN_PAGE_L");
          local_8._0_1_ = 0x10;
          CTagManager::ReadControlRenderer
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3ac,(CMFCControlRenderer *)(pCVar16 + 0x4710),(wchar_t *)*puVar7);
          FUN_10003460();
          local_8._0_1_ = 6;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x11;
          puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_RIBBON_BTN_PAGE_R");
          local_8._0_1_ = 0x12;
          CTagManager::ReadControlRenderer
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3c0,(CMFCControlRenderer *)(pCVar16 + 0x4888),(wchar_t *)*puVar7);
          FUN_10003460();
          FUN_10003460();
          FUN_10003460();
          local_8._0_1_ = 2;
          CTagManager::~CTagManager(local_3b4);
        }
        iVar5 = CTagManager::ExcludeTag
                          ((CTagManager *)&local_3e4,L"PANEL",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3b8,0);
        if (iVar5 != 0) {
          CTagManager::CTagManager(local_3b4,local_3b8);
          FUN_10003140();
          local_8._0_1_ = 0x14;
          iVar5 = CTagManager::ExcludeTag
                            (local_3b4,L"BACK",
                             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_3a8,0);
          if (iVar5 != 0) {
            CTagManager::CTagManager((CTagManager *)&local_3c,local_3a8);
            local_8._0_1_ = 0x15;
            FUN_100037c0();
            local_8._0_1_ = 0x16;
            puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_RIBBON_PANEL_BACK_T");
            local_8._0_1_ = 0x17;
            CTagManager::ReadControlRenderer
                      ((CTagManager *)&local_3c,local_3a4,(CMFCControlRenderer *)(pCVar16 + 0x4a00),
                       (wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0x15;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x18;
            puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_RIBBON_PANEL_BACK_B");
            local_8._0_1_ = 0x19;
            CTagManager::ReadControlRenderer
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3ac,(CMFCControlRenderer *)(pCVar16 + 0x4b78),(wchar_t *)*puVar7);
            FUN_10003460();
            FUN_10003460();
            CTagManager::~CTagManager((CTagManager *)&local_3c);
          }
          FUN_10003460();
          FUN_10003140();
          local_8._0_1_ = 0x1a;
          iVar5 = CTagManager::ExcludeTag
                            (local_3b4,L"CAPTION",
                             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_3d8,0);
          if (iVar5 != 0) {
            CTagManager::CTagManager((CTagManager *)&local_3c,local_3d8);
            local_8._0_1_ = 0x1b;
            FUN_100037c0();
            local_8._0_1_ = 0x1c;
            puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_RIBBON_BTN_LAUNCH");
            local_8._0_1_ = 0x1d;
            CTagManager::ReadControlRenderer
                      ((CTagManager *)&local_3c,local_3a4,(CMFCControlRenderer *)(pCVar16 + 0x6a50),
                       (wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0x1b;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x1e;
            puVar7 = (undefined4 *)
                     MakeResourceID(&local_3a0,L"IDB_OFFICE2007_RIBBON_BTN_LAUNCH_ICON");
            local_8._0_1_ = 0x1f;
            CTagManager::ReadToolBarImages
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3ac,(CMFCToolBarImages *)(pCVar16 + 0x15e0),(wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0x1b;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x20;
            CTagManager::ReadColor
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3c0,(ulong *)(pCVar16 + 0x9098));
            local_8._0_1_ = 0x1b;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x21;
            CTagManager::ReadColor
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3c4,(ulong *)(pCVar16 + 0x909c));
            local_8._0_1_ = 0x1b;
            FUN_10003460();
            pAVar4 = GetGlobalData();
            dVar21 = AFX_GLOBAL_DATA::GetRibbonImageScale(pAVar4);
            FUN_10052724(dVar21);
            CTagManager::~CTagManager((CTagManager *)&local_3c);
          }
          local_8._0_1_ = 0x13;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x22;
          puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_RIBBON_PANEL_SEPARATOR")
          ;
          local_8._0_1_ = 0x23;
          CTagManager::ReadToolBarImages
                    (local_3b4,local_3a4,(CMFCToolBarImages *)(pCVar16 + 0x14c8),(wchar_t *)*puVar7)
          ;
          FUN_10003460();
          local_8._0_1_ = 0x13;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x24;
          puVar7 = (undefined4 *)MakeResourceID(&local_3a0,L"IDB_OFFICE2007_RIBBON_PANEL_QAT");
          local_8._0_1_ = 0x25;
          CTagManager::ReadControlRenderer
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3ac,(CMFCControlRenderer *)(pCVar16 + 0x4cf0),(wchar_t *)*puVar7);
          FUN_10003460();
          FUN_10003460();
          FUN_10003140();
          local_8._0_1_ = 0x26;
          iVar5 = CTagManager::ExcludeTag
                            (local_3b4,L"BUTTONS",
                             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_3a8,0);
          if (iVar5 != 0) {
            CTagManager::CTagManager((CTagManager *)&local_3c,local_3a8);
            local_8._0_1_ = 0x27;
            FUN_100037c0();
            local_8._0_1_ = 0x28;
            puVar7 = (undefined4 *)MakeResourceID(&local_48,L"IDB_OFFICE2007_RIBBON_BTN_GROUP_F");
            local_8._0_1_ = 0x29;
            CTagManager::ReadControlRenderer
                      ((CTagManager *)&local_3c,local_3a4,(CMFCControlRenderer *)(pCVar16 + 0x5448),
                       (wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0x27;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x2a;
            puVar7 = (undefined4 *)MakeResourceID(&local_48,L"IDB_OFFICE2007_RIBBON_BTN_GROUP_M");
            local_8._0_1_ = 0x2b;
            CTagManager::ReadControlRenderer
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3ac,(CMFCControlRenderer *)(pCVar16 + 0x55c0),(wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0x27;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x2c;
            puVar7 = (undefined4 *)MakeResourceID(&local_48,L"IDB_OFFICE2007_RIBBON_BTN_GROUP_L");
            local_8._0_1_ = 0x2d;
            CTagManager::ReadControlRenderer
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3c0,(CMFCControlRenderer *)(pCVar16 + 0x5738),(wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0x27;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x2e;
            puVar7 = (undefined4 *)MakeResourceID(&local_48,L"IDB_OFFICE2007_RIBBON_BTN_GROUP_S");
            local_8._0_1_ = 0x2f;
            CTagManager::ReadControlRenderer
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3c4,(CMFCControlRenderer *)(pCVar16 + 0x52d0),(wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0x27;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x30;
            puVar7 = (undefined4 *)
                     MakeResourceID(&local_48,L"IDB_OFFICE2007_RIBBON_BTN_GROUPMENU_F_C");
            local_8._0_1_ = 0x31;
            CTagManager::ReadControlRenderer
                      ((CTagManager *)&local_3c,local_3d0,(CMFCControlRenderer *)(pCVar16 + 0x58b0),
                       (wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0x27;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x32;
            puVar7 = (undefined4 *)
                     MakeResourceID(&local_48,L"IDB_OFFICE2007_RIBBON_BTN_GROUPMENU_F_M");
            local_8._0_1_ = 0x33;
            CTagManager::ReadControlRenderer
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3d4,(CMFCControlRenderer *)(pCVar16 + 0x5a28),(wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0x27;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x34;
            puVar7 = (undefined4 *)
                     MakeResourceID(&local_48,L"IDB_OFFICE2007_RIBBON_BTN_GROUPMENU_M_C");
            local_8._0_1_ = 0x35;
            CTagManager::ReadControlRenderer
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3f4,(CMFCControlRenderer *)(pCVar16 + 0x5ba0),(wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0x27;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x36;
            puVar7 = (undefined4 *)
                     MakeResourceID(&local_48,L"IDB_OFFICE2007_RIBBON_BTN_GROUPMENU_M_M");
            local_8._0_1_ = 0x37;
            CTagManager::ReadControlRenderer
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_58,(CMFCControlRenderer *)(pCVar16 + 0x5d18),(wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0x27;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x38;
            puVar7 = (undefined4 *)
                     MakeResourceID(&local_48,L"IDB_OFFICE2007_RIBBON_BTN_GROUPMENU_L_C");
            local_8._0_1_ = 0x39;
            CTagManager::ReadControlRenderer
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3dc,(CMFCControlRenderer *)(pCVar16 + 0x5e90),(wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0x27;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x3a;
            puVar7 = (undefined4 *)
                     MakeResourceID(&local_48,L"IDB_OFFICE2007_RIBBON_BTN_GROUPMENU_L_M");
            local_8._0_1_ = 0x3b;
            CTagManager::ReadControlRenderer
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3f8,(CMFCControlRenderer *)(pCVar16 + 0x6008),(wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0x27;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x3c;
            puVar7 = (undefined4 *)MakeResourceID(&local_48,L"IDB_OFFICE2007_RIBBON_BTN_NORMAL_S");
            local_8._0_1_ = 0x3d;
            CTagManager::ReadControlRenderer
                      ((CTagManager *)&local_3c,local_400,(CMFCControlRenderer *)(pCVar16 + 0x6180),
                       (wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0x27;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x3e;
            puVar7 = (undefined4 *)MakeResourceID(&local_48,L"IDB_OFFICE2007_RIBBON_BTN_NORMAL_B");
            local_8._0_1_ = 0x3f;
            CTagManager::ReadControlRenderer
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3d8,(CMFCControlRenderer *)(pCVar16 + 0x62f8),(wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0x27;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x40;
            puVar7 = (undefined4 *)MakeResourceID(&local_48,L"IDB_OFFICE2007_RIBBON_BTN_DEFAULT");
            local_8._0_1_ = 0x41;
            CTagManager::ReadControlRenderer
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3c8,(CMFCControlRenderer *)(pCVar16 + 0x6d40),(wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0x27;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x42;
            puVar7 = (undefined4 *)
                     MakeResourceID(&local_48,L"IDB_OFFICE2007_RIBBON_BTN_DEFAULT_ICON");
            local_8._0_1_ = 0x43;
            CTagManager::ReadControlRenderer
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3cc,(CMFCControlRenderer *)(pCVar16 + 0x6eb8),(wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0x27;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x44;
            puVar7 = (undefined4 *)
                     MakeResourceID(&local_48,L"IDB_OFFICE2007_RIBBON_BTN_DEFAULT_IMAGE");
            local_8._0_1_ = 0x45;
            CTagManager::ReadToolBarImages
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3bc,(CMFCToolBarImages *)(pCVar16 + 0x16f8),(wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0x27;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x46;
            puVar7 = (undefined4 *)
                     MakeResourceID(&local_48,L"IDB_OFFICE2007_RIBBON_BTN_DEFAULT_QAT");
            local_8._0_1_ = 0x47;
            CTagManager::ReadControlRenderer
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3a0,(CMFCControlRenderer *)(pCVar16 + 0x71a8),(wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0x27;
            FUN_10003460();
            if (*(int *)(pCVar16 + 0x723c) == 0) {
              FUN_100037c0();
              local_8._0_1_ = 0x48;
              puVar7 = (undefined4 *)
                       MakeResourceID(&local_48,L"IDB_OFFICE2007_RIBBON_BTN_DEFAULT_QAT_ICON");
              local_8._0_1_ = 0x49;
              CTagManager::ReadControlRenderer
                        ((CTagManager *)&local_3c,
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3a0,(CMFCControlRenderer *)(pCVar16 + 0x7030),(wchar_t *)*puVar7);
              FUN_10003460();
              local_8._0_1_ = 0x27;
              FUN_10003460();
            }
            FUN_100037c0();
            local_8._0_1_ = 0x4a;
            puVar7 = (undefined4 *)MakeResourceID(&local_48,L"IDB_OFFICE2007_RIBBON_BTN_MENU_H_C");
            local_8._0_1_ = 0x4b;
            CTagManager::ReadControlRenderer
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3a0,(CMFCControlRenderer *)(pCVar16 + 0x6470),(wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0x27;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x4c;
            puVar7 = (undefined4 *)MakeResourceID(&local_48,L"IDB_OFFICE2007_RIBBON_BTN_MENU_H_M");
            local_8._0_1_ = 0x4d;
            CTagManager::ReadControlRenderer
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3bc,(CMFCControlRenderer *)(pCVar16 + 0x65e8),(wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0x27;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x4e;
            puVar7 = (undefined4 *)MakeResourceID(&local_48,L"IDB_OFFICE2007_RIBBON_BTN_MENU_V_C");
            local_8._0_1_ = 0x4f;
            CTagManager::ReadControlRenderer
                      ((CTagManager *)&local_3c,local_3a4,(CMFCControlRenderer *)(pCVar16 + 0x6760),
                       (wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0x27;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x50;
            puVar7 = (undefined4 *)MakeResourceID(&local_48,L"IDB_OFFICE2007_RIBBON_BTN_MENU_V_M");
            local_8._0_1_ = 0x51;
            CTagManager::ReadControlRenderer
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3ac,(CMFCControlRenderer *)(pCVar16 + 0x68d8),(wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0x27;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x52;
            puVar7 = (undefined4 *)MakeResourceID(&local_48,L"IDB_OFFICE2007_RIBBON_BTN_CHECK");
            local_8._0_1_ = 0x53;
            CTagManager::ReadControlRenderer
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3c0,(CMFCControlRenderer *)(pCVar16 + 0x7320),(wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0x27;
            FUN_10003460();
            pAVar4 = GetGlobalData();
            dVar21 = AFX_GLOBAL_DATA::GetRibbonImageScale(pAVar4);
            FUN_10101bae(dVar21);
            FUN_100037c0();
            local_8._0_1_ = 0x54;
            puVar7 = (undefined4 *)MakeResourceID(&local_48,L"IDB_OFFICE2007_RIBBON_BTN_PALETTE_T");
            local_8._0_1_ = 0x55;
            CTagManager::ReadControlRenderer
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3c4,(CMFCControlRenderer *)(pCVar16 + 0x7498),(wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0x27;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x56;
            puVar7 = (undefined4 *)MakeResourceID(&local_48,L"IDB_OFFICE2007_RIBBON_BTN_PALETTE_M");
            local_8._0_1_ = 0x57;
            CTagManager::ReadControlRenderer
                      ((CTagManager *)&local_3c,local_3d0,(CMFCControlRenderer *)(pCVar16 + 0x7610),
                       (wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0x27;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x58;
            puVar7 = (undefined4 *)MakeResourceID(&local_48,L"IDB_OFFICE2007_RIBBON_BTN_PALETTE_B");
            local_8._0_1_ = 0x59;
            CTagManager::ReadControlRenderer
                      ((CTagManager *)&local_3c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3d4,(CMFCControlRenderer *)(pCVar16 + 0x7788),(wchar_t *)*puVar7);
            FUN_10003460();
            FUN_10003460();
            CTagManager::~CTagManager((CTagManager *)&local_3c);
          }
          FUN_10003460();
          FUN_10003140();
          local_8._0_1_ = 0x5a;
          iVar5 = CTagManager::ExcludeTag
                            (local_3b4,L"EDIT",
                             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_3d8,0);
          if (iVar5 != 0) {
            CTagManager::CTagManager((CTagManager *)&local_5c,local_3d8);
            local_8._0_1_ = 0x5b;
            FUN_100037c0();
            local_8._0_1_ = 0x5c;
            CTagManager::ReadColor
                      ((CTagManager *)&local_5c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3a0,(ulong *)(pCVar16 + 0x90a8));
            local_8._0_1_ = 0x5b;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x5d;
            CTagManager::ReadColor
                      ((CTagManager *)&local_5c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3bc,(ulong *)(pCVar16 + 0x90b0));
            local_8._0_1_ = 0x5b;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x5e;
            CTagManager::ReadColor((CTagManager *)&local_5c,local_3a4,(ulong *)(pCVar16 + 0x90ac));
            local_8._0_1_ = 0x5b;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x5f;
            CTagManager::ReadColor
                      ((CTagManager *)&local_5c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3ac,(ulong *)(pCVar16 + 0x90b4));
            local_8._0_1_ = 0x5b;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x60;
            CTagManager::ReadColor
                      ((CTagManager *)&local_5c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3c0,(ulong *)(pCVar16 + 0x90b8));
            local_8._0_1_ = 0x5b;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x61;
            CTagManager::ReadColor
                      ((CTagManager *)&local_5c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3c4,(ulong *)(pCVar16 + 0x90c0));
            local_8._0_1_ = 0x5b;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0x62;
            CTagManager::ReadColor((CTagManager *)&local_5c,local_3d0,(ulong *)(pCVar16 + 0x90bc));
            local_8._0_1_ = 0x5b;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 99;
            CTagManager::ReadColor
                      ((CTagManager *)&local_5c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3d4,(ulong *)(pCVar16 + 0x90c4));
            local_8._0_1_ = 0x5b;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 100;
            CTagManager::ReadColor
                      ((CTagManager *)&local_5c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3f4,(ulong *)(pCVar16 + 0x90c8));
            FUN_10003460();
            FUN_10003140();
            local_8._0_1_ = 0x65;
            iVar5 = CTagManager::ExcludeTag
                              ((CTagManager *)&local_5c,L"BUTTON",
                               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *
                               )&local_3a8,0);
            if (iVar5 != 0) {
              CTagManager::CTagManager((CTagManager *)&local_3c,local_3a8);
              local_8._0_1_ = 0x66;
              FUN_100037c0();
              local_8._0_1_ = 0x67;
              CTagManager::ReadColor
                        ((CTagManager *)&local_3c,
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3a0,(ulong *)(pCVar16 + 0x90cc));
              local_8._0_1_ = 0x66;
              FUN_10003460();
              FUN_100037c0();
              local_8._0_1_ = 0x68;
              CTagManager::ReadColor
                        ((CTagManager *)&local_3c,
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3bc,(ulong *)(pCVar16 + 0x90d0));
              local_8._0_1_ = 0x66;
              FUN_10003460();
              FUN_100037c0();
              local_8._0_1_ = 0x69;
              CTagManager::ReadColor((CTagManager *)&local_3c,local_3a4,(ulong *)(pCVar16 + 0x90d4))
              ;
              local_8._0_1_ = 0x66;
              FUN_10003460();
              FUN_100037c0();
              local_8._0_1_ = 0x6a;
              puVar7 = (undefined4 *)MakeResourceID(&local_48,L"IDB_OFFICE2007_COMBOBOX_BTN");
              local_8._0_1_ = 0x6b;
              iVar5 = CTagManager::ReadControlRenderer
                                ((CTagManager *)&local_3c,
                                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                  *)&local_3ac,(CMFCControlRenderer *)(pCVar16 + 0x8928),
                                 (wchar_t *)*puVar7);
              FUN_10003460();
              local_8._0_1_ = 0x66;
              FUN_10003460();
              pCVar16 = local_3fc;
              if (iVar5 == 0) {
                FUN_100037c0();
                local_8._0_1_ = 0x6c;
                CTagManager::ReadColor
                          ((CTagManager *)&local_3c,
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3a0,(ulong *)pCVar18);
                local_8._0_1_ = 0x66;
                FUN_10003460();
                FUN_100037c0();
                local_8._0_1_ = 0x6d;
                CTagManager::ReadColor
                          ((CTagManager *)&local_3c,
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3bc,(ulong *)pCVar1);
                local_8._0_1_ = 0x66;
                FUN_10003460();
                FUN_100037c0();
                local_8._0_1_ = 0x6e;
                CTagManager::ReadColor((CTagManager *)&local_3c,local_3a4,(ulong *)local_418);
                local_8._0_1_ = 0x66;
                FUN_10003460();
                FUN_100037c0();
                local_8._0_1_ = 0x6f;
                CTagManager::ReadColor
                          ((CTagManager *)&local_3c,
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3ac,(ulong *)local_410);
                local_8._0_1_ = 0x66;
                FUN_10003460();
                FUN_100037c0();
                local_8._0_1_ = 0x70;
                CTagManager::ReadColor
                          ((CTagManager *)&local_3c,
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3c0,(ulong *)local_414);
                local_8._0_1_ = 0x66;
                FUN_10003460();
                FUN_100037c0();
                local_8._0_1_ = 0x71;
                CTagManager::ReadColor
                          ((CTagManager *)&local_3c,
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3c4,(ulong *)local_420);
                local_8._0_1_ = 0x66;
                FUN_10003460();
                FUN_100037c0();
                pCVar1 = local_3e8;
                local_8._0_1_ = 0x72;
                CTagManager::ReadColor((CTagManager *)&local_3c,local_3d0,(ulong *)local_3e8);
                local_8._0_1_ = 0x66;
                FUN_10003460();
                FUN_100037c0();
                pCVar16 = local_3fc;
                local_8._0_1_ = 0x73;
                CTagManager::ReadColor
                          ((CTagManager *)&local_3c,
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3d4,(ulong *)(local_3fc + 0x90e0));
                local_8._0_1_ = 0x66;
                FUN_10003460();
                pCVar18 = pCVar16 + 0x90ec;
                *(ulong *)pCVar18 = *(ulong *)pCVar1;
                FUN_100037c0();
                local_8._0_1_ = 0x74;
                CTagManager::ReadColor
                          ((CTagManager *)&local_3c,
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3f4,(ulong *)pCVar18);
                FUN_10003460();
              }
              CTagManager::~CTagManager((CTagManager *)&local_3c);
            }
            FUN_10003460();
            CTagManager::~CTagManager((CTagManager *)&local_5c);
          }
          local_8._0_1_ = 0x13;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x75;
          CTagManager::ReadColor
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3a0,(ulong *)(pCVar16 + 0x9090));
          local_8._0_1_ = 0x13;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0x76;
          CTagManager::ReadColor
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3bc,(ulong *)(pCVar16 + 0x9094));
          FUN_10003460();
          local_8._0_1_ = 2;
          CTagManager::~CTagManager(local_3b4);
        }
        iVar5 = CTagManager::ExcludeTag
                          ((CTagManager *)&local_3e4,L"CONTEXT",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3b8,0);
        if (iVar5 != 0) {
          CTagManager::CTagManager(local_41c,local_3b8);
          FUN_10003140();
          local_8._0_1_ = 0x78;
          iVar5 = CTagManager::ExcludeTag
                            (local_41c,L"CATEGORY",
                             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_3cc,0);
          if (iVar5 != 0) {
            CTagManager::CTagManager(local_3b4,local_3cc);
            local_8._0_1_ = 0x79;
            CMFCControlRendererInfo::CMFCControlRendererInfo(local_104);
            local_8._0_1_ = 0x7a;
            CMFCControlRendererInfo::CMFCControlRendererInfo(local_154);
            local_8._0_1_ = 0x7b;
            CMFCControlRendererInfo::CMFCControlRendererInfo(local_1a4);
            local_8._0_1_ = 0x7c;
            CMFCControlRendererInfo::CMFCControlRendererInfo(local_b4);
            local_3c4 = *(ulong *)(pCVar16 + 0x9084);
            local_3c0 = *(ulong *)(pCVar16 + 37000);
            local_8._0_1_ = 0x7d;
            local_3ac = local_3c4;
            FUN_100037c0();
            local_8._0_1_ = 0x7e;
            CTagManager::ReadControlRendererInfo
                      (local_3b4,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3a0,local_104);
            FUN_10003460();
            FUN_10003140();
            local_8._0_1_ = 0x7f;
            iVar5 = CTagManager::ExcludeTag
                              (local_3b4,L"TAB",
                               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *
                               )&local_3d8,0);
            if (iVar5 != 0) {
              CTagManager::CTagManager((CTagManager *)&local_3c,local_3d8);
              local_8._0_1_ = 0x80;
              FUN_100037c0();
              local_8._0_1_ = 0x81;
              CTagManager::ReadControlRendererInfo
                        ((CTagManager *)&local_3c,
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3a0,local_1a4);
              local_8._0_1_ = 0x80;
              FUN_10003460();
              FUN_100037c0();
              local_8._0_1_ = 0x82;
              CTagManager::ReadColor
                        ((CTagManager *)&local_3c,
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3bc,&local_3ac);
              local_8._0_1_ = 0x80;
              FUN_10003460();
              FUN_100037c0();
              local_8._0_1_ = 0x83;
              CTagManager::ReadColor((CTagManager *)&local_3c,local_3a4,&local_3c0);
              FUN_10003460();
              CTagManager::~CTagManager((CTagManager *)&local_3c);
            }
            FUN_10003140();
            local_8._0_1_ = 0x84;
            iVar5 = CTagManager::ExcludeTag
                              (local_3b4,L"CAPTION",
                               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *
                               )&local_3a8,0);
            if (iVar5 != 0) {
              CTagManager::CTagManager((CTagManager *)&local_3c,local_3a8);
              local_8._0_1_ = 0x85;
              FUN_100037c0();
              local_8._0_1_ = 0x86;
              CTagManager::ReadControlRendererInfo
                        ((CTagManager *)&local_3c,
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3a0,local_154);
              local_8._0_1_ = 0x85;
              FUN_10003460();
              FUN_100037c0();
              local_8._0_1_ = 0x87;
              CTagManager::ReadColor
                        ((CTagManager *)&local_3c,
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3bc,&local_3c4);
              FUN_10003460();
              local_8._0_1_ = 0x84;
              CTagManager::~CTagManager((CTagManager *)&local_3c);
            }
            FUN_100037c0();
            local_8._0_1_ = 0x88;
            CTagManager::ReadControlRendererInfo
                      (local_3b4,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3a0,local_b4);
            local_8._0_1_ = 0x84;
            FUN_10003460();
            MakeResourceID(&local_30,L"IDB_OFFICE2007_RIBBON_CONTEXT_R_");
            local_8._0_1_ = 0x89;
            MakeResourceID(&local_2c,L"IDB_OFFICE2007_RIBBON_CONTEXT_O_");
            local_8._0_1_ = 0x8a;
            MakeResourceID(&local_28,L"IDB_OFFICE2007_RIBBON_CONTEXT_Y_");
            local_8._0_1_ = 0x8b;
            MakeResourceID(&local_24,L"IDB_OFFICE2007_RIBBON_CONTEXT_G_");
            local_8._0_1_ = 0x8c;
            MakeResourceID(&local_20,L"IDB_OFFICE2007_RIBBON_CONTEXT_B_");
            local_8._0_1_ = 0x8d;
            MakeResourceID(&local_1c,L"IDB_OFFICE2007_RIBBON_CONTEXT_I_");
            local_8._0_1_ = 0x8e;
            MakeResourceID(local_18,L"IDB_OFFICE2007_RIBBON_CONTEXT_V_");
            pCVar16 = pCVar16 + 0x9438;
            local_8._0_1_ = 0x8f;
            local_3a0 = &local_30;
            local_3bc = (CMFCVisualManagerOffice2007 *)0x7;
            local_3e8 = pCVar16;
            do {
              FUN_10002cc0();
              local_8._0_1_ = 0x90;
              FUN_100030d0();
              local_8._0_1_ = 0x8f;
              FUN_10003460();
              FUN_10002cc0();
              local_8._0_1_ = 0x91;
              FUN_100030d0();
              local_8._0_1_ = 0x8f;
              FUN_10003460();
              FUN_10002cc0();
              local_8._0_1_ = 0x92;
              FUN_100030d0();
              local_8._0_1_ = 0x8f;
              FUN_10003460();
              FUN_10002cc0();
              local_8._0_1_ = 0x93;
              FUN_100030d0();
              local_8._0_1_ = 0x8f;
              FUN_10003460();
              pcVar2 = *(code **)(*(ulong *)(pCVar16 + 0x178) + 0xc);
              guard_check_icall(local_b4);
              (*pcVar2)();
              pcVar2 = *(code **)(*(ulong *)(pCVar16 + -0x2f0) + 0xc);
              guard_check_icall(local_154);
              (*pcVar2)();
              pcVar2 = *(code **)(*(ulong *)pCVar16 + 0xc);
              guard_check_icall(local_1a4,0);
              (*pcVar2)();
              pcVar2 = *(code **)(*(ulong *)(pCVar16 + -0x178) + 0xc);
              guard_check_icall(local_104,0);
              (*pcVar2)();
              *(ulong *)(pCVar16 + 0x2f4) = local_3ac;
              local_3a0 = local_3a0 + 1;
              *(ulong *)(pCVar16 + 0x2f8) = local_3c0;
              *(ulong *)(pCVar16 + 0x2f0) = local_3c4;
              pCVar16 = pCVar16 + 0x648;
              local_3bc = local_3bc + -1;
            } while (local_3bc != (CMFCVisualManagerOffice2007 *)0x0);
            local_8._0_1_ = 0x84;
            _eh_vector_destructor_iterator_(&local_30,4,7,FUN_10003170);
            FUN_10003460();
            FUN_10003460();
            FUN_10100b79();
            FUN_10100b79();
            FUN_10100b79();
            FUN_10100b79();
            CTagManager::~CTagManager(local_3b4);
            pCVar16 = local_3fc;
          }
          FUN_10003140();
          local_8._0_1_ = 0x94;
          iVar5 = CTagManager::ExcludeTag
                            (local_41c,L"PANEL",
                             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_3c8,0);
          if (iVar5 != 0) {
            CTagManager::CTagManager(local_3b4,local_3c8);
            FUN_10003140();
            local_8._0_1_ = 0x96;
            iVar5 = CTagManager::ExcludeTag
                              (local_3b4,L"BACK",
                               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *
                               )&local_3d8,0);
            if (iVar5 != 0) {
              CTagManager::CTagManager((CTagManager *)&local_3c,local_3d8);
              local_8._0_1_ = 0x97;
              FUN_100037c0();
              local_8._0_1_ = 0x98;
              puVar7 = (undefined4 *)
                       MakeResourceID(&local_3e8,L"IDB_OFFICE2007_RIBBON_CONTEXT_PANEL_BACK_T");
              local_8._0_1_ = 0x99;
              CTagManager::ReadControlRenderer
                        ((CTagManager *)&local_3c,
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3a0,(CMFCControlRenderer *)(pCVar16 + 0x8aa0),(wchar_t *)*puVar7);
              FUN_10003460();
              local_8._0_1_ = 0x97;
              FUN_10003460();
              FUN_100037c0();
              local_8._0_1_ = 0x9a;
              puVar7 = (undefined4 *)
                       MakeResourceID(&local_3e8,L"IDB_OFFICE2007_RIBBON_CONTEXT_PANEL_BACK_B");
              local_8._0_1_ = 0x9b;
              CTagManager::ReadControlRenderer
                        ((CTagManager *)&local_3c,
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3bc,(CMFCControlRenderer *)(pCVar16 + 0x8c18),(wchar_t *)*puVar7);
              FUN_10003460();
              FUN_10003460();
              CTagManager::~CTagManager((CTagManager *)&local_3c);
            }
            FUN_10003140();
            local_8._0_1_ = 0x9c;
            iVar5 = CTagManager::ExcludeTag
                              (local_3b4,L"CAPTION",
                               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *
                               )&local_3a8,0);
            if (iVar5 != 0) {
              CTagManager::CTagManager((CTagManager *)&local_3c,local_3a8);
              local_8._0_1_ = 0x9d;
              FUN_100037c0();
              local_8._0_1_ = 0x9e;
              CTagManager::ReadColor
                        ((CTagManager *)&local_3c,
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3a0,(ulong *)(pCVar16 + 0x9104));
              local_8._0_1_ = 0x9d;
              FUN_10003460();
              FUN_100037c0();
              local_8._0_1_ = 0x9f;
              CTagManager::ReadColor
                        ((CTagManager *)&local_3c,
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3bc,(ulong *)(pCVar16 + 0x9108));
              FUN_10003460();
              local_8._0_1_ = 0x9c;
              CTagManager::~CTagManager((CTagManager *)&local_3c);
            }
            FUN_100037c0();
            local_8._0_1_ = 0xa0;
            CTagManager::ReadColor
                      (local_3b4,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3a0,(ulong *)(pCVar16 + 0x90fc));
            local_8._0_1_ = 0x9c;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0xa1;
            CTagManager::ReadColor
                      (local_3b4,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3bc,(ulong *)(pCVar16 + 0x9100));
            FUN_10003460();
            FUN_10003460();
            FUN_10003460();
            local_8._0_1_ = 0x94;
            CTagManager::~CTagManager(local_3b4);
          }
          FUN_100037c0();
          local_8._0_1_ = 0xa2;
          puVar7 = (undefined4 *)
                   MakeResourceID(&local_3e8,L"IDB_OFFICE2007_RIBBON_CONTEXT_SEPARATOR");
          local_8._0_1_ = 0xa3;
          CTagManager::ReadControlRenderer
                    (local_41c,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3a0,(CMFCControlRenderer *)(pCVar16 + 0x8d90),(wchar_t *)*puVar7);
          FUN_10003460();
          FUN_10003460();
          FUN_10003460();
          FUN_10003460();
          local_8._0_1_ = 2;
          CTagManager::~CTagManager(local_41c);
        }
        FUN_100037c0();
        local_8._0_1_ = 0xa4;
        puVar7 = (undefined4 *)MakeResourceID(&local_3e8,L"IDB_OFFICE2007_RIBBON_BTN_MAIN");
        local_8._0_1_ = 0xa5;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)&local_3e4,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3a0,
                   (CMFCControlRenderer *)(pCVar16 + 0x6bc8),(wchar_t *)*puVar7);
        FUN_10003460();
        local_8 = CONCAT31(local_8._1_3_,2);
        FUN_10003460();
        if (*(int *)(pCVar16 + 0x6c5c) != 0) {
          pAVar4 = GetGlobalData();
          dVar21 = AFX_GLOBAL_DATA::GetRibbonImageScale(pAVar4);
          FUN_10101bae(dVar21);
        }
        iVar5 = CTagManager::ExcludeTag
                          ((CTagManager *)&local_3e4,L"MAIN",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3b8,0);
        if (iVar5 != 0) {
          CTagManager::CTagManager(local_3b4,local_3b8);
          local_8._0_1_ = 0xa6;
          FUN_100037c0();
          local_8._0_1_ = 0xa7;
          puVar7 = (undefined4 *)MakeResourceID(&local_3e8,L"IDB_OFFICE2007_RIBBON_PANEL_MAIN");
          local_8._0_1_ = 0xa8;
          CTagManager::ReadControlRenderer
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3a0,(CMFCControlRenderer *)(pCVar16 + 0x4e68),(wchar_t *)*puVar7);
          FUN_10003460();
          local_8._0_1_ = 0xa6;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0xa9;
          puVar7 = (undefined4 *)
                   MakeResourceID(&local_3e8,L"IDB_OFFICE2007_RIBBON_PANEL_MAIN_BORDER");
          local_8._0_1_ = 0xaa;
          CTagManager::ReadControlRenderer
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3bc,(CMFCControlRenderer *)(pCVar16 + 0x4fe0),(wchar_t *)*puVar7);
          FUN_10003460();
          local_8._0_1_ = 0xa6;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0xab;
          puVar7 = (undefined4 *)MakeResourceID(&local_3e8,L"IDB_OFFICE2007_RIBBON_BTN_PANEL_MAIN");
          local_8._0_1_ = 0xac;
          CTagManager::ReadControlRenderer
                    (local_3b4,local_3a4,(CMFCControlRenderer *)(pCVar16 + 0x5158),
                     (wchar_t *)*puVar7);
          FUN_10003460();
          FUN_10003460();
          local_8 = CONCAT31(local_8._1_3_,2);
          CTagManager::~CTagManager(local_3b4);
        }
        iVar5 = CTagManager::ExcludeTag
                          ((CTagManager *)&local_3e4,L"CAPTION",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3b8,0);
        if (iVar5 != 0) {
          CTagManager::CTagManager(local_3b4,local_3b8);
          local_8._0_1_ = 0xad;
          FUN_100037c0();
          local_8._0_1_ = 0xae;
          puVar7 = (undefined4 *)MakeResourceID(&local_3e8,L"IDB_OFFICE2007_RIBBON_CAPTION_QA");
          local_8._0_1_ = 0xaf;
          CTagManager::ReadControlRenderer
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3a0,(CMFCControlRenderer *)(pCVar16 + 0x3fb8),(wchar_t *)*puVar7);
          FUN_10003460();
          local_8._0_1_ = 0xad;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0xb0;
          puVar7 = (undefined4 *)
                   MakeResourceID(&local_3e8,L"IDB_OFFICE2007_RIBBON_CAPTION_QA_GLASS");
          local_8._0_1_ = 0xb1;
          CTagManager::ReadControlRenderer
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3bc,(CMFCControlRenderer *)(pCVar16 + 0x4130),(wchar_t *)*puVar7);
          FUN_10003460();
          FUN_10003460();
          local_8 = CONCAT31(local_8._1_3_,2);
          CTagManager::~CTagManager(local_3b4);
        }
        iVar5 = CTagManager::ExcludeTag
                          ((CTagManager *)&local_3e4,L"STATUS",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3b8,0);
        if (iVar5 != 0) {
          CTagManager::CTagManager((CTagManager *)&local_3c,local_3b8);
          local_8._0_1_ = 0xb2;
          FUN_100037c0();
          local_8._0_1_ = 0xb3;
          puVar7 = (undefined4 *)MakeResourceID(&local_3e8,L"IDB_OFFICE2007_RIBBON_BTN_STATUS_PANE")
          ;
          local_8._0_1_ = 0xb4;
          CTagManager::ReadControlRenderer
                    ((CTagManager *)&local_3c,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3a0,(CMFCControlRenderer *)(pCVar16 + 0x7900),(wchar_t *)*puVar7);
          FUN_10003460();
          FUN_10003460();
          FUN_10003140();
          local_8._0_1_ = 0xb5;
          iVar5 = CTagManager::ExcludeTag
                            ((CTagManager *)&local_3c,L"SLIDER",
                             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_3d8,0);
          if (iVar5 != 0) {
            CTagManager::CTagManager(local_3b4,local_3d8);
            local_8._0_1_ = 0xb6;
            FUN_100037c0();
            local_8._0_1_ = 0xb7;
            puVar7 = (undefined4 *)MakeResourceID(&local_3e8,L"IDB_OFFICE2007_RIBBON_SLIDER_THUMB");
            local_8._0_1_ = 0xb8;
            CTagManager::ReadControlRenderer
                      (local_3b4,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3a0,(CMFCControlRenderer *)(pCVar16 + 0x7a78),(wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0xb6;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0xb9;
            puVar7 = (undefined4 *)
                     MakeResourceID(&local_3e8,L"IDB_OFFICE2007_RIBBON_SLIDER_BTN_PLUS");
            pCVar16 = local_3fc;
            local_8._0_1_ = 0xba;
            CTagManager::ReadControlRenderer
                      (local_3b4,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3bc,(CMFCControlRenderer *)(local_3fc + 0x7bf0),(wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0xb6;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0xbb;
            puVar7 = (undefined4 *)
                     MakeResourceID(&local_3e8,L"IDB_OFFICE2007_RIBBON_SLIDER_BTN_MINUS");
            local_8._0_1_ = 0xbc;
            CTagManager::ReadControlRenderer
                      (local_3b4,local_3a4,(CMFCControlRenderer *)(pCVar16 + 0x7d68),
                       (wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0xb6;
            FUN_10003460();
            pAVar4 = GetGlobalData();
            dVar21 = AFX_GLOBAL_DATA::GetRibbonImageScale(pAVar4);
            FUN_10101bae(dVar21);
            pAVar4 = GetGlobalData();
            dVar21 = AFX_GLOBAL_DATA::GetRibbonImageScale(pAVar4);
            FUN_10101bae(dVar21);
            pAVar4 = GetGlobalData();
            dVar21 = AFX_GLOBAL_DATA::GetRibbonImageScale(pAVar4);
            FUN_10101bae(dVar21);
            CTagManager::~CTagManager(local_3b4);
            pCVar16 = local_3fc;
          }
          FUN_10003140();
          local_8._0_1_ = 0xbd;
          iVar5 = CTagManager::ExcludeTag
                            ((CTagManager *)&local_3c,L"PROGRESS",
                             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_3a8,0);
          if (iVar5 != 0) {
            CTagManager::CTagManager(local_3b4,local_3a8);
            local_8._0_1_ = 0xbe;
            FUN_100037c0();
            local_8._0_1_ = 0xbf;
            puVar7 = (undefined4 *)MakeResourceID(&local_3e8,L"IDB_OFFICE2007_RIBBON_PROGRESS_BACK")
            ;
            local_8._0_1_ = 0xc0;
            CTagManager::ReadControlRenderer
                      (local_3b4,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3a0,(CMFCControlRenderer *)(pCVar16 + 0x7ee0),(wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0xbe;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0xc1;
            puVar7 = (undefined4 *)
                     MakeResourceID(&local_3e8,L"IDB_OFFICE2007_RIBBON_PROGRESS_NORMAL");
            local_8._0_1_ = 0xc2;
            CTagManager::ReadControlRenderer
                      (local_3b4,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3bc,(CMFCControlRenderer *)(pCVar16 + 0x8058),(wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0xbe;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0xc3;
            puVar7 = (undefined4 *)
                     MakeResourceID(&local_3e8,L"IDB_OFFICE2007_RIBBON_PROGRESS_NORMAL_EXT");
            local_8._0_1_ = 0xc4;
            CTagManager::ReadControlRenderer
                      (local_3b4,local_3a4,(CMFCControlRenderer *)(pCVar16 + 0x81d0),
                       (wchar_t *)*puVar7);
            FUN_10003460();
            local_8._0_1_ = 0xbe;
            FUN_10003460();
            FUN_100037c0();
            local_8._0_1_ = 0xc5;
            puVar7 = (undefined4 *)
                     MakeResourceID(&local_3e8,L"IDB_OFFICE2007_RIBBON_PROGRESS_INFINITY");
            local_8._0_1_ = 0xc6;
            CTagManager::ReadControlRenderer
                      (local_3b4,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_3ac,(CMFCControlRenderer *)(pCVar16 + 0x8348),(wchar_t *)*puVar7);
            FUN_10003460();
            FUN_10003460();
            CTagManager::~CTagManager(local_3b4);
          }
          FUN_10003460();
          FUN_10003460();
          local_8 = CONCAT31(local_8._1_3_,2);
          CTagManager::~CTagManager((CTagManager *)&local_3c);
        }
        iVar5 = CTagManager::ExcludeTag
                          ((CTagManager *)&local_3e4,L"BORDERS",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3b8,0);
        if (iVar5 != 0) {
          CTagManager::CTagManager(local_3b4,local_3b8);
          local_8._0_1_ = 199;
          FUN_100037c0();
          local_8._0_1_ = 200;
          puVar7 = (undefined4 *)MakeResourceID(&local_3e8,L"IDB_OFFICE2007_RIBBON_BORDER_QAT");
          local_8._0_1_ = 0xc9;
          CTagManager::ReadControlRenderer
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3a0,(CMFCControlRenderer *)(pCVar16 + 0x84c0),(wchar_t *)*puVar7);
          FUN_10003460();
          local_8._0_1_ = 199;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0xca;
          puVar7 = (undefined4 *)MakeResourceID(&local_3e8,L"IDB_OFFICE2007_RIBBON_BORDER_FLOATY");
          local_8._0_1_ = 0xcb;
          CTagManager::ReadControlRenderer
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3bc,(CMFCControlRenderer *)(pCVar16 + 0x8638),(wchar_t *)*puVar7);
          FUN_10003460();
          FUN_10003460();
          local_8 = CONCAT31(local_8._1_3_,2);
          CTagManager::~CTagManager(local_3b4);
        }
        iVar5 = CTagManager::ExcludeTag
                          ((CTagManager *)&local_3e4,L"KEYTIP",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3b8,0);
        if (iVar5 != 0) {
          CTagManager::CTagManager(local_3b4,local_3b8);
          local_8._0_1_ = 0xcc;
          FUN_100037c0();
          local_8._0_1_ = 0xcd;
          puVar7 = (undefined4 *)MakeResourceID(&local_3e8,L"IDB_OFFICE2007_RIBBON_KEYTIP_BACK");
          local_8._0_1_ = 0xce;
          CTagManager::ReadControlRenderer
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3a0,(CMFCControlRenderer *)(pCVar16 + 0x87b0),(wchar_t *)*puVar7);
          FUN_10003460();
          local_8._0_1_ = 0xcc;
          FUN_10003460();
          FUN_100037c0();
          pCVar18 = pCVar16 + 0x90a0;
          local_8._0_1_ = 0xcf;
          CTagManager::ReadColor
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3bc,(ulong *)pCVar18);
          local_8 = CONCAT31(local_8._1_3_,0xcc);
          FUN_10003460();
          local_3bc = (CMFCVisualManagerOffice2007 *)0x0;
          if (*(ulong *)pCVar18 == 0xffffffff) {
            if ((*(int *)(pCVar16 + 0x218) == 0) ||
               (uVar14 = *(ulong *)(pCVar16 + 0xc030), uVar14 == 0xffffffff)) {
              local_3bc = (CMFCVisualManagerOffice2007 *)0x1;
              uVar14 = GetSysColor(0x17);
            }
            *(ulong *)pCVar18 = uVar14;
          }
          FUN_100037c0();
          pCVar1 = pCVar16 + 0x90a4;
          local_8._0_1_ = 0xd0;
          CTagManager::ReadColor
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3a0,(ulong *)pCVar1);
          local_8 = CONCAT31(local_8._1_3_,0xcc);
          FUN_10003460();
          if (*(ulong *)pCVar1 == 0xffffffff) {
            if (local_3bc == (CMFCVisualManagerOffice2007 *)0x0) {
              iVar5 = 0x32;
              pAVar4 = GetGlobalData();
              uVar14 = CDrawingManager::PixelAlpha
                                 (*(ulong *)pCVar18,*(ulong *)(pAVar4 + 0x6c),iVar5);
            }
            else {
              pAVar4 = GetGlobalData();
              uVar14 = *(ulong *)(pAVar4 + 0x38);
            }
            *(ulong *)pCVar1 = uVar14;
          }
          local_8 = CONCAT31(local_8._1_3_,2);
          CTagManager::~CTagManager(local_3b4);
        }
        iVar5 = CTagManager::ExcludeTag
                          ((CTagManager *)&local_3e4,L"HYPERLINK",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3b8,0);
        if (iVar5 != 0) {
          CTagManager::CTagManager(local_3b4,local_3b8);
          local_8._0_1_ = 0xd1;
          FUN_100037c0();
          local_8._0_1_ = 0xd2;
          CTagManager::ReadColor
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3a0,(ulong *)(pCVar16 + 0x9134));
          local_8._0_1_ = 0xd1;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0xd3;
          CTagManager::ReadColor
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3bc,(ulong *)(pCVar16 + 0x9138));
          local_8._0_1_ = 0xd1;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0xd4;
          CTagManager::ReadColor(local_3b4,local_3a4,(ulong *)(pCVar16 + 0x913c));
          local_8._0_1_ = 0xd1;
          FUN_10003460();
          FUN_100037c0();
          local_8 = CONCAT31(local_8._1_3_,0xd5);
          CTagManager::ReadColor
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3ac,(ulong *)(pCVar16 + 0x9140));
          FUN_10003460();
          CTagManager::~CTagManager(local_3b4);
        }
        FUN_10003460();
        local_8._0_1_ = 3;
        local_8._1_3_ = 0;
        CTagManager::~CTagManager((CTagManager *)&local_3e4);
      }
      uVar14 = *(ulong *)(pCVar16 + 0x9040);
      *(ulong *)(pCVar16 + 0x9080) = uVar14;
      pCVar18 = pCVar16 + 0x9074;
      *(ulong *)pCVar18 = uVar14;
      *(ulong *)(pCVar16 + 0x9078) = uVar14;
      *(ulong *)(pCVar16 + 0x907c) = *(ulong *)pCVar18;
      iVar5 = CTagManager::ExcludeTag
                        (local_40c,L"OUTLOOK",
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3f0,0);
      if (iVar5 != 0) {
        CTagManager::CTagManager((CTagManager *)&local_3e4,local_3f0);
        local_8 = 0x1d6;
        FUN_10003140();
        local_8._0_1_ = 0xd7;
        iVar5 = CTagManager::ExcludeTag
                          ((CTagManager *)&local_3e4,L"CAPTION",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3b8,0);
        if (iVar5 != 0) {
          CTagManager::CTagManager(local_3b4,local_3b8);
          local_8._0_1_ = 0xd8;
          FUN_100037c0();
          local_8._0_1_ = 0xd9;
          CTagManager::ReadColor
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3a0,(ulong *)(pCVar16 + 0x9080));
          FUN_10003460();
          local_8._0_1_ = 0xd7;
          CTagManager::~CTagManager(local_3b4);
        }
        iVar5 = CTagManager::ExcludeTag
                          ((CTagManager *)&local_3e4,L"PAGEBUTTON",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3b8,0);
        if (iVar5 != 0) {
          CTagManager::CTagManager(local_3b4,local_3b8);
          local_8._0_1_ = 0xda;
          FUN_100037c0();
          local_8._0_1_ = 0xdb;
          puVar7 = (undefined4 *)MakeResourceID(&local_3e8,L"IDB_OFFICE2007_OUTLOOK_BTN_PAGE");
          local_8._0_1_ = 0xdc;
          CTagManager::ReadControlRenderer
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3a0,(CMFCControlRenderer *)(pCVar16 + 0x3e40),(wchar_t *)*puVar7);
          FUN_10003460();
          local_8._0_1_ = 0xda;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0xdd;
          CTagManager::ReadColor
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3bc,(ulong *)pCVar18);
          local_8._0_1_ = 0xda;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0xde;
          CTagManager::ReadColor(local_3b4,local_3a4,(ulong *)(pCVar16 + 0x9078));
          local_8._0_1_ = 0xda;
          FUN_10003460();
          FUN_100037c0();
          local_8._0_1_ = 0xdf;
          CTagManager::ReadColor
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3ac,(ulong *)(pCVar16 + 0x907c));
          FUN_10003460();
          local_8._0_1_ = 0xd7;
          CTagManager::~CTagManager(local_3b4);
        }
        iVar5 = CTagManager::ExcludeTag
                          ((CTagManager *)&local_3e4,L"BAR",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_3b8,0);
        if (iVar5 != 0) {
          CTagManager::CTagManager(local_3b4,local_3b8);
          local_8._0_1_ = 0xe0;
          FUN_100037c0();
          local_8._0_1_ = 0xe1;
          puVar7 = (undefined4 *)MakeResourceID(&local_3e8,L"IDB_OFFICE2007_OUTLOOK_BAR_BACK");
          local_8._0_1_ = 0xe2;
          CTagManager::ReadControlRenderer
                    (local_3b4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_3a0,(CMFCControlRenderer *)(pCVar16 + 0x3cc8),(wchar_t *)*puVar7);
          FUN_10003460();
          FUN_10003460();
          CTagManager::~CTagManager(local_3b4);
        }
        FUN_10003460();
        local_8._0_1_ = 3;
        local_8._1_3_ = 0;
        CTagManager::~CTagManager((CTagManager *)&local_3e4);
      }
      *(ulong *)(pCVar16 + 0x912c) = *(ulong *)(pCVar16 + 0x160);
      *(ulong *)(pCVar16 + 0x9130) = *(ulong *)(pCVar16 + 0x15c);
      iVar5 = CTagManager::ExcludeTag
                        (local_40c,L"POPUP",
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_3f0,0);
      if (iVar5 != 0) {
        CTagManager::CTagManager(local_3b4,local_3f0);
        local_8 = 0x1e3;
        FUN_100037c0();
        local_8._0_1_ = 0xe4;
        CTagManager::ReadColor
                  (local_3b4,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3a0,
                   (ulong *)(pCVar16 + 0x912c));
        local_8._0_1_ = 0xe3;
        FUN_10003460();
        FUN_100037c0();
        local_8 = CONCAT31(local_8._1_3_,0xe5);
        CTagManager::ReadColor
                  (local_3b4,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3bc,
                   (ulong *)(pCVar16 + 0x9130));
        FUN_10003460();
        local_8._0_1_ = 3;
        local_8._1_3_ = 0;
        CTagManager::~CTagManager(local_3b4);
      }
      if (local_428 != (HINSTANCE__ *)0x0) {
        AfxSetResourceHandle(local_428);
      }
    }
    FUN_10003460();
  }
  CTagManager::~CTagManager(local_40c);
LAB_100a3eef:
  FUN_101490fe();
  return;
}

