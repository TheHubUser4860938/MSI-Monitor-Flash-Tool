// rea decompile_all
// name: FUN_10042691
// address: 0x10042691
// body: available
// range: 0x10042691-0x1004299e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004299a to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10042691(CDC *param_1,int *param_2,uint param_3)

{
  code *pcVar1;
  int iVar2;
  CMFCColorButton *pCVar3;
  AFX_GLOBAL_DATA *pAVar4;
  UINT UVar5;
  CMFCVisualManager *pCVar6;
  int iVar7;
  HBRUSH hbr;
  CMFCColorButton *in_ECX;
  COLORREF color;
  ulong uVar8;
  int local_70 [2];
  undefined **local_68;
  HBRUSH local_64;
  CPalette *local_60;
  undefined4 local_5c;
  COLORREF local_58;
  int *local_54;
  CDC *local_50;
  CMFCColorButton *local_4c;
  tagRECT local_48;
  int local_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_50 = param_1;
  local_54 = param_2;
  local_4c = in_ECX;
  if (*(int *)(in_ECX + 0x800) == 0) {
    CMFCColorButton::RebuildPalette(in_ECX,(CPalette *)0x0);
  }
  local_60 = CDC::SelectPalette(param_1,*(CPalette **)(in_ECX + 0x800),0);
  RealizePalette(*(HDC *)(param_1 + 4));
  FUN_10084bc5(local_70);
  pCVar3 = local_4c;
  local_18.left = *local_54;
  local_18.top = local_54[1];
  local_18.bottom = local_54[3];
  local_28.left = local_54[2] + (-8 - local_70[0]);
  local_28.top = local_54[1];
  local_28.right = local_54[2];
  local_28.bottom = local_54[3];
  color = *(COLORREF *)(local_4c + 0x7b0);
  local_18.right = local_28.left;
  if (*(COLORREF *)(local_4c + 0x7b0) == 0xffffffff) {
    local_58 = *(COLORREF *)(local_4c + 0x7b4);
    color = local_58;
    if (*(int *)(*(int *)(local_4c + 0x7f8) + -0xc) != 0) {
      local_38 = (local_18.bottom - local_18.top) + local_18.left;
      iStack_34 = local_54[1];
      iStack_2c = local_54[3];
      pcVar1 = *(code **)(*(int *)local_4c + 0x18c);
      local_30 = local_28.left;
      local_18.right = local_38;
      guard_check_icall(param_1);
      local_54 = (int *)(*pcVar1)();
      if (local_54 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1001d023();
      }
      CDC::SetBkMode(param_1,1);
      iVar7 = *(int *)param_1;
      pAVar4 = GetGlobalData();
      guard_check_icall(*(undefined4 *)(pAVar4 + 0x28));
      (**(code **)(iVar7 + 0x30))();
      iVar7 = *(int *)(pCVar3 + 0x7f8);
      iVar2 = *(int *)param_1;
      guard_check_icall(iVar7,*(undefined4 *)(iVar7 + -0xc),&local_38,0x8025);
      (**(code **)(iVar2 + 0x68))();
      pcVar1 = *(code **)(*(int *)param_1 + 0x28);
      guard_check_icall(local_54);
      (*pcVar1)();
      color = local_58;
    }
  }
  InflateRect(&local_18,-2,-2);
  pAVar4 = GetGlobalData();
  uVar8 = *(ulong *)(pAVar4 + 0x24);
  pAVar4 = GetGlobalData();
  CDC::Draw3dRect(param_1,&local_18,*(ulong *)(pAVar4 + 0x24),uVar8);
  InflateRect(&local_18,-1,-1);
  pAVar4 = GetGlobalData();
  uVar8 = *(ulong *)(pAVar4 + 0x30);
  pAVar4 = GetGlobalData();
  CDC::Draw3dRect(param_1,&local_18,*(ulong *)(pAVar4 + 0x30),uVar8);
  InflateRect(&local_18,-1,-1);
  if ((color != 0xffffffff) && ((param_3 & 4) == 0)) {
    pAVar4 = GetGlobalData();
    if (*(int *)(pAVar4 + 0x1ac) == 8) {
      UVar5 = GetNearestPaletteIndex(*(HPALETTE *)(*(int *)(pCVar3 + 0x800) + 4),color);
      color = UVar5 & 0xffff | 0x1000000;
    }
    CBrush::CBrush((CBrush *)&local_68,color);
    FillRect(*(HDC *)(param_1 + 4),&local_18,local_64);
    local_68 = CBrush::vftable;
    CImageList::~CImageList((CImageList *)&local_68);
  }
  local_48.left = local_28.left;
  local_48.top = local_28.top;
  local_48.right = local_28.right;
  local_48.bottom = local_28.bottom;
  InflateRect(&local_48,-2,-2);
  if (DAT_1020973c != 0) {
    pCVar6 = CMFCVisualManager::GetInstance();
    pcVar1 = *(code **)(*(int *)pCVar6 + 0x1c8);
    guard_check_icall(local_50,local_48.left,local_48.top,local_48.right,local_48.bottom,param_3 & 4
                      ,*(int *)(local_4c + 0xac),*(int *)(local_4c + 0xb4));
    iVar7 = (*pcVar1)();
    param_1 = local_50;
    if (iVar7 != 0) goto LAB_10042976;
  }
  pAVar4 = GetGlobalData();
  hbr = (HBRUSH)0x0;
  if (pAVar4 != (AFX_GLOBAL_DATA *)0xffffff68) {
    hbr = *(HBRUSH *)(pAVar4 + 0x9c);
  }
  FillRect(*(HDC *)(param_1 + 4),&local_28,hbr);
  local_5c = 0;
  local_58 = 0;
  CMenuImages::Draw(param_1,0xd,(CRect *)&local_28,param_3 >> 2 & 1,(CSize *)&local_5c);
  pAVar4 = GetGlobalData();
  uVar8 = *(ulong *)(pAVar4 + 0x30);
  pAVar4 = GetGlobalData();
  CDC::Draw3dRect(param_1,&local_28,*(ulong *)(pAVar4 + 0x34),uVar8);
  InflateRect(&local_28,-1,-1);
  pAVar4 = GetGlobalData();
  uVar8 = *(ulong *)(pAVar4 + 0x20);
  pAVar4 = GetGlobalData();
  CDC::Draw3dRect(param_1,&local_28,*(ulong *)(pAVar4 + 0x24),uVar8);
LAB_10042976:
  if (local_60 != (CPalette *)0x0) {
    CDC::SelectPalette(param_1,local_60,0);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

