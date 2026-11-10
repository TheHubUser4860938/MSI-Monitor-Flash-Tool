// rea decompile_all
// name: CMFCRibbonPanel::OnDrawPaletteMenu
// address: 0x47683d
// body: available
// range: 0x47683d-0x476cc4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonPanel::OnDrawPaletteMenu(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonPanel::OnDrawPaletteMenu(CMFCRibbonPanel *this,CDC *param_1)

{
  code *pcVar1;
  BOOL BVar2;
  HRGN pHVar3;
  AFX_GLOBAL_DATA *pAVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  RECT *pRVar8;
  CMFCRibbonPanel *pCVar9;
  CDC *this_00;
  undefined1 local_78 [12];
  undefined **local_6c;
  undefined4 local_68;
  undefined1 local_64 [4];
  CMFCVisualManager *local_60;
  RECT *local_5c;
  RECT *local_58;
  CDC *local_54;
  CMFCRibbonPanel *local_50;
  CMFCVisualManager *local_4c;
  int *local_48;
  RECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x68;
  local_8 = 0x476849;
  local_54 = param_1;
  local_50 = this;
  local_4c = (CMFCVisualManager *)FUN_0043970d(&PTR_s_CMFCRibbonUndoButton_005ca324);
  if ((local_4c == (CMFCVisualManager *)0x0) && (*(int *)(*(int *)(this + 0x110) + 0x36c) != 0)) {
    local_48 = (int *)0x1;
  }
  else {
    local_48 = (int *)0x0;
  }
  local_60 = (CMFCVisualManager *)(this + 0xcc);
  local_44.left = *(LONG *)local_60;
  local_44.top = *(LONG *)(this + 0xd0);
  local_44.right = *(LONG *)(this + 0xd4);
  local_44.bottom = *(LONG *)(this + 0xd8);
  local_34.left = 0;
  local_34.top = 0;
  local_34.right = 0;
  local_34.bottom = 0;
  SetRectEmpty(&local_34);
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  SetRectEmpty(&local_24);
  pRVar8 = (RECT *)(this + 0xec);
  local_58 = pRVar8;
  BVar2 = IsRectEmpty(pRVar8);
  if (BVar2 == 0) {
    iVar6 = *(int *)(this + 0x10c);
    if (((iVar6 != 0) && (local_48 == (int *)0x0)) && (local_4c == (CMFCVisualManager *)0x0)) {
      local_5c = *(RECT **)(iVar6 + 0xd40);
      *(undefined4 *)(iVar6 + 0xd40) = 0;
      local_4c = CMFCVisualManager::GetInstance();
      iVar6 = *(int *)local_4c;
      guard_check_icall(local_54,*(undefined4 *)(local_50 + 0x10c),local_58->left,local_58->top,
                        local_58->right,local_58->bottom,pRVar8->left,*(undefined4 *)(this + 0xf0),
                        *(undefined4 *)(this + 0xf4),*(undefined4 *)(this + 0xf8),0);
      (**(code **)(iVar6 + 0x34))();
      pRVar8 = (RECT *)(local_50 + 0xec);
      *(RECT **)(*(int *)(local_50 + 0x10c) + 0xd40) = local_5c;
      this = local_50;
    }
    local_34.left = pRVar8->left;
    local_34.bottom = pRVar8->top;
    local_34.right = pRVar8->right;
    local_34.top = local_34.bottom + -1;
    local_44.bottom = *(int *)(this + 0xf0) + -1;
  }
  pRVar8 = (RECT *)(this + 0xdc);
  local_5c = pRVar8;
  BVar2 = IsRectEmpty(pRVar8);
  if (BVar2 == 0) {
    iVar6 = *(int *)(this + 0x10c);
    if ((iVar6 != 0) && (local_48 == (int *)0x0)) {
      local_4c = *(CMFCVisualManager **)(iVar6 + 0xd40);
      *(undefined4 *)(iVar6 + 0xd40) = 0;
      local_58 = (RECT *)CMFCVisualManager::GetInstance();
      iVar6 = local_58->left;
      guard_check_icall(local_54,*(undefined4 *)(local_50 + 0x10c),local_5c->left,local_5c->top,
                        local_5c->right,local_5c->bottom,pRVar8->left,*(undefined4 *)(this + 0xe0),
                        *(undefined4 *)(this + 0xe4),*(undefined4 *)(this + 0xe8),0);
      (**(code **)(iVar6 + 0x34))();
      pRVar8 = (RECT *)(local_50 + 0xdc);
      *(CMFCVisualManager **)(*(int *)(local_50 + 0x10c) + 0xd40) = local_4c;
      this = local_50;
    }
    local_24.left = pRVar8->left;
    local_24.right = pRVar8->right;
    local_24.top = pRVar8->bottom;
    local_24.bottom = local_24.top + 1;
    local_44.top = *(int *)(this + 0xe8) + 1;
  }
  iVar6 = *(int *)(this + 0x10c);
  this_00 = local_54;
  if ((iVar6 != 0) && (local_48 != (int *)0x0)) {
    local_58 = *(RECT **)(iVar6 + 0xd40);
    *(undefined4 *)(iVar6 + 0xd40) = 0;
    local_5c = (RECT *)CMFCVisualManager::GetInstance();
    this_00 = local_54;
    iVar6 = local_5c->left;
    guard_check_icall(local_54,*(undefined4 *)(local_50 + 0x10c),*(undefined4 *)local_60,
                      *(undefined4 *)(local_60 + 4),*(undefined4 *)(local_60 + 8),
                      *(undefined4 *)(local_60 + 0xc),*(undefined4 *)local_60,
                      *(undefined4 *)(local_60 + 4),*(undefined4 *)(local_60 + 8),
                      *(undefined4 *)(local_60 + 0xc),0);
    (**(code **)(iVar6 + 0x34))();
    *(RECT **)(*(int *)(local_50 + 0x10c) + 0xd40) = local_58;
    this = local_50;
  }
  local_68 = 0;
  local_6c = CRgn::vftable;
  local_8 = 0;
  pHVar3 = CreateRectRgnIndirect(&local_44);
  CMenu::Attach((CMenu *)&local_6c,(HMENU__ *)pHVar3);
  CDC::SelectClipRgn(this_00,(CRgn *)&local_6c);
  if (0 < *(int *)(*(int *)(this + 0x110) + 0x204)) {
    pAVar4 = GetGlobalData();
    CMFCToolBarImages::SetTransparentColor
              ((CMFCToolBarImages *)(*(int *)(this + 0x110) + 0x200),*(ulong *)(pAVar4 + 0x1c));
    pcVar1 = *(code **)(**(int **)(this + 0x110) + 0x28c);
    guard_check_icall(local_64);
    puVar5 = (undefined4 *)(*pcVar1)();
    CMFCToolBarImages::PrepareDrawImage
              ((CMFCToolBarImages *)(*(int *)(this + 0x110) + 0x200),local_78,*puVar5,puVar5[1],0);
    this_00 = local_54;
  }
  local_4c = (CMFCVisualManager *)0x0;
  if (0 < *(int *)(this + 0x4e4)) {
    do {
      puVar5 = (undefined4 *)FUN_004ab4cd(local_4c);
      local_48 = (int *)*puVar5;
      iVar6 = FUN_0043970d(&PTR_s_CMFCRibbonLabel_005ca074);
      iVar7 = FUN_0043970d(&PTR_s_CMFCRibbonGalleryIcon_005c9d90);
      if ((iVar6 != 0) || (iVar7 != 0)) {
        pcVar1 = *(code **)(*local_48 + 0x17c);
        guard_check_icall(this_00);
        (*pcVar1)();
      }
      local_4c = (CMFCVisualManager *)((int)local_4c + 1);
    } while ((int)local_4c < *(int *)(this + 0x4e4));
  }
  CDC::SelectClipRgn(this_00,(CRgn *)0x0);
  local_4c = (CMFCVisualManager *)0x0;
  if (0 < *(int *)(this + 0x4e4)) {
    do {
      puVar5 = (undefined4 *)FUN_004ab4cd(local_4c);
      local_48 = (int *)*puVar5;
      iVar6 = FUN_0043970d(&PTR_s_CMFCRibbonLabel_005ca074);
      iVar7 = FUN_0043970d(&PTR_s_CMFCRibbonGalleryIcon_005c9d90);
      if ((iVar6 == 0) && (iVar7 == 0)) {
        local_48[0x3b] = 1;
        pcVar1 = *(code **)(*local_48 + 0x17c);
        guard_check_icall(this_00);
        (*pcVar1)();
      }
      local_4c = (CMFCVisualManager *)((int)local_4c + 1);
    } while ((int)local_4c < *(int *)(this + 0x4e4));
  }
  BVar2 = IsRectEmpty(&local_24);
  pCVar9 = local_50;
  if (BVar2 == 0) {
    local_60 = CMFCVisualManager::GetInstance();
    pCVar9 = local_50;
    iVar6 = *(int *)local_60;
    guard_check_icall(local_54,*(undefined4 *)(local_50 + 0x10c),local_24.left,local_24.top,
                      local_24.right,local_24.bottom,0);
    (**(code **)(iVar6 + 0x48))();
  }
  BVar2 = IsRectEmpty(&local_34);
  if (BVar2 == 0) {
    local_60 = CMFCVisualManager::GetInstance();
    pCVar9 = local_50;
    iVar6 = *(int *)local_60;
    guard_check_icall(local_54,*(undefined4 *)(local_50 + 0x10c),local_34.left,local_34.top,
                      local_34.right,local_34.bottom,0);
    (**(code **)(iVar6 + 0x48))();
  }
  if (0 < *(int *)(*(int *)(pCVar9 + 0x110) + 0x204)) {
    FUN_0044c977(local_78);
  }
  local_6c = CRgn::vftable;
  FUN_0040ee80();
  FUN_0055bae6();
  return;
}

