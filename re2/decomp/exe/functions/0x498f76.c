// rea decompile_all
// name: CMFCRibbonEdit::CreateEdit
// address: 0x498f76
// body: available
// range: 0x498f76-0x49900c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual class CMFCRibbonRichEditCtrl * __thiscall CMFCRibbonEdit::CreateEdit(class CWnd
   *,unsigned long)
   
   Library: Visual Studio 2015 Release */

CMFCRibbonRichEditCtrl * __thiscall
CMFCRibbonEdit::CreateEdit(CMFCRibbonEdit *this,CWnd *param_1,ulong param_2)

{
  code *pcVar1;
  CMFCRibbonRichEditCtrl *pCVar2;
  CRichEditCtrl *this_00;
  int iVar3;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x498f82;
  pCVar2 = (CMFCRibbonRichEditCtrl *)FUN_00416408(0x98);
  local_8 = 0;
  if (pCVar2 == (CMFCRibbonRichEditCtrl *)0x0) {
    this_00 = (CRichEditCtrl *)0x0;
  }
  else {
    this_00 = (CRichEditCtrl *)CMFCRibbonRichEditCtrl::CMFCRibbonRichEditCtrl(pCVar2,this);
  }
  local_8 = 0xffffffff;
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  iVar3 = CRichEditCtrl::Create(this_00,param_2,&local_24,param_1,*(uint *)(this + 0xa4));
  if (iVar3 == 0) {
    if (this_00 != (CRichEditCtrl *)0x0) {
      pcVar1 = *(code **)(*(int *)this_00 + 4);
      guard_check_icall(1);
      (*pcVar1)();
    }
  }
  else if (*(int *)(this + 0x1e0) != 0) {
    CreateSpinButton(this,(CMFCRibbonRichEditCtrl *)this_00,param_1);
  }
  pCVar2 = (CMFCRibbonRichEditCtrl *)FUN_0055bae6();
  return pCVar2;
}

