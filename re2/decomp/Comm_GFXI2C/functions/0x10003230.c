// rea decompile_all
// name: FUN_10003230
// address: 0x10003230
// body: available
// range: 0x10003230-0x10003301 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __fastcall FUN_10003230(void *param_1,ushort param_2,undefined1 param_3,undefined1 param_4)

{
  undefined1 in_AL;
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  
  if ((param_2 == 0) || (param_1 == (void *)0x0)) {
    return 0x2202;
  }
  if (0x80 < param_2) {
    return 0x2203;
  }
  if (DAT_100655e0 == 2) {
    iVar2 = FUN_10001a30(in_AL,param_1);
    return (-(uint)(iVar2 != 0) & 0xffffddfb) + 0x2205;
  }
  if (DAT_100655e0 == 1) {
    iVar2 = FUN_10005750((void *)(uint)CONCAT11(param_3,param_4),param_1,(uint)param_2);
    return (-(uint)(iVar2 != 0) & 0xffffddfb) + 0x2205;
  }
  if (DAT_100655e0 == 3) {
    bVar1 = FUN_10006ae0(param_1,param_2);
    return (-(uint)(CONCAT31(extraout_var,bVar1) != 0) & 0xffffddfb) + 0x2205;
  }
  return 0x2201;
}

