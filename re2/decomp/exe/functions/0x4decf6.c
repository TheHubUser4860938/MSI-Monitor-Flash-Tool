// rea decompile_all
// name: FUN_004decf6
// address: 0x4decf6
// body: available
// range: 0x4decf6-0x4ded8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4ded86 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004decf6(tagMSG *param_1)

{
  code *pcVar1;
  int iVar2;
  CFrameWnd *this;
  CFrameWnd *pCVar3;
  BOOL BVar4;
  CWnd *in_ECX;
  
  if (*(int *)(in_ECX + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  iVar2 = CWnd::PreTranslateMessage(in_ECX,param_1);
  if (iVar2 == 0) {
    this = (CFrameWnd *)CWnd::GetOwner(in_ECX);
    pCVar3 = CWnd::GetTopLevelFrame(in_ECX);
    if ((pCVar3 == (CFrameWnd *)0x0) || (*(int *)(pCVar3 + 0x94) == 0)) {
      for (; this != (CFrameWnd *)0x0; this = CWnd::GetParentFrame((CWnd *)this)) {
        pcVar1 = *(code **)(*(int *)this + 0x10c);
        guard_check_icall(param_1);
        iVar2 = (*pcVar1)();
        if (iVar2 != 0) {
          return 1;
        }
        BVar4 = IsWindow(*(HWND *)(this + 0x20));
        if (BVar4 == 0) break;
      }
      iVar2 = CWnd::PreTranslateInput(in_ECX,param_1);
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}

