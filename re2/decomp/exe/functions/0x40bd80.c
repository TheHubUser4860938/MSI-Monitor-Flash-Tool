// rea decompile_all
// name: FUN_0040bd80
// address: 0x40bd80
// body: available
// range: 0x40bd80-0x40be08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40be04 to 0x55c74b FUN_0055c74b (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040bd80(void)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = in_ECX[2] - in_ECX[1];
  iVar1 = iVar4 >> 0x1f;
  if (iVar4 / 0x18 + iVar1 == iVar1) {
    iVar1 = (in_ECX[1] - *in_ECX) / 0x18;
    if (iVar1 == 0xaaaaaaa) {
                    /* WARNING: Subroutine does not return */
      FUN_0055c74b("vector<T> too long");
    }
    uVar5 = iVar1 + 1;
    uVar2 = (in_ECX[2] - *in_ECX) / 0x18;
    uVar3 = 0;
    if (uVar2 <= 0xaaaaaaa - (uVar2 >> 1)) {
      uVar3 = (uVar2 >> 1) + uVar2;
    }
    if (uVar5 <= uVar3) {
      uVar5 = uVar3;
    }
    FUN_0040cdf0(uVar5);
  }
  return;
}

