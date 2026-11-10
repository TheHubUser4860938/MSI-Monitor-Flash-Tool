// rea decompile_all
// name: FUN_10094d16
// address: 0x10094d16
// body: available
// range: 0x10094d16-0x1009519f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100950f2 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_10094d16(CDC *param_1,CRect *param_2,undefined4 param_3,int param_4,int param_5,int param_6
                 ,int param_7)

{
  code *pcVar1;
  int iVar2;
  CMFCVisualManager *pCVar3;
  CPen *pCVar4;
  AFX_GLOBAL_DATA *pAVar5;
  CPen *pCVar6;
  CMFCToolBarButton *in_ECX;
  uint uVar7;
  CDC *this;
  undefined4 uVar8;
  ulong uVar9;
  undefined **local_6c [2];
  uint local_64;
  CPalette *local_60;
  undefined **local_5c;
  CRect *local_58;
  undefined **local_54;
  CMFCToolBarButton *local_50;
  uint local_4c;
  CDC *local_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x5c;
  local_8 = 0x10094d22;
  local_60 = (CPalette *)0x0;
  local_48 = param_1;
  local_58 = param_2;
  local_50 = in_ECX;
  if (*(int *)(in_ECX + 0x8c) != 0) {
    local_60 = (CPalette *)FUN_10095ed6(param_1);
  }
  local_64 = *(uint *)(in_ECX + 0x24);
  uVar7 = local_64 & 0x40000;
  if (*(int *)(in_ECX + 0x74) != 0) {
    *(uint *)(in_ECX + 0x24) = local_64 | 0x10000;
  }
  if ((param_6 == 0) || (*(int *)(in_ECX + 0x80) != 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  local_4c = uVar7;
  CMFCToolBarButton::FillInterior(in_ECX,local_48,param_2,iVar2,0);
  if ((uVar7 == 0) && (*(int *)(in_ECX + 0x80) == 0)) {
    pcVar1 = *(code **)(*(int *)in_ECX + 0x54);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if ((iVar2 != 0) && ((param_7 != 0 && (param_5 == 0)))) {
      if ((*(uint *)(in_ECX + 0x24) & 0x30000) == 0) {
        if ((param_6 == 0) || ((*(uint *)(in_ECX + 0x24) & 0x110000) != 0)) goto LAB_10094e11;
        pCVar3 = CMFCVisualManager::GetInstance();
        uVar8 = 2;
      }
      else {
        pCVar3 = CMFCVisualManager::GetInstance();
        uVar8 = 1;
      }
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x88);
      guard_check_icall(local_48,local_50,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),
                        *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),uVar8);
      (*pcVar1)();
      in_ECX = local_50;
      param_2 = local_58;
    }
  }
