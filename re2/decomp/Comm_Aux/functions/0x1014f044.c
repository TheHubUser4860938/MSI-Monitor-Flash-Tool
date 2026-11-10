// rea decompile_all
// name: CMFCRibbonGallery::OnShowPopupMenu
// address: 0x1014f044
// body: available
// range: 0x1014f044-0x1014f27e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonGallery::OnShowPopupMenu(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonGallery::OnShowPopupMenu(CMFCRibbonGallery *this)

{
  code *pcVar1;
  CMFCPopupMenu *pCVar2;
  LONG LVar3;
  CMFCRibbonBar *this_00;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  CMFCRibbonBaseElement *pCVar8;
  int local_44 [2];
  CWnd *local_3c;
  CMFCRibbonGallery *local_38;
  CWnd *local_34;
  CMFCPopupMenu *local_30;
  uint local_2c;
  LONG local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_8 = 0x1014f050;
  pcVar1 = *(code **)(*(int *)this + 0xa4);
  guard_check_icall();
  local_34 = (CWnd *)(*pcVar1)();
  if ((((local_34 != (CWnd *)0x0) && (*(int *)(local_34 + 0x20) != 0)) &&
      (this_00 = CMFCRibbonBaseElement::GetTopLevelRibbonBar((CMFCRibbonBaseElement *)this),
      this_00 != (CMFCRibbonBar *)0x0)) && (*(int *)(this_00 + 0x20) != 0)) {
    CMFCRibbonBaseElement::OnShowPopupMenu((CMFCRibbonBaseElement *)this);
    uVar4 = CWnd::GetExStyle((CWnd *)this_00);
    local_2c = uVar4 & 0x400000;
    if (*(int *)(this + 0x1cc) == 0) {
      CreateIcons(this);
    }
    uVar5 = *(uint *)(this + 0x32c);
    if (uVar5 == 0) {
      uVar5 = *(uint *)(this + 0xa4);
    }
    iVar6 = GetLastSelectedItem(uVar5);
    if (-1 < iVar6) {
      SelectItem(this,iVar6);
    }
    iVar6 = IsButtonLook(this);
    pCVar8 = (CMFCRibbonBaseElement *)this;
    if (iVar6 == 0) {
      puVar7 = (undefined4 *)FUN_10151a1d(*(int *)(this + 0x1cc) + -1);
      pCVar8 = (CMFCRibbonBaseElement *)*puVar7;
    }
    local_38 = (CMFCRibbonGallery *)pCVar8;
    local_3c = CWnd::GetSafeOwner((CWnd *)0x0,(HWND__ **)0x0);
    local_30 = (CMFCPopupMenu *)FUN_10047eb4(0x2040);
    local_8 = 0;
    if (local_30 == (CMFCPopupMenu *)0x0) {
      local_30 = (CMFCPopupMenu *)0x0;
    }
    else {
      local_30 = (CMFCPopupMenu *)
                 CMFCRibbonPanelMenu::CMFCRibbonPanelMenu((CMFCRibbonPanelMenu *)local_30,this);
    }
    pCVar2 = local_30;
    local_8 = 0xffffffff;
    CMFCPopupMenu::SetParentRibbonElement(local_30,pCVar8);
    *(undefined4 *)(pCVar2 + 0x1f50) = 1;
    local_24.left = *(LONG *)(this + 0x74);
    local_24.top = *(LONG *)(this + 0x78);
    local_24.right = *(LONG *)(this + 0x7c);
    local_24.bottom = *(LONG *)(this + 0x80);
    CWnd::ClientToScreen(local_34,&local_24);
    iVar6 = *(int *)(this + 0x358);
    pcVar1 = *(code **)(*(int *)this + 0x28c);
    guard_check_icall(local_44);
    (*pcVar1)();
    uVar5 = local_2c;
    local_34 = (CWnd *)((-(uint)(iVar6 != 0) & 0xfffffff8) + 8 + local_44[0]);
    if (local_2c == 0) {
      local_28 = local_24.left;
    }
    else {
      local_28 = local_24.right;
    }
    local_2c = local_24.bottom;
    iVar6 = CMFCRibbonBaseElement::IsMenuMode((CMFCRibbonBaseElement *)this);
    LVar3 = local_24.right;
    if (iVar6 != 0) {
      if (uVar5 == 0) {
        local_28 = local_24.right;
      }
      else {
        local_28 = local_24.left;
      }
      local_2c = local_24.top;
    }
    iVar6 = IsButtonLook(this);
    pCVar2 = local_30;
    if (iVar6 == 0) {
      if (uVar5 == 0) {
        local_28 = local_24.left;
      }
      else {
        local_28 = LVar3;
      }
      local_2c = local_24.top + 3;
    }
    iVar6 = *(int *)(this + 0x348);
    if (iVar6 < 1) {
      if (local_38 == this) {
        iVar6 = 4;
      }
      else {
        iVar6 = *(int *)(this + 0x334);
      }
      if (*(int *)(this + 0x358) == 0) {
        if (iVar6 < 5) {
          iVar6 = 4;
        }
      }
      else {
        iVar6 = 10;
      }
    }
    CMFCRibbonPanelMenuBar::SetPreferedSize
              ((CMFCRibbonPanelMenuBar *)(local_30 + 0x1178),iVar6 * (int)local_34,0);
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x210);
    guard_check_icall(local_3c,local_28,local_2c,0,0,0);
    (*pcVar1)();
    CMFCRibbonBaseElement::SetDroppedDown((CMFCRibbonBaseElement *)local_38,pCVar2);
    *(undefined4 *)(this + 0xfc) = 0;
    if (*(int *)(pCVar2 + 0xf40) != 0) {
      CMFCPopupMenu::TriggerResize(pCVar2);
    }
  }
  FUN_1017f5f4();
  return;
}

