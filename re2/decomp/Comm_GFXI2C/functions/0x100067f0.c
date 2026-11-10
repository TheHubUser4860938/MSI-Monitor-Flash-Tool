// rea decompile_all
// name: FUN_100067f0
// address: 0x100067f0
// body: available
// range: 0x100067f0-0x100068d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100067f0(undefined4 param_1,undefined4 param_2,ushort param_3)

{
  undefined1 in_AL;
  int iVar1;
  undefined4 *unaff_ESI;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = 0;
  local_28 = unaff_ESI[1];
  local_18 = &param_1;
  local_2c = 0x3002c;
  local_24 = (uint)CONCAT11(in_AL,1);
  local_20 = 0;
  local_1c = 0;
  local_14 = 1;
  local_10 = 0xffff;
  local_c = 0;
  iVar1 = FUN_100108c0(*unaff_ESI,&local_2c);
  if (iVar1 != 0) {
    return false;
  }
  local_28 = unaff_ESI[1];
  local_14 = (uint)param_3;
  local_18 = (undefined4 *)param_2;
  local_2c = 0x3002c;
  local_24 = CONCAT22(local_24._2_2_,CONCAT11(in_AL,1)) | 0x100;
  local_20 = 0;
  local_1c = 0;
  local_10 = 0xffff;
  local_c = 0;
  iVar1 = FUN_10010760(*unaff_ESI,&local_2c);
  return (bool)('\x01' - (iVar1 != 0));
}

