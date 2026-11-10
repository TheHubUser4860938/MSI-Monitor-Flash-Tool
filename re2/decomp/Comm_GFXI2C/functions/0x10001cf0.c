// rea decompile_all
// name: FUN_10001cf0
// address: 0x10001cf0
// body: available
// range: 0x10001cf0-0x10001cfc inclusive
// range: 0x10001d00-0x10001d5d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10001cf0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int unaff_EDI;
  
  for (puVar3 = *(undefined4 **)(unaff_EDI + 4); puVar3 != (undefined4 *)0x0;
      puVar3 = (undefined4 *)*puVar3) {
    puVar4 = (undefined4 *)(puVar3[5] + -0x10);
    piVar1 = (int *)(puVar3[5] + -4);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 + -1 < 1) {
      (**(code **)(*(int *)*puVar4 + 4))(puVar4);
    }
    puVar4 = (undefined4 *)(puVar3[4] + -0x10);
    piVar1 = (int *)(puVar3[4] + -4);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 + -1 < 1) {
      (**(code **)(*(int *)*puVar4 + 4))(puVar4);
    }
  }
  *(undefined4 *)(unaff_EDI + 0xc) = 0;
  *(undefined4 *)(unaff_EDI + 0x10) = 0;
  *(undefined4 *)(unaff_EDI + 8) = 0;
  *(undefined4 *)(unaff_EDI + 4) = 0;
  CPlex::FreeDataChain(*(CPlex **)(unaff_EDI + 0x14));
  *(undefined4 *)(unaff_EDI + 0x14) = 0;
  return;
}

