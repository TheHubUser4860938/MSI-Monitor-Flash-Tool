// rea decompile_all
// name: FUN_004d6ed8
// address: 0x4d6ed8
// body: available
// range: 0x4d6ed8-0x4d6f7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4d6f7a to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d6ed8(uint param_1)

{
  CFrameWnd *pCVar1;
  int iVar2;
  LRESULT LVar3;
  CWnd *in_ECX;
  
  pCVar1 = CWnd::GetTopLevelFrame(in_ECX);
  if (pCVar1 == (CFrameWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  param_1 = param_1 & 0xfff0;
  if (*(int *)(pCVar1 + 0x94) == 0) {
LAB_004d6f20:
    FUN_0042ec70();
  }
  else {
    if (param_1 < 0xf041) {
      if (((param_1 != 0xf040) && (param_1 != 0xf000)) && (param_1 != 0xf010)) {
        iVar2 = param_1 - 0xf020;
LAB_004d6f19:
        if ((iVar2 != 0) && (iVar2 != 0x10)) goto LAB_004d6f20;
      }
    }
    else if ((param_1 != 0xf050) && (param_1 != 0xf060)) {
      iVar2 = param_1 - 0xf120;
      goto LAB_004d6f19;
    }
    LVar3 = SendMessageW(*(HWND *)(in_ECX + 0x20),0x365,0,(param_1 - 0xf000 >> 4) + 0x1ef00);
    if (LVar3 == 0) {
      SendMessageW(*(HWND *)(in_ECX + 0x20),0x111,0xe147,0);
    }
  }
  return;
}

