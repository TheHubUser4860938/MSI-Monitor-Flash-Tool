// rea decompile_all
// name: FUN_1016a665
// address: 0x1016a665
// body: available
// range: 0x1016a665-0x1016a6e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1016a665(void)

{
  int iVar1;
  int unaff_EBX;
  int unaff_EBP;
  int *unaff_EDI;
  
  *(undefined4 *)(unaff_EBX + -4) = *(undefined4 *)(unaff_EBP + -0x2c);
  FUN_1016ba53(*(undefined4 *)(unaff_EBP + -0x30));
  iVar1 = ___vcrt_getptd();
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(unaff_EBP + -0x34);
  iVar1 = ___vcrt_getptd();
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(unaff_EBP + -0x38);
  if (((((*unaff_EDI == -0x1f928c9d) && (unaff_EDI[4] == 3)) &&
       ((unaff_EDI[5] == 0x19930520 ||
        ((unaff_EDI[5] == 0x19930521 || (unaff_EDI[5] == 0x19930522)))))) &&
      (*(int *)(unaff_EBP + -0x3c) == 0)) &&
     ((*(int *)(unaff_EBP + -0x1c) != 0 &&
      (iVar1 = __IsExceptionObjectToBeDestroyed(unaff_EDI[6]), iVar1 != 0)))) {
    ___DestructExceptionObject();
  }
  return;
}

