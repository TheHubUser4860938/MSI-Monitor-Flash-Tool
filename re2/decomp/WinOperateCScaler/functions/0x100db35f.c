// rea decompile_all
// name: CMFCRibbonPanel::DoPaint
// address: 0x100db35f
// body: available
// range: 0x100db35f-0x100db6d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonPanel::DoPaint(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonPanel::DoPaint(CMFCRibbonPanel *this,CDC *param_1)

{
  RECT *lprc;
  RECT *lprc_00;
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  COLORREF CVar4;
  CMFCVisualManager *pCVar5;
  undefined4 uVar6;
  AFX_GLOBAL_DATA *pAVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  int local_44;
  RECT local_38;
  tagRECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  lprc = (RECT *)(this + 0xcc);
  BVar3 = IsRectEmpty(lprc);
  if (BVar3 == 0) {
    pcVar1 = *(code **)(*(int *)param_1 + 0x50);
    local_18.left = BVar3;
    local_18.top = BVar3;
    local_18.right = BVar3;
    local_18.bottom = BVar3;
    guard_check_icall(&local_18);
    (*pcVar1)();
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    BVar3 = IntersectRect(&local_28,(RECT *)(this + 0xcc),&local_18);
    if (BVar3 != 0) {
      CVar4 = GetTextColor(*(HDC *)(param_1 + 8));
      if ((*(int *)(this + 0x108) == 0) || (*(int *)(this + 0x110) != 0)) {
        pAVar7 = GetGlobalData();
        uVar6 = *(undefined4 *)(pAVar7 + 0x68);
      }
      else {
        pCVar5 = CMFCVisualManager::GetInstance();
        pcVar1 = *(code **)(*(int *)pCVar5 + 0x220);
        guard_check_icall(param_1,this,*(undefined4 *)(this + 0xcc),*(undefined4 *)(this + 0xd0),
                          *(undefined4 *)(this + 0xd4),*(undefined4 *)(this + 0xd8),
                          *(undefined4 *)(this + 0xbc),*(undefined4 *)(this + 0xc0),
                          *(undefined4 *)(this + 0xc4),*(undefined4 *)(this + 200));
        uVar6 = (*pcVar1)();
      }
      lprc_00 = (RECT *)(this + 0xbc);
      BVar3 = IsRectEmpty(lprc_00);
      if ((BVar3 == 0) && (BVar3 = IntersectRect(&local_28,lprc_00,&local_18), BVar3 != 0)) {
        pCVar5 = CMFCVisualManager::GetInstance();
        pcVar1 = *(code **)(*(int *)pCVar5 + 0x224);
        guard_check_icall(param_1,this,lprc_00->left,*(undefined4 *)(this + 0xc0),
                          *(undefined4 *)(this + 0xc4),*(undefined4 *)(this + 200));
        (*pcVar1)();
      }
      local_38.left = *(LONG *)(this + 0x188);
      local_38.top = *(LONG *)(this + 0x18c);
      local_38.right = *(LONG *)(this + 400);
      local_38.bottom = *(LONG *)(this + 0x194);
      BVar3 = IntersectRect(&local_28,&local_38,&local_18);
      if (BVar3 != 0) {
        pcVar1 = *(code **)(*(int *)(this + 0x114) + 0x17c);
        guard_check_icall(param_1);
        (*pcVar1)();
      }
      pcVar1 = *(code **)(*(int *)param_1 + 0x30);
      guard_check_icall(uVar6);
      (*pcVar1)();
      local_38.left = *(LONG *)(this + 0x354);
      local_38.top = *(LONG *)(this + 0x358);
      local_38.right = *(LONG *)(this + 0x35c);
      local_38.bottom = *(LONG *)(this + 0x360);
      BVar3 = IsRectEmpty(&local_38);
      if (BVar3 == 0) {
        local_38.left = *(LONG *)(this + 0x354);
        local_38.top = *(LONG *)(this + 0x358);
        local_38.right = *(LONG *)(this + 0x35c);
        local_38.bottom = *(LONG *)(this + 0x360);
        BVar3 = IntersectRect(&local_28,&local_38,&local_18);
        if (BVar3 != 0) {
          pcVar1 = *(code **)(*(int *)(this + 0x2e0) + 0x17c);
          guard_check_icall(param_1);
          (*pcVar1)();
        }
      }
      else if (*(int *)(this + 0x110) == 0) {
        if ((*(int *)(this + 0x7c) != 0) && (iVar2 = *(int *)(this + 0x10c), iVar2 != 0)) {
          uVar10 = *(undefined4 *)(iVar2 + 0xd40);
          *(undefined4 *)(iVar2 + 0xd40) = 0;
          pCVar5 = CMFCVisualManager::GetInstance();
          iVar2 = *(int *)pCVar5;
          guard_check_icall(param_1,*(undefined4 *)(this + 0x10c),lprc->left,
                            *(undefined4 *)(this + 0xd0),*(undefined4 *)(this + 0xd4),
                            *(undefined4 *)(this + 0xd8),lprc->left,*(undefined4 *)(this + 0xd0),
                            *(undefined4 *)(this + 0xd4),*(undefined4 *)(this + 0xd8),0);
          (**(code **)(iVar2 + 0x34))();
          *(undefined4 *)(*(int *)(this + 0x10c) + 0xd40) = uVar10;
        }
        local_44 = 0;
        if (0 < *(int *)(this + 0x4e4)) {
          do {
            piVar8 = (int *)FUN_1009f8c7(local_44);
            piVar8 = (int *)*piVar8;
            local_38.left = piVar8[0x1d];
            local_38.top = piVar8[0x1e];
            local_38.right = piVar8[0x1f];
            local_38.bottom = piVar8[0x20];
            BVar3 = IntersectRect(&local_28,&local_38,&local_18);
            if (BVar3 != 0) {
              pcVar1 = *(code **)(*(int *)param_1 + 0x30);
              uVar10 = uVar6;
              guard_check_icall(uVar6);
              (*pcVar1)();
              iVar2 = piVar8[0x32];
              if (*(int *)(this + 0x78) != 0) {
                pcVar1 = *(code **)(*piVar8 + 0xe4);
                guard_check_icall(uVar10);
                iVar9 = (*pcVar1)();
                if ((iVar9 != 0) && (*(int *)(this + 0x2dc) == 0)) {
                  piVar8[0x32] = 1;
                }
              }
              pcVar1 = *(code **)(*piVar8 + 0x17c);
              guard_check_icall(param_1);
              (*pcVar1)();
              piVar8[0x32] = iVar2;
            }
            local_44 = local_44 + 1;
          } while (local_44 < *(int *)(this + 0x4e4));
        }
      }
      else {
        OnDrawPaletteMenu(this,param_1);
      }
      pcVar1 = *(code **)(*(int *)param_1 + 0x30);
      guard_check_icall(CVar4);
      (*pcVar1)();
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