LAB_10094e11:
  local_34.left = *(LONG *)param_2;
  local_34.top = *(LONG *)(param_2 + 4);
  local_34.right = *(LONG *)(param_2 + 8);
  local_34.bottom = *(LONG *)(param_2 + 0xc);
  InflateRect(&local_34,-DAT_10207830,-DAT_10207834);
  if (((*(int *)(in_ECX + 0x7c) == 0) && (*(int *)(in_ECX + 0x78) == 0)) &&
     (*(int *)(in_ECX + 0x80) == 0)) {
    this = local_48;
    if (local_4c == 0) {
      CBrush::CBrush((CBrush *)&local_5c,
                     (((byte)in_ECX[0x72] | 0x200) << 8 | (uint)(byte)in_ECX[0x71]) << 8 |
                     (uint)(byte)in_ECX[0x70]);
      local_8 = 2;
      pCVar4 = CDC::SelectObject(local_48,(CPen *)&local_5c);
      pAVar5 = GetGlobalData();
      pCVar6 = CDC::SelectObject(local_48,(CPen *)(pAVar5 + 0xe8));
      local_34.right = local_34.right + -1;
      local_34.bottom = local_34.bottom + -1;
      Rectangle(*(HDC *)(local_48 + 4),local_34.left,local_34.top,local_34.right,local_34.bottom);
      CDC::SelectObject(local_48,pCVar6);
      this = local_48;
      CDC::SelectObject(local_48,pCVar4);
      local_8 = 0xffffffff;
      local_5c = CBrush::vftable;
      CImageList::~CImageList((CImageList *)&local_5c);
    }
  }
  else {
    local_44 = *(int *)local_58;
    iStack_40 = *(int *)(local_58 + 4);
    iStack_3c = *(int *)(local_58 + 8);
    iStack_38 = *(int *)(local_58 + 0xc);
    if ((*(int *)(in_ECX + 0x78) != 0) && (*(int *)(in_ECX + 0x70) != -1)) {
      local_24.left = local_34.left;
      local_24.top = local_34.top;
      local_24.right = local_34.right;
      local_24.bottom = local_34.bottom;
      InflateRect(&local_24,-(DAT_10207830 + 1),-(DAT_10207834 + 1));
      local_24.right = (local_24.bottom - local_24.top) + local_24.left;
      if (local_4c == 0) {
        CBrush::CBrush((CBrush *)local_6c,
                       (((byte)in_ECX[0x72] | 0x200) << 8 | (uint)(byte)in_ECX[0x71]) << 8 |
                       (uint)(byte)in_ECX[0x70]);
        local_8 = 0;
        pAVar5 = GetGlobalData();
        CPen::CPen((CPen *)&local_54,0,1,*(ulong *)(pAVar5 + 0x58));
        local_8 = CONCAT31(local_8._1_3_,1);
        pCVar4 = CDC::SelectObject(local_48,(CPen *)local_6c);
        pCVar6 = CDC::SelectObject(local_48,(CPen *)&local_54);
        Rectangle(*(HDC *)(local_48 + 4),local_24.left,local_24.top,local_24.right,local_24.bottom);
        CDC::SelectObject(local_48,pCVar6);
        CDC::SelectObject(local_48,pCVar4);
        local_54 = CPen::vftable;
        CImageList::~CImageList((CImageList *)&local_54);
        local_8 = 0xffffffff;
        local_6c[0] = CBrush::vftable;
        CImageList::~CImageList((CImageList *)local_6c);
      }
      else {
        pAVar5 = GetGlobalData();
        uVar9 = *(ulong *)(pAVar5 + 0x58);
        pAVar5 = GetGlobalData();
        CDC::Draw3dRect(local_48,&local_24,*(ulong *)(pAVar5 + 0x5c),uVar9);
        OffsetRect(&local_24,1,1);
        pAVar5 = GetGlobalData();
        uVar9 = *(ulong *)(pAVar5 + 0x5c);
        pAVar5 = GetGlobalData();
        CDC::Draw3dRect(local_48,&local_24,*(ulong *)(pAVar5 + 0x58),uVar9);
      }
      local_44 = DAT_10207830 + local_24.right;
    }
    if (((*(uint *)(in_ECX + 0x24) & 0x40000) == 0) || (*(int *)(in_ECX + 0x80) != 0)) {
      pAVar5 = GetGlobalData();
      uVar8 = *(undefined4 *)(pAVar5 + 0x68);
    }
    else {
      pAVar5 = GetGlobalData();
      uVar8 = *(undefined4 *)(pAVar5 + 0x38);
    }
    this = local_48;
    pcVar1 = *(code **)(*(int *)local_48 + 0x30);
    guard_check_icall(uVar8);
    (*pcVar1)();
    local_58 = (CRect *)0x0;
    local_50 = (CMFCToolBarButton *)(0x8025 - (uint)(*(int *)(in_ECX + 0x80) != 0));
    if (param_4 == 0) {
      iVar2 = *(int *)this;
      pAVar5 = GetGlobalData();
      guard_check_icall(pAVar5 + 0x11c);
      local_58 = (CRect *)(**(code **)(iVar2 + 0x28))();
      if (local_58 == (CRect *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1001d023();
      }
    }
    iVar2 = *(int *)this;
    guard_check_icall(*(int *)(in_ECX + 0x2c),*(undefined4 *)(*(int *)(in_ECX + 0x2c) + -0xc),
                      &local_44,local_50);
    (**(code **)(iVar2 + 0x68))();
    if (local_58 != (CRect *)0x0) {
      pcVar1 = *(code **)(*(int *)this + 0x28);
      guard_check_icall(local_58);
      (*pcVar1)();
    }
  }
  if ((*(int *)(in_ECX + 0x7c) == 0) && (*(int *)(in_ECX + 0x80) == 0)) {
    if (local_4c == 0) {
      pAVar5 = GetGlobalData();
      uVar9 = *(ulong *)(pAVar5 + 0x58);
    }
    else {
      pAVar5 = GetGlobalData();
      uVar9 = *(ulong *)(pAVar5 + 0x58);
      pAVar5 = GetGlobalData();
      CDC::Draw3dRect(this,&local_34,*(ulong *)(pAVar5 + 0x5c),uVar9);
      OffsetRect(&local_34,1,1);
      pAVar5 = GetGlobalData();
      uVar9 = *(ulong *)(pAVar5 + 0x5c);
    }
    pAVar5 = GetGlobalData();
    CDC::Draw3dRect(this,&local_34,*(ulong *)(pAVar5 + 0x58),uVar9);
  }
  if (local_60 != (CPalette *)0x0) {
    CDC::SelectPalette(this,local_60,0);
  }
  *(uint *)(in_ECX + 0x24) = local_64;
  FUN_10154478();
  return;
}

