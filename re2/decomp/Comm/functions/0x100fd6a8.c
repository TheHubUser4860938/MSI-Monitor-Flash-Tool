// rea decompile_all
// name: FUN_100fd6a8
// address: 0x100fd6a8
// body: available
// range: 0x100fd6a8-0x100fd844 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100fd840 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_100fd6a8(void)

{
  code *pcVar1;
  CMFCPopupMenu *this;
  undefined4 uVar2;
  int iVar3;
  CMFCToolBarMenuButton *pCVar4;
  CMFCCustomizeButton *in_ECX;
  undefined4 uVar5;
  wchar_t *local_100;
  CMFCToolBarMenuButton local_fc [244];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xf0;
  local_8 = 0x100fd6b7;
  this = CMFCCustomizeButton::CreatePopupMenu(in_ECX);
  if (this == (CMFCPopupMenu *)0x0) {
LAB_100fd6c4:
    FUN_101490fe();
    return;
  }
  uVar5 = 0;
  uVar2 = *(undefined4 *)(in_ECX + 0xe8);
  pcVar1 = *(code **)(*(int *)this + 0x1c8);
  guard_check_icall(uVar2,0);
  (*pcVar1)();
  uVar2 = FUN_1005d844(uVar2,uVar5);
  FUN_1008305b(uVar2);
  iVar3 = CMFCPopupMenu::GetMenuItemCount(this);
  if (0 < iVar3) {
    CMFCPopupMenu::InsertSeparator(this,-1);
  }
  uVar2 = FUN_10013071();
  FUN_10003190(uVar2);
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  iVar3 = FUN_10012ca3(0x4285);
  if (iVar3 != 0) {
    iVar3 = FUN_100032f0(iVar3,0x4285);
    if (iVar3 != 0) {
      pCVar4 = (CMFCToolBarMenuButton *)
               CMFCToolBarMenuButton::CMFCToolBarMenuButton
                         (local_fc,0xf200,(HMENU__ *)0x0,-1,local_100,0);
      local_8._0_1_ = 1;
      CMFCPopupMenu::InsertItem(this,pCVar4,-1);
      local_8._0_1_ = 0;
      FUN_100d9fa0();
      iVar3 = FUN_10012ca3(0x4286);
      if (iVar3 != 0) {
        iVar3 = FUN_100032f0(iVar3,0x4286);
        if (iVar3 != 0) {
          pCVar4 = (CMFCToolBarMenuButton *)
                   CMFCToolBarMenuButton::CMFCToolBarMenuButton
                             (local_fc,0xf201,(HMENU__ *)0x0,-1,local_100,0);
          local_8._0_1_ = 2;
          CMFCPopupMenu::InsertItem(this,pCVar4,-1);
          local_8._0_1_ = 0;
          FUN_100d9fa0();
          iVar3 = FUN_10012ca3(0x4287);
          if (iVar3 != 0) {
            iVar3 = FUN_100032f0(iVar3,0x4287);
            if (iVar3 != 0) {
              pCVar4 = (CMFCToolBarMenuButton *)
                       CMFCToolBarMenuButton::CMFCToolBarMenuButton
                                 (local_fc,0xf202,(HMENU__ *)0x0,-1,local_100,0);
              local_8 = CONCAT31(local_8._1_3_,3);
              CMFCPopupMenu::InsertItem(this,pCVar4,-1);
              FUN_100d9fa0();
              FUN_10003460();
              goto LAB_100fd6c4;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012a3f();
}

