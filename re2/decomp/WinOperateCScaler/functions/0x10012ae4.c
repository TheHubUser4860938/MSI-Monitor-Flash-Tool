// rea decompile_all
// name: Catch_All@10012ae4
// address: 0x10012ae4
// body: available
// range: 0x10012ae4-0x10012b12 inclusive
// range: 0x10012c1b-0x10012c24 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10012c24 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * Catch_All_10012ae4(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined *puVar5;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x28);
  iVar2 = *(int *)(*piVar1 + 4);
  uVar4 = *(uint *)(iVar2 + 0xc + (int)piVar1) & 0x17 | 4;
  *(uint *)((int)piVar1 + iVar2 + 0xc) = uVar4;
  if ((*(uint *)((int)piVar1 + iVar2 + 0x10) & uVar4) == 0) {
    return &DAT_10012b13;
  }
  __CxxThrowException_8(0,0);
  pcVar3 = (code *)swi(3);
  puVar5 = (undefined *)(*pcVar3)();
  return puVar5;
}

