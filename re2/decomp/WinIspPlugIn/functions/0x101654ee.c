// rea decompile_all
// name: FUN_101654ee
// address: 0x101654ee
// body: available
// range: 0x101654ee-0x101654f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_101654ee(void)

{
  undefined4 *in_ECX;
  int iVar1;
  int iVar2;
  
  *in_ECX = CArray<CVariantBoolPair,CVariantBoolPair_const&>::vftable;
  if (in_ECX[1] != 0) {
    iVar1 = 0;
    if (0 < (int)in_ECX[2]) {
      iVar2 = 0;
      do {
        CVariantBoolPair::_scalar_deleting_destructor_((CVariantBoolPair *)(in_ECX[1] + iVar2),0);
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0xc;
      } while (iVar1 < (int)in_ECX[2]);
    }
    FID_conflict__free((void *)in_ECX[1]);
  }
  return;
}

