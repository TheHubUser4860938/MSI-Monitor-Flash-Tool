// rea decompile_all
// name: CMFCMenuBar::CalcLayout
// address: 0x4a25a5
// body: available
// range: 0x4a25a5-0x4a27af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCMenuBar::CalcLayout(unsigned long,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCMenuBar::CalcLayout(CMFCMenuBar *this,ulong param_1,int param_2)

{
  code *pcVar1;
  CMFCToolBarButton *this_00;
  undefined4 *puVar2;
  int iVar3;
  BOOL BVar4;
  CWnd *pCVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined1 local_38 [12];
  uint local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  uVar7 = 0xffffffff;
  pcVar1 = *(code **)(*(int *)this + 0x3b0);
  guard_check_icall(0xffffffff);
  (*pcVar1)();
  local_2c = *(uint *)(this + 0xc40);
  *(undefined4 *)(this + 0xd74) = 0;
  do {
    if (local_2c == 0) goto LAB_004a2639;
    puVar2 = (undefined4 *)FUN_004ead48(&local_2c);
    this_00 = (CMFCToolBarButton *)*puVar2;
    iVar3 = FUN_0043970d(&PTR_s_CMFCToolBarMenuButtonsButton_005c7550);
  } while ((((iVar3 != 0) ||
            (iVar3 = FUN_0043970d(&PTR_s_CMFCToolBarSystemMenuButton_0060c958), iVar3 != 0)) ||
           (*(int *)(this_00 + 0xc) == 0)) ||
          (iVar3 = CMFCToolBarButton::IsDrawImage(this_00), iVar3 == 0));
  *(undefined4 *)(this + 0xd74) = 1;
LAB_004a2639:
  local_2c = param_2 & 0x12;
  pcVar1 = *(code **)(*(int *)this + 0x170);
  guard_check_icall(uVar7);
  iVar3 = (*pcVar1)();
  if ((iVar3 == 0) && (*(int *)(this + 0x178) != 0)) {
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    SetRectEmpty(&local_28);
    if (*(CDockingPanesRow **)(this + 0xbc) != (CDockingPanesRow *)0x0) {
      CDockingPanesRow::GetClientRect(*(CDockingPanesRow **)(this + 0xbc),(CRect *)&local_28);
    }
    BVar4 = IsRectEmpty(&local_28);
    if (BVar4 != 0) {
      pCVar5 = CWnd::GetOwner((CWnd *)this);
      GetClientRect(*(HWND *)(pCVar5 + 0x20),&local_28);
    }
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    SetRectEmpty(&local_18);
    CPane::CalcInsideRect((CPane *)this,(CRect *)&local_18,param_2 & 2);
    if (local_2c == 2) {
      CMFCToolBar::WrapToolBar
                ((CMFCToolBar *)this,
                 local_28.right + -1 + ((local_18.right - local_28.left) - local_18.left),0x7fff,
                 (CDC *)0x0,-1,-1);
      pcVar1 = *(code **)(*(int *)this + 0x2a4);
      guard_check_icall(local_38,0);
      iVar3 = (*pcVar1)();
      local_2c = (local_28.right - (local_18.right - local_18.left) / 2) - local_28.left;
      iVar3 = *(int *)(iVar3 + 4) + (local_18.top - local_18.bottom);
    }
    else {
      pcVar1 = *(code **)(*(int *)this + 0x2a4);
      guard_check_icall(local_38,1);
      piVar6 = (int *)(*pcVar1)();
      iVar3 = (local_28.bottom - (local_18.bottom - local_18.top) / 2) - local_28.top;
      local_2c = *piVar6 + (local_18.left - local_18.right);
    }
    CMFCToolBar::RebuildAccelerationKeys((CMFCToolBar *)this);
    *(uint *)param_1 = local_2c;
    *(int *)(param_1 + 4) = iVar3;
  }
  else {
    CMFCToolBar::CalcLayout((CMFCToolBar *)this,param_1,param_2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

