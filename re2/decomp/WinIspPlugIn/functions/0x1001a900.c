// rea decompile_all
// name: FUN_1001a900
// address: 0x1001a900
// body: available
// range: 0x1001a900-0x1001aa29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001a900(void)

{
  int iVar1;
  undefined4 in_ECX;
  
  switch(in_ECX) {
  case 0x2a:
  case 0x2d:
    iVar1 = FUN_1001a6f0();
    if ((((iVar1 == 0) && (iVar1 = FUN_1001a7c0(), iVar1 == 0)) &&
        (iVar1 = FUN_1001a810(), iVar1 == 0)) && (iVar1 = FUN_1001a860(), iVar1 == 0)) {
      FUN_1001a8b0();
      return;
    }
    break;
  default:
    FUN_1001a6f0();
    break;
  case 0x2f:
  case 0x31:
    iVar1 = FUN_1001a6f0();
    if ((iVar1 == 0) && (iVar1 = FUN_1001a7c0(), iVar1 == 0)) {
      FUN_1001a810();
      return;
    }
    break;
  case 0x30:
    iVar1 = FUN_1001a6f0();
    if (((iVar1 == 0) && (iVar1 = FUN_1001a7c0(), iVar1 == 0)) &&
       (iVar1 = FUN_1001a810(), iVar1 == 0)) {
      FUN_1001a860();
      return;
    }
    break;
  case 0x33:
    iVar1 = FUN_1001a6f0();
    if (iVar1 == 0) {
      FUN_1001a7c0();
      return;
    }
    break;
  case 0x34:
    iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x1e,2);
    if ((((iVar1 == 0) && (iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x1f,0x50), iVar1 == 0)) &&
        (iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x20,0x18), iVar1 == 0)) &&
       ((iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x1b,0x20), iVar1 == 0 &&
        (iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x1c,0xf0), iVar1 == 0)))) {
      (**(code **)(*DAT_10249d10 + 0xf0))(0x1d,0x18);
      return;
    }
  }
  return;
}

