// rea decompile_all
// name: FUN_100068e0
// address: 0x100068e0
// body: available
// range: 0x100068e0-0x100069d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100068e0(undefined1 param_1,undefined1 param_2,ushort param_3)

{
  void *unaff_ESI;
  undefined4 *unaff_EDI;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 *local_11c;
  int local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 local_104;
  undefined1 local_103;
  undefined1 local_102 [254];
  uint local_4;
  
  local_4 = DAT_10064168 ^ (uint)&local_130;
  local_12c = 0;
  local_128 = 0;
  local_124 = 0;
  local_120 = 0;
  local_11c = (undefined1 *)0x0;
  local_118 = 0;
  local_114 = 0;
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  local_104 = param_2;
  local_103 = 0;
  _memset(local_102,0,0xfe);
  if (unaff_ESI != (void *)0x0) {
    _memcpy(&local_103,unaff_ESI,(uint)param_3);
  }
  local_12c = unaff_EDI[1];
  local_11c = &local_104;
  local_118 = param_3 + 1;
  local_130 = 0x3002c;
  local_128 = CONCAT31(CONCAT21(local_128._2_2_,param_1),1);
  local_124 = 0;
  local_120 = 0;
  local_114 = 0xffff;
  local_110 = 0;
  FUN_100108c0(*unaff_EDI,&local_130);
  __security_check_cookie(local_4 ^ (uint)&local_130);
  return;
}

