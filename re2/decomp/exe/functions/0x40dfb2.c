// rea decompile_all
// name: FUN_0040dfb2
// address: 0x40dfb2
// body: available
// range: 0x40dfb2-0x40e021 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040dfb2(void)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  uint in_ECX;
  uint uVar4;
  int unaff_EBP;
  int *unaff_ESI;
  
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (in_ECX != 0) {
    uVar4 = *(uint *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0xc) | in_ECX;
    uVar3 = uVar4 | 4;
    if (*(int *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0x38) != 0) {
      uVar3 = uVar4;
    }
    FUN_00402a10(uVar3,0);
  }
  *(undefined4 *)(unaff_EBP + -4) = 4;
  cVar2 = thunk_FUN_00572c70();
  if (cVar2 == '\0') {
    FUN_00405890();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piVar1 = *(int **)(*(int *)(*unaff_ESI + 4) + 0x38 + (int)unaff_ESI);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

