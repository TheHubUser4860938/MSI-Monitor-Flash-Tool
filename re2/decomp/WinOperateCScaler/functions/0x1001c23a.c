// rea decompile_all
// name: FUN_1001c23a
// address: 0x1001c23a
// body: available
// range: 0x1001c23a-0x1001c33b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001c23a(void)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int *unaff_EBX;
  int unaff_EBP;
  uint unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iVar1 = *(int *)(*unaff_EBX + 4);
  if (unaff_EDI != 0) {
    uVar4 = *(uint *)((int)unaff_EBX + iVar1 + 0xc) | unaff_EDI;
    uVar5 = uVar4 | 4;
    if (*(int *)((int)unaff_EBX + iVar1 + 0x38) != 0) {
      uVar5 = uVar4;
    }
    *(uint *)((int)unaff_EBX + iVar1 + 0xc) = uVar5 & 0x17;
    uVar5 = *(uint *)((int)unaff_EBX + iVar1 + 0x10) & uVar5 & 0x17;
    if (uVar5 != 0) {
      if ((uVar5 & 4) != 0) {
        uVar6 = FUN_100057f0();
        FUN_10006bd0(1,uVar6,"ios_base::badbit set");
        *(undefined ***)(unaff_EBP + -0x44) = std::ios_base::failure::vftable;
        uVar5 = __CxxThrowException_8(unaff_EBP + -0x44,&DAT_101ed1a0);
      }
      if ((uVar5 & 2) != 0) {
        uVar6 = FUN_100057f0();
        FUN_10006bd0(1,uVar6,"ios_base::failbit set");
        *(undefined ***)(unaff_EBP + -0x58) = std::ios_base::failure::vftable;
        __CxxThrowException_8(unaff_EBP + -0x58,&DAT_101ed1a0);
      }
      uVar6 = FUN_100057f0();
      FUN_10006bd0(1,uVar6,"ios_base::eofbit set");
      *(undefined ***)(unaff_EBP + -0x6c) = std::ios_base::failure::vftable;
      __CxxThrowException_8(unaff_EBP + -0x6c,&DAT_101ed1a0);
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 4;
  cVar3 = thunk_FUN_1016b1c8();
  piVar2 = *(int **)(unaff_EBP + -0x2c);
  if (cVar3 == '\0') {
    FUN_1000f1e0();
  }
  iVar1 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piVar2 = *(int **)(*(int *)(iVar1 + 4) + 0x38 + (int)piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

