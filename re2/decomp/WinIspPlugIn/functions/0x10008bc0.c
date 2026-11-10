// rea decompile_all
// name: IspEeprom
// address: 0x10008bc0
// body: available
// range: 0x10008bc0-0x10008c43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int IspEeprom(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_438 [266];
  undefined4 local_10;
  
                    /* 0x8bc0  11  IspEeprom */
  FUN_100080f0();
  iVar2 = FUN_1001f750();
  if (iVar2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    puVar3 = &DAT_1024e028;
    puVar4 = local_438;
    for (iVar2 = 0x10d; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    local_10 = uVar1;
    puVar3 = local_438;
    puVar4 = &DAT_1024e028;
    for (iVar2 = 0x10d; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar2 = FUN_1003a830();
    if (iVar2 != 0) {
      FUN_1001fa90();
      FUN_1003fab0(iVar2);
      return iVar2;
    }
    iVar2 = FUN_1001fa90();
    FUN_1003fab0(iVar2);
  }
  return iVar2;
}

