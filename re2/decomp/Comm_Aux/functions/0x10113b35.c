// rea decompile_all
// name: OnDrawButton
// address: 0x10113b35
// body: available
// range: 0x10113b35-0x10113e1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual void __thiscall CMFCCaptionBar::OnDrawButton(class CDC *,class CRect,class
   ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > > const &,int)
    protected: virtual void __thiscall CMFCCaptionBar::OnDrawButton(class CDC *,class CRect,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &,int)
   
   Library: Visual Studio 2015 Release */

void OnDrawButton(CDC *param_1,LONG param_2,LONG param_3,int param_4,int param_5,int *param_6,
                 int param_7)

{
  code *pcVar1;
  CDC *pCVar2;
  CMFCVisualManager *pCVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  COLORREF CVar7;
  CPen *pCVar8;
  CPen *pCVar9;
  int in_ECX;
  POINT *pPVar10;
  undefined4 uVar11;
  undefined **local_60;
  int *local_5c;
  int local_58;
  CDC *local_54;
  int local_50;
  tagRECT local_4c;
  tagRECT local_3c;
  POINT local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x54;
  local_8 = 0x10113b41;
  local_54 = param_1;
  local_5c = param_6;
  if ((*(int *)(in_ECX + 0x470) == 0) && (*(int *)(in_ECX + 0x478) == 0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
  local_50 = in_ECX;
  pCVar3 = CMFCVisualManager::GetInstance();
  pcVar1 = *(code **)(*(int *)pCVar3 + 0xd8);
  guard_check_icall(local_54,local_50,param_2,param_3,param_4,param_5,uVar11,
                    *(undefined4 *)(in_ECX + 0x474),*(int *)(in_ECX + 0x480) == 0,
                    *(undefined4 *)(in_ECX + 0x484),0);
  iVar4 = (*pcVar1)();
  iVar5 = local_50;
  local_4c.left = param_2;
  local_4c.top = param_3;
  local_4c.right = param_4;
  local_4c.bottom = param_5;
  InflateRect(&local_4c,-*(int *)(local_50 + 0x494),0);
  if (*(int *)(iVar5 + 0x2c4) != 0) {
    InflateRect(&local_4c,-10,0);
  }
  pCVar2 = local_54;
  if (((*(int *)(iVar5 + 0x458) != 0) && (param_7 != 0)) && (*(int *)(iVar5 + 0x484) != 0)) {
    local_4c.right = local_4c.right + -10;
  }
  local_58 = -1;
  if (iVar4 != -1) {
    pcVar1 = *(code **)(*(int *)local_54 + 0x30);
    guard_check_icall(iVar4);
    local_58 = (*pcVar1)();
  }
  iVar4 = *(int *)pCVar2;
  guard_check_icall(*local_5c,*(undefined4 *)(*local_5c + -0xc),&local_4c,0x8024);
  (**(code **)(iVar4 + 0x68))();
  if (local_58 != -1) {
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x30);
    guard_check_icall(local_58);
    (*pcVar1)();
  }
  if ((*(int *)(iVar5 + 0x458) != 0) && (param_7 != 0)) {
    if (*(int *)(iVar5 + 0x484) != 0) {
      local_3c.right = param_4;
      local_3c.bottom = param_5 - *(int *)(local_50 + 0x490);
      local_3c.left = local_4c.right;
      local_3c.top = local_3c.bottom + -10;
      iVar4 = (param_4 - local_4c.right) / 2 + local_4c.right;
      InflateRect(&local_3c,0,(local_3c.bottom - local_3c.top) / -3);
      iVar5 = (local_3c.bottom - local_3c.top) / -3;
      InflateRect(&local_3c,iVar5,iVar5);
      pCVar2 = local_54;
      local_3c.right = (iVar4 - local_3c.top) + 1 + local_3c.bottom;
      local_3c.left = local_3c.top + -1 + (iVar4 - local_3c.bottom);
      uVar6 = local_3c.right - local_3c.left;
      if ((uVar6 & 1) != 0) {
        uVar6 = uVar6 - 1;
      }
      iVar5 = 3;
      pPVar10 = &local_2c;
      do {
        pPVar10->x = 0;
        pPVar10->y = 0;
        iVar5 = iVar5 + -1;
        pPVar10 = pPVar10 + 1;
      } while (iVar5 != 0);
      local_1c = (int)uVar6 / 2 + local_3c.left;
      local_18 = local_3c.bottom + 1;
      local_2c.y = local_3c.top;
      local_20 = local_3c.top;
      local_2c.x = local_3c.left;
      local_24 = local_3c.right;
      CVar7 = GetTextColor(*(HDC *)(local_54 + 8));
      CBrush::CBrush((CBrush *)&local_60,CVar7);
      local_8 = 0;
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x24);
      guard_check_icall(8);
      pCVar8 = (CPen *)(*pcVar1)();
      pCVar9 = CDC::SelectObject(pCVar2,(CPen *)&local_60);
      CDC::SetPolyFillMode(pCVar2,2);
      Polygon(*(HDC *)(pCVar2 + 4),&local_2c,3);
      CDC::SelectObject(pCVar2,pCVar9);
      CDC::SelectObject(pCVar2,pCVar8);
      local_8 = 0xffffffff;
      local_60 = CBrush::vftable;
      CImageList::~CImageList((CImageList *)&local_60);
      iVar5 = local_50;
    }
    if ((*(int *)(iVar5 + 0x470) == 0) && (*(int *)(iVar5 + 0x478) == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = 1;
    }
    pCVar3 = CMFCVisualManager::GetInstance();
    pcVar1 = *(code **)(*(int *)pCVar3 + 0xdc);
    guard_check_icall(local_54,local_50,param_2,param_3,param_4,param_5,uVar11,
                      *(undefined4 *)(iVar5 + 0x474),*(int *)(iVar5 + 0x480) == 0,
                      *(undefined4 *)(iVar5 + 0x484),0);
    (*pcVar1)();
  }
  FUN_1017f5f4();
  return;
}

