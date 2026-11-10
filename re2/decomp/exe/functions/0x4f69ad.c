// rea decompile_all
// name: FUN_004f69ad
// address: 0x4f69ad
// body: available
// range: 0x4f69ad-0x4f6b7c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4f6b78 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004f69ad(CMFCToolBarMenuButton *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  HMENU pHVar4;
  int *piVar5;
  int iVar6;
  CMFCToolBarButton *in_ECX;
  LPCWSTR lpNewItem;
  undefined **local_2c;
  HMENU local_28;
  undefined1 local_24 [4];
  undefined4 local_20;
  int local_1c;
  LPCWSTR local_18;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_14 [12];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x4f69b9;
  if ((*(int *)(in_ECX + 0x70) == 0) ||
     (iVar3 = CMFCToolBarButton::ExportToMenuButton(in_ECX,param_1), iVar3 == 0)) {
    uVar2 = 0;
  }
  else {
    local_28 = (HMENU)0x0;
    local_2c = CMenu::vftable;
    local_8 = 0;
    pHVar4 = CreatePopupMenu();
    CMenu::Attach((CMenu *)&local_2c,pHVar4);
    local_1c = *(int *)(*(int *)(in_ECX + 0x70) + 0xc40);
    while (local_1c != 0) {
      piVar5 = (int *)FUN_004ead48(&local_1c);
      iVar3 = *piVar5;
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00429127();
      }
      if ((*(byte *)(iVar3 + 0x24) & 1) == 0) {
        if ((*(int *)(iVar3 + 0x20) != 0) && (*(int *)(iVar3 + 0x20) != -1)) {
          iVar6 = FUN_00415ee0(*(int *)(iVar3 + 0x2c) + -0x10);
          lpNewItem = (LPCWSTR)(iVar6 + 0x10);
          local_8._0_1_ = 1;
          local_18 = lpNewItem;
          if (*(int *)(iVar6 + 4) == 0) {
            uVar2 = FUN_004295fe();
            FUN_0040eb30(uVar2);
            local_20 = *(undefined4 *)(iVar3 + 0x20);
            local_8._0_1_ = 2;
            iVar6 = FUN_00435fce(local_20);
            if (((iVar6 != 0) && (iVar6 = FUN_004160f0(iVar6,local_20), iVar6 != 0)) &&
               (iVar6 = FUN_004148c0(10,0), iVar6 != -1)) {
              uVar2 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                                (local_14,(int)local_24);
              local_8._0_1_ = 3;
              FUN_00415f50(uVar2);
              FUN_0040efa0();
              lpNewItem = local_18;
            }
            FUN_0040efa0();
          }
          AppendMenuW(local_28,0,*(UINT_PTR *)(iVar3 + 0x20),lpNewItem);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_0040efa0();
        }
      }
      else {
        AppendMenuW(local_28,0x800,0,(LPCWSTR)0x0);
      }
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_00415f50(in_ECX + 0x74);
    pcVar1 = *(code **)(*(int *)param_1 + 0xc0);
    guard_check_icall(0xffffffff);
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0xc) = 0;
    pcVar1 = *(code **)(*(int *)param_1 + 0xd0);
    guard_check_icall(local_28);
    (*pcVar1)();
    CMenu::DestroyMenu((CMenu *)&local_2c);
    local_8 = 4;
    local_2c = CMenu::vftable;
    CMenu::DestroyMenu((CMenu *)&local_2c);
    uVar2 = 1;
  }
  return uVar2;
}

