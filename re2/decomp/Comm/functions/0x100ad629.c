// rea decompile_all
// name: Catch@100ad629
// address: 0x100ad629
// body: available
// range: 0x100ad629-0x100ad6aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * Catch_100ad629(void)

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
      puVar3 = (undefined4 *)FUN_1002466e(unaff_EBP + -0x14);
      piVar1 = (int *)*puVar3;
      *(int **)(unaff_EBP + -0x18) = piVar1;
      iVar4 = FUN_10019d4f(&PTR_s_CPaneDivider_101a1290);
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
  return &DAT_100ad6ab;
}

