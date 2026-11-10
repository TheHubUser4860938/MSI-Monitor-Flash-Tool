// rea decompile_all
// name: CMFCMenuBar::SetMaximizeMode
// address: 0x100fac92
// body: available
// range: 0x100fac92-0x100fb00c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CMFCMenuBar::SetMaximizeMode(int,class CWnd *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCMenuBar::SetMaximizeMode(CMFCMenuBar *this,int param_1,CWnd *param_2,int param_3)

{
  code *pcVar1;
  CObject *pCVar2;
  HMENU pHVar3;
  BOOL BVar4;
  ulong uVar5;
  LRESULT LVar6;
  DWORD DVar7;
  undefined4 uVar8;
  int iVar9;
  tagMENUITEMINFOW local_228;
  CWnd *local_1f8;
  CMenu *local_1f4;
  int local_1f0;
  CMFCToolBarSystemMenuButton local_1ec [240];
  CMFCToolBarMenuButtonsButton local_fc [116];
  CMFCToolBarMenuButtonsButton local_88 [36];
  uint local_64;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x218;
  local_8 = 0x100faca1;
  local_1f8 = param_2;
  if (*(int *)(this + 0xd70) != param_1) {
    if (param_1 == 0) {
      *(undefined4 *)(this + 0xd68) = *(undefined4 *)(this + 0xd64);
      if (*(int *)(this + 0xd54) != 0) {
        pcVar1 = *(code **)(*(int *)this + 0x34c);
        guard_check_icall(0);
        (*pcVar1)();
      }
      local_1f0 = *(int *)(this + 0xc48) + -1;
      if (*(int *)(this + 0xd14) != 0) {
        local_1f0 = *(int *)(this + 0xc48) + -2;
      }
      local_1f4 = (CMenu *)0x0;
      iVar9 = local_1f0;
      if (0 < *(int *)(this + 0xd64)) {
        do {
          pcVar1 = *(code **)(*(int *)this + 0x34c);
          guard_check_icall(iVar9);
          (*pcVar1)();
          local_1f4 = local_1f4 + 1;
          iVar9 = iVar9 + -1;
        } while ((int)local_1f4 < *(int *)(this + 0xd64));
      }
      *(undefined4 *)(this + 0xd64) = 0;
    }
    else if (param_2 == (CWnd *)0x0) {
      param_1 = 0;
    }
    else {
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_101b71f8,(CObject *)param_2);
      if ((pCVar2 == (CObject *)0x0) || (local_1f0 = 1, *(int *)(pCVar2 + 0xac) == 0)) {
        local_1f0 = 0;
      }
      *(undefined4 *)(this + 0xd54) = 0;
      pHVar3 = ::GetSystemMenu(*(HWND *)(param_2 + 0x20),0);
      local_1f4 = CMenu::FromHandle(pHVar3);
      if ((local_1f4 != (CMenu *)0x0) && (BVar4 = IsMenu(*(HMENU *)(local_1f4 + 4)), BVar4 != 0)) {
        pHVar3 = *(HMENU *)(local_1f4 + 4);
        *(HMENU *)(this + 0xd54) = pHVar3;
        BVar4 = IsMenu(pHVar3);
        if ((BVar4 == 0) ||
           ((uVar5 = CWnd::GetExStyle(param_2), (uVar5 & 0x80000) == 0 && (local_1f0 == 0)))) {
          *(undefined4 *)(this + 0xd54) = 0;
        }
      }
      if (*(int *)(this + 0xd54) != 0) {
        LVar6 = SendMessageW(*(HWND *)(param_2 + 0x20),0x7f,0,0);
        *(LRESULT *)(this + 0xd58) = LVar6;
        if (LVar6 == 0) {
          DVar7 = GetClassLongW(*(HWND *)(param_2 + 0x20),-0x22);
          *(DWORD *)(this + 0xd58) = DVar7;
        }
        uVar8 = CMFCToolBarSystemMenuButton::CMFCToolBarSystemMenuButton
                          (local_1ec,*(HMENU__ **)(this + 0xd54),*(HICON__ **)(this + 0xd58));
        local_8 = 0;
        pcVar1 = *(code **)(*(int *)this + 0x344);
        guard_check_icall(uVar8,0);
        (*pcVar1)();
        local_8 = 0xffffffff;
        FUN_100fb132();
        param_2 = local_1f8;
      }
      local_1f8 = (CWnd *)GetWindowLongW(*(HWND *)(param_2 + 0x20),-0x10);
      *(undefined4 *)(this + 0xd64) = 0;
      if (*(int *)(this + 0xd54) != 0) {
        if (((uint)local_1f8 & 0x20000) != 0) {
          uVar8 = CMFCToolBarMenuButtonsButton::CMFCToolBarMenuButtonsButton(local_fc,0xf020);
          local_8 = 1;
          pcVar1 = *(code **)(*(int *)this + 0x344);
          guard_check_icall(uVar8,0xffffffff);
          (*pcVar1)();
          local_8 = 0xffffffff;
          FUN_100fcf7f();
          *(int *)(this + 0xd64) = *(int *)(this + 0xd64) + 1;
        }
        if (((uint)local_1f8 & 0x10000) != 0) {
          uVar8 = CMFCToolBarMenuButtonsButton::CMFCToolBarMenuButtonsButton(local_fc,0xf120);
          local_8 = 2;
          pcVar1 = *(code **)(*(int *)this + 0x344);
          guard_check_icall(uVar8,0xffffffff);
          (*pcVar1)();
          local_8 = 0xffffffff;
          FUN_100fcf7f();
          *(int *)(this + 0xd64) = *(int *)(this + 0xd64) + 1;
        }
        CMFCToolBarMenuButtonsButton::CMFCToolBarMenuButtonsButton(local_88,0xf060);
        local_8 = 3;
        if (*(int *)(this + 0xd54) != 0) {
          _memset(&local_228,0,0x30);
          local_228.cbSize = 0x30;
          local_228.fMask = 1;
          BVar4 = GetMenuItemInfoW(*(HMENU *)(this + 0xd54),0xf060,0,&local_228);
          if ((BVar4 == 0) || (((byte)local_228.fState & 3) != 0)) {
            local_64 = local_64 | 0x40000;
          }
        }
        pcVar1 = *(code **)(*(int *)this + 0x344);
        guard_check_icall(local_88,0xffffffff);
        (*pcVar1)();
        *(int *)(this + 0xd64) = *(int *)(this + 0xd64) + 1;
        local_8 = 0xffffffff;
        FUN_100fcf7f();
      }
    }
    *(int *)(this + 0xd70) = param_1;
    if (param_3 != 0) {
      pcVar1 = *(code **)(*(int *)this + 0x20c);
      guard_check_icall();
      (*pcVar1)();
    }
    if ((*(int *)(this + 0x178) == 0) && (param_3 != 0)) {
      pcVar1 = *(code **)(*(int *)this + 0x2d4);
      guard_check_icall(param_3);
      (*pcVar1)();
    }
  }
  FUN_10154478();
  return;
}

