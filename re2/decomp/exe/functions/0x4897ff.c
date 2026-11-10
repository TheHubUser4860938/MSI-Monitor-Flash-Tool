// rea decompile_all
// name: CMFCPopupMenuBar::CreateDroppedButton
// address: 0x4897ff
// body: available
// range: 0x4897ff-0x4898ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x489819 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual class CMFCToolBarButton * __thiscall
   CMFCPopupMenuBar::CreateDroppedButton(class COleDataObject *)
   
   Library: Visual Studio 2015 Release */

CMFCToolBarButton * __thiscall
CMFCPopupMenuBar::CreateDroppedButton(CMFCPopupMenuBar *this,COleDataObject *param_1)

{
  code *pcVar1;
  CObject *pCVar2;
  CMFCToolBarMenuButton *this_00;
  int iVar3;
  CMFCToolBarButton *local_14;
  
  pCVar2 = (CObject *)FUN_004e6575(param_1);
  if (pCVar2 != (CObject *)0x0) {
    local_14 = (CMFCToolBarButton *)
               AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_0060c6d0,pCVar2);
    if (local_14 == (CMFCToolBarButton *)0x0) {
      this_00 = (CMFCToolBarMenuButton *)FUN_00416408(0xe8);
      if (this_00 == (CMFCToolBarMenuButton *)0x0) {
        local_14 = (CMFCToolBarButton *)0x0;
      }
      else {
        if (*(int *)(pCVar2 + 0x3c) == 0) {
          if (*(int *)(pCVar2 + 4) == 0) {
            iVar3 = *(int *)(pCVar2 + 0x34);
          }
          else {
            iVar3 = *(int *)(pCVar2 + 0x38);
          }
        }
        else {
          iVar3 = -1;
        }
        local_14 = (CMFCToolBarButton *)
                   CMFCToolBarMenuButton::CMFCToolBarMenuButton
                             (this_00,*(uint *)(pCVar2 + 0x20),(HMENU__ *)0x0,iVar3,
                              *(wchar_t **)(pCVar2 + 0x2c),*(int *)(pCVar2 + 4));
      }
      if (local_14 == (CMFCToolBarButton *)0x0) goto LAB_00489819;
      *(int *)(local_14 + 8) = 1;
      *(uint *)(local_14 + 0xc) = (uint)(*(int *)(pCVar2 + 0x3c) == 0);
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x2c);
      guard_check_icall(local_14);
      iVar3 = (*pcVar1)();
      pcVar1 = *(code **)(*(int *)pCVar2 + 4);
      guard_check_icall(1);
      (*pcVar1)();
      if ((iVar3 == 0) || (*(int *)(*(int *)(local_14 + 0x2c) + -0xc) == 0)) {
        pcVar1 = *(code **)(*(int *)local_14 + 4);
        guard_check_icall(1);
        (*pcVar1)();
        local_14 = (CMFCToolBarButton *)0x0;
      }
    }
    return local_14;
  }
LAB_00489819:
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

