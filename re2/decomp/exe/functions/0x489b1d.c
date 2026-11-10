// rea decompile_all
// name: FUN_00489b1d
// address: 0x489b1d
// body: available
// range: 0x489b1d-0x489c7c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x489c78 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

HMENU__ * FUN_00489b1d(void)

{
  code *pcVar1;
  uint uVar2;
  HMENU pHVar3;
  int *piVar4;
  int iVar5;
  HMENU__ *hMenu;
  int in_ECX;
  UINT uFlags;
  UINT_PTR uIDNewItem;
  LPCWSTR lpNewItem;
  undefined **local_24;
  HMENU local_20;
  UINT_PTR local_1c;
  int local_18;
  LPCWSTR local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_20 = (HMENU)0x0;
  local_24 = CMenu::vftable;
  local_8 = 0;
  pHVar3 = CreatePopupMenu();
  CMenu::Attach((CMenu *)&local_24,pHVar3);
  local_18 = *(int *)(in_ECX + 0xc40);
joined_r0x00489b54:
  if (local_18 == 0) {
    hMenu = CMenu::Detach((CMenu *)&local_24);
    SetMenuDefaultItem(hMenu,*(UINT *)(in_ECX + 0xd48),0);
    local_8 = 2;
    local_24 = CMenu::vftable;
    CMenu::DestroyMenu((CMenu *)&local_24);
    return hMenu;
  }
  piVar4 = (int *)FUN_0043410a(&local_18);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  if ((*(byte *)(piVar4 + 9) & 1) == 0) goto LAB_00489b89;
  lpNewItem = (LPCWSTR)0x0;
  uIDNewItem = 0;
  uFlags = 0x800;
  goto LAB_00489c28;
LAB_00489b89:
  iVar5 = FUN_0043970d(&PTR_s_CMFCToolBarMenuButton_0060c6d0);
  if (iVar5 != 0) {
    pcVar1 = *(code **)(*piVar4 + 0xd4);
    guard_check_icall();
    local_1c = (*pcVar1)();
    if (local_1c == 0) {
      lpNewItem = (LPCWSTR)piVar4[0xb];
      uIDNewItem = piVar4[8];
      uFlags = 0;
LAB_00489c28:
      AppendMenuW(local_20,uFlags,uIDNewItem,lpNewItem);
    }
    else {
      uVar2 = piVar4[9];
      iVar5 = FUN_00415ee0(piVar4[0xb] + -0x10);
      local_14[0] = (LPCWSTR)(iVar5 + 0x10);
      local_8._0_1_ = 1;
      if ((piVar4[0x2f] != 0) && (DAT_0061775c != 0)) {
        Build(piVar4[0x2f],local_14);
      }
      AppendMenuW(local_20,(uVar2 & 0x20000000 | 0x8000000) >> 0x17,local_1c,local_14[0]);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_0040efa0();
    }
  }
  goto joined_r0x00489b54;
}

