// rea decompile_all
// name: CMFCToolBar::CreateDroppedButton
// address: 0x10068e0c
// body: available
// range: 0x10068e0c-0x10068f39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10068e2c to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual class CMFCToolBarButton * __thiscall CMFCToolBar::CreateDroppedButton(class
   COleDataObject *)
   
   Library: Visual Studio 2015 Release */

CMFCToolBarButton * __thiscall
CMFCToolBar::CreateDroppedButton(CMFCToolBar *this,COleDataObject *param_1)

{
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  code *pcVar1;
  CMFCToolBarButton *pCVar2;
  int iVar3;
  undefined4 uVar4;
  int local_560;
  CMFCToolBarButtonCustomizeDialog local_55c [1364];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x550;
  local_8 = 0x10068e1b;
  pCVar2 = (CMFCToolBarButton *)FUN_100f224c(param_1);
  if (pCVar2 == (CMFCToolBarButton *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1001d023();
  }
  this_00 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(pCVar2 + 0x2c);
  iVar3 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                    (this_00,L'\t',0);
  if (-1 < iVar3) {
    uVar4 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Left
                      (this_00,(int)&local_560);
    local_8 = 0;
    FUN_10018680(uVar4);
    local_8 = 0xffffffff;
    ATL::CStringData::Release((CStringData *)(local_560 + -0x10));
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
      if ((iVar3 == -1) && (*(int *)(*(int *)this_00 + -0xc) == 0)) {
        pcVar1 = *(code **)(*(int *)this + 0x40c);
        guard_check_icall(pCVar2);
        iVar3 = (*pcVar1)();
        CMFCToolBarButtonCustomizeDialog::CMFCToolBarButtonCustomizeDialog
                  (local_55c,pCVar2,DAT_10209ce0,(CWnd *)this,0,iVar3);
        local_8 = 1;
        iVar3 = FUN_1002e0c8();
        if (iVar3 != 1) {
          pcVar1 = *(code **)(*(int *)pCVar2 + 4);
          guard_check_icall(1);
          (*pcVar1)();
          CMFCToolBarButtonCustomizeDialog::~CMFCToolBarButtonCustomizeDialog(local_55c);
          goto LAB_10068f32;
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
LAB_10068f32:
  pCVar2 = (CMFCToolBarButton *)FUN_10154478();
  return pCVar2;
}

