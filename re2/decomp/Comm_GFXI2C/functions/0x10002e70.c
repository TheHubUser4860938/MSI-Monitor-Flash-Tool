// rea decompile_all
// name: FUN_10002e70
// address: 0x10002e70
// body: available
// range: 0x10002e70-0x10002f27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_10002e70(ushort param_1,void *param_2,undefined4 param_3)

{
  byte in_AL;
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  
  if ((param_1 == 0) || (param_2 == (void *)0x0)) {
    return 0x2202;
  }
  if (0x80 < param_1) {
    return 0x2203;
  }
  if (DAT_100655e0 == 2) {
    iVar2 = FUN_10001870(in_AL,(byte)param_3,param_2);
    if (iVar2 == 0) {
      return 0x2205;
    }
  }
  else if (DAT_100655e0 == 1) {
    iVar2 = FUN_100053b0((uint)in_AL,(byte)param_3,(size_t)param_2,(uint)param_1);
    if (iVar2 == 0) {
      return 0x2205;
    }
  }
  else {
    if (DAT_100655e0 != 3) {
      return 0x2201;
    }
    bVar1 = FUN_100067f0(param_3,param_2,param_1);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      return 0x2205;
    }
  }
  return 0;
}

