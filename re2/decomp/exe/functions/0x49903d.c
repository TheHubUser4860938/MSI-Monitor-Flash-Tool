// rea decompile_all
// name: CMFCRibbonEdit::CreateSpinButton
// address: 0x49903d
// body: available
// range: 0x49903d-0x499123 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: int __thiscall CMFCRibbonEdit::CreateSpinButton(class CMFCRibbonRichEditCtrl *,class
   CWnd *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCRibbonEdit::CreateSpinButton(CMFCRibbonEdit *this,CMFCRibbonRichEditCtrl *param_1,CWnd *param_2)

{
  code *pcVar1;
  CMFCRibbonSpinButtonCtrl *this_00;
  int *piVar2;
  int iVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x499049;
  if (*(int *)(this + 0x1e0) != 0) {
    this_00 = (CMFCRibbonSpinButtonCtrl *)FUN_00416408(0xa0);
    local_8 = 0;
    if (this_00 == (CMFCRibbonSpinButtonCtrl *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)CMFCRibbonSpinButtonCtrl::CMFCRibbonSpinButtonCtrl(this_00,this);
    }
    local_8 = 0xffffffff;
    *(int **)(this + 500) = piVar2;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    pcVar1 = *(code **)(*piVar2 + 0x164);
    guard_check_icall(0x50000026,&local_24,param_2,*(undefined4 *)(this + 0xa4));
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) {
      if (*(int **)(this + 500) != (int *)0x0) {
        pcVar1 = *(code **)(**(int **)(this + 500) + 4);
        guard_check_icall(1);
        (*pcVar1)();
      }
    }
    else {
      CSpinButtonCtrl::SetBuddy(*(CSpinButtonCtrl **)(this + 500),(CWnd *)param_1);
      SendMessageW(*(HWND *)(*(int *)(this + 500) + 0x20),0x46f,*(WPARAM *)(this + 0x1cc),
                   *(LPARAM *)(this + 0x1d0));
    }
  }
  iVar3 = FUN_0055bae6();
  return iVar3;
}

