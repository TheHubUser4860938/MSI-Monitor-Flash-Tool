// rea decompile_all
// name: FUN_100e9496
// address: 0x100e9496
// body: available
// range: 0x100e9496-0x100e950e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e950a to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100e9496(int param_1,tagRECT *param_2)

{
  LONG LVar1;
  LONG LVar2;
  LONG LVar3;
  code *pcVar4;
  int iVar5;
  CFrameWnd *in_ECX;
  
  if (param_1 == 1) {
    CFrameWnd::NegotiateBorderSpace(in_ECX,1,param_2);
    pcVar4 = *(code **)(*(int *)(in_ECX + 0x160) + 0x38);
    guard_check_icall(0);
    (*pcVar4)();
    LVar1 = *(LONG *)(in_ECX + 0x25c);
    LVar2 = *(LONG *)(in_ECX + 0x260);
    LVar3 = *(LONG *)(in_ECX + 0x264);
    if (param_2 == (tagRECT *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1004a383();
    }
    param_2->left = *(LONG *)(in_ECX + 600);
    param_2->top = LVar1;
    param_2->right = LVar2;
    param_2->bottom = LVar3;
  }
  else if ((param_1 != 2) && (param_1 == 3)) {
    iVar5 = CFrameWnd::NegotiateBorderSpace(in_ECX,3,param_2);
    return iVar5;
  }
  return 1;
}

