// rea decompile_all
// name: FUN_100e4d2f
// address: 0x100e4d2f
// body: available
// range: 0x100e4d2f-0x100e51b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_100e4d2f(CDC *param_1,int *param_2,CMFCToolBarImages *param_3,int param_4,int param_5,
                 int param_6)

{
  code *pcVar1;
  CMFCVisualManager *pCVar2;
  int iVar3;
  AFX_GLOBAL_DATA *pAVar4;
  int iVar5;
  CStringData *pCVar6;
  CMFCToolBarButton *in_ECX;
  int iVar7;
  int iVar8;
  CDC *pCVar9;
  undefined4 uVar10;
  int local_80;
  int local_7c;
  int local_60;
  CStringData *local_5c;
  CDC *local_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x74;
  local_8 = 0x100e4d3b;
  local_80 = 0;
  local_7c = 0;
  local_58 = param_1;
  if (((param_5 == 0) && (param_6 != 0)) && ((*(uint *)(in_ECX + 0x24) & 0x20000) != 0)) {
    local_80 = 1;
    local_7c = 1;
  }
  local_24.left = *param_2;
  local_24.top = param_2[1];
  local_24.right = param_2[2];
  local_24.bottom = param_2[3];
  local_34.left = *param_2;
  local_34.top = param_2[1];
  local_34.right = param_2[2];
  local_34.bottom = param_2[3];
  if (*(int *)(in_ECX + 0x48) != 0) {
    pCVar2 = CMFCVisualManager::GetInstance();
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x140);
    guard_check_icall(&local_60);
    (*pcVar1)();
    if ((local_60 != 0) || (local_5c != (CStringData *)0x0)) {
      InflateRect(&local_24,-(local_60 / 2 + 1),-((int)local_5c / 2 + 1));
      if (param_4 == 0) {
        iVar5 = 0;
        pCVar6 = local_5c;
      }
      else {
        pCVar6 = (CStringData *)0x0;
        iVar5 = local_60;
      }
      OffsetRect(&local_34,iVar5,(int)pCVar6);
    }
  }
  local_44.left = local_24.left;
  local_44.top = local_24.top;
  local_44.right = local_24.right;
  local_44.bottom = local_24.bottom;
  local_34.top = local_34.top + 5;
  if (param_3 == (CMFCToolBarImages *)0x0) {
LAB_100e4feb:
    if ((param_6 == 0) || (*(int *)(*(int *)(in_ECX + 0x70) + 0x1dd4) == 0)) goto LAB_100e503f;
    if (param_5 == 0) {
      CDrawingManager::CDrawingManager((CDrawingManager *)&local_60,local_58);
      local_8 = 1;
      FUN_10087a3d(local_44.left,local_44.top,local_44.right,local_44.bottom,0x55,0xffffffff,0,
                   0xffffffff);
      local_8 = 0xffffffff;
      FUN_10084c54();
      goto LAB_100e503f;
    }
  }
  else {
    if (*(int *)(in_ECX + 4) == 0) {
      iVar5 = *(int *)(in_ECX + 0x34);
    }
    else {
      iVar5 = *(int *)(in_ECX + 0x38);
    }
    if (iVar5 < 0) goto LAB_100e4feb;
    iVar5 = *(int *)(param_3 + 0x54);
    local_5c = *(CStringData **)(param_3 + 0x58);
    if (param_4 == 0) {
      iVar8 = local_24.top + 5;
      iVar7 = local_24.left + ((local_24.right - local_24.left) - iVar5) / 2;
      local_34.top = (int)local_5c + 2 + local_34.top;
    }
    else {
      iVar7 = local_24.left + 5;
      local_54 = local_34.left + iVar5 + 10;
      iVar8 = (int)(local_24.bottom + (-local_24.top - (int)local_5c)) / 2 + local_24.top;
      iStack_4c = local_34.right;
      iStack_48 = local_34.bottom;
      iVar3 = *(int *)local_58;
      iStack_50 = local_34.top;
      local_34.left = local_54;
      guard_check_icall(*(int *)(in_ECX + 0x2c),*(undefined4 *)(*(int *)(in_ECX + 0x2c) + -0xc),
                        &local_54,0x410);
      iVar3 = (**(code **)(iVar3 + 0x68))();
      local_34.top = (int)(local_24.bottom + (-local_24.top - iVar3)) / 2 + local_24.top;
    }
    local_60 = iVar5 + iVar7;
    local_5c = (CStringData *)((int)local_5c + iVar8);
    local_44.left = iVar7;
    local_44.top = iVar8;
    local_44.right = local_60;
    local_44.bottom = (LONG)local_5c;
    InflateRect(&local_44,2,2);
    if (*(int *)(*(int *)(in_ECX + 0x70) + 0x1dd4) == 0) {
      if (*(int *)(in_ECX + 0x48) != 0) {
        pCVar2 = CMFCVisualManager::GetInstance();
        pcVar1 = *(code **)(*(int *)pCVar2 + 0x140);
        guard_check_icall(&local_60);
        (*pcVar1)();
        if ((local_60 != 0) || (local_5c != (CStringData *)0x0)) {
          InflateRect(&local_44,local_60 / 2 + -1,(int)local_5c / 2 + -1);
        }
      }
      pCVar9 = local_58;
      CMFCToolBarButton::FillInterior(in_ECX,local_58,(CRect *)&local_44,param_6,0);
    }
    else {
      pCVar9 = local_58;
      if ((param_6 != 0) && (param_5 == 0)) {
        CDrawingManager::CDrawingManager((CDrawingManager *)&local_60,local_58);
        local_8 = 0;
        FUN_10087a3d(local_44.left,local_44.top,local_44.right,local_44.bottom,0x55,0xffffffff,0,
                     0xffffffff);
        local_8 = 0xffffffff;
        FUN_10084c54();
        pCVar9 = local_58;
      }
    }
    if (*(int *)(in_ECX + 4) == 0) {
      iVar5 = *(int *)(in_ECX + 0x34);
    }
    else {
      iVar5 = *(int *)(in_ECX + 0x38);
    }
    CMFCToolBarImages::Draw
              (param_3,pCVar9,local_80 + iVar7,iVar8 + local_7c,iVar5,0,
               *(uint *)(in_ECX + 0x24) & 0x40000,0,0,0,0xff);
LAB_100e503f:
    if ((param_5 == 0) && ((param_6 != 0 || ((*(uint *)(in_ECX + 0x24) & 0x30000) != 0)))) {
      if ((((*(uint *)(in_ECX + 0x24) & 0x20000) == 0) || (param_6 == 0)) &&
         ((*(uint *)(in_ECX + 0x24) & 0x10000) == 0)) {
        pCVar2 = CMFCVisualManager::GetInstance();
        uVar10 = 2;
      }
      else {
        pCVar2 = CMFCVisualManager::GetInstance();
        uVar10 = 1;
      }
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x88);
      guard_check_icall(local_58,in_ECX,local_44.left,local_44.top,local_44.right,local_44.bottom,
                        uVar10);
      (*pcVar1)();
    }
  }
  if ((*(int *)(in_ECX + 0x18) == 0) || (*(int *)(*(int *)(in_ECX + 0x2c) + -0xc) == 0))
  goto LAB_100e51a9;
  uVar10 = 0;
  if (param_6 == 0) {
    if ((*(uint *)(in_ECX + 0x24) & 0x30000) != 0) {
      uVar10 = 1;
    }
  }
  else {
    uVar10 = 2;
  }
  if ((*(uint *)(in_ECX + 0x24) & 0x40000) == 0) {
    iVar5 = *(int *)(*(int *)(in_ECX + 0x70) + 0xd40);
LAB_100e50fa:
    if (iVar5 == -1) goto LAB_100e50ff;
  }
  else {
    if (*(int *)(*(int *)(in_ECX + 0x70) + 0xd54) != 0) {
      pAVar4 = GetGlobalData();
      iVar5 = *(int *)(pAVar4 + 0x38);
      goto LAB_100e50fa;
    }
LAB_100e50ff:
    if (*(int *)(*(int *)(in_ECX + 0x70) + 0xd54) == 0) {
      pCVar2 = CMFCVisualManager::GetInstance();
      pcVar1 = *(code **)(*(int *)pCVar2 + 0xb4);
      guard_check_icall(in_ECX,uVar10);
      iVar5 = (*pcVar1)();
    }
    else {
      pAVar4 = GetGlobalData();
      iVar5 = *(int *)(pAVar4 + 0x70);
    }
  }
  pCVar9 = local_58;
  pcVar1 = *(code **)(*(int *)local_58 + 0x30);
  guard_check_icall(iVar5);
  (*pcVar1)();
  iVar5 = *(int *)(in_ECX + 0x2c);
  if (*(int *)(in_ECX + 0x7c) == 0) {
    pCVar6 = (CStringData *)FUN_100187a0(iVar5 + -0x10);
    local_5c = pCVar6 + 0x10;
    iVar5 = *(int *)local_58;
    local_8 = 2;
    guard_check_icall(local_5c,*(undefined4 *)(pCVar6 + 4),&local_34,0x8010);
    (**(code **)(iVar5 + 0x68))();
    ATL::CStringData::Release(pCVar6);
  }
  else {
    iVar3 = *(int *)pCVar9;
    guard_check_icall(iVar5,*(undefined4 *)(iVar5 + -0xc),&local_34,0x11);
    (**(code **)(iVar3 + 0x68))();
  }
LAB_100e51a9:
  FUN_10154478();
  return;
}

