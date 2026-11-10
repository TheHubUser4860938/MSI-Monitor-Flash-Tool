// rea decompile_all
// name: CMFCRibbonBaseElement::accNavigate
// address: 0x100d5b29
// body: available
// range: 0x100d5b29-0x100d5be6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __thiscall CMFCRibbonBaseElement::accNavigate(long,struct tagVARIANT,struct
   tagVARIANT *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CMFCRibbonBaseElement::accNavigate
          (CMFCRibbonBaseElement *this,int param_1,short param_3,undefined4 param_4,int param_5,
          undefined4 param_6,undefined2 *param_7)

{
  CMFCRibbonButtonsGroup *this_00;
  int iVar1;
  undefined4 *puVar2;
  IDispatch *pIVar3;
  CCmdTarget *this_01;
  
  if (*(int *)(this + 0x108) == 0) {
    return 1;
  }
  *param_7 = 0;
  if (param_3 != 3) {
    return -0x7ff8ffa9;
  }
  this_00 = *(CMFCRibbonButtonsGroup **)(this + 0x90);
  if (this_00 == (CMFCRibbonButtonsGroup *)0x0) {
    return 1;
  }
  if (param_1 == 3) {
LAB_100d5ba0:
    if (param_5 != 0) {
      return 1;
    }
    iVar1 = CMFCRibbonButtonsGroup::GetButtonIndex(this_00,this);
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      this_01 = (CCmdTarget *)(*(int *)(this + 0x84) + 0x1250);
      goto LAB_100d5bd1;
    }
  }
  else {
    if (param_1 < 4) {
      return 1;
    }
    if (5 < param_1) {
      if (param_1 != 6) {
        return 1;
      }
      goto LAB_100d5ba0;
    }
    if (param_5 != 0) {
      return 1;
    }
    iVar1 = CMFCRibbonButtonsGroup::GetButtonIndex(this_00,this);
    iVar1 = iVar1 + 1;
    if (*(int *)(this_00 + 0x114) <= iVar1) {
      this_01 = *(CCmdTarget **)(*(int *)(this + 0x84) + 0x7a8);
      goto LAB_100d5bd1;
    }
  }
  puVar2 = (undefined4 *)FUN_1009f8c7(iVar1);
  this_01 = (CCmdTarget *)*puVar2;
LAB_100d5bd1:
  if (this_01 == (CCmdTarget *)0x0) {
    return 1;
  }
  *param_7 = 9;
  pIVar3 = CCmdTarget::GetIDispatch(this_01,1);
  *(IDispatch **)(param_7 + 4) = pIVar3;
  return 0;
}

