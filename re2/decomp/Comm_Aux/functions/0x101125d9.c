// rea decompile_all
// name: CMFCToolBarMenuButton::OnDraw
// address: 0x101125d9
// body: available
// range: 0x101125d9-0x10112a4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarMenuButton::OnDraw(class CDC *,class CRect const
   &,class CMFCToolBarImages *,int,int,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarMenuButton::OnDraw
          (CMFCToolBarMenuButton *this,CDC *param_1,CRect *param_2,CMFCToolBarImages *param_3,
          int param_4,int param_5,int param_6,int param_7,int param_8)

{
  code *pcVar1;
  LPRECT ptVar2;
  CMFCVisualManager *pCVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  IMAGE_STATE IVar9;
  IMAGES_IDS IVar10;
  undefined4 uVar11;
  LPRECT lprc;
  int local_5c;
  int local_58;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  LPRECT local_34;
  CMFCToolBarMenuButton *local_30;
  CDC *local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  lprc = (LPRECT)(this + 200);
  local_2c = param_1;
  local_34 = (LPRECT)param_2;
  local_30 = this;
  SetRectEmpty(lprc);
  SetRectEmpty((LPRECT)(this + 0xd8));
  if (*(int *)(this + 0x94) != 0) {
    FUN_10110903(param_1,param_2,param_3,param_5,param_6,param_8,0);
    goto LAB_10112a3c;
  }
  pCVar3 = CMFCVisualManager::GetInstance();
  local_40 = *(int *)(pCVar3 + 0x50);
  if (*(int *)(this + 0xb0) != 0) {
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) & 0xfffeffff;
  }
  if (param_6 == 0) {
    pcVar1 = *(code **)(*(int *)this + 0x70);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    iVar5 = 0;
    if (iVar4 != 0) goto LAB_1011267a;
  }
  else {
LAB_1011267a:
    iVar5 = 1;
  }
  ptVar2 = local_34;
  CMFCToolBarButton::FillInterior((CMFCToolBarButton *)this,param_1,(CRect *)local_34,iVar5,0);
  FUN_100afca7(&local_48);
  if (DAT_1020e508 != 0) {
    local_48 = local_48 * 2;
    local_44 = local_44 * 2;
  }
  local_28.left = ptVar2->left;
  local_28.top = ptVar2->top;
  local_28.right = ptVar2->right;
  local_28.bottom = ptVar2->bottom;
  if (*(int *)(this + 0x48) == 0) {
    local_3c = 0;
    local_38 = 0;
    piVar6 = &local_3c;
  }
  else {
    pCVar3 = CMFCVisualManager::GetInstance();
    pcVar1 = *(code **)(*(int *)pCVar3 + 0x140);
    guard_check_icall(&local_3c);
    piVar6 = (int *)(*pcVar1)();
  }
  iVar5 = *piVar6;
  local_38 = piVar6[1];
  if ((iVar5 != 0) || (local_38 != 0)) {
    InflateRect(&local_28,~(iVar5 / 2),~((int)local_38 / 2));
  }
  local_18.left = local_34->left;
  local_18.top = local_34->top;
  local_18.right = local_34->right;
  local_18.bottom = local_34->bottom;
  *(LONG *)(this + 200) = local_28.left;
  *(LONG *)(this + 0xcc) = local_28.top;
  *(LONG *)(this + 0xd0) = local_28.right;
  *(LONG *)(this + 0xd4) = local_28.bottom;
  pCVar3 = CMFCVisualManager::GetInstance();
  pcVar1 = *(code **)(*(int *)pCVar3 + 0x2dc);
  guard_check_icall();
  uVar7 = (*pcVar1)();
  InflateRect(&local_18,-(-(uint)(param_4 != 0) & uVar7),-(~-(uint)(param_4 != 0) & uVar7));
  if (*(int *)(this + 0x90) != 0) {
    if (param_4 == 0) {
      local_18.bottom = local_18.bottom + (-1 - local_44);
      *(LONG *)(this + 0xcc) = local_18.bottom;
    }
    else {
      local_18.right = local_18.right - (local_48 + iVar5);
      ((LPRECT)(this + 200))->left = local_18.right + 1;
      if ((iVar5 != 0) || (local_38 != 0)) {
        OffsetRect((LPRECT)(this + 200),1 - iVar5 / 2,1 - (int)local_38 / 2);
      }
    }
  }
  uVar7 = *(uint *)(this + 0x24);
  if (local_40 == 0) {
    if ((((*(int *)(this + 0x9c) != 0) && (*(int *)(this + 0x20) != 0)) &&
        (*(int *)(this + 0x20) != -1)) && (*(int *)(this + 0xa8) == 0)) {
      uVar8 = uVar7 & 0xfffdffff;
      goto LAB_1011281c;
    }
    if (*(int *)(this + 0x8c) != 0) {
      uVar8 = uVar7 | 0x20000;
      goto LAB_1011281c;
    }
  }
  else {
    uVar8 = uVar7 & 0xfffcffff;
LAB_1011281c:
    *(uint *)(this + 0x24) = uVar8;
  }
  uVar11 = *(undefined4 *)(this + 0x44);
  *(undefined4 *)(this + 0x44) = 1;
  local_38 = uVar7;
  CMFCToolBarButton::OnDraw
            ((CMFCToolBarButton *)this,local_2c,(CRect *)&local_18,param_3,param_4,param_5,param_6,
             param_7,param_8);
  *(undefined4 *)(this + 0x44) = uVar11;
  if (*(int *)(this + 0x90) != 0) {
    if (((*(uint *)(this + 0x24) & 0x30000) != 0) && (local_40 == 0)) {
      OffsetRect((LPRECT)(this + 200),1,1);
    }
    if ((((param_6 != 0) || ((*(uint *)(this + 0x24) & 0x20000) != 0)) ||
        (*(int *)(this + 0x8c) != 0)) &&
       (((*(int *)(this + 0x20) != 0 && (*(int *)(this + 0x20) != -1)) &&
        (*(int *)(this + 0xa8) == 0)))) {
      iVar5 = ((LPRECT)(this + 200))->left;
      iVar4 = *(int *)(this + 0xcc);
      local_5c = *(int *)(this + 0xd0);
      local_58 = *(int *)(this + 0xd4);
      if (param_4 == 0) {
        local_58 = iVar4 + 2;
      }
      else {
        local_5c = iVar5 + 2;
      }
      uVar11 = 0;
      if ((param_6 != 0) || ((*(uint *)(this + 0x24) & 0x30000) != 0)) {
        uVar11 = 1;
      }
      uVar7 = local_38;
      if (*(int *)(this + 0x9c) == 0) {
        pCVar3 = CMFCVisualManager::GetInstance();
        pcVar1 = *(code **)(*(int *)pCVar3 + 0x8c);
        guard_check_icall(local_2c,local_30,iVar5,iVar4,local_5c,local_58,uVar11,param_4);
        (*pcVar1)();
        this = local_30;
        uVar7 = local_38;
      }
    }
    if (param_5 == 0) {
      if ((*(uint *)(this + 0x24) & 0x40000) == 0) goto LAB_10112936;
LAB_10112954:
      IVar9 = 1;
    }
    else {
      pcVar1 = *(code **)(*(int *)this + 0x60);
      guard_check_icall();
      iVar5 = (*pcVar1)();
      if (iVar5 == 0) goto LAB_10112954;
LAB_10112936:
      IVar9 = 0;
    }
    if ((param_4 == 0) || (*(int *)(this + 0xa8) != 0)) {
      IVar10 = 1;
    }
    else {
      IVar10 = 0;
    }
    CMenuImages::Draw(local_2c,IVar10,(CRect *)(this + 200),IVar9,(CSize *)&local_48);
  }
  *(uint *)(this + 0x24) = uVar7;
  if (param_5 == 0) {
    if (((uVar7 & 0x30000) == 0) && (*(int *)(this + 0x8c) == 0)) {
      if ((param_6 == 0) || ((uVar7 & 0x150000) != 0)) goto LAB_10112a3c;
      pCVar3 = CMFCVisualManager::GetInstance();
      uVar11 = 2;
      lprc = local_34;
    }
    else if ((local_40 == 0) &&
            ((((*(int *)(this + 0x9c) != 0 && (*(int *)(this + 0x20) != 0)) &&
              (*(int *)(this + 0x20) != -1)) && (*(int *)(this + 0xa8) == 0)))) {
      local_18.right = local_18.right + 1;
      pCVar3 = CMFCVisualManager::GetInstance();
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x88);
      guard_check_icall(local_2c,local_30,local_18.left,local_18.top,local_18.right,local_18.bottom,
                        2);
      (*pcVar1)();
      pCVar3 = CMFCVisualManager::GetInstance();
      uVar11 = 1;
    }
    else {
      pCVar3 = CMFCVisualManager::GetInstance();
      uVar11 = 1;
      lprc = local_34;
    }
    pcVar1 = *(code **)(*(int *)pCVar3 + 0x88);
    guard_check_icall(local_2c,local_30,lprc->left,lprc->top,lprc->right,lprc->bottom,uVar11);
    (*pcVar1)();
  }
LAB_10112a3c:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

