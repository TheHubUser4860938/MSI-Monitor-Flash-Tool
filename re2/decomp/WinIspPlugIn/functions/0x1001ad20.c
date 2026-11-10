// rea decompile_all
// name: FUN_1001ad20
// address: 0x1001ad20
// body: available
// range: 0x1001ad20-0x1001aef2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1001ad20(void)

{
  undefined4 in_ECX;
  undefined4 uVar1;
  
  uVar1 = 0;
  if (_DAT_1024e4b8 != 0) {
    uVar1 = FUN_1001ac00();
    return uVar1;
  }
  if (DAT_1024a640 == 0) {
    switch(in_ECX) {
    case 4:
    case 0x39:
    case 0x45:
      break;
    default:
      return 0xd0d;
    case 0x29:
      uVar1 = FUN_1001afc0();
      return uVar1;
    case 0x2a:
      uVar1 = FUN_1001b490();
      return uVar1;
    case 0x2c:
      uVar1 = FUN_1001b4e0();
      return uVar1;
    case 0x2d:
      uVar1 = FUN_1001b530();
      return uVar1;
    case 0x2f:
      uVar1 = FUN_1001b570();
      return uVar1;
    case 0x30:
      uVar1 = FUN_1001b000();
      return uVar1;
    case 0x31:
      uVar1 = FUN_1001b5b0();
      return uVar1;
    case 0x32:
      uVar1 = FUN_1001b5f0();
      return uVar1;
    case 0x33:
      uVar1 = FUN_1001b6b0();
      return uVar1;
    case 0x34:
      uVar1 = FUN_1001b040();
      return uVar1;
    case 0x36:
    case 0x42:
      uVar1 = FUN_1001b080();
      return uVar1;
    case 0x37:
      uVar1 = FUN_1001b6f0();
      return uVar1;
    case 0x38:
      uVar1 = FUN_1001b150();
      return uVar1;
    case 0x3a:
      uVar1 = FUN_1001b1e0();
      return uVar1;
    case 0x3b:
      uVar1 = FUN_1001b110();
      return uVar1;
    case 0x3c:
      uVar1 = FUN_1001b220();
      return uVar1;
    case 0x3e:
      uVar1 = FUN_1001b3d0();
      return uVar1;
    case 0x3f:
      uVar1 = FUN_1001b450();
      return uVar1;
    case 0x41:
      uVar1 = FUN_1001b2a0();
      return uVar1;
    case 0x44:
      uVar1 = FUN_1001b3d0();
      return uVar1;
    case 0x46:
      uVar1 = FUN_1001b110();
      return uVar1;
    case 0x47:
      uVar1 = FUN_1001b2e0();
      return uVar1;
    case 0x48:
      uVar1 = FUN_1001b350();
      return uVar1;
    case 0x49:
      uVar1 = FUN_1001b630();
      return uVar1;
    case 0x4a:
      uVar1 = FUN_1001b410();
      return uVar1;
    case 0x4d:
      uVar1 = FUN_1001b730();
      return uVar1;
    case 0x4e:
      uVar1 = FUN_1001b350();
      return uVar1;
    case 0x4f:
      uVar1 = FUN_1001b770();
      return uVar1;
    case 0x50:
      uVar1 = FUN_1001b7f0();
    }
  }
  else if (DAT_1024a640 == 1) {
    uVar1 = FUN_1001b260();
    return uVar1;
  }
  return uVar1;
}

