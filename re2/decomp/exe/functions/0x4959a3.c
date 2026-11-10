// rea decompile_all
// name: FUN_004959a3
// address: 0x4959a3
// body: available
// range: 0x4959a3-0x495a01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4959fd to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004959a3(int param_1,tagRECT *param_2)

{
  LONG LVar1;
  LONG LVar2;
  LONG LVar3;
  int iVar4;
  CFrameWnd *in_ECX;
  
  if (param_1 == 1) {
    CFrameWnd::NegotiateBorderSpace(in_ECX,1,param_2);
    LVar1 = *(LONG *)(in_ECX + 0x334);
    LVar2 = *(LONG *)(in_ECX + 0x338);
    LVar3 = *(LONG *)(in_ECX + 0x33c);
    if (param_2 == (tagRECT *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    param_2->left = *(LONG *)(in_ECX + 0x330);
    param_2->top = LVar1;
    param_2->right = LVar2;
    param_2->bottom = LVar3;
  }
  else if ((param_1 != 2) && (param_1 == 3)) {
    iVar4 = CFrameWnd::NegotiateBorderSpace(in_ECX,3,param_2);
    return iVar4;
  }
  return 1;
}

