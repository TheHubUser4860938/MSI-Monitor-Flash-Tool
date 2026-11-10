// rea decompile_all
// name: FUN_100030a0
// address: 0x100030a0
// body: available
// range: 0x100030a0-0x10003168 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __fastcall FUN_100030a0(void *param_1,byte param_2,undefined1 param_3,undefined1 param_4)

{
  ushort in_AX;
  int iVar1;
  
  if ((param_1 == (void *)0x0) && (in_AX != 0)) {
    return 0x2202;
  }
  if (0x80 < in_AX) {
    return 0x2203;
  }
  if (DAT_100655e0 == 2) {
    iVar1 = FUN_10001980(param_2,param_1);
    return (-(uint)(iVar1 != 0) & 0xffffddfc) + 0x2204;
  }
  if (DAT_100655e0 == 1) {
    iVar1 = FUN_10005590((uint)param_2,(uint)CONCAT11(param_3,param_4),param_1);
    return (-(uint)(iVar1 != 0) & 0xffffddfc) + 0x2204;
  }
  if (DAT_100655e0 == 3) {
    iVar1 = FUN_100069e0(param_2,in_AX);
    return (-(uint)(iVar1 != 0) & 0xffffddfc) + 0x2204;
  }
  return 0x2201;
}

