// rea decompile_all
// name: CMFCToolBar::CreateDroppedButton
// address: 0x1005d8d7
// body: available
// range: 0x1005d8d7-0x1005da04 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005d8f7 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual class CMFCToolBarButton * __thiscall CMFCToolBar::CreateDroppedButton(class
   COleDataObject *)
   
   Library: Visual Studio 2015 Release */

CMFCToolBarButton * __thiscall
CMFCToolBar::CreateDroppedButton(CMFCToolBar *this,COleDataObject *param_1)

{
  code *pcVar1;
  CMFCToolBarButton *pCVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_560 [4];
  CMFCToolBarButtonCustomizeDialog local_55c [1364];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x550;
  local_8 = 0x1005d8e6;
  pCVar2 = (CMFCToolBarButton *)FUN_100e6f66(param_1);
  if (pCVar2 == (CMFCToolBarButton *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10012a3f();
  }
  iVar3 = FUN_10010f20(9,0);
  if (-1 < iVar3) {
    uVar4 = FUN_10002d90(local_560,iVar3);
    local_8 = 0;
    FUN_100030d0(uVar4);
    local_8 = 0xffffffff;
    FUN_10003460();
  }
  if (*(int *)(pCVar2 + 0x1c) != 0) {
    *(undefined4 *)(pCVar2 + 8) = 0;
    *(undefined4 *)(pCVar2 + 0xc) = 1;
    if (*(int *)(pCVar2 + 0x1c) != 0) {
      if (*(int *)(pCVar2 + 4) == 0) {
        iVar3 = *(int *)(pCVar2 + 0x34);
      }
      else {
        iVar3 = *(int *)(pCVar2 + 0x38);
      }
      if ((iVar3 == -1) && (*(int *)(*(int *)(pCVar2 + 0x2c) + -0xc) == 0)) {
        pcVar1 = *(code **)(*(int *)this + 0x40c);
        guard_check_icall(pCVar2);
        iVar3 = (*pcVar1)();
        CMFCToolBarButtonCustomizeDialog::CMFCToolBarButtonCustomizeDialog
                  (local_55c,pCVar2,DAT_101daf80,(CWnd *)this,0,iVar3);
        local_8 = 1;
        iVar3 = FUN_10022d40();
        if (iVar3 != 1) {
          pcVar1 = *(code **)(*(int *)pCVar2 + 4);
          guard_check_icall(1);
          (*pcVar1)();
          CMFCToolBarButtonCustomizeDialog::~CMFCToolBarButtonCustomizeDialog(local_55c);
          goto LAB_1005d9fd;
        }
        CMFCToolBarButtonCustomizeDialog::~CMFCToolBarButtonCustomizeDialog(local_55c);
      }
    }
  }
  if (*(int *)(pCVar2 + 4) == 0) {
    iVar3 = *(int *)(pCVar2 + 0x34);
  }
  else {
    iVar3 = *(int *)(pCVar2 + 0x38);
  }
  if (iVar3 < 0) {
    *(undefined4 *)(pCVar2 + 0xc) = 0;
    *(undefined4 *)(pCVar2 + 8) = 1;
  }
LAB_1005d9fd:
  pCVar2 = (CMFCToolBarButton *)FUN_101490fe();
  return pCVar2;
}

