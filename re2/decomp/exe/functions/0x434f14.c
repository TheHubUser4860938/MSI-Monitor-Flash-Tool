// rea decompile_all
// name: FUN_00434f14
// address: 0x434f14
// body: available
// range: 0x434f14-0x434fd2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x434fce to 0x42915b FUN_0042915b (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00434f14(int param_1,uint param_2,CWnd *param_3)

{
  CMFCControlContainer *this;
  int iVar1;
  HWND pHVar2;
  COleControlSite *pCVar3;
  CWnd *pCVar4;
  HWND__ *local_8;
  
  if (*(int *)(param_3 + 0x20) != 0) {
    return;
  }
  iVar1 = FUN_00433f72();
  if (iVar1 != 0) {
    return;
  }
  FUN_00435489(param_2);
  CWnd::GetDlgItem(*(CWnd **)(param_1 + 4),param_2,&local_8);
  this = *(CMFCControlContainer **)(*(int *)(param_1 + 4) + 0x78);
  if ((this != (CMFCControlContainer *)0x0) &&
     (iVar1 = CMFCControlContainer::IsSubclassedFeaturePackControl(this,local_8), iVar1 != 0)) {
    FUN_004d2ca6(local_8,param_2,param_3);
    return;
  }
  if (local_8 != (HWND__ *)0x0) {
    iVar1 = CWnd::SubclassWindow(param_3,local_8);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0042915b();
    }
    if (local_8 != (HWND__ *)0x0) {
      pCVar4 = *(CWnd **)(param_1 + 4);
      pHVar2 = GetParent(*(HWND *)(param_3 + 0x20));
      if (*(HWND *)(pCVar4 + 0x20) == pHVar2) {
        return;
      }
      param_2 = 0;
      goto LAB_00434fbe;
    }
  }
  pCVar3 = CWnd::GetOleControlSite(*(CWnd **)(param_1 + 4),param_2);
  if (pCVar3 == (COleControlSite *)0x0) {
    return;
  }
  pCVar4 = *(CWnd **)(param_1 + 4);
LAB_00434fbe:
  CWnd::AttachControlSite(param_3,pCVar4,param_2);
  return;
}

