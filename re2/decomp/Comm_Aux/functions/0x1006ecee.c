// rea decompile_all
// name: CMFCFontComboBox::DrawItem
// address: 0x1006ecee
// body: available
// range: 0x1006ecee-0x1006ef93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCFontComboBox::DrawItem(struct tagDRAWITEMSTRUCT *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCFontComboBox::DrawItem(CMFCFontComboBox *this,tagDRAWITEMSTRUCT *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  tagPOINT tVar4;
  CMFCFontComboBox *this_00;
  CDC *this_01;
  undefined4 uVar5;
  AFX_GLOBAL_DATA *pAVar6;
  HBRUSH pHVar7;
  COLORREF color;
  HFONT pHVar8;
  undefined4 uVar9;
  undefined **local_98;
  undefined4 local_94;
  int local_90;
  undefined **local_8c;
  HBRUSH local_88;
  CMFCFontComboBox *local_84;
  LOGFONTW local_80;
  tagRECT local_24;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x90;
  local_8 = 0x1006ecfd;
  local_84 = this;
  if (((CImageList *)(this + 0x80) == (CImageList *)0x0) || (*(int *)(this + 0x84) == 0)) {
    CImageList::Create((CImageList *)(this + 0x80),17000,0x10,0,0xffffff);
  }
  this_01 = CDC::FromHandle(*(HDC__ **)(param_1 + 0x18));
  CopyRect(&local_24,(RECT *)(param_1 + 0x1c));
  if (((byte)param_1[0x10] & 0x10) != 0) {
    DrawFocusRect(*(HDC *)(this_01 + 4),&local_24);
  }
  pcVar1 = *(code **)(*(int *)this_01 + 0x1c);
  guard_check_icall();
  uVar5 = (*pcVar1)();
  local_88 = (HBRUSH)0x0;
  local_8c = CBrush::vftable;
  local_8 = 0;
  if (((byte)param_1[0x10] & 1) == 0) {
    color = GetBkColor(*(HDC *)(this_01 + 8));
    pHVar7 = CreateSolidBrush(color);
    CMenu::Attach((CMenu *)&local_8c,(HMENU__ *)pHVar7);
  }
  else {
    pAVar6 = GetGlobalData();
    pHVar7 = CreateSolidBrush(*(COLORREF *)(pAVar6 + 0x3c));
    CMenu::Attach((CMenu *)&local_8c,(HMENU__ *)pHVar7);
    iVar2 = *(int *)this_01;
    pAVar6 = GetGlobalData();
    guard_check_icall(*(undefined4 *)(pAVar6 + 0x40));
    (**(code **)(iVar2 + 0x30))();
  }
  CDC::SetBkMode(this_01,1);
  FillRect(*(HDC *)(this_01 + 4),&local_24,local_88);
  this_00 = local_84;
  iVar2 = *(int *)(param_1 + 8);
  if (-1 < iVar2) {
    local_94 = 0;
    local_98 = CFont::vftable;
    iVar3 = *(int *)(param_1 + 0x2c);
    local_90 = 0;
    local_8._0_1_ = 1;
    if (iVar3 != 0) {
      if ((*(uint *)(iVar3 + 0x10) & 6) != 0) {
        tVar4.y = ((local_24.bottom - local_24.top) + -0x10) / 2 + local_24.top;
        tVar4.x = local_24.left;
        CImageList::Draw((CImageList *)(local_84 + 0x80),this_01,~(*(uint *)(iVar3 + 0x10) >> 1) & 1
                         ,tVar4,0);
      }
      local_24.left = local_24.left + 0x16;
      if ((DAT_1020dfd4 != 0) && (*(char *)(iVar3 + 0xc) != '\x02')) {
        pAVar6 = GetGlobalData();
        GetObjectW(*(HANDLE *)(pAVar6 + 0x120),0x5c,&local_80);
        lstrcpyW(local_80.lfFaceName,*(LPCWSTR *)(iVar3 + 4));
        if (*(BYTE *)(iVar3 + 0xc) != '\x01') {
          local_80.lfCharSet = *(BYTE *)(iVar3 + 0xc);
        }
        if (local_80.lfHeight < 0) {
          local_80.lfHeight = local_80.lfHeight + -4;
        }
        else {
          local_80.lfHeight = local_80.lfHeight + 4;
        }
        pHVar8 = CreateFontIndirectW(&local_80);
        CMenu::Attach((CMenu *)&local_98,(HMENU__ *)pHVar8);
        pcVar1 = *(code **)(*(int *)this_01 + 0x28);
        guard_check_icall(&local_98);
        local_90 = (*pcVar1)();
      }
    }
    uVar9 = FUN_10048e90();
    FUN_10034c30(uVar9);
    local_8 = CONCAT31(local_8._1_3_,2);
    CComboBox::GetLBText
              ((CComboBox *)this_00,iVar2,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_84);
    iVar2 = *(int *)this_01;
    guard_check_icall(local_84,*(undefined4 *)(local_84 + -0xc),&local_24,0x24);
    (**(code **)(iVar2 + 0x68))();
    if (local_90 != 0) {
      pcVar1 = *(code **)(*(int *)this_01 + 0x28);
      guard_check_icall(local_90);
      (*pcVar1)();
    }
    FUN_10034f00();
    local_8 = local_8 & 0xffffff00;
    local_98 = CFont::vftable;
    CImageList::~CImageList((CImageList *)&local_98);
  }
  pcVar1 = *(code **)(*(int *)this_01 + 0x20);
  guard_check_icall(uVar5);
  (*pcVar1)();
  local_8c = CBrush::vftable;
  CImageList::~CImageList((CImageList *)&local_8c);
  FUN_1017f5f4();
  return;
}

