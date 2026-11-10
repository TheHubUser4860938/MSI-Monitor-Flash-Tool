// rea decompile_all
// name: Catch@100e48b4
// address: 0x100e48b4
// body: available
// range: 0x100e48b4-0x100e4935 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * Catch_100e48b4(void)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int unaff_EBP;
  int iVar5;
  
  CException::Delete(*(CException **)(unaff_EBP + -0x40));
  iVar5 = *(int *)(unaff_EBP + -0x1c);
  iVar4 = *(int *)(iVar5 + 0x5c);
  *(int *)(unaff_EBP + -0x14) = iVar4;
  if (iVar4 != 0) {
    do {
      puVar3 = (undefined4 *)FUN_100c321b(unaff_EBP + -0x14);
      piVar1 = (int *)*puVar3;
      *(int **)(unaff_EBP + -0x18) = piVar1;
      iVar4 = FUN_10051e53(&PTR_s_CPaneDivider_101f8380);
      iVar5 = *piVar1;
      if (iVar4 == 0) {
        pcVar2 = *(code **)(iVar5 + 0x1b4);
        guard_check_icall(0);
        (*pcVar2)();
      }
      else {
        pcVar2 = *(code **)(iVar5 + 0x60);
        guard_check_icall();
        (*pcVar2)();
      }
    } while (*(int *)(unaff_EBP + -0x14) != 0);
    iVar5 = *(int *)(unaff_EBP + -0x1c);
  }
  CObList::RemoveAll((CObList *)(iVar5 + 0x58));
  *(undefined4 *)(iVar5 + 0x15c) = 1;
  return &DAT_100e4936;
}

