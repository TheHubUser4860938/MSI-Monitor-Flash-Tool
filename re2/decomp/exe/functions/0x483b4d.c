// rea decompile_all
// name: FUN_00483b4d
// address: 0x483b4d
// body: available
// range: 0x483b4d-0x483fce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_00483b4d(CDC *param_1,int *param_2,CMFCToolBarImages *param_3,int param_4,int param_5,
                 int param_6)

{
  code *pcVar1;
  CMFCVisualManager *pCVar2;
  AFX_GLOBAL_DATA *pAVar3;
  int iVar4;
  int iVar5;
  CMFCToolBarButton *in_ECX;
  int iVar6;
  int iVar7;
  CDC *pCVar8;
  undefined4 uVar9;
  int local_80;
  int local_7c;
  int local_60;
  int local_5c;
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
  local_8 = 0x483b59;
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
    if ((local_60 != 0) || (local_5c != 0)) {
      InflateRect(&local_24,-(local_60 / 2 + 1),-(local_5c / 2 + 1));
      if (param_4 == 0) {
        iVar4 = 0;
        iVar5 = local_5c;
      }
      else {
        iVar5 = 0;
        iVar4 = local_60;
      }
      OffsetRect(&local_34,iVar4,iVar5);
    }
  }
  local_44.left = local_24.left;
  local_44.top = local_24.top;
  local_44.right = local_24.right;
  local_44.bottom = local_24.bottom;
  local_34.top = local_34.top + 5;
  if (param_3 == (CMFCToolBarImages *)0x0) {
LAB_00483e09:
    if ((param_6 == 0) || (*(int *)(*(int *)(in_ECX + 0x70) + 0x1dd4) == 0)) goto LAB_00483e5d;
    if (param_5 == 0) {
      CDrawingManager::CDrawingManager((CDrawingManager *)&local_60,local_58);
      local_8 = 1;
      FUN_00464ce2(local_44.left,local_44.top,local_44.right,local_44.bottom,0x55,0xffffffff,0,
                   0xffffffff);
      local_8 = 0xffffffff;
      FUN_00461ef9();
      goto LAB_00483e5d;
    }
  }
  else {
    if (*(int *)(in_ECX + 4) == 0) {
      iVar4 = *(int *)(in_ECX + 0x34);
    }
    else {
      iVar4 = *(int *)(in_ECX + 0x38);
    }
    if (iVar4 < 0) goto LAB_00483e09;
    iVar4 = *(int *)(param_3 + 0x54);
    local_5c = *(int *)(param_3 + 0x58);
    if (param_4 == 0) {
      iVar7 = local_24.top + 5;
      iVar6 = local_24.left + ((local_24.right - local_24.left) - iVar4) / 2;
      local_34.top = local_5c + 2 + local_34.top;
    }
    else {
      iVar6 = local_24.left + 5;
      local_54 = local_34.left + iVar4 + 10;
      iVar7 = ((local_24.bottom - local_5c) - local_24.top) / 2 + local_24.top;
      iStack_4c = local_34.right;
      iStack_48 = local_34.bottom;
      iVar5 = *(int *)local_58;
      iStack_50 = local_34.top;
      local_34.left = local_54;
      guard_check_icall(*(int *)(in_ECX + 0x2c),*(undefined4 *)(*(int *)(in_ECX + 0x2c) + -0xc),
                        &local_54,0x410);
      iVar5 = (**(code **)(iVar5 + 0x68))();
      local_34.top = ((local_24.bottom - iVar5) - local_24.top) / 2 + local_24.top;
    }
    local_60 = iVar4 + iVar6;
    local_5c = local_5c + iVar7;
    local_44.left = iVar6;
    local_44.top = iVar7;
    local_44.right = local_60;
    local_44.bottom = local_5c;
    InflateRect(&local_44,2,2);
    if (*(int *)(*(int *)(in_ECX + 0x70) + 0x1dd4) == 0) {
      if (*(int *)(in_ECX + 0x48) != 0) {
        pCVar2 = CMFCVisualManager::GetInstance();
        pcVar1 = *(code **)(*(int *)pCVar2 + 0x140);
        guard_check_icall(&local_60);
        (*pcVar1)();
        if ((local_60 != 0) || (local_5c != 0)) {
          InflateRect(&local_44,local_60 / 2 + -1,local_5c / 2 + -1);
        }
      }
      pCVar8 = local_58;
      CMFCToolBarButton::FillInterior(in_ECX,local_58,(CRect *)&local_44,param_6,0);
    }
    else {
      pCVar8 = local_58;
      if ((param_6 != 0) && (param_5 == 0)) {
        CDrawingManager::CDrawingManager((CDrawingManager *)&local_60,local_58);
        local_8 = 0;
        FUN_00464ce2(local_44.left,local_44.top,local_44.right,local_44.bottom,0x55,0xffffffff,0,
                     0xffffffff);
        local_8 = 0xffffffff;
        FUN_00461ef9();
        pCVar8 = local_58;
      }
    }
    if (*(int *)(in_ECX + 4) == 0) {
      iVar4 = *(int *)(in_ECX + 0x34);
    }
    else {
      iVar4 = *(int *)(in_ECX + 0x38);
    }
    CMFCToolBarImages::Draw
              (param_3,pCVar8,local_80 + iVar6,iVar7 + local_7c,iVar4,0,
               *(uint *)(in_ECX + 0x24) & 0x40000,0,0,0,0xff);
LAB_00483e5d:
    if ((param_5 == 0) && ((param_6 != 0 || ((*(uint *)(in_ECX + 0x24) & 0x30000) != 0)))) {
      if ((((*(uint *)(in_ECX + 0x24) & 0x20000) == 0) || (param_6 == 0)) &&
         ((*(uint *)(in_ECX + 0x24) & 0x10000) == 0)) {
        pCVar2 = CMFCVisualManager::GetInstance();
        uVar9 = 2;
      }
      else {
        pCVar2 = CMFCVisualManager::GetInstance();
        uVar9 = 1;
      }
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x88);
      guard_check_icall(local_58,in_ECX,local_44.left,local_44.top,local_44.right,local_44.bottom,
                        uVar9);
      (*pcVar1)();
    }
  }
  if ((*(int *)(in_ECX + 0x18) == 0) || (*(int *)(*(int *)(in_ECX + 0x2c) + -0xc) == 0))
  goto LAB_00483fc7;
  uVar9 = 0;
  if (param_6 == 0) {
    if ((*(uint *)(in_ECX + 0x24) & 0x30000) != 0) {
      uVar9 = 1;
    }
  }
  else {
    uVar9 = 2;
  }
  if ((*(uint *)(in_ECX + 0x24) & 0x40000) == 0) {
    iVar4 = *(int *)(*(int *)(in_ECX + 0x70) + 0xd40);
LAB_00483f18:
    if (iVar4 == -1) goto LAB_00483f1d;
  }
  else {
    if (*(int *)(*(int *)(in_ECX + 0x70) + 0xd54) != 0) {
      pAVar3 = GetGlobalData();
      iVar4 = *(int *)(pAVar3 + 0x38);
      goto LAB_00483f18;
    }
LAB_00483f1d:
    if (*(int *)(*(int *)(in_ECX + 0x70) + 0xd54) == 0) {
      pCVar2 = CMFCVisualManager::GetInstance();
      pcVar1 = *(code **)(*(int *)pCVar2 + 0xb4);
      guard_check_icall(in_ECX,uVar9);
      iVar4 = (*pcVar1)();
    }
    else {
      pAVar3 = GetGlobalData();
      iVar4 = *(int *)(pAVar3 + 0x70);
    }
  }
  pCVar8 = local_58;
  pcVar1 = *(code **)(*(int *)local_58 + 0x30);
  guard_check_icall(iVar4);
  (*pcVar1)();
  iVar4 = *(int *)(in_ECX + 0x2c);
  if (*(int *)(in_ECX + 0x7c) == 0) {
    iVar5 = FUN_00415ee0(iVar4 + -0x10);
    local_5c = iVar5 + 0x10;
    iVar4 = *(int *)local_58;
    local_8 = 2;
    guard_check_icall(local_5c,*(undefined4 *)(iVar5 + 4),&local_34,0x8010);
    (**(code **)(iVar4 + 0x68))();
    FUN_0040efa0();
  }
  else {
    iVar5 = *(int *)pCVar8;
    guard_check_icall(iVar4,*(undefined4 *)(iVar4 + -0xc),&local_34,0x11);
    (**(code **)(iVar5 + 0x68))();
  }
LAB_00483fc7:
  FUN_0055bae6();
  return;
}

