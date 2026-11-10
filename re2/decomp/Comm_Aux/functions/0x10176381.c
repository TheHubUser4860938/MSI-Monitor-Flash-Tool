// rea decompile_all
// name: CMFCToolBarEditBoxButton::OnDraw
// address: 0x10176381
// body: available
// range: 0x10176381-0x10176549 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarEditBoxButton::OnDraw(class CDC *,class CRect const
   &,class CMFCToolBarImages *,int,int,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarEditBoxButton::OnDraw
          (CMFCToolBarEditBoxButton *this,CDC *param_1,CRect *param_2,CMFCToolBarImages *param_3,
          int param_4,int param_5,int param_6,int param_7,int param_8)

{
  CWnd *this_00;
  code *pcVar1;
  ulong uVar2;
  int iVar3;
  CMFCVisualManager *pCVar4;
  AFX_GLOBAL_DATA *pAVar5;
  undefined4 uVar6;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  this_00 = *(CWnd **)(this + 0x78);
  if (((this_00 == (CWnd *)0x0) || (*(int *)(this_00 + 0x20) == 0)) ||
     (uVar2 = CWnd::GetExStyle(this_00), (uVar2 & 0x10000000) == 0)) {
    CMFCToolBarButton::OnDraw
              ((CMFCToolBarButton *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
               param_8);
    goto LAB_10176537;
  }
  if (param_5 == 0) {
    if ((*(uint *)(this + 0x24) & 0x40000) == 0) goto LAB_101763e8;
LAB_1017642b:
    local_2c = 1;
  }
  else {
    pcVar1 = *(code **)(*(int *)this + 0x60);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) goto LAB_1017642b;
LAB_101763e8:
    local_2c = 0;
  }
  local_18 = 0;
  local_14 = 0;
  pcVar1 = *(code **)(*(int *)this + 0xd4);
  local_10 = 0;
  local_c = 0;
  guard_check_icall(&local_18);
  (*pcVar1)();
  if ((DAT_102061c4 == 0) || (*(int *)(this + 0x88) != 0)) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  pCVar4 = CMFCVisualManager::GetInstance();
  iVar3 = *(int *)pCVar4;
  guard_check_icall(param_1,local_18,local_14,local_10,local_c,local_2c,uVar6,this);
  (**(code **)(iVar3 + 0x74))();
  if (((*(int *)(this + 0x18) == 0) || (param_4 == 0)) ||
     (*(int *)(*(int *)(this + 0x2c) + -0xc) == 0)) goto LAB_10176537;
  if (param_5 == 0) {
    if ((*(uint *)(this + 0x24) & 0x40000) == 0) goto LAB_101764a2;
LAB_101764ba:
    pAVar5 = GetGlobalData();
    uVar2 = *(ulong *)(pAVar5 + 0x38);
  }
  else {
    pcVar1 = *(code **)(*(int *)this + 0x60);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) goto LAB_101764ba;
LAB_101764a2:
    if (param_6 == 0) {
      pAVar5 = GetGlobalData();
      uVar2 = *(ulong *)(pAVar5 + 0x28);
    }
    else {
      uVar2 = CMFCToolBar::GetHotTextColor();
    }
  }
  pcVar1 = *(code **)(*(int *)param_1 + 0x30);
  guard_check_icall(uVar2);
  (*pcVar1)();
  local_28 = *(undefined4 *)param_2;
  local_24 = ((*(int *)(param_2 + 0xc) - *(int *)(this + 0x68)) + local_c) / 2;
  uStack_20 = *(undefined4 *)(param_2 + 8);
  uStack_1c = *(undefined4 *)(param_2 + 0xc);
  iVar3 = *(int *)param_1;
  guard_check_icall(*(int *)(this + 0x2c),*(undefined4 *)(*(int *)(this + 0x2c) + -0xc),&local_28,
                    0x11);
  (**(code **)(iVar3 + 0x68))();
LAB_10176537:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

