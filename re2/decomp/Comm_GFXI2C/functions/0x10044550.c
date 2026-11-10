// rea decompile_all
// name: Catch@10044550
// address: 0x10044550
// body: available
// range: 0x10044550-0x100445f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 Catch_10044550(void)

{
  int *piVar1;
  wchar_t *pwVar2;
  int iVar3;
  int unaff_EBP;
  
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)
             (unaff_EBP + -0x418));
  piVar1 = *(int **)(unaff_EBP + -0x41c);
  iVar3 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar3 = (**(code **)(iVar3 + 0xc))(unaff_EBP + -0x414,0x200,0);
  if (iVar3 == 0) {
    FUN_100023c0((void *)(unaff_EBP + -0x418),L"%s (%s:%d)");
  }
  else {
    FUN_100023c0((void *)(unaff_EBP + -0x418),L"%s (%s:%d)\n%s");
  }
  pwVar2 = *(wchar_t **)(unaff_EBP + -0x418);
  AfxMessageBox(pwVar2,0,0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_100024a0((undefined4 *)(pwVar2 + -8));
  (**(code **)(*piVar1 + 4))(1);
  return 0x1004454a;
}

