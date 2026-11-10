// rea decompile_all
// name: CMFCMenuBar::PreTranslateMessage
// address: 0x100eedef
// body: available
// range: 0x100eedef-0x100eefcc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCMenuBar::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCMenuBar::PreTranslateMessage(CMFCMenuBar *this,tagMSG *param_1)

{
  CMFCMenuBar *pCVar1;
  int iVar2;
  code *pcVar3;
  ushort uVar4;
  CMFCToolBarMenuButton *pCVar5;
  int iVar6;
  ulong uVar7;
  CMFCToolBarButton *pCVar8;
  uint uVar9;
  
  if (param_1->message == 0x100) {
    pCVar5 = CMFCToolBar::GetDroppedDownMenu((CMFCToolBar *)this,(int *)0x0);
    if (pCVar5 != (CMFCToolBarMenuButton *)0x0) {
      iVar6 = FUN_10049633(param_1);
      return iVar6;
    }
    iVar6 = FUN_1005f182();
    if (*(int *)(this + 0xd70) != 0) {
      iVar6 = iVar6 - *(int *)(this + 0xd64);
    }
    iVar2 = *(int *)(this + 0xbf0);
    if ((-1 < iVar2) && (iVar2 < iVar6)) {
      uVar9 = param_1->wParam;
      if (uVar9 == 9) {
        uVar4 = GetKeyState(0x10);
        uVar9 = (uVar4 & 0xff ^ 0x80) >> 6 | 0x25;
      }
      uVar7 = CWnd::GetExStyle((CWnd *)this);
      if ((uVar7 & 0x400000) != 0) {
        if (uVar9 == 0x25) {
          uVar9 = 0x27;
        }
        else if (uVar9 == 0x27) {
          uVar9 = 0x25;
        }
      }
      if (uVar9 == 0xd) {
        pCVar8 = (CMFCToolBarButton *)FUN_1005f070(*(undefined4 *)(this + 0xbf0));
        iVar6 = CMFCToolBar::DropDownMenu((CMFCToolBar *)this,pCVar8);
        if (iVar6 == 0) {
          pCVar8 = (CMFCToolBarButton *)FUN_1005f070(*(undefined4 *)(this + 0xbf0));
          CMFCToolBar::ProcessCommand((CMFCToolBar *)this,pCVar8);
        }
        return 1;
      }
      if (uVar9 == 0x1b) {
        pcVar3 = *(code **)(*(int *)this + 0x360);
        guard_check_icall();
        (*pcVar3)();
        pcVar3 = *(code **)(*(int *)this + 0x364);
        guard_check_icall();
        (*pcVar3)();
        DAT_101dd024 = 0;
      }
      else {
        if (uVar9 == 0x25) {
          pCVar1 = this + 0xbf0;
          *(int *)pCVar1 = *(int *)pCVar1 + -1;
          if (*(int *)pCVar1 < 0) {
            *(int *)(this + 0xbf0) = iVar6 + -1;
          }
        }
        else {
          if (uVar9 != 0x27) {
            if (uVar9 == 0x28) {
              pCVar8 = (CMFCToolBarButton *)FUN_1005f070(*(undefined4 *)(this + 0xbf0));
              CMFCToolBar::DropDownMenu((CMFCToolBar *)this,pCVar8);
              return 1;
            }
            pcVar3 = *(code **)(*(int *)this + 0x394);
            guard_check_icall(param_1->wParam);
            iVar6 = (*pcVar3)();
            if (iVar6 != 0) {
              return 1;
            }
            goto LAB_100eeed5;
          }
          *(int *)(this + 0xbf0) = *(int *)(this + 0xbf0) + 1;
          if (iVar6 <= *(int *)(this + 0xbf0)) {
            *(undefined4 *)(this + 0xbf0) = 0;
          }
        }
        CMFCToolBar::InvalidateButton((CMFCToolBar *)this,iVar2);
        CMFCToolBar::InvalidateButton((CMFCToolBar *)this,*(int *)(this + 0xbf0));
        UpdateWindow(*(HWND *)(this + 0x20));
        pcVar3 = *(code **)(*(int *)this + 0x25c);
        guard_check_icall(*(undefined4 *)(this + 0xbf0));
        (*pcVar3)();
      }
    }
  }
LAB_100eeed5:
  iVar6 = CMFCToolBar::PreTranslateMessage((CMFCToolBar *)this,param_1);
  return iVar6;
}

