// rea decompile_all
// name: Catch_All@10016ff2
// address: 0x10016ff2
// body: available
// range: 0x10016ff2-0x1001701c inclusive
// range: 0x1001702f-0x100170bf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * Catch_All_10016ff2(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint extraout_ECX;
  int *unaff_EBX;
  int unaff_EBP;
  undefined *unaff_ESI;
  
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  iVar2 = *(int *)(*piVar1 + 4);
  uVar3 = *(uint *)(iVar2 + 0xc + (int)piVar1) & 0x17 | 4;
  *(uint *)((int)piVar1 + iVar2 + 0xc) = uVar3;
  if ((*(uint *)((int)piVar1 + iVar2 + 0x10) & uVar3) == 0) {
    return &DAT_1001701d;
  }
  __CxxThrowException_8(0,0);
  if ((extraout_ECX & 2) != 0) {
    uVar4 = FUN_100057f0();
    FUN_10006bd0(1,uVar4,"ios_base::failbit set");
    *(undefined ***)(unaff_EBP + -0x50) = std::ios_base::failure::vftable;
    __CxxThrowException_8(unaff_EBP + -0x50,&DAT_101ed1a0);
  }
  uVar4 = FUN_100057f0();
  FUN_10006bd0(1,uVar4,"ios_base::eofbit set");
  *(undefined ***)(unaff_EBP + -100) = std::ios_base::failure::vftable;
  __CxxThrowException_8(unaff_EBP + -100,&DAT_101ed1a0);
  iVar2 = *unaff_EBX;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  piVar1 = *(int **)(*(int *)(iVar2 + 4) + 0x38 + (int)unaff_EBX);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return unaff_ESI;
}

