// rea decompile_all
// name: CMFCRibbonQuickAccessToolBar::accNavigate
// address: 0x5031ae
// body: available
// range: 0x5031ae-0x503332 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual long __thiscall CMFCRibbonQuickAccessToolBar::accNavigate(long,struct
   tagVARIANT,struct tagVARIANT *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CMFCRibbonQuickAccessToolBar::accNavigate
          (CMFCRibbonQuickAccessToolBar *this,int param_1,short param_3,undefined4 param_4,
          int param_5,undefined4 param_6,undefined2 *param_7)

{
  code *pcVar1;
  CMFCRibbonQuickAccessToolBar *pCVar2;
  IDispatch *pIVar3;
  CCmdTarget *pCVar4;
  long lVar5;
  undefined **local_3c;
  undefined4 local_38;
  IDispatch *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined **local_28;
  int *local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  CMFCRibbonQuickAccessToolBar *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  *param_7 = 0;
  if (param_3 != 3) {
    return -0x7ff8ffa9;
  }
  lVar5 = 0;
  local_3c = CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::vftable;
  local_38 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = (IDispatch *)0x0;
  local_8 = 0;
  pcVar1 = *(code **)(*(int *)this + 0x1f0);
  local_14 = this;
  guard_check_icall(&local_3c);
  (*pcVar1)();
  pCVar2 = local_14;
  if (param_1 == 3) {
LAB_005032ec:
    if (param_5 == 0) {
      pCVar4 = *(CCmdTarget **)(*(int *)(local_14 + 0x84) + 0x334);
      if (pCVar4 != (CCmdTarget *)0x0) {
        *param_7 = 9;
        pIVar3 = CCmdTarget::GetIDispatch(pCVar4,1);
LAB_0050332b:
        *(IDispatch **)(param_7 + 4) = pIVar3;
        goto LAB_0050326f;
      }
    }
    else {
      *param_7 = 3;
      *(int *)(param_7 + 4) = param_5 + -1;
      if (0 < param_5 + -1) goto LAB_0050326f;
LAB_00503267:
      *param_7 = 0;
    }
  }
  else if (3 < param_1) {
    if (param_1 < 6) {
      if (param_5 != 0) {
        *param_7 = 3;
        *(int *)(param_7 + 4) = param_5 + 1;
        if (param_5 + 1 <= (int)local_34) goto LAB_0050326f;
        goto LAB_00503267;
      }
      local_28 = CArray<CMFCRibbonContextCaption*,CMFCRibbonContextCaption*>::vftable;
      local_24 = (int *)0x0;
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      local_8 = CONCAT31(local_8._1_3_,1);
      CMFCRibbonBar::GetVisibleContextCaptions
                (*(CMFCRibbonBar **)(local_14 + 0x84),
                 (CArray<CMFCRibbonContextCaption*,CMFCRibbonContextCaption*> *)&local_28);
      if (((0 < local_20) && (pCVar4 = (CCmdTarget *)*local_24, pCVar4 != (CCmdTarget *)0x0)) ||
         (pCVar4 = (CCmdTarget *)(*(int *)(pCVar2 + 0x84) + 0x1250), pCVar4 != (CCmdTarget *)0x0)) {
        *param_7 = 9;
        pIVar3 = CCmdTarget::GetIDispatch(pCVar4,1);
        *(IDispatch **)(param_7 + 4) = pIVar3;
        ~CArray<>();
        goto LAB_0050326f;
      }
      ~CArray<>();
    }
    else {
      if (param_1 == 6) goto LAB_005032ec;
      if (param_1 == 7) {
        if (param_5 == 0) {
          *param_7 = 3;
          *(undefined4 *)(param_7 + 4) = 1;
          goto LAB_0050326f;
        }
      }
      else if ((param_1 == 8) && (param_5 == 0)) {
        *param_7 = 3;
        pIVar3 = local_34;
        goto LAB_0050332b;
      }
    }
  }
  lVar5 = 1;
LAB_0050326f:
  CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::
  ~CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>
            ((CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)&local_3c);
  return lVar5;
}

