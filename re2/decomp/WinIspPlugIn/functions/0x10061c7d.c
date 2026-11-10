// rea decompile_all
// name: CChevronOwnerDrawMenu::DrawItem
// address: 0x10061c7d
// body: available
// range: 0x10061c7d-0x100621b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CChevronOwnerDrawMenu::DrawItem(struct tagDRAWITEMSTRUCT *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CChevronOwnerDrawMenu::DrawItem(CChevronOwnerDrawMenu *this,tagDRAWITEMSTRUCT *param_1)

{
  code *pcVar1;
  CChevronOwnerDrawMenu *pCVar2;
  CDC *this_00;
  BOOL BVar3;
  int iVar4;
  HDC pHVar5;
  undefined4 *puVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined **ppuVar9;
  CBitmap *pCVar10;
  int iVar11;
  UINT options;
  UINT c;
  tagMENUITEMINFOW local_b8;
  CDC local_88 [16];
  undefined4 local_78;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_74 [4];
  CChevronOwnerDrawMenu *local_70;
  tagDRAWITEMSTRUCT *local_6c;
  CBitmap *local_68;
  int local_64;
  BOOL local_60;
  undefined **local_5c;
  int local_58;
  LPCWSTR local_54;
  DWORD local_50;
  tagRECT local_4c;
  undefined1 local_3c [4];
  int local_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa8;
  local_8 = 0x10061c8c;
  local_6c = param_1;
  local_70 = this;
  FUN_10047180(&PTR_1020e6b0);
  local_8 = 0;
  this_00 = CDC::FromHandle(*(HDC__ **)(param_1 + 0x18));
  pcVar1 = *(code **)(*(int *)this_00 + 0x1c);
  guard_check_icall();
  local_78 = (*pcVar1)();
  _memset(&local_b8,0,0x30);
  pCVar2 = local_70;
  local_60 = 0;
  local_b8.cbSize = 0x30;
  local_b8.fMask = 0x40;
  BVar3 = GetMenuItemInfoW(*(HMENU *)(local_70 + 4),*(UINT *)(param_1 + 8),0,&local_b8);
  if (BVar3 != 0) {
    local_b8.dwTypeData = (LPWSTR)FUN_100473c0(local_b8.cch);
    local_b8.cch = local_b8.cch + 1;
    local_60 = GetMenuItemInfoW(*(HMENU *)(pCVar2 + 4),*(UINT *)(param_1 + 8),0,&local_b8);
    ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)&local_54,-1);
  }
  pCVar10 = *(CBitmap **)(param_1 + 0x2c);
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  local_68 = pCVar10;
  CopyRect(&local_4c,(RECT *)(param_1 + 0x1c));
  if ((pCVar10 == (CBitmap *)0x0) || (iVar4 = FUN_10051e53(&PTR_s_CBitmap_101d8610), iVar4 == 0)) {
    local_64 = 0;
    local_50 = GetSystemMetrics(0x32);
    local_38 = GetSystemMetrics(0x31);
  }
  else {
    local_64 = 1;
    GetObjectW(*(HANDLE *)(pCVar10 + 4),0x18,local_3c);
    local_50 = local_34.left;
  }
  local_24.left = 0;
  local_24.top = ((local_4c.bottom - local_4c.top) / 2 - (int)local_50 / 2) + local_4c.top + -1;
  local_24.right = local_38 + 1;
  local_24.bottom = local_50 + 1 + local_24.top;
  local_58 = local_38;
  local_50 = GetSysColor(4);
  CDC::CDC(local_88);
  local_8 = CONCAT31(local_8._1_3_,1);
  pHVar5 = CreateCompatibleDC((HDC)0x0);
  CDC::Attach(local_88,pHVar5);
  pcVar1 = *(code **)(*(int *)this_00 + 0x28);
  guard_check_icall(local_70 + 8);
  (*pcVar1)();
  puVar6 = (undefined4 *)CDC::GetTextExtent(this_00,local_74);
  DVar7 = local_50;
  local_5c = (undefined **)*puVar6;
  local_58 = puVar6[1];
  if (((byte)param_1[0x10] & 1) == 0) {
    FUN_10067f3a((RECT *)(param_1 + 0x1c),local_50);
    pcVar1 = *(code **)(*(int *)this_00 + 0x2c);
    guard_check_icall(DVar7);
    (*pcVar1)();
    if ((*(uint *)(param_1 + 0x10) & 2) == 0) {
      if ((local_64 != 0) && ((*(uint *)(param_1 + 0x10) & 8) != 0)) {
        iVar11 = local_24.bottom - local_24.top;
        iVar4 = local_24.right - local_24.left;
        DVar7 = GetSysColor(0x14);
        DVar8 = GetSysColor(0x10);
        CDC::Draw3dRect(this_00,local_24.left,local_24.top,iVar4 + 1,iVar11 + 1,DVar8,DVar7);
      }
      DVar7 = local_50;
      if (local_60 != 0) {
        pcVar1 = *(code **)(*(int *)this_00 + 0x2c);
        guard_check_icall(local_50);
        (*pcVar1)();
        iVar4 = *(int *)this_00;
        DVar8 = GetSysColor(7);
        guard_check_icall(DVar8);
        (**(code **)(iVar4 + 0x30))();
        ExtTextOutW(*(HDC *)(this_00 + 4),local_24.right + 3,
                    ((local_24.bottom - local_24.top) / 2 - local_58 / 2) + local_24.top,2,
                    (RECT *)0x0,local_54,*(UINT *)(local_54 + -6),(INT *)0x0);
      }
    }
    else {
      iVar4 = *(int *)this_00;
      DVar7 = GetSysColor(0x14);
      guard_check_icall(DVar7);
      (**(code **)(iVar4 + 0x30))();
      CDC::SetBkMode(this_00,1);
      DVar7 = local_50;
      if (local_60 != 0) {
        iVar11 = local_58 / 2;
        ExtTextOutW(*(HDC *)(this_00 + 4),local_24.right + 4,
                    local_24.top + 1 + ((local_24.bottom - local_24.top) / 2 - iVar11),2,(RECT *)0x0
                    ,local_54,*(UINT *)(local_54 + -6),(INT *)0x0);
        iVar4 = *(int *)this_00;
        DVar7 = GetSysColor(0x11);
        guard_check_icall(DVar7);
        (**(code **)(iVar4 + 0x30))();
        c = *(UINT *)(local_54 + -6);
        iVar4 = ((local_24.bottom - local_24.top) / 2 - iVar11) + local_24.top;
        options = 0;
        goto LAB_10061f2f;
      }
    }
  }
  else {
    CopyRect(&local_34,(RECT *)(param_1 + 0x1c));
    local_34.left = local_24.right + 2;
    DVar7 = GetSysColor(0xd);
    FUN_10067f3a(&local_34,DVar7);
    if ((local_64 != 0) && (((byte)param_1[0x10] & 10) == 0)) {
      iVar11 = local_24.bottom - local_24.top;
      iVar4 = local_24.right - local_24.left;
      DVar7 = GetSysColor(0x10);
      DVar8 = GetSysColor(0x14);
      CDC::Draw3dRect(this_00,local_24.left,local_24.top,iVar4 + 1,iVar11 + 1,DVar8,DVar7);
      param_1 = local_6c;
    }
    DVar7 = local_50;
    if (local_60 != 0) {
      iVar4 = *(int *)this_00;
      DVar7 = GetSysColor(0xd);
      guard_check_icall(DVar7);
      (**(code **)(iVar4 + 0x2c))();
      DVar7 = local_50;
      if (((byte)param_1[0x10] & 2) == 0) {
        DVar7 = GetSysColor(0xe);
      }
      pcVar1 = *(code **)(*(int *)this_00 + 0x30);
      guard_check_icall(DVar7);
      (*pcVar1)();
      iVar4 = ((local_24.bottom - local_24.top) / 2 - local_58 / 2) + local_24.top;
      c = *(UINT *)(local_54 + -6);
      options = 2;
LAB_10061f2f:
      ExtTextOutW(*(HDC *)(this_00 + 4),local_24.right + 3,iVar4,options,(RECT *)0x0,local_54,c,
                  (INT *)0x0);
      DVar7 = local_50;
    }
  }
  if (local_64 == 0) goto LAB_10062184;
  local_58 = 0;
  local_5c = CBitmap::vftable;
  local_8._0_1_ = 2;
  if ((*(uint *)(local_6c + 0x10) & 2) == 0) {
    pCVar10 = local_68;
    if ((*(uint *)(local_6c + 0x10) & 8) != 0) {
      AfxGetDitheredBitmap(local_68,(CBitmap *)&local_5c,DVar7,0xffffff);
      goto LAB_1006210a;
    }
  }
  else {
    AfxGetGrayBitmap(local_68,(CBitmap *)&local_5c,DVar7);
LAB_1006210a:
    pCVar10 = (CBitmap *)&local_5c;
  }
  CDC::CDC((CDC *)&local_34);
  local_8._0_1_ = 3;
  pHVar5 = CreateCompatibleDC((HDC)0x0);
  CDC::Attach((CDC *)&local_34,pHVar5);
  ppuVar9 = (undefined **)0x0;
  if (pCVar10 != (CBitmap *)0x0) {
    ppuVar9 = *(undefined ***)(pCVar10 + 4);
  }
  CDC::SelectGdiObject((HDC__ *)local_34.top,ppuVar9);
  InflateRect(&local_24,-1,-1);
  CDC::BitBlt(this_00,local_24.left,local_24.top,local_24.right,local_24.bottom,(CDC *)&local_34,0,0
              ,0xcc0020);
  CDC::~CDC((CDC *)&local_34);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_5c = CBitmap::vftable;
  CImageList::~CImageList((CImageList *)&local_5c);
LAB_10062184:
  pcVar1 = *(code **)(*(int *)this_00 + 0x20);
  guard_check_icall(local_78);
  (*pcVar1)();
  CDC::~CDC(local_88);
  FUN_100476d0();
  FUN_1018015d();
  return;
}

