// rea decompile_all
// name: FUN_10093a8b
// address: 0x10093a8b
// body: available
// range: 0x10093a8b-0x10093b08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_10093a8b(undefined4 param_1,undefined4 param_2,undefined4 param_3,wchar_t *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  CMFCToolBarButton *in_ECX;
  
  CMFCToolBarButton::CMFCToolBarButton(in_ECX);
  *(undefined4 *)(in_ECX + 0x70) = param_1;
  *(undefined4 *)(in_ECX + 0x74) = param_5;
  *(undefined ***)in_ECX = CMFCToolBarColorButton::vftable;
  if (param_4 == (wchar_t *)0x0) {
    param_4 = L"";
  }
  ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)(in_ECX + 0x2c),param_4);
  *(undefined4 *)(in_ECX + 0x80) = 0;
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  *(undefined4 *)(in_ECX + 0x78) = param_2;
  *(undefined4 *)(in_ECX + 0x7c) = param_3;
  *(undefined4 *)(in_ECX + 0x84) = param_6;
  *(undefined4 *)(in_ECX + 0x88) = param_7;
  *(undefined4 *)(in_ECX + 0x3c) = 1;
  return;
}

