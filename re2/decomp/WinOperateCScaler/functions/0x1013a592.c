// rea decompile_all
// name: FUN_1013a592
// address: 0x1013a592
// body: available
// range: 0x1013a592-0x1013a5da inclusive
// range: 0x1013a61f-0x1013a698 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_1013a592(void)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int unaff_EBP;
  short *unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(*(int *)(unaff_EBP + -0x28) + 0x14) = *(undefined4 *)(unaff_EBP + -0x2c);
  if ((unaff_EDI == 0) && (*(uint *)(unaff_EBP + -0x40) < *(uint *)(unaff_EBP + -0x34))) {
    if ((*unaff_ESI == 9) && (piVar1 = *(int **)(unaff_ESI + 4), piVar1 != (int *)0x0)) {
      *(uint *)(unaff_EBP + -0x40) = *(uint *)(unaff_EBP + -0x34);
      if (unaff_ESI != (short *)(unaff_EBP + -0x68)) {
        FUN_10026450(unaff_ESI);
      }
      iVar4 = *piVar1;
      guard_check_icall(piVar1);
      iVar4 = (**(code **)(iVar4 + 0x18))();
      pcVar2 = *(code **)(*piVar1 + 8);
      guard_check_icall(piVar1);
      (*pcVar2)();
    }
    else {
      iVar4 = -0x7ffdfffb;
    }
  }
  else {
    iVar4 = *(int *)(unaff_EBP + -0x18);
  }
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    Ordinal_9(*(undefined4 *)(unaff_EBP + -0x48));
    puVar3 = *(undefined4 **)(unaff_EBP + -0x48);
    *puVar3 = *(undefined4 *)(unaff_EBP + -0x78);
    puVar3[1] = *(undefined4 *)(unaff_EBP + -0x74);
    puVar3[2] = *(undefined4 *)(unaff_EBP + -0x70);
    puVar3[3] = *(undefined4 *)(unaff_EBP + -0x6c);
  }
  if (((iVar4 != 0) && (*(int **)(unaff_EBP + 0x28) != (int *)0x0)) &&
     (*(int *)(unaff_EBP + -0x20) != -1)) {
    **(int **)(unaff_EBP + 0x28) = *(int *)(unaff_EBP + -0x20);
  }
  return iVar4;
}

