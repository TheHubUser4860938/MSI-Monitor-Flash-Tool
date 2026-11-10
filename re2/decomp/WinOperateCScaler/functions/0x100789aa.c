// rea decompile_all
// name: CMFCOutlookBarPane::AdjustLocations
// address: 0x100789aa
// body: available
// range: 0x100789aa-0x10078c69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10078c0d to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCOutlookBarPane::AdjustLocations(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCOutlookBarPane::AdjustLocations(CMFCOutlookBarPane *this)

{
  code *pcVar1;
  int *piVar2;
  AFX_GLOBAL_DATA *pAVar3;
  int iVar4;
  CMFCVisualManager *pCVar5;
  int iVar6;
  undefined1 local_78 [8];
  CClientDC local_70 [20];
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined1 local_4c [4];
  CPen *local_48;
  undefined1 local_44 [4];
  int local_40;
  int local_3c;
  int local_38;
  CMFCToolBarButton *local_34;
  int local_30;
  int local_2c;
  int local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x68;
  local_8 = 0x100789b6;
  if ((this != (CMFCOutlookBarPane *)0x0) && (*(int *)(this + 0x20) != 0)) {
    piVar2 = (int *)FUN_10084bc5(local_4c);
    local_28 = piVar2[1] + 6;
    local_3c = *piVar2 + 6;
    CClientDC::CClientDC(local_70,(CWnd *)this);
    local_8 = 0;
    pAVar3 = GetGlobalData();
    local_48 = CDC::SelectObject((CDC *)local_70,(CPen *)(pAVar3 + 0x11c));
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_24);
    local_2c = DAT_1020a904;
    local_30 = (local_24.right - local_24.left) + -2;
    pcVar1 = *(code **)(*(int *)this + 0x35c);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    if (iVar4 != 0) {
      pCVar5 = CMFCVisualManager::GetInstance();
      pcVar1 = *(code **)(*(int *)pCVar5 + 0x140);
      guard_check_icall(local_44);
      piVar2 = (int *)(*pcVar1)();
      local_30 = local_30 + *piVar2;
      local_2c = local_2c + piVar2[1];
    }
    iVar4 = (*(int *)(this + 0x1dc8) - *(int *)(this + 0x1dc0)) + local_24.top;
    if (((*(int *)(this + 0x1dc4) < 1) || ((local_24.right - local_24.left) + -5 < local_3c)) ||
       ((local_24.bottom - local_24.top) + -5 < local_28)) {
      iVar6 = 0;
    }
    else {
      CWnd::SetWindowPos((CWnd *)(this + 0xe68),(CWnd *)0x0,(local_24.right - local_3c) + -5,
                         local_24.top + 5,-1,-1,0x15);
      iVar6 = 4;
    }
    CWnd::ShowWindow((CWnd *)(this + 0xe68),iVar6);
    local_38 = *(int *)(this + 0xc40);
    while (local_38 != 0) {
      piVar2 = (int *)FUN_100972dc(&local_38);
      local_34 = (CMFCToolBarButton *)*piVar2;
      if (local_34 == (CMFCToolBarButton *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1001d023();
      }
      iVar6 = *(int *)local_34;
      *(int *)(local_34 + 0x18) = *(int *)(this + 0xb88);
      *(int *)(local_34 + 0x74) = DAT_1020a900;
      *(int *)(local_34 + 0x78) = DAT_1020a904;
      guard_check_icall(local_78,local_70,&local_30,0);
      piVar2 = (int *)(**(code **)(iVar6 + 0x1c))();
      iVar6 = (local_24.right - local_24.left) + -1;
      local_54 = *piVar2;
      if (iVar6 < *piVar2) {
        local_54 = iVar6;
      }
      local_5c = (iVar6 - local_54) / 2 + local_24.left;
      local_54 = local_5c + local_54;
      local_50 = piVar2[1] + iVar4;
      local_40 = *(int *)(this + 0x1dc8) + local_50;
      local_58 = iVar4;
      CMFCToolBarButton::SetRect(local_34,local_5c,iVar4,local_54,local_50);
      iVar4 = local_40;
    }
    *(uint *)(this + 0x1dd0) = (uint)(local_24.bottom < iVar4);
    if (((local_24.bottom < iVar4 == 0) || ((local_24.right - local_24.left) + -5 < local_3c)) ||
       ((local_24.bottom - local_24.top) + -5 < local_28)) {
      CWnd::ShowWindow((CWnd *)(this + 0x1610),0);
    }
    else {
      CWnd::SetWindowPos((CWnd *)(this + 0x1610),(CWnd *)&DAT_10209088,
                         (local_24.right - local_3c) + -5,(local_24.bottom - local_28) + -5,-1,-1,
                         0x11);
      CWnd::ShowWindow((CWnd *)(this + 0x1610),4);
    }
    CDC::SelectObject((CDC *)local_70,local_48);
    RedrawWindow(*(HWND *)(this + 0xe88),(RECT *)0x0,(HRGN)0x0,0x105);
    RedrawWindow(*(HWND *)(this + 0x1630),(RECT *)0x0,(HRGN)0x0,0x105);
    CMFCToolBar::OnMouseLeave((CMFCToolBar *)this);
    CMFCToolBar::UpdateTooltips((CMFCToolBar *)this);
    CClientDC::~CClientDC(local_70);
  }
  FUN_10154478();
  return;
}

