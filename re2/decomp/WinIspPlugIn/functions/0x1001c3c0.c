// rea decompile_all
// name: FUN_1001c3c0
// address: 0x1001c3c0
// body: available
// range: 0x1001c3c0-0x1001c3e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1001c3c0(void)

{
  undefined4 in_ECX;
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(in_ECX) {
  case 1:
  case 2:
  case 4:
  case 0x2b:
  case 0x30:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x38:
  case 0x39:
  case 0x3b:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x4a:
  case 0x4d:
  case 0x4f:
    uVar1 = 2;
    break;
  case 3:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x37:
  case 0x3a:
  case 0x3c:
  case 0x41:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4e:
  case 0x50:
    return 1;
  }
  return uVar1;
}

