// rea decompile_all
// name: FUN_004f1f47
// address: 0x4f1f47
// body: available
// range: 0x4f1f47-0x4f2024 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4f2020 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_004f1f47(undefined4 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  CMFCTabCtrl *in_ECX;
  int iVar5;
  undefined4 local_14;
  
  if ((*(int *)(in_ECX + 0x250) != 0) && (*(int *)(in_ECX + 0x264) == 0)) {
    return &LAB_005a82d9;
  }
  *(undefined4 *)(in_ECX + 0x290) = param_1;
  uVar2 = FUN_004295fe();
  FUN_0040eb30(uVar2);
  iVar5 = (-(uint)(*(int *)(in_ECX + 0x290) != 0) & 0x3f0) + 0x3ea3;
  iVar3 = FUN_00435fce(iVar5);
  if ((iVar3 != 0) && (iVar3 = FUN_004160f0(iVar3,iVar5), iVar3 != 0)) {
    if (*(int *)(in_ECX + 0x264) != 0) {
      FUN_0050e1a4(local_14);
    }
    CMFCTabCtrl::SetScrollButtons(in_ECX);
    pcVar1 = *(code **)(*(int *)in_ECX + 0x184);
    guard_check_icall();
    (*pcVar1)();
    *(undefined4 *)(in_ECX + 0x2a4) = 0;
    *(undefined4 *)(in_ECX + 0x2b0) = 0;
    if (-1 < *(int *)(in_ECX + 0xc0)) {
      pcVar1 = *(code **)(*(int *)in_ECX + 0x224);
      guard_check_icall(*(int *)(in_ECX + 0xc0));
      (*pcVar1)();
    }
    puVar4 = (undefined1 *)FUN_0040efa0();
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

