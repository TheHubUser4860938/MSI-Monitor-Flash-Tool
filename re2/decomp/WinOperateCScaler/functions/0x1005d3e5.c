// rea decompile_all
// name: FUN_1005d3e5
// address: 0x1005d3e5
// body: available
// range: 0x1005d3e5-0x1005d439 inclusive
// range: 0x1005d56d-0x1005d574 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005d3e5(void)

{
  int *piVar1;
  void *in_ECX;
  int iVar2;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  do {
    do {
      FUN_1016bba0(in_ECX,unaff_ESI);
      FUN_1016bba0(unaff_ESI,unaff_EDI);
      FUN_1016bba0(unaff_EDI,*(undefined4 *)(unaff_EBP + -0x68));
      in_ECX = *(void **)(unaff_EBP + -0x68);
      unaff_ESI = unaff_ESI + unaff_EBX;
      unaff_EDI = unaff_EDI - unaff_EBX;
      piVar1 = (int *)(unaff_EBP + -0x70);
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
    unaff_ESI = *(int *)(unaff_EBP + -0x78);
    unaff_EDI = *(int *)(unaff_EBP + -0x80);
    iVar2 = *(int *)(unaff_EBP + -0x9c);
    do {
      unaff_ESI = unaff_ESI + *(int *)(unaff_EBP + -0x7c);
      unaff_EDI = unaff_EDI + *(int *)(unaff_EBP + -0x7c);
      *(int *)(unaff_EBP + -0x78) = unaff_ESI;
      *(int *)(unaff_EBP + -0x80) = unaff_EDI;
      if (*(int *)(unaff_EBP + -0x6c) <= iVar2) {
        FID_conflict__free(in_ECX);
        FUN_10154478();
        return;
      }
      iVar2 = iVar2 + 1;
      *(int *)(unaff_EBP + -0x88) = unaff_ESI;
      *(int *)(unaff_EBP + -0x9c) = iVar2;
      *(int *)(unaff_EBP + -0x84) = unaff_EDI;
    } while (*(int *)(unaff_EBP + -0x74) < 1);
    *(undefined4 *)(unaff_EBP + -0x70) = *(undefined4 *)(unaff_EBP + -0x74);
  } while( true );
}

