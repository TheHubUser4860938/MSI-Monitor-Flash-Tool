// rea decompile_all
// name: CMFCVisualManagerOffice2003::ModifyGlobalColors
// address: 0x101480bc
// body: available
// range: 0x101480bc-0x101482e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCVisualManagerOffice2003::ModifyGlobalColors(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCVisualManagerOffice2003::ModifyGlobalColors(CMFCVisualManagerOffice2003 *this)

{
  code *pcVar1;
  COLORREF color;
  AFX_GLOBAL_DATA *pAVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  HBRUSH pHVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  pAVar2 = GetGlobalData();
  if ((8 < *(int *)(pAVar2 + 0x1ac)) && (*(int *)(this + 0x208) != 0)) {
    pAVar2 = GetGlobalData();
    iVar3 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar2);
    if (iVar3 == 0) {
      pcVar1 = *(code **)(*(int *)this + 0x318);
      guard_check_icall();
      uVar4 = (*pcVar1)();
      if (*(int *)(this + 0x158) == 2) {
        uVar5 = CDrawingManager::PixelAlpha(uVar4,0x78);
        uVar10 = 1;
        uVar9 = 2;
        uVar11 = 0;
        uVar7 = 0x3ff00000;
        uVar6 = GetThemeColor(this,*(void **)(this + 4),5);
        uVar4 = FUN_100b3c01(uVar4,uVar6,uVar11,uVar7,uVar9,uVar10);
        uVar11 = 1;
        uVar10 = 2;
        uVar7 = 0;
        uVar9 = 0x3ff00000;
LAB_101481d8:
        uVar4 = FUN_100b3c01(uVar5,uVar4,uVar7,uVar9,uVar10,uVar11);
      }
      else {
        uVar11 = 1;
        if (*(int *)(this + 0x158) != 3) {
          uVar10 = 1;
          uVar7 = 0;
          uVar9 = 0x3ff00000;
          uVar4 = GetThemeColor(this,*(void **)(this + 4),5);
          uVar5 = GetThemeColor(this,*(void **)(this + 4),0x1d);
          goto LAB_101481d8;
        }
        uVar10 = 2;
        uVar7 = 0;
        uVar9 = 0x3fe80000;
        uVar5 = GetThemeColor(this,*(void **)(this + 4),0xf);
        uVar11 = FUN_100b3c01(uVar4,uVar5,uVar7,uVar9,uVar10,uVar11);
        uVar12 = 1;
        uVar10 = 1;
        uVar7 = 0x47ae147b;
        uVar9 = 0x3ff07ae1;
        uVar5 = GetThemeColor(this,*(void **)(this + 4),5);
        uVar7 = FUN_100b3c01(uVar4,uVar5,uVar7,uVar9,uVar10,uVar12);
        iVar3 = 0x5f;
        uVar4 = FUN_100b3c01(uVar11,uVar7,0,0x3ff00000,1,1);
        uVar4 = CDrawingManager::PixelAlpha(uVar4,iVar3);
      }
      pAVar2 = GetGlobalData();
      iVar3 = 0x46;
      *(ulong *)(pAVar2 + 0x54) = uVar4;
      pAVar2 = GetGlobalData();
      uVar4 = CDrawingManager::PixelAlpha(*(ulong *)(pAVar2 + 0x54),iVar3);
      pAVar2 = GetGlobalData();
      iVar3 = 0x82;
      *(ulong *)(pAVar2 + 0x58) = uVar4;
      pAVar2 = GetGlobalData();
      uVar4 = CDrawingManager::PixelAlpha(*(ulong *)(pAVar2 + 0x54),iVar3);
      pAVar2 = GetGlobalData();
      iVar3 = 0x32;
      *(ulong *)(pAVar2 + 0x5c) = uVar4;
      pAVar2 = GetGlobalData();
      uVar4 = CDrawingManager::PixelAlpha(*(ulong *)(pAVar2 + 0x54),iVar3);
      pAVar2 = GetGlobalData();
      iVar3 = 0x6e;
      *(ulong *)(pAVar2 + 0x60) = uVar4;
      pAVar2 = GetGlobalData();
      uVar4 = CDrawingManager::PixelAlpha(*(ulong *)(pAVar2 + 0x54),iVar3);
      goto LAB_101482aa;
    }
  }
  uVar4 = GetThemeColor(this,*(void **)(this + 0x10),0xf);
  pAVar2 = GetGlobalData();
  *(ulong *)(pAVar2 + 0x54) = uVar4;
  uVar4 = GetThemeColor(this,*(void **)(this + 0x10),0x10);
  pAVar2 = GetGlobalData();
  *(ulong *)(pAVar2 + 0x58) = uVar4;
  uVar4 = GetThemeColor(this,*(void **)(this + 0x10),0x14);
  pAVar2 = GetGlobalData();
  *(ulong *)(pAVar2 + 0x5c) = uVar4;
  uVar4 = GetThemeColor(this,*(void **)(this + 0x10),0x15);
  pAVar2 = GetGlobalData();
  *(ulong *)(pAVar2 + 0x60) = uVar4;
  uVar4 = GetThemeColor(this,*(void **)(this + 0x10),0x16);
LAB_101482aa:
  pAVar2 = GetGlobalData();
  *(ulong *)(pAVar2 + 100) = uVar4;
  pAVar2 = GetGlobalData();
  CGdiObject::DeleteObject((CGdiObject *)(pAVar2 + 0xd0));
  pAVar2 = GetGlobalData();
  color = *(COLORREF *)(pAVar2 + 0x54);
  pAVar2 = GetGlobalData();
  pHVar8 = CreateSolidBrush(color);
  CMenu::Attach((CMenu *)(pAVar2 + 0xd0),(HMENU__ *)pHVar8);
  return;
}

