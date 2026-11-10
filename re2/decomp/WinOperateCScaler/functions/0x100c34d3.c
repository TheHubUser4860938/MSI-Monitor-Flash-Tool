// rea decompile_all
// name: CMFCPopupMenuBar::AdjustLocations
// address: 0x100c34d3
// body: available
// range: 0x100c34d3-0x100c3766 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c3583 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCPopupMenuBar::AdjustLocations(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCPopupMenuBar::AdjustLocations(CMFCPopupMenuBar *this)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  AFX_GLOBAL_DATA *pAVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined1 local_7c [8];
  CClientDC local_74 [20];
  CPen *local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  tagPOINT local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  CMFCToolBarButton *local_30;
  int local_2c;
  int local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x74;
  local_8 = 0x100c34df;
  if ((((this != (CMFCPopupMenuBar *)0x0) && (*(int *)(this + 0x20) != 0)) &&
      (BVar3 = IsWindow(*(HWND *)(this + 0x20)), BVar3 != 0)) && (*(int *)(this + 0xbdc) == 0)) {
    if (*(int *)(this + 0xd78) == 0) {
      if (*(int *)(this + 0xd50) == 0) {
        CMFCToolBarMenuButton::GetTextHorzOffsets((int *)(this + 0xd50),(int *)(this + 0xd54));
      }
      local_24.left = 0;
      local_24.top = 0;
      local_24.right = 0;
      local_24.bottom = 0;
      GetClientRect(*(HWND *)(this + 0x20),&local_24);
      CClientDC::CClientDC(local_74,(CWnd *)this);
      local_8 = 0;
      pAVar4 = GetGlobalData();
      local_60 = CDC::SelectObject((CDC *)local_74,(CPen *)(pAVar4 + 0x11c));
      if (local_60 == (CPen *)0x0) {
LAB_100c3583:
                    /* WARNING: Subroutine does not return */
        FUN_1001d023();
      }
      pcVar1 = *(code **)(*(int *)this + 0x354);
      guard_check_icall();
      iVar5 = (*pcVar1)();
      local_2c = local_24.left;
      iVar5 = (local_24.top - iVar5 * *(int *)(this + 0xd4c)) + 1;
      local_5c = iVar5;
      if ((*(int *)(this + 0xda0) == 0) || (DAT_10209cf0 != 0)) {
        iVar7 = local_24.right - local_24.left;
      }
      else {
        if (*(int *)(this + 0xda0) < 1) goto LAB_100c3583;
        iVar7 = **(int **)(this + 0xd9c);
      }
      local_3c = 0;
      local_28 = iVar7;
      FUN_1006a934(&local_38);
      local_38 = local_38 + 2;
      local_34 = local_34 + 2;
      pAVar4 = GetGlobalData();
      if (local_34 <= *(int *)(pAVar4 + 0x1cc)) {
        pAVar4 = GetGlobalData();
        local_34 = *(int *)(pAVar4 + 0x1cc);
      }
      local_40 = *(int *)(this + 0xc40);
      while (local_40 != 0) {
        piVar6 = (int *)FUN_100972dc(&local_40);
        iVar2 = local_5c;
        local_30 = (CMFCToolBarButton *)*piVar6;
        if (local_30 == (CMFCToolBarButton *)0x0) goto LAB_100c3583;
        if ((((*(uint *)(local_30 + 0x24) & 0x20000000) != 0) && (iVar5 != local_5c)) &&
           (DAT_10209cf0 == 0)) {
          local_2c = iVar7 + 1;
          local_3c = local_3c + 1;
          piVar6 = (int *)FUN_1009f8c7(local_3c);
          iVar7 = *piVar6;
          iVar5 = iVar2;
          local_28 = iVar7;
        }
        local_54 = iVar5;
        if (((byte)local_30[0x24] & 1) == 0) {
          iVar7 = *(int *)local_30;
          guard_check_icall(local_7c,local_74,&local_38,1);
          iVar7 = (**(code **)(iVar7 + 0x1c))();
          local_58 = local_2c;
          local_50 = local_24.left + local_28;
          local_4c = iVar5 + *(int *)(iVar7 + 4);
        }
        else {
          local_58 = *(int *)(this + 0xd50) + local_2c;
          local_50 = (iVar7 - *(int *)(this + 0xd54)) + local_24.left;
          local_4c = iVar5 + 8;
        }
        CMFCToolBarButton::SetRect(local_30,local_58,local_54,local_50,local_4c);
        iVar5 = local_4c;
        iVar7 = local_28;
      }
      CDC::SelectObject((CDC *)local_74,local_60);
      CMFCToolBar::RebuildAccelerationKeys((CMFCToolBar *)this);
      local_48.x = 0;
      local_48.y = 0;
      GetCursorPos(&local_48);
      ScreenToClient(*(HWND *)(this + 0x20),&local_48);
      pcVar1 = *(code **)(*(int *)this + 0x390);
      guard_check_icall(local_48.x,local_48.y);
      iVar5 = (*pcVar1)();
      if (-1 < iVar5) {
        *(undefined4 *)(this + 0xd74) = 0;
      }
      CMFCToolBar::UpdateTooltips((CMFCToolBar *)this);
      CClientDC::~CClientDC(local_74);
    }
    else {
      CMFCToolBar::AdjustLocations((CMFCToolBar *)this);
      CMFCToolBar::UpdateTooltips((CMFCToolBar *)this);
    }
  }
  FUN_10154478();
  return;
}

