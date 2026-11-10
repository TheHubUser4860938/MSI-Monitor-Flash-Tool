// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnFillRibbonButton
// address: 0x10110839
// body: available
// range: 0x10110839-0x10110d84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual unsigned long __thiscall CMFCVisualManagerOfficeXP::OnFillRibbonButton(class
   CDC *,class CMFCRibbonButton *)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManagerOfficeXP::OnFillRibbonButton
          (CMFCVisualManagerOfficeXP *this,CDC *param_1,CMFCRibbonButton *param_2)

{
  int iVar1;
  AFX_GLOBAL_DATA *pAVar2;
  HBRUSH pHVar3;
  BOOL BVar4;
  CMFCVisualManagerOfficeXP *pCVar5;
  ulong uVar6;
  CMFCVisualManagerOfficeXP *pCVar7;
  CDC *pCVar8;
  code *pcVar9;
  int iVar10;
  LONG LVar11;
  LONG LVar12;
  LONG LVar13;
  LONG LVar14;
  CDC *pCVar15;
  undefined4 uVar16;
  CDrawingManager local_78 [8];
  CDrawingManager local_70 [4];
  int local_6c;
  CDrawingManager local_68 [4];
  int local_64;
  CDC *local_60;
  CMFCVisualManagerOfficeXP *local_5c;
  CMFCVisualManagerOfficeXP *local_58;
  tagRECT local_54;
  RECT local_44;
  RECT local_34;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x68;
  local_8 = 0x10110845;
  local_60 = param_1;
  pcVar9 = *(code **)(*(int *)param_2 + 0x24c);
  local_58 = this;
  guard_check_icall();
  iVar1 = (*pcVar9)();
  if ((iVar1 != 0) && (*(int *)(param_2 + 0xc4) == 0)) goto LAB_10110d7d;
  local_54.left = *(LONG *)(param_2 + 0x74);
  local_54.top = *(LONG *)(param_2 + 0x78);
  local_54.right = *(LONG *)(param_2 + 0x7c);
  local_54.bottom = *(LONG *)(param_2 + 0x80);
  iVar1 = CMFCRibbonBaseElement::IsMenuMode((CMFCRibbonBaseElement *)param_2);
  iVar10 = 0;
  if (iVar1 == 0) {
LAB_101108aa:
    local_6c = 0;
  }
  else {
    pcVar9 = *(code **)(*(int *)param_2 + 0x204);
    guard_check_icall();
    iVar1 = (*pcVar9)();
    local_6c = 1;
    if (iVar1 != 0) goto LAB_101108aa;
  }
  pcVar9 = *(code **)(*(int *)param_2 + 0xd0);
  guard_check_icall();
  iVar1 = (*pcVar9)();
  if (iVar1 == 0) {
    pcVar9 = *(code **)(*(int *)param_2 + 0xe4);
    guard_check_icall();
    iVar1 = (*pcVar9)();
    if (iVar1 != 0) goto LAB_101108db;
  }
  else {
LAB_101108db:
    pcVar9 = *(code **)(*(int *)param_2 + 0xdc);
    guard_check_icall();
    iVar1 = (*pcVar9)();
    if (iVar1 == 0) {
      iVar10 = 1;
    }
  }
  local_64 = iVar10;
  iVar1 = FUN_10019d4f(&PTR_s_CMFCRibbonEdit_10197d68);
  if (iVar1 != 0) {
    pAVar2 = GetGlobalData();
    local_5c = *(CMFCVisualManagerOfficeXP **)(pAVar2 + 0x58);
    local_44.left = *(LONG *)(param_2 + 0x134);
    local_44.top = *(LONG *)(param_2 + 0x138);
    local_44.right = *(LONG *)(param_2 + 0x13c);
    local_44.bottom = *(LONG *)(param_2 + 0x140);
    if (*(int *)(param_2 + 0x98) != 0) {
      local_44.right = local_44.right + 1;
    }
    if (DAT_101dae9c == 0) {
      if (local_64 == 0) {
        pAVar2 = GetGlobalData();
        pCVar8 = local_60;
        pHVar3 = (HBRUSH)0x0;
        if (pAVar2 != (AFX_GLOBAL_DATA *)0xffffff30) {
          pHVar3 = *(HBRUSH *)(pAVar2 + 0xd4);
        }
        FillRect(*(HDC *)(local_60 + 4),&local_44,pHVar3);
        CDrawingManager::CDrawingManager(local_68,pCVar8);
        local_8 = 1;
        FUN_1007c55e(local_44.left,local_44.top,local_44.right,local_44.bottom,0xffffffff,0xffffffff
                     ,0,0xffffffff);
        local_8 = 0xffffffff;
        FUN_10079775();
        pCVar8 = local_60;
      }
      else {
        pAVar2 = GetGlobalData();
        pCVar8 = local_60;
        pHVar3 = (HBRUSH)0x0;
        if (pAVar2 != (AFX_GLOBAL_DATA *)0xffffff38) {
          pHVar3 = *(HBRUSH *)(pAVar2 + 0xcc);
        }
        FillRect(*(HDC *)(local_60 + 4),&local_44,pHVar3);
      }
      CDC::Draw3dRect(pCVar8,&local_54,(ulong)local_5c,(ulong)local_5c);
    }
    else {
      CDrawingManager::CDrawingManager(local_70,local_60);
      local_8 = 0;
      pCVar7 = local_5c;
      pAVar2 = GetGlobalData();
      if (local_64 == 0) {
        uVar6 = *(ulong *)(pAVar2 + 0x54);
      }
      else {
        uVar6 = *(ulong *)(pAVar2 + 0x6c);
      }
      CDrawingManager::DrawRect(local_70,(CRect *)&local_54,uVar6,(ulong)pCVar7);
      FUN_10079775();
    }
    goto LAB_10110d7d;
  }
  pcVar9 = *(code **)(*(int *)param_2 + 0xe0);
  guard_check_icall();
  iVar1 = (*pcVar9)();
  if ((iVar1 == 0) && (iVar10 == 0)) goto LAB_10110d7d;
  pcVar9 = *(code **)(*(int *)param_2 + 0xe0);
  guard_check_icall();
  iVar1 = (*pcVar9)();
  if ((iVar1 != 0) && ((local_6c != 0 && (iVar10 == 0)))) goto LAB_10110d7d;
  local_34.left = *(LONG *)(param_2 + 0x124);
  local_34.top = *(LONG *)(param_2 + 0x128);
  local_34.right = *(LONG *)(param_2 + 300);
  local_34.bottom = *(LONG *)(param_2 + 0x130);
  if (*(int *)(param_2 + 0x98) != 0) {
    InflateRect(&local_54,-1,-1);
  }
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  BVar4 = IsRectEmpty(&local_34);
  if (BVar4 == 0) {
    local_24.left = *(LONG *)(param_2 + 0x134);
    local_24.top = *(LONG *)(param_2 + 0x138);
    local_24.right = *(LONG *)(param_2 + 0x13c);
    local_24.bottom = *(LONG *)(param_2 + 0x140);
    if (*(int *)(param_2 + 0x98) != 0) {
      local_34.top = local_34.top + 1;
      local_34.right = local_34.right + -1;
      local_34.bottom = local_34.bottom + -1;
      local_24.left = local_24.left + 1;
      local_24.top = local_24.top + 1;
      local_24.bottom = local_24.bottom + -1;
    }
  }
  BVar4 = IsRectEmpty(&local_34);
  if ((BVar4 == 0) && (local_64 != 0)) {
    pcVar9 = *(code **)(*(int *)param_2 + 0x254);
    guard_check_icall();
    iVar1 = (*pcVar9)();
    pCVar8 = local_60;
    if (iVar1 == 0) {
      uVar16 = 0;
      pCVar5 = local_58 + 0x11c;
      pcVar9 = *(code **)(*(int *)local_58 + 0x314);
      pCVar15 = local_60;
      LVar11 = local_24.left;
      LVar12 = local_24.top;
      LVar13 = local_24.right;
      LVar14 = local_24.bottom;
      guard_check_icall(local_60,local_24.left,local_24.top,local_24.right,local_24.bottom,pCVar5,0)
      ;
      (*pcVar9)();
      CDrawingManager::CDrawingManager(local_68,pCVar8);
      local_8 = 2;
      FUN_1007c55e(local_24.left,local_24.top,local_24.right,local_24.bottom,0xffffffff,0xffffffff,0
                   ,0xffffffff);
      local_8 = 0xffffffff;
      FUN_10079775();
      pCVar7 = local_58;
    }
    else {
      pcVar9 = *(code **)(*(int *)param_2 + 0xd8);
      guard_check_icall();
      iVar1 = (*pcVar9)();
      if (iVar1 == 0) {
        pcVar9 = *(code **)(*(int *)param_2 + 0xe4);
        guard_check_icall();
        iVar1 = (*pcVar9)();
        if (iVar1 != 0) goto LAB_10110b1e;
LAB_10110b29:
        iVar1 = 0x11c;
      }
      else {
LAB_10110b1e:
        iVar1 = 0x124;
        if (local_6c != 0) goto LAB_10110b29;
      }
      uVar16 = 0;
      pCVar5 = local_58 + iVar1;
      pcVar9 = *(code **)(*(int *)local_58 + 0x314);
      pCVar15 = local_60;
      LVar11 = local_24.left;
      LVar12 = local_24.top;
      LVar13 = local_24.right;
      LVar14 = local_24.bottom;
      guard_check_icall(local_60,local_24.left,local_24.top,local_24.right,local_24.bottom,pCVar5,0)
      ;
      pCVar7 = local_58;
      (*pcVar9)();
    }
    pcVar9 = *(code **)(*(int *)param_2 + 600);
    guard_check_icall(pCVar15,LVar11,LVar12,LVar13,LVar14,pCVar5,uVar16);
    iVar1 = (*pcVar9)();
    pCVar8 = local_60;
    if (iVar1 == 0) {
      pcVar9 = *(code **)(*(int *)pCVar7 + 0x314);
      guard_check_icall(local_60,local_34.left,local_34.top,local_34.right,local_34.bottom,
                        pCVar7 + 0x11c,0);
      (*pcVar9)();
      CDrawingManager::CDrawingManager(local_78,pCVar8);
      local_8 = 3;
      FUN_1007c55e(local_34.left,local_34.top,local_34.right,local_34.bottom,0xffffffff,0xffffffff,0
                   ,0xffffffff);
      FUN_10079775();
      goto LAB_10110d7d;
    }
    pcVar9 = *(code **)(*(int *)param_2 + 0xd8);
    guard_check_icall();
    iVar1 = (*pcVar9)();
    if (iVar1 == 0) {
      pcVar9 = *(code **)(*(int *)param_2 + 0xe4);
      guard_check_icall();
      iVar1 = (*pcVar9)();
      if (iVar1 != 0) goto LAB_10110c0b;
LAB_10110c16:
      iVar1 = 0x11c;
    }
    else {
LAB_10110c0b:
      iVar1 = 0x124;
      if (local_6c != 0) goto LAB_10110c16;
    }
    pcVar9 = *(code **)(*(int *)pCVar7 + 0x314);
    LVar11 = local_34.left;
    LVar12 = local_34.top;
    LVar13 = local_34.right;
    LVar14 = local_34.bottom;
    pCVar7 = pCVar7 + iVar1;
  }
  else {
    pcVar9 = *(code **)(*(int *)param_2 + 0xd8);
    guard_check_icall();
    iVar1 = (*pcVar9)();
    if (iVar1 == 0) {
      pcVar9 = *(code **)(*(int *)param_2 + 0xe4);
      guard_check_icall();
      iVar1 = (*pcVar9)();
      if (iVar1 != 0) goto LAB_10110cd0;
LAB_10110cdb:
      iVar1 = 0x11c;
    }
    else {
LAB_10110cd0:
      iVar1 = 0x124;
      if (local_6c != 0) goto LAB_10110cdb;
    }
    local_5c = local_58 + iVar1;
    local_44.left = local_54.left;
    local_44.top = local_54.top;
    local_44.right = local_54.right;
    local_44.bottom = local_54.bottom;
    pcVar9 = *(code **)(*(int *)param_2 + 0xe0);
    guard_check_icall();
    iVar1 = (*pcVar9)();
    if ((((iVar1 != 0) && (local_6c == 0)) &&
        (pCVar7 = local_58 + (uint)(local_64 == 0) * 8 + 0x124, local_5c = pCVar7, local_64 == 0))
       && (BVar4 = IsRectEmpty(&local_24), BVar4 == 0)) {
      local_44.left = local_24.left;
      local_44.top = local_24.top;
      local_44.right = local_24.right;
      local_44.bottom = local_24.bottom;
      local_5c = pCVar7;
    }
    pcVar9 = *(code **)(*(int *)local_58 + 0x314);
    LVar11 = local_44.left;
    LVar12 = local_44.top;
    LVar13 = local_44.right;
    LVar14 = local_44.bottom;
    pCVar7 = local_5c;
  }
  guard_check_icall(local_60,LVar11,LVar12,LVar13,LVar14,pCVar7,0);
  (*pcVar9)();
LAB_10110d7d:
  uVar6 = FUN_101490fe();
  return uVar6;
}

