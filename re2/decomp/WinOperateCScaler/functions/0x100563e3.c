// rea decompile_all
// name: CPane::FloatPane
// address: 0x100563e3
// body: available
// range: 0x100563e3-0x10056904 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CPane::FloatPane(class CRect,enum AFX_DOCK_METHOD,bool)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CPane::FloatPane(CPane *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6,char param_7)

{
  code *pcVar1;
  int iVar2;
  CWnd *pCVar3;
  CWnd *pCVar4;
  CDockingManager *pCVar5;
  HWND pHVar6;
  uint uVar7;
  int *piVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined **ppuVar16;
  tagPOINT local_54;
  CWnd *local_4c;
  tagPOINT local_48;
  tagPOINT local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  pcVar1 = *(code **)(*(int *)this + 0x168);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    pcVar1 = *(code **)(*(int *)this + 0x16c);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) goto LAB_100568f2;
  }
  pcVar1 = *(code **)(*(int *)this + 0x1cc);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_28);
    pcVar1 = *(code **)(*(int *)this + 0x19c);
    guard_check_icall();
    pCVar3 = (CWnd *)(*pcVar1)();
    CWnd::ScreenToClient(pCVar3,&local_28);
    local_48.x = 0;
    local_48.y = 0;
    GetCursorPos(&local_48);
    local_40.x = *(LONG *)(this + 0x168);
    local_40.y = *(LONG *)(this + 0x16c);
    ClientToScreen(*(HWND *)(this + 0x20),&local_40);
    pcVar1 = *(code **)(*(int *)this + 0x2c0);
    guard_check_icall(&param_2,param_6);
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      local_38 = 0x10;
      local_34 = 0x10;
      local_30 = 0x10;
      local_2c = 0x10;
      CGlobalUtils::AdjustRectToWorkArea
                ((CGlobalUtils *)&PTR_vftable_1020194c,(CRect *)&param_2,(CRect *)&local_38);
      pcVar1 = *(code **)(*(int *)this + 0x214);
      guard_check_icall(param_2,param_3,param_4,param_5);
      pCVar3 = (CWnd *)(*pcVar1)();
      local_4c = pCVar3;
      if (pCVar3 != (CWnd *)0x0) {
        pcVar1 = *(code **)(*(int *)this + 0x19c);
        guard_check_icall();
        pCVar4 = (CWnd *)(*pcVar1)();
        pCVar5 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_1020194c,pCVar4);
        if (((param_6 != 1) && (pCVar5 != (CDockingManager *)0x0)) && (DAT_1020b518 == 0)) {
          pcVar1 = *(code **)(*(int *)this + 0x31c);
          guard_check_icall();
          (*pcVar1)();
        }
        pCVar4 = local_4c;
        uVar15 = 0;
        *(undefined4 *)(pCVar3 + 0xd8) = *(undefined4 *)(this + 0x1e8);
        *(undefined4 *)(pCVar3 + 0xdc) = *(undefined4 *)(this + 0x1ec);
        *(undefined4 *)(pCVar3 + 0xe0) = *(undefined4 *)(this + 0x1f0);
        *(undefined4 *)(pCVar3 + 0xe4) = *(undefined4 *)(this + 500);
        pcVar1 = *(code **)(*(int *)this + 0x21c);
        pCVar3 = local_4c;
        guard_check_icall(local_4c,0);
        (*pcVar1)();
        local_54.x = local_48.x;
        local_54.y = local_48.y;
        ScreenToClient(*(HWND *)(this + 0x20),&local_54);
        if (param_6 == 1) {
          SendMessageW(*(HWND *)(this + 0x20),0x202,0xffff,
                       CONCAT22((undefined2)local_54.y,(undefined2)local_54.x));
          pcVar1 = *(code **)(*(int *)this + 0x16c);
          guard_check_icall(pCVar3,uVar15);
          iVar2 = (*pcVar1)();
          if (iVar2 != 0) {
            pcVar1 = *(code **)(*(int *)this + 0x228);
            guard_check_icall(0);
            iVar2 = (*pcVar1)();
            if (iVar2 != 0) {
              SendMessageW(*(HWND *)(iVar2 + 0x20),0x202,0,
                           CONCAT22((undefined2)local_54.y,(undefined2)local_54.x));
            }
          }
        }
        pHVar6 = GetParent(*(HWND *)(this + 0x20));
        pCVar3 = CWnd::FromHandle(pHVar6);
        CWnd::SetParent((CWnd *)this,pCVar4);
        if (*(int *)(this + 0xb8) == 0) {
          pcVar1 = *(code **)(*(int *)this + 0x220);
          guard_check_icall(pCVar3);
          (*pcVar1)();
        }
        else {
          pcVar1 = *(code **)(*(int *)this + 0x220);
          guard_check_icall(*(int *)(this + 0xb8));
          (*pcVar1)();
          *(undefined4 *)(this + 0xb8) = 0;
        }
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x178);
        guard_check_icall(this);
        (*pcVar1)();
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x188);
        guard_check_icall();
        (*pcVar1)();
        uVar14 = 0;
        uVar13 = 0x11;
        uVar12 = 0;
        pcVar1 = *(code **)(*(int *)this + 0x238);
        uVar11 = 0;
        uVar10 = 0;
        uVar15 = 0;
        puVar9 = &DAT_10209088;
        guard_check_icall(&DAT_10209088,0,0,0,0,0x11,0);
        (*pcVar1)();
        if (param_6 == 1) {
          pcVar1 = *(code **)(*(int *)this + 0x1b8);
          guard_check_icall(puVar9,uVar15,uVar10,uVar11,uVar12,uVar13,uVar14);
          uVar7 = (*pcVar1)();
          if ((uVar7 & 1) != 0) {
            pcVar1 = *(code **)(*(int *)pCVar4 + 0x210);
            guard_check_icall(0);
            (*pcVar1)();
            pCVar4[0x80] = (CWnd)0x1;
          }
        }
        pcVar1 = *(code **)(*(int *)this + 0x2c4);
        guard_check_icall(puVar9,uVar15,uVar10,uVar11,uVar12,uVar13,uVar14);
        (*pcVar1)();
        pcVar1 = *(code **)(*(int *)this + 0x1c0);
        guard_check_icall();
        uVar7 = (*pcVar1)();
        pcVar1 = *(code **)(*(int *)this + 0x1e4);
        guard_check_icall(uVar7 | 1);
        (*pcVar1)();
        pcVar1 = *(code **)(*(int *)this + 0x210);
        guard_check_icall();
        (*pcVar1)();
        if (param_7 != '\0') {
          pcVar1 = *(code **)(*(int *)this + 0x228);
          guard_check_icall(0);
          piVar8 = (int *)(*pcVar1)();
          pcVar1 = *(code **)(*piVar8 + 0x1d0);
          guard_check_icall();
          (*pcVar1)();
          pCVar4 = local_4c;
        }
        if (param_6 == 1) {
          local_18.left = 0;
          local_18.top = 0;
          local_18.right = 0;
          local_18.bottom = 0;
          GetWindowRect(*(HWND *)(pCVar4 + 0x20),&local_18);
          local_40.x = *(LONG *)(this + 0x168);
          local_40.y = *(LONG *)(this + 0x16c);
          ClientToScreen(*(HWND *)(pCVar4 + 0x20),&local_40);
          if ((local_18.right < local_40.x) || (local_40.x < local_18.left)) {
            local_40.x = (local_18.right - local_18.left) / 2 + local_18.left;
          }
          if ((local_18.bottom < local_40.y) || (local_40.y < local_18.top)) {
            pcVar1 = *(code **)(*(int *)pCVar4 + 0x170);
            guard_check_icall();
            iVar2 = (*pcVar1)();
            local_40.y = iVar2 / 2 + local_18.top;
          }
          OffsetRect(&local_18,local_48.x - local_40.x,local_48.y - local_40.y);
          CWnd::SetWindowPos(pCVar4,(CWnd *)0x0,local_18.left,local_18.top,
                             local_18.right - local_18.left,local_18.bottom - local_18.top,0x14);
          *(LONG *)(pCVar4 + 0x130) = local_48.x;
          *(LONG *)(pCVar4 + 0x134) = local_48.y;
        }
        if (param_7 != '\0') {
          CWnd::ShowWindow(pCVar4,8);
          pcVar1 = *(code **)(*(int *)this + 0x19c);
          guard_check_icall();
          iVar2 = (*pcVar1)();
          RedrawWindow(*(HWND *)(iVar2 + 0x20),&local_28,(HRGN)0x0,0x5b1);
          ppuVar16 = &PTR_s_COleCntrFrameWndEx_101bef34;
          pcVar1 = *(code **)(*(int *)this + 0x19c);
          guard_check_icall(&PTR_s_COleCntrFrameWndEx_101bef34);
          (*pcVar1)();
          iVar2 = FUN_100250d6();
          if (iVar2 != 0) {
            pcVar1 = *(code **)(*(int *)this + 0x19c);
            guard_check_icall(ppuVar16);
            piVar8 = (int *)(*pcVar1)();
            pcVar1 = *(code **)(*piVar8 + 0x1c4);
            guard_check_icall(0);
            (*pcVar1)();
            pCVar4 = local_4c;
          }
          pcVar1 = *(code **)(*(int *)this + 0x1d8);
          guard_check_icall(ppuVar16);
          iVar2 = (*pcVar1)();
          if (iVar2 != 0) {
            CWnd::SetFocus(pCVar4);
          }
        }
      }
    }
  }
LAB_100568f2:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

