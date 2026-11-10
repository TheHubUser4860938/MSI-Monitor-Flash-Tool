// rea decompile_all
// name: CMFCToolBarComboBoxButton::OnDraw
// address: 0x1009812a
// body: available
// range: 0x1009812a-0x10098533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarComboBoxButton::OnDraw(class CDC *,class CRect const
   &,class CMFCToolBarImages *,int,int,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarComboBoxButton::OnDraw
          (CMFCToolBarComboBoxButton *this,CDC *param_1,CRect *param_2,CMFCToolBarImages *param_3,
          int param_4,int param_5,int param_6,int param_7,int param_8)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  CMFCVisualManager *pCVar4;
  LRESULT LVar5;
  COLORREF CVar6;
  AFX_GLOBAL_DATA *pAVar7;
  undefined4 uVar8;
  int local_7c;
  int local_70;
  undefined4 local_68;
  undefined4 local_64;
  WPARAM local_60;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  LONG LStack_48;
  LONG LStack_44;
  LONG LStack_40;
  LRESULT local_3c;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if (((*(int *)(this + 0xb4) == 0) || (*(int *)(*(int *)(this + 0xb4) + 0x20) == 0)) ||
     (param_4 == 0)) {
    CMFCToolBarButton::OnDraw
              ((CMFCToolBarButton *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
               param_8);
    goto LAB_10098521;
  }
  local_7c = param_6;
  if (param_5 == 0) {
    if ((*(uint *)(this + 0x24) & 0x40000) == 0) goto LAB_10098199;
LAB_100981b3:
    local_70 = 1;
    pAVar7 = GetGlobalData();
    uVar3 = *(ulong *)(pAVar7 + 0x38);
  }
  else {
    pcVar1 = *(code **)(*(int *)this + 0x60);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) goto LAB_100981b3;
LAB_10098199:
    local_70 = 0;
    if (param_6 == 0) {
      pAVar7 = GetGlobalData();
      uVar3 = *(ulong *)(pAVar7 + 0x68);
    }
    else {
      uVar3 = CMFCToolBar::GetHotTextColor();
    }
  }
  pcVar1 = *(code **)(*(int *)param_1 + 0x30);
  guard_check_icall(uVar3);
  (*pcVar1)();
  if (DAT_10201804 != 0) {
    if (*(int *)(this + 0x80) != 0) {
      local_7c = 1;
    }
    local_18.left = *(LONG *)(this + 0x90);
    local_18.top = *(LONG *)(this + 0x94);
    local_18.right = *(LONG *)(this + 0x98);
    local_18.bottom = *(LONG *)(this + 0x9c);
    pCVar4 = CMFCVisualManager::GetInstance();
    LVar5 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x157,0,0);
    iVar2 = *(int *)pCVar4;
    guard_check_icall(param_1,local_18.left,local_18.top,local_18.right,local_18.bottom,local_70,
                      LVar5,local_7c,this);
    (**(code **)(iVar2 + 0x70))();
    InflateRect(&local_18,-2,-2);
    CVar6 = GetTextColor(*(HDC *)(param_1 + 8));
    pAVar7 = GetGlobalData();
    if (local_70 == 0) {
      uVar8 = *(undefined4 *)(pAVar7 + 0x6c);
    }
    else {
      uVar8 = *(undefined4 *)(pAVar7 + 0x1c);
    }
    FUN_1003c256(&local_18,uVar8);
    if (local_70 != 0) {
      pAVar7 = GetGlobalData();
      uVar3 = *(ulong *)(pAVar7 + 0x5c);
      pAVar7 = GetGlobalData();
      CDC::Draw3dRect(param_1,&local_18,*(ulong *)(pAVar7 + 0x5c),uVar3);
    }
    local_28.left = *(LONG *)(this + 0xa0);
    local_28.top = *(LONG *)(this + 0xa4);
    local_28.right = *(LONG *)(this + 0xa8);
    local_28.bottom = *(LONG *)(this + 0xac);
    pAVar7 = GetGlobalData();
    if (*(int *)(pAVar7 + 0x184) != 0) {
      InflateRect(&local_28,-1,-1);
    }
    if (local_18.left + 1 < local_28.left) {
      pCVar4 = CMFCVisualManager::GetInstance();
      LVar5 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x157,0,0);
      iVar2 = *(int *)pCVar4;
      guard_check_icall(param_1,local_28.left,local_28.top,local_28.right,local_28.bottom,local_70,
                        LVar5,local_7c,this);
      (**(code **)(iVar2 + 0x6c))();
    }
    pcVar1 = *(code **)(*(int *)param_1 + 0x30);
    guard_check_icall(CVar6);
    (*pcVar1)();
    if (*(int *)(*(int *)(this + 0xb8) + -0xc) != 0) {
      local_38.right = *(LONG *)(this + 0xa0);
      local_38.left = local_18.left;
      local_38.top = local_18.top;
      local_38.bottom = local_18.bottom;
      InflateRect(&local_38,-2,-2);
      if (*(int *)(this + 0xb0) == 0) {
        uVar3 = CWnd::GetExStyle(*(CWnd **)(this + 0xb4));
        if ((uVar3 & 0x30) == 0) {
          iVar2 = *(int *)param_1;
          pAVar7 = GetGlobalData();
          guard_check_icall(*(undefined4 *)(pAVar7 + 0x70));
          uVar8 = (**(code **)(iVar2 + 0x30))();
          iVar2 = *(int *)param_1;
          guard_check_icall(*(int *)(this + 0xb8),*(undefined4 *)(*(int *)(this + 0xb8) + -0xc),
                            &local_38,0x824);
          (**(code **)(iVar2 + 0x68))();
          pcVar1 = *(code **)(*(int *)param_1 + 0x30);
          guard_check_icall(uVar8);
          (*pcVar1)();
        }
        else {
          _memset(&local_68,0,0x30);
          local_50 = *(undefined4 *)(param_1 + 4);
          local_64 = *(undefined4 *)(this + 0x20);
          local_4c = local_38.left;
          LStack_48 = local_38.top;
          LStack_44 = local_38.right;
          LStack_40 = local_38.bottom;
          local_60 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x147,0,0);
          iVar2 = *(int *)(this + 0xb4);
          if (iVar2 == 0) {
            local_54 = 0;
          }
          else {
            local_54 = *(undefined4 *)(iVar2 + 0x20);
          }
          local_58 = local_58 | 0x1000;
          local_68 = 3;
          local_3c = SendMessageW(*(HWND *)(iVar2 + 0x20),0x150,local_60,0);
          if (local_70 != 0) {
            local_58 = local_58 | 4;
          }
          pcVar1 = *(code **)(**(int **)(this + 0xb4) + 0x168);
          guard_check_icall(&local_68);
          (*pcVar1)();
        }
      }
    }
    pcVar1 = *(code **)(*(int *)param_1 + 0x30);
    guard_check_icall(CVar6);
    (*pcVar1)();
  }
  if ((*(int *)(this + 0x18) != 0) && (*(int *)(*(int *)(this + 0x2c) + -0xc) != 0)) {
    local_28.left = *(LONG *)param_2;
    local_28.top = ((*(int *)(this + 0x9c) - *(int *)(this + 0x68)) + *(int *)(param_2 + 0xc)) / 2;
    local_28.right = *(LONG *)(param_2 + 8);
    local_28.bottom = *(LONG *)(param_2 + 0xc);
    iVar2 = *(int *)param_1;
    guard_check_icall(*(int *)(this + 0x2c),*(undefined4 *)(*(int *)(this + 0x2c) + -0xc),&local_28,
                      0x11);
    (**(code **)(iVar2 + 0x68))();
  }
LAB_10098521:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

