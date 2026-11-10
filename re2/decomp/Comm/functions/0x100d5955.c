// rea decompile_all
// name: CMFCRibbonPanel::RepositionMenu
// address: 0x100d5955
// body: available
// range: 0x100d5955-0x100d5c66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonPanel::RepositionMenu(class CDC *,class CRect const
   &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonPanel::RepositionMenu(CMFCRibbonPanel *this,CDC *param_1,CRect *param_2)

{
  code *pcVar1;
  RECT *pRVar2;
  int *piVar3;
  undefined4 *puVar4;
  CMFCVisualManager *pCVar5;
  int iVar6;
  BOOL BVar7;
  int iVar8;
  int local_60 [10];
  CDC *local_38;
  int local_34;
  int local_30;
  int local_2c;
  RECT *local_28;
  int *local_24;
  int local_20;
  int *local_1c;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_38 = param_1;
  local_28 = (RECT *)param_2;
  local_60[8] = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  local_2c = 0;
  local_60[9] = 0;
  if (*(CMFCRibbonCategory **)(this + 0x108) != (CMFCRibbonCategory *)0x0) {
    piVar3 = (int *)CMFCRibbonCategory::GetImageSize
                              (*(CMFCRibbonCategory **)(this + 0x108),(int)&local_34);
    local_60[9] = *piVar3;
  }
  local_20 = 0;
  local_24 = (int *)0x0;
  if (0 < *(int *)(this + 0x4e4)) {
    do {
      piVar3 = local_24;
      puVar4 = (undefined4 *)FUN_100d7168(local_24);
      local_1c = (int *)*puVar4;
      if ((int)piVar3 < *(int *)(this + 0xb8)) {
        local_60[4] = 0xffffffff;
        piVar3 = local_60 + 4;
        local_60[5] = 0xffffffff;
        local_60[6] = 0xffffffff;
        local_60[7] = 0xffffffff;
LAB_100d59f3:
        local_1c[0x1d] = *piVar3;
        local_1c[0x1e] = piVar3[1];
        local_1c[0x1f] = piVar3[2];
        local_1c[0x20] = piVar3[3];
      }
      else {
        pcVar1 = *(code **)(*local_1c + 0x180);
        guard_check_icall(local_38);
        (*pcVar1)();
        pcVar1 = *(code **)(*local_1c + 0xec);
        guard_check_icall(0);
        (*pcVar1)();
        pcVar1 = *(code **)(*local_1c + 0xbc);
        guard_check_icall(1);
        (*pcVar1)();
        pcVar1 = *(code **)(*local_1c + 0xf4);
        guard_check_icall(&local_34,local_38);
        (*pcVar1)();
        pRVar2 = local_28;
        if ((local_34 == 0) && (local_30 == 0)) {
          local_60[0] = 0;
          piVar3 = local_60;
          local_60[1] = 0;
          local_60[2] = 0;
          local_60[3] = 0;
          goto LAB_100d59f3;
        }
        BVar7 = IsRectEmpty(local_28);
        if ((BVar7 == 0) && (local_34 = pRVar2->right - pRVar2->left, *(int *)(this + 0x7c) != 0)) {
          piVar3 = (int *)FUN_1005f3ff(&local_18.right);
          local_1c[0x2b] = *piVar3;
        }
        iVar6 = pRVar2->left + *(int *)(this + 0xb0);
        iVar8 = pRVar2->top + local_2c + *(int *)(this + 0xb4);
        local_1c[0x1d] = iVar6;
        local_1c[0x1e] = iVar8;
        local_1c[0x1f] = local_34 + iVar6;
        local_1c[0x20] = local_30 + iVar8;
        if (local_20 <= local_34) {
          local_20 = local_34;
        }
        local_2c = local_2c + local_30;
        if (local_28->bottom < local_2c) {
          *(undefined4 *)(this + 0x98) = 1;
        }
      }
      local_24 = (int *)((int)local_24 + 1);
    } while ((int)local_24 < *(int *)(this + 0x4e4));
  }
  if (*(int *)(this + 0x7c) != 0) {
    pCVar5 = CMFCVisualManager::GetInstance();
    pcVar1 = *(code **)(*(int *)pCVar5 + 0x2dc);
    guard_check_icall();
    iVar6 = (*pcVar1)();
    piVar3 = (int *)FUN_1005f3ff(&local_18.right);
    local_20 = local_20 + *piVar3 + iVar6 * 2;
  }
  iVar6 = 0;
  *(int *)(this + 0xa8) = local_20;
  BVar7 = IsRectEmpty(local_28);
  if ((BVar7 != 0) && (0 < *(int *)(this + 0x4e4))) {
    do {
      local_24 = (int *)FUN_100d7168(iVar6);
      local_24 = (int *)*local_24;
      local_1c = local_24 + 0x1d;
      local_18.left = *local_1c;
      local_18.top = local_24[0x1e];
      local_18.right = local_24[0x1f];
      local_18.bottom = local_24[0x20];
      BVar7 = IsRectEmpty(&local_18);
      iVar6 = local_60[9];
      if (BVar7 == 0) {
        local_18.right = local_18.left + local_20;
        if ((0 < local_60[9]) &&
           (iVar8 = FUN_10019d4f(&PTR_s_CMFCRibbonSeparator_101960e0), iVar8 != 0)) {
          local_18.left = local_18.left + *(int *)(this + 0xb0) + iVar6;
        }
        *local_1c = local_18.left;
        local_1c[1] = local_18.top;
        local_1c[2] = local_18.right;
        local_1c[3] = local_18.bottom;
      }
      pcVar1 = *(code **)(*local_24 + 0x124);
      guard_check_icall(local_38);
      (*pcVar1)();
      iVar6 = local_60[8] + 1;
      local_60[8] = iVar6;
    } while (iVar6 < *(int *)(this + 0x4e4));
  }
  *(LONG *)(this + 0xcc) = local_28->left;
  *(LONG *)(this + 0xd0) = local_28->top;
  *(LONG *)(this + 0xd4) = local_28->right;
  *(LONG *)(this + 0xd8) = local_28->bottom;
  *(int *)(this + 0xd8) = *(int *)(this + 0xd0) + local_2c;
  *(int *)(this + 0xd4) = *(int *)(this + 0xcc) + *(int *)(this + 0xa8);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

