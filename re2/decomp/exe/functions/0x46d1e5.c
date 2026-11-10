// rea decompile_all
// name: CMFCRibbonSeparator::AddToListBox
// address: 0x46d1e5
// body: available
// range: 0x46d1e5-0x46d291 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x46d205 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCRibbonSeparator::AddToListBox(class CMFCRibbonCommandsListBox
   *,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCRibbonSeparator::AddToListBox
          (CMFCRibbonSeparator *this,CMFCRibbonCommandsListBox *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  LPARAM *pLVar3;
  WPARAM wParam;
  undefined1 local_18 [4];
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x46d1f1;
  if (param_1 == (CMFCRibbonCommandsListBox *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
  }
  if (iVar1 != 0) {
    uVar2 = FUN_004295fe();
    FUN_0040eb30(uVar2);
    local_8 = 0;
    iVar1 = FUN_00435fce(0x42c7);
    if (iVar1 != 0) {
      iVar1 = FUN_004160f0(iVar1,0x42c7);
      if (iVar1 != 0) {
        pLVar3 = (LPARAM *)FUN_00415460(local_18,&DAT_005aed6c,local_14);
        wParam = SendMessageW(*(HWND *)(param_1 + 0x20),0x180,0,*pLVar3);
        FUN_0040efa0();
        SendMessageW(*(HWND *)(param_1 + 0x20),0x19a,wParam,(LPARAM)this);
        FUN_0040efa0();
        return wParam;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

