// rea decompile_all
// name: Catch_All@10015d6c
// address: 0x10015d6c
// body: available
// range: 0x10015d6c-0x10015d96 inclusive
// range: 0x10015da3-0x10015e70 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10015e70 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * Catch_All_10015d6c(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int extraout_EDX;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  iVar2 = *(int *)(*piVar1 + 4);
  uVar4 = *(uint *)(iVar2 + 0xc + (int)piVar1) & 0x17 | 4;
  *(uint *)((int)piVar1 + iVar2 + 0xc) = uVar4;
  if ((*(uint *)((int)piVar1 + iVar2 + 0x10) & uVar4) == 0) {
    return &DAT_10015d97;
  }
  __CxxThrowException_8(0,0);
  uVar4 = *(uint *)(extraout_EDX + 0xc) | 6;
  if (*(int *)(extraout_EDX + 0x38) != 0) {
    uVar4 = *(uint *)(extraout_EDX + 0xc) | 2;
  }
  *(uint *)(extraout_EDX + 0xc) = uVar4 & 0x17;
  uVar4 = *(uint *)(extraout_EDX + 0x10) & uVar4 & 0x17;
  if (uVar4 == 0) {
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return (undefined *)0x0;
  }
  if ((uVar4 & 4) != 0) {
    uVar5 = FUN_100057f0();
    FUN_10006bd0(1,uVar5,"ios_base::badbit set");
    *(undefined ***)(unaff_EBP + -0x6c) = std::ios_base::failure::vftable;
    uVar4 = __CxxThrowException_8(unaff_EBP + -0x6c,&DAT_101ed1a0);
  }
  if ((uVar4 & 2) != 0) {
    uVar5 = FUN_100057f0();
    FUN_10006bd0(1,uVar5,"ios_base::failbit set");
    *(undefined ***)(unaff_EBP + -0x80) = std::ios_base::failure::vftable;
    __CxxThrowException_8(unaff_EBP + -0x80,&DAT_101ed1a0);
  }
  uVar5 = FUN_100057f0();
  FUN_10006bd0(1,uVar5,"ios_base::eofbit set");
  *(undefined ***)(unaff_EBP + -0x94) = std::ios_base::failure::vftable;
  __CxxThrowException_8(unaff_EBP + -0x94,&DAT_101ed1a0);
  pcVar3 = (code *)swi(3);
  puVar6 = (undefined *)(*pcVar3)();
  return puVar6;
}

