// rea decompile_all
// name: FUN_1008974d
// address: 0x1008974d
// body: available
// range: 0x1008974d-0x100897d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100897d4 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_1008974d(undefined4 param_1)

{
  undefined4 *_Dst;
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  
  if (*(int *)(in_ECX + 0x10) == 0) {
    iVar1 = FUN_1002f9af(in_ECX + 0x14,*(undefined4 *)(in_ECX + 0x18),0x10);
    iVar3 = *(int *)(in_ECX + 0x18);
    iVar1 = iVar3 * 0x10 + iVar1 + -8;
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(in_ECX + 0x10);
      *(int *)(in_ECX + 0x10) = iVar1;
      iVar1 = iVar1 + -0x10;
    }
  }
  _Dst = *(undefined4 **)(in_ECX + 0x10);
  if (_Dst != (undefined4 *)0x0) {
    uVar2 = _Dst[2];
    _memset(_Dst,0,0x10);
    _Dst[2] = uVar2;
    uVar2 = *(undefined4 *)(*(int *)(in_ECX + 0x10) + 8);
    *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + 1;
    *(undefined4 *)(in_ECX + 0x10) = uVar2;
    *_Dst = param_1;
    uVar2 = FUN_10013071();
    FUN_10003190(uVar2);
    return _Dst;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012a3f();
}

