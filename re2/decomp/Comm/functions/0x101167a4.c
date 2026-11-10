// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnUpdateSystemColors
// address: 0x101167a4
// body: available
// range: 0x101167a4-0x10117178 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2003::OnUpdateSystemColors(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCVisualManagerOffice2003::OnUpdateSystemColors(CMFCVisualManagerOffice2003 *this)

{
  code *pcVar1;
  undefined8 uVar2;
  CWnd *pCVar3;
  HWND hwnd;
  HTHEME pvVar4;
  int iVar5;
  undefined4 uVar6;
  AFX_GLOBAL_DATA *pAVar7;
  ulong uVar8;
  ulong uVar9;
  COLORREF color;
  HBRUSH pHVar10;
  HPEN pHVar11;
  undefined4 unaff_EBX;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  COLORREF local_18;
  COLORREF local_14;
  COLORREF local_10;
  COLORREF local_c;
  COLORREF local_8;
  
  CMFCBaseVisualManager::UpdateSystemColors((CMFCBaseVisualManager *)this);
  if (DAT_101d3c8c == 0) {
    pCVar3 = AfxGetMainWnd();
    hwnd = (HWND)0x0;
    if (pCVar3 != (CWnd *)0x0) {
      hwnd = *(HWND *)(pCVar3 + 0x20);
    }
    pvVar4 = GetWindowTheme(hwnd);
    if (pvVar4 != (HTHEME)0x0) goto LAB_101167d8;
    iVar5 = -1;
  }
  else {
LAB_101167d8:
    pcVar1 = *(code **)(*(int *)this + 0x28);
    guard_check_icall();
    iVar5 = (*pcVar1)();
  }
  *(int *)(this + 0x158) = iVar5;
  if ((DAT_101d3c94 == 0) && (iVar5 != -1)) {
    *(undefined4 *)(this + 0x158) = 0;
  }
  iVar5 = *(int *)(this + 0x158);
  if (((iVar5 == 1) || (iVar5 == 2)) || (iVar5 == 3)) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  *(undefined4 *)(this + 0x208) = uVar6;
  pcVar1 = *(code **)(*(int *)this + 0x324);
  guard_check_icall();
  (*pcVar1)();
  FUN_10111041();
  pAVar7 = GetGlobalData();
  if (*(int *)(pAVar7 + 0x1ac) < 9) {
LAB_10117092:
    pAVar7 = GetGlobalData();
    *(undefined4 *)(this + 0x1b4) = *(undefined4 *)(pAVar7 + 0x6c);
    pAVar7 = GetGlobalData();
    *(undefined4 *)(this + 0x1b8) = *(undefined4 *)(pAVar7 + 0x6c);
    pAVar7 = GetGlobalData();
    *(undefined4 *)(this + 0x1bc) = *(undefined4 *)(pAVar7 + 0x54);
    pAVar7 = GetGlobalData();
    *(undefined4 *)(this + 0x1c0) = *(undefined4 *)(pAVar7 + 0x54);
    pAVar7 = GetGlobalData();
    *(undefined4 *)(this + 0x1c4) = *(undefined4 *)(pAVar7 + 0x54);
    pAVar7 = GetGlobalData();
    *(undefined4 *)(this + 0x1c8) = *(undefined4 *)(pAVar7 + 0x54);
    pAVar7 = GetGlobalData();
    *(undefined4 *)(this + 0x1cc) = *(undefined4 *)(pAVar7 + 0x6c);
    pAVar7 = GetGlobalData();
    *(undefined4 *)(this + 0x1d0) = *(undefined4 *)(pAVar7 + 0x6c);
    pAVar7 = GetGlobalData();
    *(undefined4 *)(this + 0x1d4) = *(undefined4 *)(pAVar7 + 0x6c);
    pAVar7 = GetGlobalData();
    *(undefined4 *)(this + 0x1d8) = *(undefined4 *)(pAVar7 + 0x6c);
    pAVar7 = GetGlobalData();
    *(undefined4 *)(this + 0x1dc) = *(undefined4 *)(pAVar7 + 0x20);
    pAVar7 = GetGlobalData();
    uVar6 = *(undefined4 *)(pAVar7 + 100);
    *(undefined4 *)(this + 0x168) = uVar6;
    *(undefined4 *)(this + 0x160) = uVar6;
    CGdiObject::DeleteObject((CGdiObject *)(this + 0x1f0));
    pHVar11 = CreatePen(0,1,*(COLORREF *)(this + 0x1dc));
    CMenu::Attach((CMenu *)(this + 0x1f0),(HMENU__ *)pHVar11);
    pAVar7 = GetGlobalData();
    *(undefined4 *)(this + 0x16c) = *(undefined4 *)(pAVar7 + 0x24);
    return;
  }
  pAVar7 = GetGlobalData();
  iVar5 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar7);
  if (iVar5 != 0) goto LAB_10117092;
  pcVar1 = *(code **)(*(int *)this + 0x318);
  guard_check_icall();
  uVar8 = (*pcVar1)();
  iVar5 = *(int *)(this + 0x158);
  if (iVar5 == 2) {
    uVar9 = CDrawingManager::PixelAlpha(uVar8,0x78);
    uVar13 = 3;
    *(ulong *)(this + 0x164) = uVar9;
    uVar12 = 1;
    uVar6 = 0x3d70a3d7;
    uVar15 = 0x3febd70a;
    uVar9 = GetThemeColor(this,*(void **)(this + 4),0xf);
    uVar9 = FUN_1007d63d(uVar8,uVar9,uVar6,uVar15,uVar12,uVar13);
    uVar12 = 2;
    uVar6 = 0;
    uVar15 = 0x3ff00000;
    iVar5 = 5;
LAB_101168ca:
    uVar13 = 1;
    *(ulong *)(this + 0x15c) = uVar9;
    uVar9 = GetThemeColor(this,*(void **)(this + 4),iVar5);
    uVar6 = FUN_1007d63d(uVar8,uVar9,uVar6,uVar15,uVar12,uVar13);
    uVar14 = 1;
    uVar13 = 1;
    uVar15 = 0x47ae147b;
    uVar12 = 0x3ff07ae1;
    *(undefined4 *)(this + 0x168) = uVar6;
    uVar9 = GetThemeColor(this,*(void **)(this + 4),5);
    uVar6 = FUN_1007d63d(uVar8,uVar9,uVar15,uVar12,uVar13,uVar14);
  }
  else {
    uVar15 = 1;
    uVar6 = 2;
    if (iVar5 == 3) {
      uVar12 = 0;
      uVar13 = 0x3fe80000;
      uVar9 = GetThemeColor(this,*(void **)(this + 4),0xf);
      uVar6 = FUN_1007d63d(uVar8,uVar9,uVar12,uVar13,uVar6,uVar15);
      *(undefined4 *)(this + 0x164) = uVar6;
      uVar9 = CDrawingManager::PixelAlpha(uVar8,0x78);
      uVar12 = 1;
      uVar6 = 0xf5c28f5c;
      uVar15 = 0x3fef5c28;
      iVar5 = 0x14;
      goto LAB_101168ca;
    }
    uVar12 = 0x5c28f5c3;
    uVar13 = 0x3fedc28f;
    if (iVar5 == 1) {
      uVar9 = GetThemeColor(this,*(void **)(this + 4),0xf);
      uVar6 = FUN_1007d63d(uVar8,uVar9,uVar12,uVar13,uVar6,uVar15);
      uVar14 = 1;
      uVar13 = 2;
      uVar15 = 0x7ae147ae;
      uVar12 = 0x3fefae14;
      *(undefined4 *)(this + 0x164) = uVar6;
      uVar9 = GetThemeColor(this,*(void **)(this + 4),0x16);
      uVar6 = FUN_1007d63d(uVar8,uVar9,uVar15,uVar12,uVar13,uVar14);
      uVar2 = 0x3ff07ae147ae147b;
      uVar15 = 1;
    }
    else {
      uVar9 = GetThemeColor(this,*(void **)(this + 4),0xf);
      uVar6 = FUN_1007d63d(uVar8,uVar9,uVar12,uVar13,uVar6,uVar15);
      uVar14 = 1;
      uVar13 = 2;
      uVar15 = 0x7ae147ae;
      uVar12 = 0x3fefae14;
      *(undefined4 *)(this + 0x164) = uVar6;
      uVar9 = GetThemeColor(this,*(void **)(this + 4),0x16);
      uVar6 = FUN_1007d63d(uVar8,uVar9,uVar15,uVar12,uVar13,uVar14);
      uVar2 = 0x3ff0000000000000;
      uVar15 = 4;
    }
    uVar14 = 1;
    uVar12 = (undefined4)uVar2;
    uVar13 = (undefined4)((ulonglong)uVar2 >> 0x20);
    *(undefined4 *)(this + 0x15c) = uVar6;
    uVar9 = GetThemeColor(this,*(void **)(this + 4),5);
    uVar6 = FUN_1007d63d(uVar8,uVar9,uVar12,uVar13,uVar14,uVar15);
    *(undefined4 *)(this + 0x168) = uVar6;
  }
  *(undefined4 *)(this + 0x160) = uVar6;
  *(undefined4 *)(this + 0x170) = *(undefined4 *)(this + 0x168);
  uVar9 = CDrawingManager::PixelAlpha(*(ulong *)(this + 0x164),0x62);
  *(ulong *)(this + 0x174) = uVar9;
  if (*(int *)(this + 0x208) == 0) {
    *(undefined4 *)(this + 0x18c) = 0xffffffff;
    *(ulong *)(this + 400) = *(ulong *)(this + 200);
    *(undefined4 *)(this + 0x194) = *(undefined4 *)(this + 0xcc);
    uVar8 = CDrawingManager::PixelAlpha(*(ulong *)(this + 200),0x78);
    *(ulong *)(this + 0x198) = uVar8;
    pAVar7 = GetGlobalData();
    uVar13 = 1;
    uVar12 = 1;
    uVar6 = 0;
    uVar15 = 0x3ff00000;
    *(undefined4 *)(this + 0x178) = *(undefined4 *)(pAVar7 + 0x58);
    pAVar7 = GetGlobalData();
    uVar6 = FUN_1007d63d(*(undefined4 *)(this + 0x178),*(undefined4 *)(pAVar7 + 0x54),uVar6,uVar15,
                         uVar12,uVar13);
    *(undefined4 *)(this + 0x17c) = uVar6;
    uVar8 = CDrawingManager::PixelAlpha(*(ulong *)(this + 0x164),0x4b);
    *(ulong *)(this + 0x180) = uVar8;
    pAVar7 = GetGlobalData();
    *(undefined4 *)(this + 0x184) = *(undefined4 *)(pAVar7 + 100);
    *(undefined4 *)(this + 0x188) = *(undefined4 *)(this + 0x164);
    pAVar7 = GetGlobalData();
    *(undefined4 *)(this + 0x1a8) = *(undefined4 *)(pAVar7 + 0x58);
    pAVar7 = GetGlobalData();
    local_18 = *(COLORREF *)(pAVar7 + 0x58);
    pAVar7 = GetGlobalData();
    *(undefined4 *)(this + 0x1ac) = *(undefined4 *)(pAVar7 + 0x58);
    pAVar7 = GetGlobalData();
    *(undefined4 *)(this + 0x1b0) = *(undefined4 *)(pAVar7 + 0x60);
    goto LAB_10116ddf;
  }
  if (*(int *)(this + 0x158) == 1) {
    local_14 = 0x3d5de4;
    local_c = 0x58c4fa;
    local_10 = 0x58c4fa;
  }
  else {
    ::GetThemeColor(*(HTHEME *)(this + 0x10),1,0,0xeef,&local_c);
    ::GetThemeColor(*(HTHEME *)(this + 0x10),2,0,0xeef,&local_10);
    ::GetThemeColor(*(HTHEME *)(this + 4),0x12,0,0xeed,&local_14);
  }
  uVar6 = FUN_1007d63d(local_c,local_10,0xcccccccd,0x3ff4cccc,1,1);
  *(undefined4 *)(this + 0x18c) = uVar6;
  uVar6 = FUN_1007d63d(local_c,local_14,0xcccccccd,0x3ff8cccc,2,1);
  *(undefined4 *)(this + 400) = uVar6;
  uVar6 = FUN_1007d63d(local_c,local_10,0x47ae147b,0x3ff07ae1,2,1);
  *(undefined4 *)(this + 0x194) = uVar6;
  uVar6 = FUN_1007d63d(local_c,local_14,0x47ae147b,0x3ff07ae1,1,2);
  *(undefined4 *)(this + 0x198) = uVar6;
  CGdiObject::DeleteObject((CGdiObject *)(this + 0x134));
  ::GetThemeColor(*(HTHEME *)(this + 0x10),2,0,0xeee,&local_8);
  color = FUN_1007d63d(local_8,uVar8,0xae147ae1,0x3feae147,1,4);
  pHVar10 = CreateSolidBrush(color);
  CMenu::Attach((CMenu *)(this + 0x134),(HMENU__ *)pHVar10);
  iVar5 = *(int *)(this + 0x158);
  if ((iVar5 == 1) || (iVar5 == 3)) {
    *(undefined4 *)(this + 0x178) = 0x8e3907;
    if (iVar5 == 1) {
      uVar2 = 0x3ff9c28f5c28f5c3;
    }
    else {
      uVar2 = 0x3ff0000000000000;
    }
    uVar6 = FUN_1007d63d(0x8e3907,uVar8,(int)uVar2,(int)((ulonglong)uVar2 >> 0x20),3,1);
    *(undefined4 *)(this + 0x17c) = uVar6;
    ::GetThemeColor(*(HTHEME *)(this + 0x10),1,5,0xeef,&local_8);
  }
  else {
    uVar6 = FUN_1007d63d(local_8,uVar8,0xc28f5c29,0x3fe428f5,1,3);
    *(undefined4 *)(this + 0x178) = uVar6;
    ::GetThemeColor(*(HTHEME *)(this + 0x10),1,5,0xeef,&local_8);
    uVar6 = FUN_1007d63d(local_8,uVar8,0x33333333,0x3ff33333,1,3);
    *(undefined4 *)(this + 0x17c) = uVar6;
  }
  pAVar7 = GetGlobalData();
  *(undefined4 *)(pAVar7 + 0x60) = *(undefined4 *)(this + 0x178);
  if (*(int *)(this + 0x158) == 3) {
LAB_10116c41:
    iVar5 = 0x50;
  }
  else {
    uVar6 = FUN_1007d63d(local_8,uVar8,0x66666666,0x3ff66666,1,3);
    pAVar7 = GetGlobalData();
    *(undefined4 *)(pAVar7 + 0x58) = uVar6;
    if (*(int *)(this + 0x158) == 3) goto LAB_10116c41;
    iVar5 = 0x32;
  }
  uVar9 = CDrawingManager::PixelAlpha(*(ulong *)(this + 0x164),iVar5);
  *(ulong *)(this + 0x180) = uVar9;
  uVar9 = CDrawingManager::PixelAlpha(*(ulong *)(this + 0x168),0x5c);
  *(ulong *)(this + 0x184) = uVar9;
  uVar9 = CDrawingManager::PixelAlpha(*(ulong *)(this + 0x164),0x61);
  *(ulong *)(this + 0x188) = uVar9;
  uVar9 = CDrawingManager::PixelAlpha(*(ulong *)(this + 0x174),0x28);
  *(ulong *)(this + 0x1a8) = uVar9;
  local_18 = CDrawingManager::PixelAlpha(*(ulong *)(this + 0x174),0x51);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(this + 0x1a8);
  uVar8 = CDrawingManager::PixelAlpha(uVar8,0x50);
  *(undefined4 *)(this + 0x1b0) = *(undefined4 *)(this + 0x178);
  uVar13 = 0xeb851eb8;
  uVar14 = 0x3feeb851;
  uVar15 = 0xeb851eb8;
  uVar12 = 0x3feeb851;
  uVar6 = 0x3feeb851;
  *(ulong *)(this + 0xe4) = uVar8;
  *(undefined4 *)(this + 0x1ac) = *(undefined4 *)(this + 0x17c);
  pAVar7 = GetGlobalData();
  uVar8 = CDrawingManager::PixelAlpha
                    (*(ulong *)(pAVar7 + 0x6c),(double)CONCAT44(uVar15,uVar6),
                     (double)CONCAT44(uVar13,uVar12),(double)CONCAT44(unaff_EBX,uVar14));
  *(ulong *)(this + 0xc0) = uVar8;
  CGdiObject::DeleteObject((CGdiObject *)(this + 0x10c));
  pHVar10 = CreateSolidBrush(*(COLORREF *)(this + 0xc0));
  CMenu::Attach((CMenu *)(this + 0x10c),(HMENU__ *)pHVar10);
