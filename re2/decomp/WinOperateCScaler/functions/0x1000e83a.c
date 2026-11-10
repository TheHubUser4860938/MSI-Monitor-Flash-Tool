// rea decompile_all
// name: FUN_1000e83a
// address: 0x1000e83a
// body: available
// range: 0x1000e83a-0x1000e8c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000e83a(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_EDX;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  undefined4 unaff_EDI;
  
  iVar1 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x18) = in_EDX;
  if ((iVar1 != 0) && (iVar1 != 0)) {
    FUN_1016bba0();
  }
  if (7 < (uint)unaff_ESI[5]) {
    FUN_1000fd20(*unaff_ESI,unaff_ESI[5] + 1);
  }
  unaff_ESI[5] = 7;
  unaff_ESI[4] = 0;
  puVar2 = unaff_ESI;
  if (7 < (uint)unaff_ESI[5]) {
    puVar2 = (undefined4 *)*unaff_ESI;
  }
  *(undefined2 *)puVar2 = 0;
  puVar2 = *(undefined4 **)(unaff_EBP + -0x18);
  *unaff_ESI = puVar2;
  unaff_ESI[5] = unaff_EDI;
  unaff_ESI[4] = iVar1;
  if (7 < (uint)unaff_ESI[5]) {
    unaff_ESI = puVar2;
  }
  *(undefined2 *)((int)unaff_ESI + iVar1 * 2) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

