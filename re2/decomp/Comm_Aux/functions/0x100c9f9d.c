// rea decompile_all
// name: DrawNcCaption
// address: 0x100c9f9d
// body: available
// range: 0x100c9f9d-0x100ca474 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: void __thiscall CMFCVisualManagerOffice2007::DrawNcCaption(class CDC *,class
   CRect,unsigned long,unsigned long,class ATL::CStringT<char,class StrTraitMFC<char,class
   ATL::ChTraitsCRT<char> > > const &,class ATL::CStringT<char,class StrTraitMFC<char,class
   ATL::ChTraitsCRT<char> > > const &,struct HICON__ *,int,int,int,class CObList const &)
    protected: void __thiscall CMFCVisualManagerOffice2007::DrawNcCaption(class CDC *,class
   CRect,unsigned long,unsigned long,class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > const &,class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > const &,struct HICON__ *,int,int,int,class CObList const &)
   
   Library: Visual Studio 2015 Release */

void DrawNcCaption(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                  uint param_7,int *param_8,int *param_9,HICON param_10,undefined4 param_11,
                  int param_12,undefined4 param_13,int param_14)

{
  code *pcVar1;
  HDC pHVar2;
  HBITMAP pHVar3;
  CGdiObject *pCVar4;
  int iVar5;
  HICON pHVar6;
  int *piVar7;
  CPen *pCVar8;
  int in_ECX;
  int iVar9;
  uint uVar10;
  int iVar11;
  void *pvVar12;
  int local_98;
  uint local_94;
  undefined **local_90;
  void *local_8c;
  int *local_88;
  int *local_84;
  int local_80;
  uint local_7c;
  CDC local_78 [4];
  HDC__ *local_74;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  HICON local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined1 local_44 [16];
  undefined1 local_34 [16];
  undefined1 local_24 [8];
  int local_1c;
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x90;
  local_8 = 0x100c9fac;
  local_88 = param_8;
  local_84 = param_9;
  local_58 = param_10;
  local_80 = param_14;
  local_50 = in_ECX;
  local_54 = GetSystemMetrics(4);
  CGlobalUtils::GetSystemBorders((CGlobalUtils *)&PTR_vftable_10205db4,(ulong)&local_98);
  CDC::CDC(local_78);
  local_8 = 0;
  pHVar2 = (HDC)0x0;
  if (param_1 != 0) {
    pHVar2 = *(HDC *)(param_1 + 4);
  }
  pHVar2 = CreateCompatibleDC(pHVar2);
  CDC::Attach(local_78,pHVar2);
  local_8c = (void *)0x0;
  local_90 = CBitmap::vftable;
  local_8._0_1_ = 1;
  pHVar3 = CreateCompatibleBitmap(*(HDC *)(param_1 + 4),param_4 - param_2,param_5 - param_3);
  CMenu::Attach((CMenu *)&local_90,(HMENU__ *)pHVar3);
  pCVar4 = CDC::SelectGdiObject(local_74,local_8c);
  BitBlt(local_74,0,0,param_4 - param_2,param_5 - param_3,*(HDC *)(param_1 + 4),0,0,0xcc0020);
  local_7c = param_6 >> 0x18 & 1;
  if (*(int *)(in_ECX + 0xc000) < 0x14) {
    if (param_12 == 0) {
      local_48 = *(undefined4 *)(in_ECX + 0x8f58);
      local_4c = *(int *)(in_ECX + 0x8f5c);
    }
    else {
      local_48 = *(undefined4 *)(in_ECX + 0x8f50);
      local_4c = *(int *)(in_ECX + 0x8f54);
    }
    local_24._0_4_ = *(int *)(local_50 + 0x2518);
    local_24._4_4_ = *(int *)(local_50 + 0x251c);
    local_1c = *(int *)(local_50 + 0x2520);
    local_18 = *(int *)(local_50 + 0x2524);
    local_68 = param_2 + local_24._0_4_;
    local_64 = param_3 + local_24._4_4_;
    local_60 = param_4 - local_1c;
    local_5c = param_5 - local_18;
    CDrawingManager::CDrawingManager((CDrawingManager *)&local_1c,local_78);
    local_8._0_1_ = 2;
    CDrawingManager::Fill4ColorsGradient
              ((CDrawingManager *)&local_1c,local_68,local_64,local_60,local_5c,local_48,local_4c,
               local_4c,local_48,0,0x32);
    local_8._0_1_ = 1;
    FUN_100afd36();
    iVar9 = *(int *)(local_50 + 0x23d0);
    guard_check_icall(local_78,param_2,param_3,param_4,param_5,param_12 == 0,0xff);
    (**(code **)(iVar9 + 0x14))();
  }
  else {
    iVar9 = *(int *)(in_ECX + 0x23d0);
    guard_check_icall(local_78,param_2,param_3,param_4,param_5,param_12 == 0,0xff);
    (**(code **)(iVar9 + 0x10))();
  }
  iVar9 = param_2 + local_98;
  local_5c = param_5;
  iVar11 = param_3 + (-(uint)(local_7c != 0) & local_94);
  local_60 = param_4 - local_98;
  local_64 = iVar11;
  if (local_58 != (HICON)0x0) {
    local_68 = iVar9;
    local_48 = GetSystemMetrics(0x32);
    local_4c = GetSystemMetrics(0x31);
    local_18 = local_54;
    local_54 = (local_54 - local_4c) / 2;
    if (local_54 < 0) {
      local_54 = 0;
    }
    local_54 = local_54 + iVar9;
    iVar5 = ((local_5c - local_48) - iVar11) / 2;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    DrawIconEx(local_74,local_54,iVar5 + iVar11,local_58,local_4c,local_48,0,(HBRUSH)0x0,3);
    iVar9 = iVar9 + local_18;
  }
  local_54 = *(int *)(local_80 + 4);
  local_68 = iVar9;
  local_48 = local_60;
  while (local_54 != 0) {
    pHVar6 = (HICON)FUN_10094d55(&local_54);
    local_4c = 0;
    if (pHVar6[1].unused == 0) {
      if (pHVar6[2].unused != 0) {
        local_4c = 2;
      }
    }
    else if (pHVar6[2].unused != 0) {
      local_4c = 1;
    }
    uVar10 = 0;
    local_58 = pHVar6;
    iVar9 = FUN_1014d4d1();
    if (iVar9 == 0x13) {
      uVar10 = 0xf060;
    }
    else if (iVar9 == 0x1a) {
      uVar10 = (-(uint)((param_6 & 0x1000000) != 0) & 0xf0) + 0xf030;
    }
    else if (iVar9 == 0x1b) {
      uVar10 = param_6 >> 0x15 & 0x100 | 0xf020;
    }
    pcVar1 = *(code **)(pHVar6->unused + 0xc);
    guard_check_icall(local_24);
    (*pcVar1)();
    if (local_7c != 0) {
      OffsetRect((LPRECT)local_24,local_98,local_94);
    }
    FUN_100c9db9(local_78,local_24,uVar10,local_4c,0,param_12,0);
    pHVar6 = local_58;
    pcVar1 = *(code **)(local_58->unused + 0xc);
    guard_check_icall(local_34);
    piVar7 = (int *)(*pcVar1)();
    if (*piVar7 <= local_48) {
      pcVar1 = *(code **)(pHVar6->unused + 0xc);
      guard_check_icall(local_44);
      piVar7 = (int *)(*pcVar1)();
      local_48 = *piVar7;
    }
  }
  if (((*(int *)(*local_88 + -0xc) != 0) || (*(int *)(*local_84 + -0xc) != 0)) &&
     (local_68 < local_60)) {
    pCVar8 = CDC::SelectObject(local_78,(CPen *)(local_50 + 0x8f38));
    local_24._0_4_ = local_68;
    local_1c = local_48 + -1;
    local_24._4_4_ = local_64;
    local_18 = local_5c;
    DrawNcText(local_78,local_24,local_88,local_84,param_11,param_12,param_7 >> 0x16 & 1,param_13,0,
               0,0xffffffff);
    CDC::SelectObject(local_78,pCVar8);
  }
  pvVar12 = (void *)0x0;
  BitBlt(*(HDC *)(param_1 + 4),param_2,param_3,param_4 - param_2,param_5 - param_3,local_74,0,0,
         0xcc0020);
  if (pCVar4 != (CGdiObject *)0x0) {
    pvVar12 = *(void **)(pCVar4 + 4);
  }
  CDC::SelectGdiObject(local_74,pvVar12);
  local_90 = CBitmap::vftable;
  CImageList::~CImageList((CImageList *)&local_90);
  CDC::~CDC(local_78);
  FUN_1017f5f4();
  return;
}

