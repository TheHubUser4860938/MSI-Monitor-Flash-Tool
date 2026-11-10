// rea decompile_all
// name: FUN_1003c485
// address: 0x1003c485
// body: available
// range: 0x1003c485-0x1003c4f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c485(void)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int *unaff_EBX;
  int unaff_EBP;
  uint unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (unaff_EDI != 0) {
    uVar4 = *(uint *)((int)unaff_EBX + *(int *)(*unaff_EBX + 4) + 0xc) | unaff_EDI;
    uVar3 = uVar4 | 4;
    if (*(int *)((int)unaff_EBX + *(int *)(*unaff_EBX + 4) + 0x38) != 0) {
      uVar3 = uVar4;
    }
    FUN_100071e0(uVar3,0);
  }
  *(undefined4 *)(unaff_EBP + -4) = 4;
  cVar2 = thunk_FUN_101970f2();
  piVar1 = *(int **)(unaff_EBP + -0x30);
  if (cVar2 == '\0') {
    FUN_1000c4a0();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piVar1 = *(int **)(*(int *)(*piVar1 + 4) + 0x38 + (int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

