// rea decompile_all
// name: FUN_10088605
// address: 0x10088605
// body: available
// range: 0x10088605-0x10088682 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_10088605(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  CMFCToolBarButton *in_ECX;
  
  CMFCToolBarButton::CMFCToolBarButton(in_ECX);
  *(undefined4 *)(in_ECX + 0x70) = param_1;
  *(undefined4 *)(in_ECX + 0x74) = param_5;
  *(undefined ***)in_ECX = CMFCToolBarColorButton::vftable;
  if (param_4 == (undefined *)0x0) {
    param_4 = &DAT_101b5ebc;
  }
  FUN_10003780(param_4);
  *(undefined4 *)(in_ECX + 0x80) = 0;
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  *(undefined4 *)(in_ECX + 0x78) = param_2;
  *(undefined4 *)(in_ECX + 0x7c) = param_3;
  *(undefined4 *)(in_ECX + 0x84) = param_6;
  *(undefined4 *)(in_ECX + 0x88) = param_7;
  *(undefined4 *)(in_ECX + 0x3c) = 1;
  return;
}

