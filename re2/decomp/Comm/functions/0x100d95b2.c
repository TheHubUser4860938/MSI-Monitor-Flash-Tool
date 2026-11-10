// rea decompile_all
// name: CMFCRibbonTab::accNavigate
// address: 0x100d95b2
// body: available
// range: 0x100d95b2-0x100d965d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __thiscall CMFCRibbonTab::accNavigate(long,struct tagVARIANT,struct
   tagVARIANT *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CMFCRibbonTab::accNavigate
          (CMFCRibbonTab *this,int param_1,short param_3,undefined4 param_4,int param_5,
          undefined4 param_6,undefined2 *param_7)

{
  int iVar1;
  CCmdTarget *this_00;
  int iVar2;
  undefined4 *puVar3;
  IDispatch *pIVar4;
  CMFCRibbonButtonsGroup *this_01;
  
  *param_7 = 0;
  if (param_3 != 3) {
    return -0x7ff8ffa9;
  }
  if (*(int *)(this + 0x88) == 0) {
    return 1;
  }
  iVar1 = *(int *)(*(int *)(this + 0x88) + 0x53c);
  if (iVar1 == 0) {
    return 1;
  }
  if (*(int *)(iVar1 + 0x20) == 0) {
    return 1;
  }
  this_01 = (CMFCRibbonButtonsGroup *)(iVar1 + 0x1250);
  if (this_01 == (CMFCRibbonButtonsGroup *)0x0) {
    return 1;
  }
  if (param_1 != 3) {
    if (param_1 < 4) {
      return 1;
    }
    if (param_1 < 6) {
      if (param_5 != 0) {
        return 1;
      }
      iVar2 = CMFCRibbonButtonsGroup::GetButtonIndex(this_01,(CMFCRibbonBaseElement *)this);
      iVar2 = iVar2 + 1;
      if (*(int *)(iVar1 + 0x1364) <= iVar2) {
        return 1;
      }
      goto LAB_100d9638;
    }
    if (param_1 != 6) {
      return 1;
    }
  }
  if (param_5 != 0) {
    return 1;
  }
  iVar2 = CMFCRibbonButtonsGroup::GetButtonIndex(this_01,(CMFCRibbonBaseElement *)this);
  iVar2 = iVar2 + -1;
  if (iVar2 < 0) {
    return 1;
  }
LAB_100d9638:
  puVar3 = (undefined4 *)FUN_100d7168(iVar2);
  this_00 = (CCmdTarget *)*puVar3;
  if (this_00 == (CCmdTarget *)0x0) {
    return 1;
  }
  *param_7 = 9;
  pIVar4 = CCmdTarget::GetIDispatch(this_00,1);
  *(IDispatch **)(param_7 + 4) = pIVar4;
  return 0;
}