LAB_10116ddf:
  *(undefined4 *)(this + 0x19c) = *(undefined4 *)(this + 0x194);
  *(undefined4 *)(this + 0x1a0) = *(undefined4 *)(this + 0x194);
  uVar8 = CDrawingManager::PixelAlpha(*(ulong *)(this + 0x198),0x78);
  *(ulong *)(this + 0x1a4) = uVar8;
  CGdiObject::DeleteObject((CGdiObject *)(this + 0x114));
  pHVar10 = CreateSolidBrush(*(COLORREF *)(this + 0x168));
  CMenu::Attach((CMenu *)(this + 0x114),(HMENU__ *)pHVar10);
  CGdiObject::DeleteObject((CGdiObject *)(this + 0x1e8));
  pAVar7 = GetGlobalData();
  pHVar11 = CreatePen(0,1,*(COLORREF *)(pAVar7 + 0x5c));
  CMenu::Attach((CMenu *)(this + 0x1e8),(HMENU__ *)pHVar11);
  CGdiObject::DeleteObject((CGdiObject *)(this + 0x1f8));
  pAVar7 = GetGlobalData();
  pHVar10 = CreateSolidBrush(*(COLORREF *)(pAVar7 + 0x54));
  CMenu::Attach((CMenu *)(this + 0x1f8),(HMENU__ *)pHVar10);
  CGdiObject::DeleteObject((CGdiObject *)(this + 0x200));
  pHVar10 = CreateSolidBrush(*(COLORREF *)(this + 0x168));
  CMenu::Attach((CMenu *)(this + 0x200),(HMENU__ *)pHVar10);
  CGdiObject::DeleteObject((CGdiObject *)(this + 0x13c));
  pHVar11 = CreatePen(0,1,local_18);
  CMenu::Attach((CMenu *)(this + 0x13c),(HMENU__ *)pHVar11);
  pAVar7 = GetGlobalData();
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(pAVar7 + 0x54);
  uVar6 = FUN_1007d63d(*(undefined4 *)(this + 0x164),*(undefined4 *)(this + 0x168),0xd70a3d71,
                       0x3fed70a3,1,1);
  *(undefined4 *)(this + 0x16c) = uVar6;
  CGdiObject::DeleteObject((CGdiObject *)(this + 0x1e0));
  pHVar11 = CreatePen(0,1,*(COLORREF *)(this + 0x180));
  CMenu::Attach((CMenu *)(this + 0x1e0),(HMENU__ *)pHVar11);
  if ((*(int *)(this + 0x208) == 0) || (*(int *)(this + 0x28) == 0)) {
    iVar5 = 0x7d;
    *(undefined4 *)(this + 0x1b4) = *(undefined4 *)(this + 0x15c);
    *(undefined4 *)(this + 0x1b8) = *(undefined4 *)(this + 0x168);
    *(undefined4 *)(this + 0x1bc) = *(undefined4 *)(this + 0x15c);
    *(undefined4 *)(this + 0x1c0) = *(undefined4 *)(this + 0x168);
    pAVar7 = GetGlobalData();
    uVar8 = CDrawingManager::PixelAlpha(*(ulong *)(pAVar7 + 0x58),iVar5);
    uVar6 = FUN_1007d63d(*(undefined4 *)(this + 0x178),uVar8,0,0x3ff00000,1,1);
    *(undefined4 *)(this + 0x1c4) = uVar6;
    *(undefined4 *)(this + 0x1c8) = *(undefined4 *)(this + 0x17c);
    uVar6 = *(undefined4 *)(this + 0x168);
    *(undefined4 *)(this + 0x1cc) = uVar6;
    *(undefined4 *)(this + 0x1d0) = uVar6;
    *(undefined4 *)(this + 0x1d4) = uVar6;
    *(undefined4 *)(this + 0x1d8) = uVar6;
    *(undefined4 *)(this + 0x1dc) = uVar6;
  }
  else {
    ::GetThemeColor(*(HTHEME *)(this + 0x28),0,0,0xee2,(COLORREF *)(this + 0x1b8));
    ::GetThemeColor(*(HTHEME *)(this + 0x28),0,0,0xee3,(COLORREF *)(this + 0x1b4));
    ::GetThemeColor(*(HTHEME *)(this + 0x28),5,0,0xeda,(COLORREF *)(this + 0x1bc));
    ::GetThemeColor(*(HTHEME *)(this + 0x28),0xc,0,0xeda,(COLORREF *)(this + 0x1c4));
    *(COLORREF *)(this + 0x1c8) = *(COLORREF *)(this + 0x1bc);
    ::GetThemeColor(*(HTHEME *)(this + 0x28),5,0,0xeda,(COLORREF *)(this + 0x1cc));
    *(COLORREF *)(this + 0x1d0) = *(COLORREF *)(this + 0x1cc);
    ::GetThemeColor(*(HTHEME *)(this + 0x28),9,0,0xeed,(COLORREF *)(this + 0x1d4));
    *(COLORREF *)(this + 0x1d8) = *(COLORREF *)(this + 0x1d4);
    ::GetThemeColor(*(HTHEME *)(this + 0x28),5,0,0xed9,(COLORREF *)(this + 0x1dc));
    *(COLORREF *)(this + 0x1c0) = *(COLORREF *)(this + 0x1dc);
  }
  CGdiObject::DeleteObject((CGdiObject *)(this + 0x1f0));
  pHVar11 = CreatePen(0,1,*(COLORREF *)(this + 0x1dc));
  CMenu::Attach((CMenu *)(this + 0x1f0),(HMENU__ *)pHVar11);
  return;
}

