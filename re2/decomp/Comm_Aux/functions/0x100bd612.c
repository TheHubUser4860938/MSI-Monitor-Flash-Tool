// rea decompile_all
// name: FUN_100bd612
// address: 0x100bd612
// body: available
// range: 0x100bd612-0x100bd6b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100bd6b4 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100bd612(uint param_1)

{
  CFrameWnd *pCVar1;
  int iVar2;
  LRESULT LVar3;
  CWnd *in_ECX;
  
  pCVar1 = CWnd::GetTopLevelFrame(in_ECX);
  if (pCVar1 == (CFrameWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  param_1 = param_1 & 0xfff0;
  if (*(int *)(pCVar1 + 0x94) == 0) {
LAB_100bd65a:
    FUN_100509af();
  }
  else {
    if (param_1 < 0xf041) {
      if (((param_1 != 0xf040) && (param_1 != 0xf000)) && (param_1 != 0xf010)) {
        iVar2 = param_1 - 0xf020;
LAB_100bd653:
        if ((iVar2 != 0) && (iVar2 != 0x10)) goto LAB_100bd65a;
      }
    }
    else if ((param_1 != 0xf050) && (param_1 != 0xf060)) {
      iVar2 = param_1 - 0xf120;
      goto LAB_100bd653;
    }
    LVar3 = SendMessageW(*(HWND *)(in_ECX + 0x20),0x365,0,(param_1 - 0xf000 >> 4) + 0x1ef00);
    if (LVar3 == 0) {
      SendMessageW(*(HWND *)(in_ECX + 0x20),0x111,0xe147,0);
    }
  }
  return;
}

