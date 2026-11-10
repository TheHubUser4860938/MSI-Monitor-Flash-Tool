// rea decompile_all
// name: FUN_00405c67
// address: 0x405c67
// body: available
// range: 0x405c67-0x405d19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x405ca0 to 0x57663d FUN_0057663d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x405cac to 0x57663d FUN_0057663d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x405cb8 to 0x57663d FUN_0057663d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x405cc2 to 0x57663d FUN_0057663d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00405c67(void)

{
  void *pvVar1;
  uint uVar2;
  uint *puVar3;
  void *_Memory;
  uint *unaff_EBX;
  int unaff_EBP;
  uint *unaff_ESI;
  uint unaff_EDI;
  
  if ((*(int *)(unaff_EBP + 0xc) != 0) && (*(int *)(unaff_EBP + 0xc) != 0)) {
    FUN_005734b0();
  }
  if (0xf < unaff_ESI[5]) {
    pvVar1 = (void *)*unaff_ESI;
    _Memory = pvVar1;
    if (0xfff < unaff_ESI[5] + 1) {
      if (((uint)pvVar1 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0057663d();
      }
      _Memory = *(void **)((int)pvVar1 - 4);
      if (pvVar1 <= _Memory) {
                    /* WARNING: Subroutine does not return */
        FUN_0057663d();
      }
      if ((uint)((int)pvVar1 - (int)_Memory) < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_0057663d();
      }
      if (0x23 < (uint)((int)pvVar1 - (int)_Memory)) {
                    /* WARNING: Subroutine does not return */
        FUN_0057663d();
      }
    }
    FID_conflict__free(_Memory);
  }
  unaff_ESI[5] = 0xf;
  unaff_ESI[4] = 0;
  puVar3 = unaff_ESI;
  if (0xf < unaff_ESI[5]) {
    puVar3 = (uint *)*unaff_ESI;
  }
  *(undefined1 *)puVar3 = 0;
  uVar2 = *(uint *)(unaff_EBP + 0xc);
  *unaff_ESI = (uint)unaff_EBX;
  unaff_ESI[5] = unaff_EDI;
  unaff_ESI[4] = uVar2;
  if (0xf < unaff_ESI[5]) {
    unaff_ESI = unaff_EBX;
  }
  *(undefined1 *)((int)unaff_ESI + uVar2) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

