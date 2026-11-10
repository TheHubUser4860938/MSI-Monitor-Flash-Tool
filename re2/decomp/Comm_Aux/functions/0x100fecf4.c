// rea decompile_all
// name: CMFCRibbonSeparator::AddToListBox
// address: 0x100fecf4
// body: available
// range: 0x100fecf4-0x100feda0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100fed14 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  local_8 = 0x100fed00;
  if (param_1 == (CMFCRibbonCommandsListBox *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
  }
  if (iVar1 != 0) {
    uVar2 = FUN_10048e90();
    FUN_10034c30(uVar2);
    local_8 = 0;
    iVar1 = FUN_10048ace(0x42c7);
    if (iVar1 != 0) {
      iVar1 = FUN_10034d90(iVar1,0x42c7);
      if (iVar1 != 0) {
        pLVar3 = (LPARAM *)FUN_10039650(local_18,&DAT_101be434,local_14);
        wParam = SendMessageW(*(HWND *)(param_1 + 0x20),0x180,0,*pLVar3);
        FUN_10034f00();
        SendMessageW(*(HWND *)(param_1 + 0x20),0x19a,wParam,(LPARAM)this);
        FUN_10034f00();
        return wParam;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1004886a();
}

