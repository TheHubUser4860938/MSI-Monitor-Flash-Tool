// rea decompile_all
// name: OnDrawOnList
// address: 0x100ef01f
// body: available
// range: 0x100ef01f-0x100ef36e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CMFCRibbonEdit::OnDrawOnList(class CDC *,class
   ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >,int,class
   CRect,int,int)
    public: virtual void __thiscall CMFCRibbonEdit::OnDrawOnList(class CDC *,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > >,int,class
   CRect,int,int)
   
   Library: Visual Studio 2015 Release */

void OnDrawOnList(CDC *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  CDC *this;
  int iVar10;
  CMFCVisualManager *pCVar11;
  CPen *pCVar12;
  int *in_ECX;
  int local_164;
  int local_160;
  int local_15c;
  undefined1 local_158 [4];
  int *local_154;
  CMFCVisualManager *local_150;
  CDC *local_14c;
  CMFCToolBarComboBoxButton local_148 [244];
  tagRECT local_54;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x174;
  local_14c = param_1;
  local_8 = 0;
  local_34.left = param_4;
  local_150 = (CMFCVisualManager *)((param_7 - param_5) * 2);
  local_15c = in_ECX[0x35];
  in_ECX[0x35] = 0;
  local_34.top = param_5;
  local_34.right = param_4 + param_3;
  local_34.bottom = param_7;
  pcVar8 = *(code **)(*in_ECX + 0x114);
  local_154 = in_ECX;
  guard_check_icall(&local_164,1);
  (*pcVar8)();
  if ((local_164 != 0) || (local_160 != 0)) {
    InflateRect(&local_34,-1,0);
    iVar10 = ((local_34.bottom - local_34.top) - local_160) / 2;
    if (iVar10 < 0) {
      iVar10 = 0;
    }
    local_34.top = local_34.top + iVar10;
    local_34.bottom = local_34.top + local_160;
    pcVar8 = *(code **)(*in_ECX + 0x120);
    guard_check_icall(local_14c,1,local_34.left,local_34.top,local_34.right,local_34.bottom);
    (*pcVar8)();
  }
  local_44.left = param_6 - (int)local_150;
  local_44.top = param_5;
  local_44.right = param_6;
  local_44.bottom = param_7;
  InflateRect(&local_44,-1,-1);
  local_54.left = param_4 + param_3;
  local_54.top = param_5;
  local_54.bottom = param_7;
  local_54.right = local_44.left;
  InflateRect(&local_54,-3,0);
  iVar10 = *(int *)local_14c;
  guard_check_icall(param_2,*(undefined4 *)(param_2 + -0xc),&local_54,0x824);
  (**(code **)(iVar10 + 0x68))();
  iVar10 = in_ECX[0x1d];
  iVar1 = in_ECX[0x1e];
  iVar2 = in_ECX[0x1f];
  iVar3 = in_ECX[0x20];
  iVar4 = in_ECX[0x4d];
  iVar5 = in_ECX[0x4e];
  iVar6 = in_ECX[0x4f];
  iVar7 = in_ECX[0x50];
  in_ECX[0x1d] = local_44.left;
  in_ECX[0x1e] = local_44.top;
  in_ECX[0x1f] = local_44.right;
  in_ECX[0x20] = local_44.bottom;
  in_ECX[0x4d] = local_44.left;
  in_ECX[0x4e] = local_44.top;
  in_ECX[0x4f] = local_44.right;
  in_ECX[0x50] = local_44.bottom;
  in_ECX[0x4f] = in_ECX[0x4f] + -0xf;
  pCVar11 = CMFCVisualManager::GetInstance();
  pcVar8 = *(code **)(*(int *)pCVar11 + 0x238);
  guard_check_icall(local_14c);
  (*pcVar8)();
  pCVar11 = CMFCVisualManager::GetInstance();
  pcVar8 = *(code **)(*(int *)pCVar11 + 0x240);
  guard_check_icall(local_14c);
  (*pcVar8)();
  if (in_ECX[0x77] == 0) {
    local_24.left = local_44.left;
    local_24.top = local_44.top;
    local_24.right = local_44.right;
    local_24.bottom = local_44.bottom;
    InflateRect(&local_24,-3,-3);
    this = local_14c;
    local_24.right = local_24.left + 7;
    local_24.bottom = local_24.bottom + -1;
    pcVar8 = *(code **)(*(int *)local_14c + 0x24);
    guard_check_icall(7);
    pCVar12 = (CPen *)(*pcVar8)();
    CDC::MoveTo(this,(int)local_158,local_24.left);
    CDC::LineTo(this,local_24.right,local_24.top);
    CDC::MoveTo(this,(int)local_158,(local_24.right + local_24.left) / 2);
    CDC::LineTo(this,(local_24.right + local_24.left) / 2,local_24.bottom);
    CDC::MoveTo(this,(int)local_158,local_24.left);
    CDC::LineTo(this,local_24.right,local_24.bottom);
    CDC::SelectObject(this,pCVar12);
    local_154 = in_ECX;
  }
  else {
    CMFCToolBarComboBoxButton::CMFCToolBarComboBoxButton(local_148);
    local_24.left = in_ECX[0x4f];
    local_8 = CONCAT31(local_8._1_3_,1);
    local_24.top = local_44.top;
    local_24.right = local_44.right;
    local_24.bottom = local_44.bottom;
    InflateRect(&local_24,-2,-2);
    local_150 = CMFCVisualManager::GetInstance();
    iVar9 = *(int *)local_150;
    guard_check_icall(local_14c,local_24.left,local_24.top,local_24.right,local_24.bottom,0,0,0,
                      local_148);
    (**(code **)(iVar9 + 0x6c))();
    CMFCToolBarComboBoxButton::~CMFCToolBarComboBoxButton(local_148);
  }
  local_154[0x1d] = iVar10;
  local_154[0x35] = local_15c;
  local_154[0x1e] = iVar1;
  local_154[0x1f] = iVar2;
  local_154[0x20] = iVar3;
  local_154[0x4d] = iVar4;
  local_154[0x4e] = iVar5;
  local_154[0x4f] = iVar6;
  local_154[0x50] = iVar7;
  ATL::CStringData::Release((CStringData *)(param_2 + -0x10));
  FUN_10154478();
  return;
}

