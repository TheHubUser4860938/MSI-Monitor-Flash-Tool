// rea decompile_all
// name: FUN_10007520
// address: 0x10007520
// body: available
// range: 0x10007520-0x100075ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007520(void)

{
  _Locinfo *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_101957f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::_Locinfo::_Locinfo_dtor(in_ECX);
  if (*(void **)(in_ECX + 0x2c) != (void *)0x0) {
    FID_conflict__free(*(void **)(in_ECX + 0x2c));
  }
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  if (*(void **)(in_ECX + 0x24) != (void *)0x0) {
    FID_conflict__free(*(void **)(in_ECX + 0x24));
  }
  *(undefined4 *)(in_ECX + 0x24) = 0;
  if (*(void **)(in_ECX + 0x1c) != (void *)0x0) {
    FID_conflict__free(*(void **)(in_ECX + 0x1c));
  }
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  if (*(void **)(in_ECX + 0x14) != (void *)0x0) {
    FID_conflict__free(*(void **)(in_ECX + 0x14));
  }
  *(undefined4 *)(in_ECX + 0x14) = 0;
  if (*(void **)(in_ECX + 0xc) != (void *)0x0) {
    FID_conflict__free(*(void **)(in_ECX + 0xc));
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if (*(void **)(in_ECX + 4) != (void *)0x0) {
    FID_conflict__free(*(void **)(in_ECX + 4));
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  FUN_10155121();
  ExceptionList = local_10;
  return;
}

