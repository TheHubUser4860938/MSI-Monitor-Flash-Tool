// rea decompile_all
// name: FUN_10169616
// address: 0x10169616
// body: available
// range: 0x10169616-0x101696a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101696a1 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10169616(int *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  HDWP pvVar4;
  CWnd *in_ECX;
  uint uVar5;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  uVar2 = CWnd::GetExStyle(in_ECX);
  uVar1 = *(uint *)(in_ECX + 0xac);
  uVar3 = uVar2 & 0x10000000;
  uVar5 = *(uint *)(in_ECX + 0xb0) & 0xff00 | uVar3;
  if ((uVar1 & 3) == 0) {
    return uVar5;
  }
  if ((uVar1 & 1) == 0) {
    if (uVar3 != 0) goto LAB_1016968f;
    uVar3 = 0x40;
  }
  else {
    uVar3 = uVar3 >> 0x15;
  }
  if (uVar3 != 0) {
    if (*param_1 == 0) {
      return uVar5 ^ 0x10000000;
    }
    *(uint *)(in_ECX + 0xac) = uVar1 & 0xfffffffc;
    pvVar4 = DeferWindowPos((HDWP)*param_1,*(HWND *)(in_ECX + 0x20),(HWND)0x0,0,0,0,0,uVar3 | 0x17);
    *param_1 = (int)pvVar4;
    return uVar5 ^ 0x10000000;
  }
LAB_1016968f:
  *(uint *)(in_ECX + 0xac) = uVar1 & 0xfffffffc;
  return uVar5;
}

