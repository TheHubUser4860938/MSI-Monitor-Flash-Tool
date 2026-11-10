// rea decompile_all
// name: CMFCRibbonButton::OnShowPopupMenu
// address: 0x473614
// body: available
// range: 0x473614-0x4739e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonButton::OnShowPopupMenu(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonButton::OnShowPopupMenu(CMFCRibbonButton *this)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  CWnd *pCVar4;
  CMFCRibbonBar *this_00;
  ulong uVar5;
  uint uVar6;
  CFrameWnd *pCVar7;
  CWnd *pCVar8;
  int iVar9;
  CMFCRibbonPanelMenu *this_01;
  uint uVar10;
  int *piVar11;
  CMFCPopupMenu *this_02;
  undefined4 uVar12;
  HWND pHVar13;
  int iVar14;
  CWnd *local_5c;
  int local_50;
  int local_4c;
  CMFCPopupMenu *local_48;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4c;
  local_8 = 0x473620;
  pcVar1 = *(code **)(*(int *)this + 0xe4);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    pcVar1 = *(code **)(*(int *)this + 0xa4);
    guard_check_icall();
    pCVar4 = (CWnd *)(*pcVar1)();
    if ((((pCVar4 != (CWnd *)0x0) && (*(int *)(pCVar4 + 0x20) != 0)) &&
        (this_00 = CMFCRibbonBaseElement::GetTopLevelRibbonBar((CMFCRibbonBaseElement *)this),
        this_00 != (CMFCRibbonBar *)0x0)) && (*(int *)(this_00 + 0x20) != 0)) {
      CMFCRibbonBaseElement::OnShowPopupMenu((CMFCRibbonBaseElement *)this);
      uVar5 = CWnd::GetExStyle((CWnd *)this_00);
      uVar6 = uVar5 & 0x400000;
      local_5c = CWnd::GetSafeOwner((CWnd *)0x0,(HWND__ **)0x0);
      pCVar7 = CWnd::GetParentFrame((CWnd *)this_00);
      if (pCVar7 == (CFrameWnd *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(pCVar7 + 0x20);
      }
      pCVar8 = AfxGetMainWnd();
      iVar9 = 0;
      if (pCVar8 != (CWnd *)0x0) {
        iVar9 = *(int *)(pCVar8 + 0x20);
      }
      if (iVar3 != iVar9) {
        local_5c = (CWnd *)CWnd::GetParentFrame((CWnd *)this_00);
      }
      if (*(int *)(this + 0x1b8) < 1) {
        iVar3 = *(int *)(this + 0x158);
        if (iVar3 == 0) goto LAB_004739e4;
        local_44.left = *(LONG *)(this + 0x74);
        local_44.top = *(LONG *)(this + 0x78);
        local_44.right = *(LONG *)(this + 0x7c);
        local_44.bottom = *(LONG *)(this + 0x80);
        CWnd::ClientToScreen(pCVar4,&local_44);
        this_02 = (CMFCPopupMenu *)FUN_00416408(0x1178);
        local_8 = 1;
        if (this_02 == (CMFCPopupMenu *)0x0) {
          local_48 = (CMFCPopupMenu *)0x0;
        }
        else {
          local_48 = (CMFCPopupMenu *)CMFCPopupMenu::CMFCPopupMenu(this_02);
        }
        uVar12 = 1;
        local_8 = 0xffffffff;
        *(undefined4 *)(local_48 + 0xf38) = 0;
        if ((*(int *)(this + 0x164) == 0) || (uVar6 != 0)) {
          uVar12 = 0;
        }
        *(undefined4 *)(local_48 + 0xf44) = uVar12;
        CMFCPopupMenu::SetParentRibbonElement(local_48,(CMFCRibbonBaseElement *)this);
        iVar9 = DAT_00616b18;
        if (DAT_00616b18 != 0) {
          iVar2 = *(int *)(DAT_00616b18 + 0x20);
          pHVar13 = GetParent(*(HWND *)(pCVar4 + 0x20));
          pCVar4 = CWnd::FromHandle(pHVar13);
          iVar14 = 0;
          if (pCVar4 != (CWnd *)0x0) {
            iVar14 = *(int *)(pCVar4 + 0x20);
          }
          if (iVar2 != iVar14) {
            SendMessageW(*(HWND *)(iVar9 + 0x20),0x10,0,0);
          }
        }
        local_4c = local_44.bottom;
        if ((*(int *)(this + 0x164) != 0) || (local_50 = local_44.left, uVar6 != 0)) {
          local_50 = local_44.right;
        }
      }
      else {
        if (*(int *)(this + 0x198) != 0) {
          FillWindowList(this);
        }
        this_01 = (CMFCRibbonPanelMenu *)FUN_00416408(0x2040);
        local_8 = 0;
        if (this_01 == (CMFCRibbonPanelMenu *)0x0) {
          local_48 = (CMFCPopupMenu *)0x0;
        }
        else {
          local_48 = (CMFCPopupMenu *)
                     CMFCRibbonPanelMenu::CMFCRibbonPanelMenu
                               (this_01,this_00,
                                (CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)
                                (this + 0x1b0),0);
        }
        local_8 = 0xffffffff;
        CMFCPopupMenu::SetParentRibbonElement(local_48,(CMFCRibbonBaseElement *)this);
        *(undefined4 *)(local_48 + 0x1f50) = 1;
        pcVar1 = *(code **)(*(int *)this + 0x26c);
        guard_check_icall();
        uVar10 = (*pcVar1)();
        if (uVar10 != 0) {
          iVar3 = 0;
          do {
            if (*(int *)(this + 0x1b8) <= iVar3) break;
            piVar11 = (int *)FUN_004ab4cd(iVar3);
            iVar3 = iVar3 + 1;
            uVar10 = uVar10 & -(uint)(*(int *)(*piVar11 + 0xec) != 0);
          } while (uVar10 != 0);
        }
        *(uint *)(local_48 + 0x1f54) = uVar10;
        if (*(int **)(this + 0x8c) != (int *)0x0) {
          pcVar1 = *(code **)(**(int **)(this + 0x8c) + 0x130);
          guard_check_icall();
          iVar3 = (*pcVar1)();
          if (iVar3 != 0) {
            pcVar1 = *(code **)(**(int **)(this + 0x8c) + 0x130);
            guard_check_icall();
            piVar11 = (int *)(*pcVar1)();
            pcVar1 = *(code **)(*piVar11 + 0xb4);
            guard_check_icall();
            iVar3 = (*pcVar1)();
            if (iVar3 != 0) {
              *(undefined4 *)(local_48 + 0x1f54) = 0;
            }
          }
        }
        local_34.left = *(LONG *)(this + 0x74);
        local_34.top = *(LONG *)(this + 0x78);
        local_34.right = *(LONG *)(this + 0x7c);
        local_34.bottom = *(LONG *)(this + 0x80);
        CWnd::ClientToScreen(pCVar4,&local_34);
        if ((*(int *)(this + 0x164) != 0) || (local_50 = local_34.left, uVar6 != 0)) {
          local_50 = local_34.right;
        }
        local_4c = local_34.bottom;
        if (((*(int *)(this + 0x194) != 0) && (*(int *)(this + 0x164) != 0)) && (uVar6 == 0)) {
          *(undefined4 *)(local_48 + 0xf44) = 1;
        }
        iVar3 = CMFCRibbonBaseElement::IsMenuMode((CMFCRibbonBaseElement *)this);
        if (iVar3 != 0) {
          local_50 = local_34.left;
          if (uVar6 == 0) {
            local_50 = local_34.right;
          }
          local_4c = local_34.top;
        }
        local_24.left = 0;
        local_24.top = 0;
        local_24.right = 0;
        local_24.bottom = 0;
        SetRectEmpty(&local_24);
        pcVar1 = *(code **)(*(int *)this + 0x130);
        guard_check_icall();
        piVar11 = (int *)(*pcVar1)();
        if (piVar11 != (int *)0x0) {
          pcVar1 = *(code **)(*piVar11 + 0xc4);
          guard_check_icall(&local_24);
          iVar3 = (*pcVar1)();
          if (iVar3 != 0) {
            CWnd::ClientToScreen(pCVar4,&local_24);
            local_50 = local_24.right;
            if (uVar6 == 0) {
              local_50 = local_24.left;
            }
            local_4c = local_24.top;
            CMFCRibbonPanelMenuBar::SetPreferedSize
                      ((CMFCRibbonPanelMenuBar *)(local_48 + 0x1178),local_24.right - local_24.left,
                       local_24.bottom - local_24.top);
            *(undefined4 *)(local_48 + 0x1f54) = 0;
          }
        }
        iVar3 = 0;
      }
      pcVar1 = *(code **)(*(int *)local_48 + 0x210);
      guard_check_icall(local_5c,local_50,local_4c,iVar3,0,0);
      (*pcVar1)();
      CMFCRibbonBaseElement::SetDroppedDown((CMFCRibbonBaseElement *)this,local_48);
    }
  }
LAB_004739e4:
  FUN_0055bae6();
  return;
}

