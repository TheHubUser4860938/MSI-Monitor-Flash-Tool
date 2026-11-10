// rea decompile_all
// name: CMFCMenuBar::RestoreMaximizeMode
// address: 0x1012605e
// body: available
// range: 0x1012605e-0x1012627b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCMenuBar::RestoreMaximizeMode(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCMenuBar::RestoreMaximizeMode(CMFCMenuBar *this,int param_1)

{
  code *pcVar1;
  CObject *this_00;
  CMDIChildWnd *pCVar2;
  HWND hWnd;
  uint uVar3;
  undefined4 uVar4;
  BOOL BVar5;
  CFrameWnd *pCVar6;
  tagMENUITEMINFOW local_21c;
  CMFCToolBarSystemMenuButton local_1ec [240];
  CMFCToolBarMenuButtonsButton local_fc [116];
  CMFCToolBarMenuButtonsButton local_88 [36];
  uint local_64;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20c;
  local_8 = 0x1012606d;
  if (*(int *)(this + 0xd70) == 0) {
    if (*(int *)(this + 0xd54) != 0) {
      this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWnd_101f50a4,
                                   *(CObject **)(this + 0xd48));
      if (this_00 != (CObject *)0x0) {
        pCVar2 = CMDIFrameWnd::MDIGetActive((CMDIFrameWnd *)this_00,(int *)0x0);
        if (pCVar2 != (CMDIChildWnd *)0x0) {
          pCVar2 = CMDIFrameWnd::MDIGetActive((CMDIFrameWnd *)this_00,(int *)0x0);
          hWnd = (HWND)0x0;
          if (pCVar2 != (CMDIChildWnd *)0x0) {
            hWnd = *(HWND *)(pCVar2 + 0x20);
          }
          uVar3 = GetWindowLongW(hWnd,-0x10);
          CMFCToolBarSystemMenuButton::CMFCToolBarSystemMenuButton
                    (local_1ec,*(HMENU__ **)(this + 0xd54),*(HICON__ **)(this + 0xd58));
          local_8 = 0;
          pcVar1 = *(code **)(*(int *)this + 0x344);
          guard_check_icall(local_1ec,0);
          (*pcVar1)();
          if ((uVar3 & 0x20000) != 0) {
            uVar4 = CMFCToolBarMenuButtonsButton::CMFCToolBarMenuButtonsButton(local_fc,0xf020);
            local_8._0_1_ = 1;
            pcVar1 = *(code **)(*(int *)this + 0x344);
            guard_check_icall(uVar4,0xffffffff);
            (*pcVar1)();
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_10128ba5();
          }
          if ((uVar3 & 0x10000) != 0) {
            uVar4 = CMFCToolBarMenuButtonsButton::CMFCToolBarMenuButtonsButton(local_fc,0xf120);
            local_8._0_1_ = 2;
            pcVar1 = *(code **)(*(int *)this + 0x344);
            guard_check_icall(uVar4,0xffffffff);
            (*pcVar1)();
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_10128ba5();
          }
          CMFCToolBarMenuButtonsButton::CMFCToolBarMenuButtonsButton(local_88,0xf060);
          local_8 = CONCAT31(local_8._1_3_,3);
          _memset(&local_21c,0,0x30);
          local_21c.cbSize = 0x30;
          local_21c.fMask = 1;
          BVar5 = GetMenuItemInfoW(*(HMENU *)(this + 0xd54),0xf060,0,&local_21c);
          if ((BVar5 == 0) || (((byte)local_21c.fState & 3) != 0)) {
            local_64 = local_64 | 0x40000;
          }
          pcVar1 = *(code **)(*(int *)this + 0x344);
          guard_check_icall(local_88,0xffffffff);
          (*pcVar1)();
          FUN_10128ba5();
          local_8 = 0xffffffff;
          FUN_10126d30();
        }
      }
    }
    *(undefined4 *)(this + 0xd70) = 1;
    *(undefined4 *)(this + 0xd64) = *(undefined4 *)(this + 0xd68);
    if (param_1 != 0) {
      pCVar6 = CWnd::GetParentFrame((CWnd *)this);
      pcVar1 = *(code **)(*(int *)pCVar6 + 0x178);
      guard_check_icall(1);
      (*pcVar1)();
      InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
      UpdateWindow(*(HWND *)(this + 0x20));
    }
  }
  FUN_1018015d();
  return;
}

