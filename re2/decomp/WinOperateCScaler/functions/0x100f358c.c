// rea decompile_all
// name: FUN_100f358c
// address: 0x100f358c
// body: available
// range: 0x100f358c-0x100f39c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100f358c(CDC *param_1,int *param_2,int param_3)

{
  double dVar1;
  int iVar2;
  code *pcVar3;
  CMFCToolBarImages *this;
  CMFCVisualManager *pCVar4;
  int iVar5;
  AFX_GLOBAL_DATA *pAVar6;
  CUserTool *pCVar7;
  int iVar8;
  CMFCToolBarImages *pCVar9;
  undefined4 uVar10;
  int *piVar11;
  int in_ECX;
  CDC *pCVar12;
  int local_68;
  int local_60;
  int local_5c;
  undefined4 local_58;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_54 [4];
  int local_50;
  CUserTool *local_48;
  int *local_44;
  int local_40;
  CUserTool *local_3c;
  int local_38;
  int local_34;
  CMFCToolBarImages *local_30;
  CDC *local_2c;
  int local_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  int local_18;
  int local_14;
  int local_10;
  int iStack_c;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_2c = param_1;
  local_58 = *(undefined4 *)(in_ECX + 8);
  *(undefined4 *)(in_ECX + 8) = 0;
  local_44 = param_2;
  local_30 = (CMFCToolBarImages *)&DAT_10209de8;
  if (*(int *)(in_ECX + 4) == 0) {
    if (DAT_1020a01c == DAT_10209dec) {
      local_30 = (CMFCToolBarImages *)&DAT_1020a018;
    }
  }
  else {
    local_30 = DAT_10209ce0;
  }
  local_48 = (CUserTool *)0x0;
  local_34 = in_ECX;
  if ((DAT_1020b6c8 != (CUserToolsManager *)0x0) && (*(int *)(in_ECX + 4) == 0)) {
    local_48 = CUserToolsManager::FindTool(DAT_1020b6c8,*(uint *)(in_ECX + 0x20));
  }
  FUN_1006a934(&local_40);
  local_68 = *param_2;
  local_38 = local_40 + 6;
  iVar2 = param_2[1];
  local_60 = param_2[2];
  local_5c = param_2[3];
  if (param_3 != 0) {
    pCVar4 = CMFCVisualManager::GetInstance();
    pcVar3 = *(code **)(*(int *)pCVar4 + 0x98);
    guard_check_icall();
    iVar5 = (*pcVar3)();
    if (iVar5 == 0) {
      if (*(int *)(in_ECX + 4) == 0) {
        iVar5 = *(int *)(in_ECX + 0x34);
      }
      else {
        iVar5 = *(int *)(in_ECX + 0x38);
      }
      if ((-1 < iVar5) && (local_30 != (CMFCToolBarImages *)0x0)) {
        local_68 = local_68 + local_38;
        local_18 = *local_44;
        local_14 = local_44[1];
        iStack_c = local_44[3];
        local_10 = local_68;
        pCVar4 = CMFCVisualManager::GetInstance();
        pcVar3 = *(code **)(*(int *)pCVar4 + 0x84);
        guard_check_icall(local_2c,local_34,local_18,local_14,local_10,iStack_c,2);
        (*pcVar3)();
        pCVar4 = CMFCVisualManager::GetInstance();
        pcVar3 = *(code **)(*(int *)pCVar4 + 0x88);
        guard_check_icall(local_2c,local_34,local_18,local_14,local_10,iStack_c,2);
        (*pcVar3)();
      }
    }
  }
  pCVar4 = CMFCVisualManager::GetInstance();
  pcVar3 = *(code **)(*(int *)pCVar4 + 0x138);
  guard_check_icall(local_2c,local_68,iVar2,local_60,local_5c,param_3);
  local_5c = (*pcVar3)();
  pCVar12 = local_2c;
  this = local_30;
  iVar2 = local_34;
  iStack_24 = local_44[1];
  local_20 = local_44[2];
  iStack_1c = local_44[3];
  local_28 = *local_44 + 10 + local_40;
  if (*(int *)(local_34 + 4) == 0) {
    iVar5 = *(int *)(local_34 + 0x34);
  }
  else {
    iVar5 = *(int *)(local_34 + 0x38);
  }
  if ((iVar5 < 0) || (local_30 == (CMFCToolBarImages *)0x0)) goto LAB_100f390f;
  if (local_48 != (CUserTool *)0x0) {
    local_18 = *local_44;
    local_14 = local_44[1];
    iStack_c = local_44[3];
    local_10 = local_18 + local_38;
    CUserTool::DrawToolIcon(local_48,local_2c,(CRect *)&local_18);
    goto LAB_100f390f;
  }
  if ((param_3 == 0) && (pCVar4 = CMFCVisualManager::GetInstance(), *(int *)(pCVar4 + 0x5c) != 0)) {
    local_34 = 1;
LAB_100f3781:
    local_50 = 0;
  }
  else {
    local_34 = 0;
    if ((param_3 == 0) || (pCVar4 = CMFCVisualManager::GetInstance(), *(int *)(pCVar4 + 0x54) == 0))
    goto LAB_100f3781;
    pAVar6 = GetGlobalData();
    iVar5 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar6);
    if (iVar5 != 0) goto LAB_100f3781;
    local_50 = 1;
  }
  local_48 = (CUserTool *)0x0;
  pAVar6 = GetGlobalData();
  if (*(int *)(pAVar6 + 0x1e8) == 0) {
    dVar1 = 1.0;
  }
  else {
    dVar1 = *(double *)(pAVar6 + 0x1e0);
  }
  pCVar7 = local_3c;
  iVar5 = local_40;
  if (((dVar1 == 1.0) || (DAT_10209cc0 != 0)) &&
     ((*(int *)(iVar2 + 4) == 0 ||
      ((local_40 == *(int *)(this + 0x54) && (local_3c == *(CUserTool **)(this + 0x58))))))) {
    pCVar7 = local_48;
    iVar5 = 0;
  }
  CMFCToolBarImages::PrepareDrawImage(this,&local_14,iVar5,pCVar7,local_34);
  local_30 = (CMFCToolBarImages *)(*local_44 + 3);
  iVar5 = local_44[1] + 3;
  pAVar6 = GetGlobalData();
  if (*(int *)(pAVar6 + 0x1e8) == 0) {
    dVar1 = 1.0;
  }
  else {
    dVar1 = *(double *)(pAVar6 + 0x1e0);
  }
  if ((dVar1 != 1.0) && (DAT_10209cc0 != 0)) {
    if ((local_40 - *(int *)(this + 0x54)) / 2 < 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (local_40 - *(int *)(this + 0x54)) / 2;
    }
    local_30 = local_30 + iVar8;
    if (((int)local_3c - *(int *)(this + 0x58)) / 2 < 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = ((int)local_3c - *(int *)(this + 0x58)) / 2;
    }
    iVar5 = iVar5 + iVar8;
  }
  pCVar9 = local_30;
  if (local_50 != 0) {
    local_30 = local_30 + 1;
    if (*(int *)(iVar2 + 4) == 0) {
      iVar8 = *(int *)(iVar2 + 0x34);
    }
    else {
      iVar8 = *(int *)(iVar2 + 0x38);
    }
    CMFCToolBarImages::Draw(this,local_2c,(int)local_30,iVar5 + 1,iVar8,0,0,0,1,0,0xff);
    pCVar9 = local_30 + -2;
    iVar5 = iVar5 + -1;
  }
  pCVar12 = local_2c;
  if (*(int *)(iVar2 + 4) == 0) {
    iVar8 = *(int *)(iVar2 + 0x34);
  }
  else {
    iVar8 = *(int *)(iVar2 + 0x38);
  }
  CMFCToolBarImages::Draw(this,local_2c,(int)pCVar9,iVar5,iVar8,0,0,0,0,local_34,0xff);
  FUN_1005bd4d(&local_14);
LAB_100f390f:
  if (*(int *)(*(int *)(iVar2 + 0x2c) + -0xc) != 0) {
    pcVar3 = *(code **)(*(int *)pCVar12 + 0x30);
    guard_check_icall(local_5c);
    uVar10 = (*pcVar3)();
    pCVar12 = local_2c;
    CDC::SetBkMode(local_2c,1);
    iVar5 = *(int *)pCVar12;
    guard_check_icall(*(int *)(iVar2 + 0x2c),*(undefined4 *)(*(int *)(iVar2 + 0x2c) + -0xc),
                      &local_28,0x24);
    (**(code **)(iVar5 + 0x68))();
    pcVar3 = *(code **)(*(int *)local_2c + 0x30);
    guard_check_icall(uVar10);
    pCVar12 = local_2c;
    (*pcVar3)();
    iVar5 = local_20 - local_28;
    piVar11 = (int *)CDC::GetTextExtent(pCVar12,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                                 *)&local_60);
    if (*piVar11 <= iVar5) {
      CDC::GetTextExtent(pCVar12,local_54);
    }
  }
  *(undefined4 *)(iVar2 + 8) = local_58;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

