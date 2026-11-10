// rea decompile_all
// name: FUN_1000c017
// address: 0x1000c017
// body: available
// range: 0x1000c017-0x1000c093 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000c017(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *unaff_EBX;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  undefined4 unaff_EDI;
  
  if ((*(int *)(unaff_EBP + 0xc) != 0) && (*(int *)(unaff_EBP + 0xc) != 0)) {
    FUN_10197c50();
  }
  if (0xf < (uint)unaff_ESI[5]) {
    FUN_1000b630(*unaff_ESI,unaff_ESI[5] + 1);
  }
  unaff_ESI[5] = 0xf;
  unaff_ESI[4] = 0;
  puVar2 = unaff_ESI;
  if (0xf < (uint)unaff_ESI[5]) {
    puVar2 = (undefined4 *)*unaff_ESI;
  }
  *(undefined1 *)puVar2 = 0;
  iVar1 = *(int *)(unaff_EBP + 0xc);
  *unaff_ESI = unaff_EBX;
  unaff_ESI[5] = unaff_EDI;
  unaff_ESI[4] = iVar1;
  if (0xf < (uint)unaff_ESI[5]) {
    unaff_ESI = unaff_EBX;
  }
  *(undefined1 *)((int)unaff_ESI + iVar1) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

