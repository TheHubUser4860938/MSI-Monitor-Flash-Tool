// rea decompile_all
// name: CMFCPopupMenu::DrawFade
// address: 0x1008acb7
// body: available
// range: 0x1008acb7-0x1008b108 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCPopupMenu::DrawFade(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCPopupMenu::DrawFade(CMFCPopupMenu *this,CDC *param_1)

{
  code *pcVar1;
  HDC pHVar2;
  int iVar3;
  ANIMATION_TYPE AVar4;
  AFX_GLOBAL_DATA *pAVar5;
  HBITMAP pHVar6;
  void *pvVar7;
  int *piVar8;
  ulong uVar9;
  CGdiObject *pCVar10;
  DWORD DVar11;
  int x;
  void *pvVar12;
  CMenu *pCVar13;
  undefined1 local_90 [4];
  CGdiObject *local_8c;
  CMenu *local_88;
  DWORD local_84;
  CDC *local_80;
  int local_7c;
  HDC__ *local_78;
  int local_6c;
  int local_68;
  CGdiObject *local_64;
  CMFCPopupMenu *local_60;
  undefined1 local_5c [44];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x80;
  local_8 = 0x1008acc6;
  pvVar12 = (void *)0x0;
  local_80 = param_1;
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  local_60 = this;
  GetClientRect(*(HWND *)(this + 0x20),&local_24);
  local_68 = *(int *)(this + 0x148) + *(int *)(this + 0x105c);
  local_6c = *(int *)(this + 0x14c) + *(int *)(this + 0x105c);
  CDC::CDC((CDC *)&local_7c);
  local_8 = 0;
  pHVar2 = (HDC)0x0;
  if (param_1 != (CDC *)0x0) {
    pHVar2 = *(HDC *)(param_1 + 4);
  }
  pHVar2 = CreateCompatibleDC(pHVar2);
  iVar3 = CDC::Attach((CDC *)&local_7c,pHVar2);
  if (iVar3 == 0) goto LAB_1008b0f9;
  pCVar13 = (CMenu *)(this + 0x1040);
  if ((pCVar13 == (CMenu *)0x0) || (*(int *)(this + 0x1044) == 0)) {
    local_88 = pCVar13;
    AVar4 = GetAnimationType(0);
    if ((AVar4 == 3) || (pAVar5 = GetGlobalData(), 8 < *(int *)(pAVar5 + 0x1ac))) {
      local_5c._12_2_ = 1;
      local_5c._4_4_ = local_68;
      local_5c._8_4_ = local_6c;
      local_84 = local_6c * local_68;
      local_5c._0_4_ = 0x28;
      local_5c._14_2_ = 0x20;
      local_5c._16_4_ = 0;
      local_5c._24_4_ = 0;
      local_5c._28_4_ = 0;
      local_5c._32_4_ = 0;
      local_5c._36_4_ = 0;
      local_5c._20_4_ = local_84;
      pHVar6 = CreateDIBSection(local_78,(BITMAPINFO *)local_5c,0,(void **)(this + 0x1050),
                                (HANDLE)0x0,0);
      if ((pHVar6 == (HBITMAP)0x0) || (*(int *)(this + 0x1050) == 0)) goto LAB_1008b0f9;
      CMenu::Attach((CMenu *)(this + 0x1038),(HMENU__ *)pHVar6);
      pHVar6 = CreateDIBSection(local_78,(BITMAPINFO *)local_5c,0,(void **)(this + 0x1054),
                                (HANDLE)0x0,0);
      if ((pHVar6 == (HBITMAP)0x0) || (*(int *)(this + 0x1054) == 0)) goto LAB_1008b0f9;
      CMenu::Attach(pCVar13,(HMENU__ *)pHVar6);
      pHVar6 = CreateDIBSection(local_78,(BITMAPINFO *)local_5c,0,(void **)(this + 0x1058),
                                (HANDLE)0x0,0);
      if ((pHVar6 == (HBITMAP)0x0) || (*(int *)(this + 0x1058) == 0)) goto LAB_1008b0f9;
      CMenu::Attach((CMenu *)(this + 0x1048),(HMENU__ *)pHVar6);
      if (this == (CMFCPopupMenu *)0xffffefc8) {
        pvVar7 = (void *)0x0;
      }
      else {
        pvVar7 = *(void **)(this + 0x103c);
      }
      local_64 = CDC::SelectGdiObject(local_78,pvVar7);
      if (local_80 == (CDC *)0x0) {
        pHVar2 = (HDC)0x0;
      }
      else {
        pHVar2 = *(HDC *)(local_80 + 4);
      }
      BitBlt(local_78,0,0,local_68,local_6c,pHVar2,local_24.left,local_24.top,0xcc0020);
      FUN_1016bba0(*(undefined4 *)(this + 0x1054),*(undefined4 *)(this + 0x1050),local_84 << 2);
      pvVar7 = (void *)0x0;
      if (pCVar13 != (CMenu *)0x0) {
        pvVar7 = *(void **)(this + 0x1044);
      }
      CDC::SelectGdiObject(local_78,pvVar7);
    }
    else {
      pHVar6 = CreateCompatibleBitmap(*(HDC *)(local_80 + 4),local_68,local_6c);
      CMenu::Attach(pCVar13,(HMENU__ *)pHVar6);
      pvVar7 = (void *)0x0;
      if (pCVar13 != (CMenu *)0x0) {
        pvVar7 = *(void **)(this + 0x1044);
      }
      local_64 = CDC::SelectGdiObject(local_78,pvVar7);
    }
    local_5c[0x28] = '\0';
    local_5c[0x29] = '\0';
    local_5c[0x2a] = '\0';
    local_5c[0x2b] = '\0';
    local_30 = 0;
    pcVar1 = *(code **)(*(int *)this + 0x1ec);
    local_2c = 0;
    local_28 = 0;
    guard_check_icall(&local_7c);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)this + 0x1c8);
    guard_check_icall();
    piVar8 = (int *)(*pcVar1)();
    GetWindowRect((HWND)piVar8[8],(LPRECT)(local_5c + 0x28));
    CWnd::ScreenToClient((CWnd *)local_60,(tagRECT *)(local_5c + 0x28));
    pcVar1 = *(code **)(local_7c + 0x38);
    guard_check_icall(local_90,local_5c._40_4_,local_30);
    (*pcVar1)();
    pcVar1 = *(code **)(*piVar8 + 0x264);
    guard_check_icall(&local_7c);
    (*pcVar1)();
    pcVar1 = *(code **)(local_7c + 0x38);
    guard_check_icall(local_90,0,0);
    (*pcVar1)();
    if (local_64 == (CGdiObject *)0x0) {
      pvVar7 = (void *)0x0;
    }
    else {
      pvVar7 = *(void **)(local_64 + 4);
    }
    CDC::SelectGdiObject(local_78,pvVar7);
    pCVar13 = local_88;
    this = local_60;
  }
  local_64 = *(CGdiObject **)(this + 0x1050);
  local_88 = *(CMenu **)(this + 0x1054);
  local_60 = *(CMFCPopupMenu **)(this + 0x1058);
  AVar4 = GetAnimationType(0);
  if (0 < (int)AVar4) {
    if ((int)AVar4 < 3) {
      pvVar12 = (void *)0x0;
      if (pCVar13 != (CMenu *)0x0) {
        pvVar12 = *(void **)(pCVar13 + 4);
      }
      pCVar10 = CDC::SelectGdiObject(local_78,pvVar12);
      iVar3 = local_24.top;
      if (*(int *)(this + 0xf70) == 0) {
        iVar3 = local_24.bottom - *(int *)(this + 0xf68);
      }
      x = local_24.left;
      if (*(int *)(this + 0xf6c) == 0) {
        x = local_24.right - *(int *)(this + 0xf64);
      }
      BitBlt(*(HDC *)(local_80 + 4),x,iVar3,*(int *)(this + 0xf64),*(int *)(this + 0xf68),local_78,0
             ,0,0xcc0020);
    }
    else {
      if (AVar4 != 3) goto LAB_1008b0f0;
      if (this == (CMFCPopupMenu *)0xffffefb8) {
        pvVar12 = (void *)0x0;
      }
      else {
        pvVar12 = *(void **)(this + 0x104c);
      }
      local_8c = CDC::SelectGdiObject(local_78,pvVar12);
      DVar11 = local_6c * local_68;
      local_84 = DVar11;
      if (0 < (int)DVar11) {
        local_64 = (CGdiObject *)((int)local_64 - (int)local_88);
        local_60 = local_60 + -(int)local_88;
        pCVar13 = local_88;
        do {
          uVar9 = CDrawingManager::PixelAlpha
                            (*(ulong *)(pCVar13 + (int)local_64),*(ulong *)pCVar13,
                             100 - *(int *)(this + 0xfb0));
          *(ulong *)(local_60 + (int)pCVar13) = uVar9;
          pCVar13 = pCVar13 + 4;
          DVar11 = DVar11 - 1;
        } while (DVar11 != 0);
      }
      BitBlt(*(HDC *)(local_80 + 4),local_24.left,local_24.top,local_68,local_6c,local_78,0,0,
             0xcc0020);
      pCVar10 = local_8c;
    }
    pvVar12 = (void *)0x0;
    if (pCVar10 != (CGdiObject *)0x0) {
      pvVar12 = *(void **)(pCVar10 + 4);
    }
  }
LAB_1008b0f0:
  CDC::SelectGdiObject(local_78,pvVar12);
LAB_1008b0f9:
  CDC::~CDC((CDC *)&local_7c);
  FUN_10154478();
  return;
}

