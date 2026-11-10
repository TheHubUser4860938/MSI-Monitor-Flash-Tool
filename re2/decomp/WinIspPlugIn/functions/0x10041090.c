// rea decompile_all
// name: FUN_10041090
// address: 0x10041090
// body: available
// range: 0x10041090-0x100410ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10041090(void)

{
  byte *pbVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  uint in_EDX;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  uVar2 = 0;
  if (1 < in_EDX) {
    do {
      iVar4 = iVar4 + (uint)*(byte *)(in_ECX + uVar2);
      pbVar1 = (byte *)(in_ECX + 1 + uVar2);
      uVar2 = uVar2 + 2;
      iVar5 = iVar5 + (uint)*pbVar1;
    } while (uVar2 < in_EDX - 1);
  }
  uVar3 = 0;
  if (uVar2 < in_EDX) {
    uVar3 = (uint)*(byte *)(uVar2 + in_ECX);
  }
  return iVar5 + iVar4 + uVar3;
}

